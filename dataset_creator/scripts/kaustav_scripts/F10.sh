#!/bin/bash

# ===============================
# Script: extract_operand_range.sh
# Description:
#   Extracts operand value ranges from objdump-generated ASM files.
#   Computes proportion of byte/word/dword/qword operations.
#   Handles registers, immediates, and memory operands using instruction mnemonics.
#   Saves output in plain text files.
# ===============================

# Input and output directories
INPUT_DIR="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/AES_asm_files"       # Change this to your folder with asm files
OUTPUT_DIR="$HOME/sih2025/bn/binary-analyzer/dataset_creator/scripts/kaustav_scripts/feature_output/F10_out" # Folder to save feature text files

mkdir -p "$OUTPUT_DIR"

# Classify operand based on operand text
classify_operand() {
    local op="$1"

    # Remove leading $ (immediates)
    op=${op#\$}

    # Registers classification
    if [[ "$op" =~ ^(al|bl|cl|dl|sil|dil|bpl|spl)$ ]]; then
        echo "byte"
    elif [[ "$op" =~ ^(ax|bx|cx|dx|si|di|bp|sp)$ ]]; then
        echo "word"
    elif [[ "$op" =~ ^(eax|ebx|ecx|edx|esi|edi|ebp|esp)$ ]]; then
        echo "dword"
    elif [[ "$op" =~ ^(rax|rbx|rcx|rdx|rsi|rdi|rbp|rsp|r8|r9|r10|r11|r12|r13|r14|r15)$ ]]; then
        echo "qword"
    # Immediate hex
    elif [[ "$op" =~ ^0x[0-9a-fA-F]+$ ]]; then
        val=$((op))
        if (( val <= 0xFF )); then
            echo "byte"
        elif (( val <= 0xFFFF )); then
            echo "word"
        elif (( val <= 0xFFFFFFFF )); then
            echo "dword"
        else
            echo "qword"
        fi
    # Immediate decimal
    elif [[ "$op" =~ ^[0-9]+$ ]]; then
        val=$op
        if (( val <= 0xFF )); then
            echo "byte"
        elif (( val <= 0xFFFF )); then
            echo "word"
        elif (( val <= 0xFFFFFFFF )); then
            echo "dword"
        else
            echo "qword"
        fi
    # Memory operands
    elif [[ "$op" =~ [\(\)] ]]; then
        # Default memory operand to qword (64-bit system)
        echo "qword"
    else
        # Unknown operand
        echo "other"
    fi
}

# Process each ASM file
for file in "$INPUT_DIR"/*.asm; do
    byte_count=0
    word_count=0
    dword_count=0
    qword_count=0
    other_count=0
    total_count=0

    while read -r line; do
        # Only instruction lines
        [[ "$line" =~ ^[[:space:]]*[0-9a-f]+: ]] || continue

        # Extract operands (after mnemonic)
        operands=$(echo "$line" | sed -E 's/^[[:space:]]*[0-9a-f]+:[[:space:]]+[0-9a-f ]+[[:space:]]+[^[:space:]]+[[:space:]]*(.*)/\1/')

        # Split operands by comma
        IFS=',' read -ra ops <<< "$operands"
        for op in "${ops[@]}"; do
            op=$(echo "$op" | xargs) # trim spaces
            size=$(classify_operand "$op")
            case $size in
                byte) ((byte_count++)) ;;
                word) ((word_count++)) ;;
                dword) ((dword_count++)) ;;
                qword) ((qword_count++)) ;;
                *) ((other_count++)) ;;
            esac
            ((total_count++))
        done
    done < "$file"

    # Avoid division by zero
    total_count=$((total_count == 0 ? 1 : total_count))

    # Save output
    output_file="$OUTPUT_DIR/$(basename "$file" .asm)_operand_range.txt"
    {
        echo "Operand Value Range Feature"
        echo "File: $(basename "$file")"
        echo "-------------------------------"
        printf "Byte operands   : %d%%\n" $((100*byte_count/total_count))
        printf "Word operands   : %d%%\n" $((100*word_count/total_count))
        printf "DWord operands  : %d%%\n" $((100*dword_count/total_count))
        printf "QWord operands  : %d%%\n" $((100*qword_count/total_count))
        printf "Other operands  : %d%%\n" $((100*other_count/total_count))
    } > "$output_file"

    echo "Processed $file -> $output_file"
done
