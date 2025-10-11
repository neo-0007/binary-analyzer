#!/bin/bash
# =====================================================
# Feature Extractor: Register Reuse Frequency
# Operates on all .asm files in a folder
# Stores output in F7_out/
# =====================================================
# Usage: ./extract_register_reuse_folder.sh <asm_folder>
# =====================================================

ASM_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/AES_asm_files"
OUT_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/feature_output/F7_out"

if [[ ! -d "$ASM_FOLDER" ]]; then
    echo "Usage: $0 <asm_folder>"
    exit 1
fi

mkdir -p "$OUT_FOLDER"

# Regex for x86-64 registers (general + SIMD)
REGEX='(r([0-9]+[bwd]?)|r[abcd]x|rsi|rdi|rbp|rsp|eax|ebx|ecx|edx|esi|edi|ebp|esp|xmm[0-9]+)'

for asm_file in "$ASM_FOLDER"/*.asm; do
    [[ -f "$asm_file" ]] || continue
    base_name=$(basename "$asm_file" .asm)
    out_file="$OUT_FOLDER/${base_name}_reg_reuse.txt"

    # Extract only instruction lines
    grep -E "^[[:space:]]*[0-9a-f]+:" "$asm_file" | \
        sed -E 's/^[[:space:]]*[0-9a-f]+:[[:space:]]*//' > tmp_instructions.txt

    # Extract all registers and count frequency
    grep -Eo "$REGEX" tmp_instructions.txt | sort | uniq -c > tmp_regcount.txt

    total_uses=0
    unique_regs=0

    while read -r count reg; do
        total_uses=$((total_uses + count))
        unique_regs=$((unique_regs + 1))
    done < tmp_regcount.txt

    reuse_freq=0
    if ((unique_regs > 0)); then
        reuses=$((total_uses - unique_regs))
        reuse_freq=$(echo "scale=2; $reuses / $unique_regs" | bc)
    fi

    {
        echo "File: $asm_file"
        echo "Unique Registers: $unique_regs"
        echo "Total Register Uses: $total_uses"
        echo "Average Register Reuse Frequency: $reuse_freq"
    } > "$out_file"

    echo "Processed $asm_file -> $out_file"
done

rm -f tmp_instructions.txt tmp_regcount.txt




