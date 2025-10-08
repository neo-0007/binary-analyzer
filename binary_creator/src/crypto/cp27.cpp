//AES-128 CBC: helper functions (encrypt/decrypt)
// crypto31_aes_cbc_helpers.cpp
#include <openssl/evp.h>
#include <iostream>
#include <vector>
#include <cstring>

std::vector<unsigned char> aes_cbc_encrypt(const unsigned char key[], const unsigned char iv[], const std::string &pt) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    std::vector<unsigned char> ct(pt.size() + 16);
    int len, ctlen=0;
    EVP_EncryptUpdate(ctx, ct.data(), &len, (unsigned char*)pt.data(), pt.size()); ctlen += len;
    EVP_EncryptFinal_ex(ctx, ct.data()+ctlen, &len); ctlen += len;
    ct.resize(ctlen);
    EVP_CIPHER_CTX_free(ctx);
    return ct;
}

std::string aes_cbc_decrypt(const unsigned char key[], const unsigned char iv[], const std::vector<unsigned char> &ct) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_DecryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    std::vector<char> pt(ct.size()+16);
    int len, ptlen=0;
    EVP_DecryptUpdate(ctx, (unsigned char*)pt.data(), &len, ct.data(), ct.size()); ptlen += len;
    EVP_DecryptFinal_ex(ctx, (unsigned char*)pt.data()+ptlen, &len); ptlen += len;
    EVP_CIPHER_CTX_free(ctx);
    return std::string(pt.data(), ptlen);
}

int main() {
    const unsigned char key[] = "0123456789abcdef";
    const unsigned char iv[] = "abcdef9876543210";
    std::string m = "Hello AES helper!";
    auto ct = aes_cbc_encrypt(key, iv, m);
    std::string dec = aes_cbc_decrypt(key, iv, ct);
    std::cout << "Dec: " << dec << std::endl;
}
