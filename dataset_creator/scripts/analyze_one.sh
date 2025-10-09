#!/bin/bash
# =====================================================
# Analyze a single executable with Ghidra headless mode
# =====================================================

set -e

# -----------------------------
# Configuration
# -----------------------------
GHIDRA_HEADLESS=../workspace/ghidra/support/analyzeHeadless
PROJECT_DIR=./dataset_creator/workspace/projects
SCRIPT=$(dirname "$0")/ExportCode.py
OUTPUT_BASE=../outputs/results

# -----------------------------
# Input validation
# -----------------------------
if [ $# -lt 1 ]; then
    echo "Usage: $0 <path_to_executable>"
    exit 1
fi

TARGET_FILE="$1"

if [ ! -f "$TARGET_FILE" ]; then
    echo "Error: File not found: $TARGET_FILE"
    exit 1
fi

# -----------------------------
# Setup
# -----------------------------
FILENAME=$(basename "$TARGET_FILE")
PROJECT_NAME="single_${FILENAME}_$$"
OUT_DIR="$OUTPUT_BASE/${FILENAME%.*}"

mkdir -p "$OUT_DIR"
mkdir -p "$PROJECT_DIR"

# -----------------------------
# Run Ghidra headless
# -----------------------------
echo "=================================================="
echo "Analyzing single file with Ghidra"
echo "=================================================="
echo "File:      $TARGET_FILE"
echo "Output:    $OUT_DIR"
echo "Project:   $PROJECT_NAME"
echo "=================================================="

"$GHIDRA_HEADLESS" "$PROJECT_DIR" "$PROJECT_NAME" \
    -import "$TARGET_FILE" \
    -postScript "$SCRIPT" "$OUT_DIR" \
    -deleteProject 2>&1 | tee /tmp/ghidra_${FILENAME}.log

GHIDRA_EXIT=${PIPESTATUS[0]}

# -----------------------------
# Cleanup & Results
# -----------------------------
# Clean leftover projects (if deleteProject didn't work)
rm -rf "$PROJECT_DIR/$PROJECT_NAME" "$PROJECT_DIR/${PROJECT_NAME}.rep" 2>/dev/null || true

echo ""
if [ $GHIDRA_EXIT -eq 0 ]; then
    FILE_COUNT=$(find "$OUT_DIR" -type f | wc -l)
    if [ "$FILE_COUNT" -gt 0 ]; then
        echo "Success! Exported $FILE_COUNT files to:"
        echo "$OUT_DIR"
    else
        echo "Ghidra completed, but no output files found."
    fi
else
    echo "Ghidra failed (exit code: $GHIDRA_EXIT)"
    echo "Check log: /tmp/ghidra_${FILENAME}.log"
fi

echo "=================================================="

