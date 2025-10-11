#!/bin/bash
# =====================================================
# Feature Extractor: Data Dependency Chain Length
# Operates on all .asm files in a folder
# Stores output in F6_out/
# =====================================================
# Usage: ./extract_data_dependency_chain_folder.sh <asm_folder>
# =====================================================

ASM_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/AES_asm_files"
OUT_FOLDER="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/feature_output/F6_out"

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
    out_file="$OUT_FOLDER/${base_name}_data_dep.txt"

    # Extract only instruction lines
    grep -E "^[[:space:]]*[0-9a-f]+:" "$asm_file" | \
        sed -E 's/^[[:space:]]*[0-9a-f]+:[[:space:]]*//' > tmp_instructions.txt

    # Build DEF/USE table
    > tmp_defuse.txt
    lineno=0
    while read -r line; do
        [[ -z "$line" ]] && continue
        lineno=$((lineno+1))
        op=$(echo "$line" | awk '{print $1}')
        # Split operands
        operands=$(echo "$line" | cut -d' ' -f2- | tr -d '\t')
        dest=$(echo "$operands" | cut -d',' -f1 | grep -Eo "$REGEX" | head -n1)
        src=$(echo "$operands" | cut -d',' -f2- | grep -Eo "$REGEX" | tr '\n' ' ')

        if [[ -n "$dest" || -n "$src" ]]; then
            echo "$lineno $op DEF=$dest USE=$src" >> tmp_defuse.txt
        fi
    done < tmp_instructions.txt

    # Compute data dependency chain length
    chain_sum=0
    chain_count=0
    mapfile -t lines < tmp_defuse.txt
    n=${#lines[@]}

    for ((i=0;i<n;i++)); do
        line="${lines[i]}"
        def=$(echo "$line" | sed -n 's/.*DEF=\([^ ]*\).*/\1/p')
        [[ -z "$def" ]] && continue
        chain_len=0
        for ((j=i+1;j<n;j++)); do
            chain_len=$((chain_len+1))
            use=$(echo "${lines[j]}" | sed -n 's/.*USE=\(.*\)/\1/p')
            if [[ "$use" == *"$def"* ]]; then
                chain_sum=$((chain_sum+chain_len))
                chain_count=$((chain_count+1))
                break
            fi
        done
    done

    avg=0
    if ((chain_count>0)); then
        avg=$(echo "scale=2; $chain_sum / $chain_count" | bc)
    fi

    echo "Average Data Dependency Chain Length: $avg" > "$out_file"
    echo "Processed $asm_file -> $out_file"
done

rm -f tmp_instructions.txt tmp_defuse.txt