//Hashing with libsodium (SHA-256)
#include <sodium.h>
#include <iostream>

int main() {
    if (sodium_init() < 0) return 1;

    const unsigned char msg[] = "libsodium SHA256";
    unsigned char hash[crypto_hash_sha256_BYTES];

    crypto_hash_sha256(hash, msg, sizeof(msg));

    std::cout << "SHA256: ";
    for (int i = 0; i < crypto_hash_sha256_BYTES; i++) printf("%02x", hash[i]);
    std::cout << std::endl;
}
