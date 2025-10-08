#!/usr/bin/env bash
# =====================================================
# Download, compile, an install OpenSSL for all many arch :D 
# Author: neo-0007 (Hrishikesh)
# =====================================================


set -e

OPENSSL_VERSION="3.3.1"
INSTALL_BASE="/opt/openssl"
SRC_DIR="/tmp/openssl-src"

declare -A CONFIGURE_TARGETS=(
  ["x86_64"]="linux-x86_64"
  ["arm64"]="linux-aarch64"
  ["armv7"]="linux-armv4"
  ["riscv64"]="linux64-riscv64"
)

declare -A CROSS_CC=(
  ["x86_64"]="gcc"
  ["arm64"]="aarch64-linux-gnu-gcc"
  ["armv7"]="arm-linux-gnueabihf-gcc"
  ["riscv64"]="riscv64-linux-gnu-gcc"
)

# Download OpenSSL source if not already present
mkdir -p "$SRC_DIR"
cd "$SRC_DIR"

if [[ ! -f "openssl-$OPENSSL_VERSION.tar.gz" ]]; then
  echo "[*] Downloading OpenSSL $OPENSSL_VERSION..."
  wget "https://www.openssl.org/source/openssl-$OPENSSL_VERSION.tar.gz"
fi

# Extract
tar xf "openssl-$OPENSSL_VERSION.tar.gz"

# Loop through architectures
for arch in "${!CONFIGURE_TARGETS[@]}"; do
  echo "=== Building OpenSSL for $arch ==="

  cd "$SRC_DIR/openssl-$OPENSSL_VERSION"
  make clean || true

  target="${CONFIGURE_TARGETS[$arch]}"
  cc="${CROSS_CC[$arch]}"
  prefix="$INSTALL_BASE/$arch"

  mkdir -p "$prefix"

  echo "[*] Configuring for $target with CC=$cc"
  ./Configure "$target" no-shared no-dso no-tests \
    --prefix="$prefix" CC="$cc"

  make -j$(nproc)
  make install_sw

  echo "✅ Installed OpenSSL for $arch in $prefix"
done

echo "🎉 All OpenSSL builds complete!"
