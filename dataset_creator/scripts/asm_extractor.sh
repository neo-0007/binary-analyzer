#!/bin/bash

# =====================================================
# Script: extract_aes_functions.sh
# Author: KOSTOV JP
# Description:
#   - Scans ELF files in a directory
#   - Finds AES-related symbols using nm
#   - Extracts per-function assembly using objdump
# =====================================================

SRC_DIR=${1:-.}
OUT_DIR="$HOME/sih2025/bn/binary-analyzer/dataset_creator/workspace/feature_extraction/AES_asm_files"
mkdir -p "$OUT_DIR"

echo "[+] Scanning ELF files in: $SRC_DIR"
echo "[+] Saving per-function ASM outputs to: $OUT_DIR"
echo

for file in "$SRC_DIR"/*; do
    [[ -f "$file" ]] || continue

    if file "$file" | grep -q "ELF"; then
        echo "[*] Processing ELF: $file"

        # Get AES-related symbols with their addresses
        nm --defined-only "$file" 2>/dev/null | grep -i "aes" | while read -r addr type name; do
            [[ -z "$addr" || -z "$name" ]] && continue  # skip empty lines
            echo "    -> Extracting function: $name (at $addr)"

            # Dump only that function
            out="$OUT_DIR/${name}_4.asm"
            objdump -d --disassemble="$name" "$file" >> "$out" 2>/dev/null
        done
    fi
done

echo
echo "[✔] Extraction complete. Check folder: $OUT_DIR"




