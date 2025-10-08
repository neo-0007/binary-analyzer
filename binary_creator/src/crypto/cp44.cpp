//AES-256 GCM Encryption with Function Abstraction
#include <openssl/evp.h>
#include <iostream>
#include <cstring>

void aes_gcm_encrypt(const unsigned char* key, const unsigned char* iv, const char* plaintext) {
    unsigned char ciphertext[128], tag[16];
    int len, ciphertext_len;

    EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL);
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 12, NULL);
    EVP_EncryptInit_ex(ctx, NULL, NULL, key, iv);

    EVP_EncryptUpdate(ctx, ciphertext, &len, (unsigned char*)plaintext, strlen(plaintext));
    ciphertext_len = len;
    EVP_EncryptFinal_ex(ctx, ciphertext + len, &len);
    ciphertext_len += len;
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, tag);

    std::cout << "Ciphertext: ";
    for (int i = 0; i < ciphertext_len; i++) printf("%02x", ciphertext[i]);
    std::cout << "\nTag: ";
    for (int i = 0; i < 16; i++) printf("%02x", tag[i]);
    std::cout << std::endl;

    EVP_CIPHER_CTX_free(ctx);
}

int main() {
    const unsigned char key[] = "0123456789abcdef0123456789abcdef";
    const unsigned char iv[] = "123456789abc";
    aes_gcm_encrypt(key, iv, "AES-256 GCM in function!");
}
