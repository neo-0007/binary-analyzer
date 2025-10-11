#!/bin/bash
# =====================================================
# Feature Extractor: Memory Access Regularity (Objdump AT&T)
# Operates on all .asm files in a folder
# Stores output in F9_out/
# =====================================================
# Usage: ./extract_memory_access_regularity.sh <asm_folder>
# =====================================================

ASM_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/AES_asm_files"
OUT_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/feature_output/F9_out"

if [[ ! -d "$ASM_FOLDER" ]]; then
    echo "Usage: $0 <asm_folder>"
    exit 1
fi

mkdir -p "$OUT_FOLDER"

for asm_file in "$ASM_FOLDER"/*.asm; do
    [[ -f "$asm_file" ]] || continue
    base_name=$(basename "$asm_file" .asm)
    out_file="$OUT_FOLDER/${base_name}_mem_regularity.txt"

    # Extract instruction lines only
    grep -E "^[[:space:]]*[0-9a-f]+:" "$asm_file" | \
        sed -E 's/^[[:space:]]*[0-9a-f]+:[[:space:]]*//' > tmp_instructions.txt

    # ------------------------------
    # Extract memory offsets (objdump AT&T style)
    # Examples: -0x38(%rbp), 0x8(%rax), 0xb0(%rax)
    # ------------------------------
    # Extract offsets like -0x38(%rbp), 0x8(%rax), 0xb0(%rax)
    grep -Po '[+-]?(0x[0-9A-Fa-f]+|[0-9]+)\s*\(%[a-z]{2,3}\)' tmp_instructions.txt | \
    grep -Po '[+-]?(0x[0-9A-Fa-f]+|[0-9]+)' > tmp_offsets.txt


    count=$(grep -c . tmp_offsets.txt)
    stddev=0

    if (( count > 1 )); then
        # Convert hex to decimal and compute standard deviation
        awk '
        function sqroot(x){return x**0.5}
        {
            if ($1 ~ /^-/) { sign=-1; val=$1; sub(/^-/, "", val) } else { sign=1; val=$1 }
            if (val ~ /^0x/) { dec=strtonum(val)*sign } else { dec=val*sign }
            x[NR]=dec
            sum+=dec
        }
        END {
            mean=sum/NR
            for (i=1;i<=NR;i++) dev+=(x[i]-mean)^2
            std=sqroot(dev/NR)
            printf("%.4f\n", std)
        }' tmp_offsets.txt > tmp_std.txt
        stddev=$(cat tmp_std.txt)
    fi

    {
        echo "File: $asm_file"
        echo "Memory Access Count: $count"
        echo "Memory Access Regularity (Std. Dev. of Offsets): $stddev"
    } > "$out_file"

    echo "Processed $asm_file -> $out_file"
done

rm -f tmp_instructions.txt tmp_offsets.txt tmp_std.txt
