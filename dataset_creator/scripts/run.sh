#!/bin/bash

# Base directories
GHIDRA_HEADLESS=./dataset_creator/workspace/ghidra/support/analyzeHeadless
PROJECT_DIR=./dataset_creator/workspace/projects
SCRIPT=./dataset_creator/scripts/ExportCode.py
OUTPUT_BASE=./dataset_creator/outputs/results

# Folders containing binaries
BINARY_DIRS=(./binary_creator/outputs/stripped ./binary_creator/outputs/non-stripped)

# Color codes for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Check if Ghidra exists
if [ ! -f "$GHIDRA_HEADLESS" ]; then
    echo -e "${RED}[ERROR] Ghidra headless not found at: $GHIDRA_HEADLESS${NC}"
    exit 1
fi

# Check if script exists
if [ ! -f "$SCRIPT" ]; then
    echo -e "${RED}[ERROR] ExportCode.py not found at: $SCRIPT${NC}"
    exit 1
fi

# Create output base directory
mkdir -p "$OUTPUT_BASE"

# Clean up any existing project directories
echo "[*] Cleaning up old project directories..."
rm -rf "$PROJECT_DIR"/*

# Statistics
TOTAL_FILES=0
SUCCESS_COUNT=0
FAILED_COUNT=0

echo "=================================================="
echo "Starting Ghidra Batch Processing"
echo "=================================================="
echo ""

# Loop through each directory
for DIR in "${BINARY_DIRS[@]}"; do
    if [ ! -d "$DIR" ]; then
        echo -e "${YELLOW}[WARNING] Directory not found: $DIR${NC}"
        continue
    fi
    
    echo -e "${GREEN}[*] Processing directory: $DIR${NC}"
    
    for FILE in "$DIR"/*; do
        if [ -f "$FILE" ]; then
            TOTAL_FILES=$((TOTAL_FILES + 1))
            
            # Get base name without path
            FILENAME=$(basename "$FILE")
            
            # Generate unique project name to avoid conflicts
            PROJECT_NAME="temp_${FILENAME}_$$"
            
            # Prepare output folder for this file
            OUT_DIR="$OUTPUT_BASE/${FILENAME%.*}"
            mkdir -p "$OUT_DIR"
            
            echo ""
            echo "=================================================="
            echo -e "${GREEN}[*] Processing: $FILENAME${NC}"
            echo "    Input:  $FILE"
            echo "    Output: $OUT_DIR"
            echo "    Project: $PROJECT_NAME"
            echo "=================================================="
            
            # Run Ghidra headless with unique project name
            "$GHIDRA_HEADLESS" "$PROJECT_DIR" "$PROJECT_NAME" \
                -import "$FILE" \
                -postScript "$SCRIPT" "$OUT_DIR" \
                -deleteProject 2>&1 | tee /tmp/ghidra_${FILENAME}.log
            
            GHIDRA_EXIT=${PIPESTATUS[0]}
            
            # Additional cleanup (in case deleteProject didn't work)
            if [ -d "$PROJECT_DIR/$PROJECT_NAME" ]; then
                rm -rf "$PROJECT_DIR/$PROJECT_NAME"
            fi
            if [ -d "$PROJECT_DIR/${PROJECT_NAME}.rep" ]; then
                rm -rf "$PROJECT_DIR/${PROJECT_NAME}.rep"
            fi
            
            # Check if Ghidra succeeded
            if [ $GHIDRA_EXIT -eq 0 ]; then
                # Check if files were actually created
                FILE_COUNT=$(find "$OUT_DIR" -type f | wc -l)
                if [ "$FILE_COUNT" -gt 0 ]; then
                    echo -e "${GREEN}[SUCCESS] Exported $FILE_COUNT files for $FILENAME${NC}"
                    SUCCESS_COUNT=$((SUCCESS_COUNT + 1))
                else
                    echo -e "${RED}[FAILED] No files created for $FILENAME${NC}"
                    echo "[*] Check log: /tmp/ghidra_${FILENAME}.log"
                    FAILED_COUNT=$((FAILED_COUNT + 1))
                fi
            else
                echo -e "${RED}[FAILED] Ghidra analysis failed for $FILENAME (exit code: $GHIDRA_EXIT)${NC}"
                echo "[*] Check log: /tmp/ghidra_${FILENAME}.log"
                FAILED_COUNT=$((FAILED_COUNT + 1))
            fi
        fi
    done
done

echo ""
echo "=================================================="
echo "Batch Processing Complete"
echo "=================================================="
echo "Total files processed: $TOTAL_FILES"
echo -e "${GREEN}Successful: $SUCCESS_COUNT${NC}"
echo -e "${RED}Failed: $FAILED_COUNT${NC}"
echo "Results directory: $OUTPUT_BASE"
echo "Logs directory: /tmp/ghidra_*.log"
echo "=================================================="

# Exit with error code if any failed
if [ "$FAILED_COUNT" -gt 0 ]; then
    exit 1
else
    exit 0
fi