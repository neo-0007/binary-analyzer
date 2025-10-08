#!/bin/bash
# =====================================================
# Single-Architecture C++ Build Script
# Author: KOSTOV JP
# Description: Compiles all .cpp files for x86_64
# =====================================================

set -e  # Stop on error

BASE_DIR="$HOME/sih2025/binary-analyzer/binary_creator"
SRC_DIR="${BASE_DIR}/src/non-crypto"
BUILD_DIR="${BASE_DIR}/outputs/non-stripped"

X86_COMPILER="g++"
ARCHS=("x86_64")

echo "========================================"
echo "Building all C++ files for x86_64 architecture"
echo "========================================"

# mkdir -p "${BUILD_DIR}/x86_64"

compile_for_arch() {
    local src="$1"
    local arch="$2"
    local outfile="$3"
    local compiler="$X86_COMPILER"

    echo "[$arch] Compiling $src → $outfile"
    # $compiler -std=c++17 -O2 "$src" -o "$outfile"
    
    #for static linking use this:
    $compiler -std=c++17 -O2 -static -static-libstdc++ -static-libgcc "$src" -o "$outfile"

    # strip "$outfile"
}

for file in "${SRC_DIR}"/*.cpp; do
    [ -e "$file" ] || continue
    filename=$(basename "$file" .cpp)
    outpath="${BUILD_DIR}/x86_64/${filename}_x86_64"
    compile_for_arch "$file" "x86_64" "$outpath"
done

echo "========================================"
echo "All builds completed successfully!"
echo "Binaries stored in: $BUILD_DIR/x86_64"
echo "========================================"