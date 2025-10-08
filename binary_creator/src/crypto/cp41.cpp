//AES-128 CBC Encryption in a Function
#include <openssl/evp.h>
#include <iostream>
#include <cstring>

void aes_cbc_encrypt(const char* plaintext, const unsigned char* key, const unsigned char* iv) {
    unsigned char ciphertext[128];
    int len, ciphertext_len;

    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    EVP_EncryptUpdate(ctx, ciphertext, &len, (unsigned char*)plaintext, strlen(plaintext));
    ciphertext_len = len;
    EVP_EncryptFinal_ex(ctx, ciphertext + len, &len);
    ciphertext_len += len;

    std::cout << "Ciphertext: ";
    for (int i = 0; i < ciphertext_len; i++) printf("%02x", ciphertext[i]);
    std::cout << std::endl;

    EVP_CIPHER_CTX_free(ctx);
}

int main() {
    const unsigned char key[] = "0123456789abcdef";
    const unsigned char iv[] = "abcdef9876543210";
    aes_cbc_encrypt("Hello AES CBC Function!", key, iv);
}
