//AES-256 GCM: decrypt helper verifying tag
// crypto34_aes_gcm_decrypt.cpp
#include <openssl/evp.h>
#include <iostream>
#include <vector>
#include <cstring>

bool aes_gcm_decrypt(const unsigned char key[32], const unsigned char iv[12], const std::vector<unsigned char>& ct, const unsigned char tag[16], std::string &out) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_DecryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL);
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 12, NULL);
    EVP_DecryptInit_ex(ctx, NULL, NULL, key, iv);
    std::vector<unsigned char> pt(ct.size());
    int len, ptlen=0;
    EVP_DecryptUpdate(ctx, pt.data(), &len, ct.data(), ct.size()); ptlen += len;
    EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_TAG, 16, (void*)tag);
    int ret = EVP_DecryptFinal_ex(ctx, pt.data()+ptlen, &len);
    EVP_CIPHER_CTX_free(ctx);
    if (ret > 0) { out = std::string((char*)pt.data(), ptlen + len); return true; }
    return false;
}

int main() {
    unsigned char key[32]; memset(key,3,sizeof(key));
    unsigned char iv[12]; memset(iv,4,sizeof(iv));
    unsigned char tag[16];
    // create ct using previous program or directly:
    std::vector<unsigned char> ct = {0x00}; // placeholder: in real use use proper ct
    std::string out;
    bool ok = aes_gcm_decrypt(key, iv, ct, tag, out);
    std::cout << "Decrypt ok? " << ok << std::endl;
}
