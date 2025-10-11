#!/bin/bash
# =====================================================
# Feature Extractor: Constant Propagation Ratio
# Operates on all .asm files in a folder
# Stores output in F8_out/
# =====================================================
# Usage: ./extract_constant_propagation_ratio.sh <asm_folder>
# =====================================================

ASM_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/AES_asm_files"
OUT_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/feature_output/F8_out"

if [[ ! -d "$ASM_FOLDER" ]]; then
    echo "Usage: $0 <asm_folder>"
    exit 1
fi

mkdir -p "$OUT_FOLDER"

# Regex for immediates (hex or decimal constants)
IMM_REGEX='(0x[0-9A-Fa-f]+|[0-9]+)'

for asm_file in "$ASM_FOLDER"/*.asm; do
    [[ -f "$asm_file" ]] || continue
    base_name=$(basename "$asm_file" .asm)
    out_file="$OUT_FOLDER/${base_name}_const_prop.txt"

    # Extract only instruction lines (exclude labels/comments)
    grep -E "^[[:space:]]*[0-9a-f]+:" "$asm_file" | \
        sed -E 's/^[[:space:]]*[0-9a-f]+:[[:space:]]*//' > tmp_instructions.txt

    total_instr=$(grep -c . tmp_instructions.txt)
    imm_instr=$(grep -Eo "$IMM_REGEX" tmp_instructions.txt | wc -l)

    ratio=0
    if (( total_instr > 0 )); then
        ratio=$(echo "scale=4; $imm_instr / $total_instr" | bc)
    fi

    {
        echo "File: $asm_file"
        echo "Total Instructions: $total_instr"
        echo "Instructions with Immediate Constants: $imm_instr"
        echo "Constant Propagation Ratio: $ratio"
    } > "$out_file"

    echo "Processed $asm_file -> $out_file"
done

rm -f tmp_instructions.txt
