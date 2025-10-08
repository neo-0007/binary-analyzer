//AES-256 GCM: encrypt + return tag via out parameter

#include <openssl/evp.h>
#include <iostream>
#include <vector>
#include <cstring>

std::vector<unsigned char> aes_gcm_encrypt(const unsigned char key[32], const unsigned char iv[12], const std::string &pt, unsigned char tag[16]) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL);
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 12, NULL);
    EVP_EncryptInit_ex(ctx, NULL, NULL, key, iv);
    std::vector<unsigned char> ct(pt.size());
    int len, ctlen=0;
    EVP_EncryptUpdate(ctx, ct.data(), &len, (unsigned char*)pt.data(), pt.size()); ctlen += len;
    EVP_EncryptFinal_ex(ctx, ct.data()+ctlen, &len); ctlen += len;
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, tag);
    EVP_CIPHER_CTX_free(ctx);
    return ct;
}

int main() {
    unsigned char key[32]; memset(key,1,sizeof(key));
    unsigned char iv[12]; memset(iv,2,sizeof(iv));
    unsigned char tag[16];
    auto ct = aes_gcm_encrypt(key, iv, "AES-256-GCM message", tag);
    std::cout << "CT len: " << ct.size() << ", tag: ";
    for (int i=0;i<16;i++) printf("%02x", tag[i]); std::cout << std::endl;
}
