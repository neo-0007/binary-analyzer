//AES-GCM Using libsodium
#include <sodium.h>
#include <iostream>

int main() {
    if (sodium_init() < 0) return 1;

    unsigned char key[crypto_aead_aes256gcm_KEYBYTES];
    randombytes_buf(key, sizeof(key));

    const unsigned char msg[] = "Hello AES-GCM libsodium!";
    unsigned char nonce[crypto_aead_aes256gcm_NPUBBYTES];
    randombytes_buf(nonce, sizeof(nonce));

    unsigned char ciphertext[128];
    unsigned long long clen;
    crypto_aead_aes256gcm_encrypt(ciphertext, &clen, msg, sizeof(msg), NULL, 0, NULL, nonce, key);

    std::cout << "Ciphertext: ";
    for (unsigned long long i = 0; i < clen; i++) printf("%02x", ciphertext[i]);
    std::cout << std::endl;
}
