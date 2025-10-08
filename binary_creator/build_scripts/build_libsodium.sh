#!/usr/bin/env bash
# =====================================================
# Download, compile, and install libsodium for multiple architectures
# Author: neo-0007 (Hrishikesh)
# =====================================================

set -e

LIBSODIUM_VERSION="1.0.20"
INSTALL_BASE="/opt/libsodium"
SRC_DIR="/tmp/libsodium-src"

# Mapping architectures to their configure targets
declare -A CONFIGURE_TARGETS=(
  ["x86_64"]=""
  ["arm64"]="--host=aarch64-linux-gnu"
  ["armv7"]="--host=arm-linux-gnueabihf"
  ["riscv64"]="--host=riscv64-linux-gnu"
)

# Download libsodium source if not already present
mkdir -p "$SRC_DIR"
cd "$SRC_DIR"

if [[ ! -f "libsodium-$LIBSODIUM_VERSION-stable.tar.gz" ]]; then
  echo "[*] Downloading libsodium $LIBSODIUM_VERSION..."
  wget "https://download.libsodium.org/libsodium/releases/libsodium-$LIBSODIUM_VERSION-stable.tar.gz"
fi

# Extract
tar xf "libsodium-$LIBSODIUM_VERSION-stable.tar.gz"

# Loop through architectures
for arch in "${!CONFIGURE_TARGETS[@]}"; do
  echo "=== Building libsodium for $arch ==="

  cd "$SRC_DIR/libsodium-stable"

  # Clean previous builds
  make clean || true

  prefix="$INSTALL_BASE/$arch"
  mkdir -p "$prefix"

  # Configure with host for cross-compiling
  host_flag="${CONFIGURE_TARGETS[$arch]}"

  echo "[*] Configuring for $arch $host_flag"
  ./configure $host_flag --disable-shared --enable-static --prefix="$prefix"

  # Build and install
  make -j$(nproc)
  make install

  echo "✅ Installed libsodium for $arch in $prefix"
done

echo "🎉 All libsodium builds complete!"
