#!/usr/bin/env bash
set -e

SRC_DIR="../src"
OUT_DIR="../outputs"

# Cross-compilers for each architecture
declare -A COMPILERS=(
  # ["x86_64"]="g++"   # <-- Disabled, already built on host
  ["arm64"]="aarch64-linux-gnu-g++"
  ["armv7"]="arm-linux-gnueabihf-g++"
  ["riscv64"]="riscv64-linux-gnu-g++"
)

# Corresponding OpenSSL build locations
declare -A OPENSSL_PATHS=(
  ["x86_64"]="/opt/openssl/x86_64"
  ["arm64"]="/opt/openssl/arm64"
  ["armv7"]="/opt/openssl/armv7"
  ["riscv64"]="/opt/openssl/riscv64"
)

# Corresponding Libsodium build locations
declare -A SODIUM_PATHS=(
  ["x86_64"]="/opt/libsodium/x86_64"
  ["arm64"]="/opt/libsodium/arm64"
  ["armv7"]="/opt/libsodium/armv7"
  ["riscv64"]="/opt/libsodium/riscv64"
)


# Correct strip utility for each architecture
declare -A STRIPPERS=(
  ["x86_64"]="strip"
  ["arm64"]="aarch64-linux-gnu-strip"
  ["armv7"]="arm-linux-gnueabihf-strip"
  ["riscv64"]="riscv64-linux-gnu-strip"
)

# Create output directories
for arch in "${!COMPILERS[@]}"; do
  mkdir -p "$OUT_DIR/non-stripped/$arch" "$OUT_DIR/stripped/$arch"
done

# --------------------------
# Function: build_one
# --------------------------
build_one() {
  local src_file="$1"
  local out_file="$2"
  local compiler="$3"
  local is_crypto="$4"
  local arch="$5"

  local ssl_path="${OPENSSL_PATHS[$arch]}"
  local sodium_path="${SODIUM_PATHS[$arch]}"

  echo "[*] Building $src_file for $arch"

  # -------------------------
  # Detect if this file uses libsodium
  # -------------------------
  if grep -q "sodium_init" "$src_file"; then
      local link_sodium=true
  else
      local link_sodium=false
  fi

  # -------------------------
  # Compile with appropriate libraries
  # -------------------------
  if [[ "$is_crypto" == "true" ]]; then
      # Start building the compiler command
      cmd="$compiler \"$src_file\" -o \"$out_file\" -static \
          -I\"$ssl_path/include\" -L\"$ssl_path/lib\" \
          -lssl -lcrypto -ldl -pthread"

      # Append libsodium if needed
      if [[ "$link_sodium" == "true" ]]; then
          cmd="$compiler \"$src_file\" -o \"$out_file\" -static \
              -I\"$ssl_path/include\" -L\"$ssl_path/lib\" \
              -I\"$sodium_path/include\" -L\"$sodium_path/lib\" \
              -lssl -lcrypto -lsodium -ldl -pthread"
      fi

      # Run the command
      eval $cmd
  else
      $compiler "$src_file" -o "$out_file" -static
  fi
}



# --------------------------
# Build for each architecture
# --------------------------
for arch in "${!COMPILERS[@]}"; do
  compiler="${COMPILERS[$arch]}"
  echo "=== Building for $arch ==="

  # --- Crypto sources ---
  for src_file in "$SRC_DIR/crypto"/*.cpp; do
    filename=$(basename "$src_file" .cpp)

    # Skip empty or WIP files (no main)
    if ! grep -q "int[[:space:]]\+main" "$src_file"; then
      echo "[-] Skipping $src_file (no main found)"
      continue
    fi

    out_file="$OUT_DIR/non-stripped/$arch/${filename}"
    build_one "$src_file" "$out_file" "$compiler" "true" "$arch"
    ${STRIPPERS[$arch]} -o "$OUT_DIR/stripped/$arch/${filename}" "$out_file"
  done

  # --- Non-crypto sources ---
  for src_file in "$SRC_DIR/non-crypto"/*.cpp; do
    filename=$(basename "$src_file" .cpp)

    if ! grep -q "int[[:space:]]\+main" "$src_file"; then
      echo "[-] Skipping $src_file (no main found)"
      continue
    fi

    out_file="$OUT_DIR/non-stripped/$arch/${filename}"
    build_one "$src_file" "$out_file" "$compiler" "false" "$arch"
    ${STRIPPERS[$arch]} -o "$OUT_DIR/stripped/$arch/${filename}" "$out_file"
  done

  echo "=== Done $arch ==="
done

echo "✅ All cross-builds complete. (x86_64 skipped)"
