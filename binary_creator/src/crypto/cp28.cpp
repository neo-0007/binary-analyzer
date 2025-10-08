//AES-128 CBC: encrypt function called from another function
// crypto32_aes_cbc_call.cpp
#include <openssl/evp.h>
#include <iostream>
#include <vector>
#include <string>

std::vector<unsigned char> do_encrypt(const std::string &msg) {
    const unsigned char key[] = "0123456789abcdX";
    const unsigned char iv[] = "iviviviviviviviv";
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    std::vector<unsigned char> ct(msg.size()+16);
    int len, ctlen=0;
    EVP_EncryptUpdate(ctx, ct.data(), &len, (unsigned char*)msg.data(), msg.size()); ctlen += len;
    EVP_EncryptFinal_ex(ctx, ct.data()+ctlen, &len); ctlen += len;
    ct.resize(ctlen);
    EVP_CIPHER_CTX_free(ctx);
    return ct;
}

int main() {
    auto c = do_encrypt("Called from separate function");
    std::cout << "Produced " << c.size() << " bytes ciphertext\n";
}
