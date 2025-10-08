//AES-128 CBC Encryption
#include <openssl/evp.h>
#include <iostream>
#include <cstring>

int main() {
    const unsigned char key[] = "0123456789abcdef";
    const unsigned char iv[] = "abcdef9876543210";
    const char *plaintext = "AES CBC Demo!";
    unsigned char ciphertext[128];
    int len, ciphertext_len;

    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    EVP_EncryptUpdate(ctx, ciphertext, &len, (unsigned char*)plaintext, strlen(plaintext));
    ciphertext_len = len;
    EVP_EncryptFinal_ex(ctx, ciphertext + len, &len);
    ciphertext_len += len;

    std::cout << "Ciphertext: ";
    for (int i = 0; i < ciphertext_len; i++) printf("%02x", ciphertext[i]);
    std::cout << std::endl;

    EVP_CIPHER_CTX_free(ctx);
    return 0;
}
