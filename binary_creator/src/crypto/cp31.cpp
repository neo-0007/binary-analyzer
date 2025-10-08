//AES-CTR streaming-like encrypt (EVP)
// crypto35_aes_ctr_stream.cpp
#include <openssl/evp.h>
#include <iostream>
#include <vector>

std::vector<unsigned char> aes_ctr_process(const unsigned char key[16], const unsigned char iv[16], const std::string &in) {
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_ctr(), NULL, key, iv);
    std::vector<unsigned char> out(in.size());
    int len, outlen=0;
    EVP_EncryptUpdate(ctx, out.data(), &len, (unsigned char*)in.data(), in.size()); outlen+=len;
    EVP_EncryptFinal_ex(ctx, out.data()+outlen, &len); outlen+=len;
    out.resize(outlen);
    EVP_CIPHER_CTX_free(ctx);
    return out;
}

int main() {
    unsigned char key[16]={0};
    unsigned char iv[16]={0};
    auto c = aes_ctr_process(key, iv, "streaming text");
    std::cout << "ctr out len " << c.size() << std::endl;
}
