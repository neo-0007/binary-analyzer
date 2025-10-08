//RSA-OAEP encrypt/decrypt pair in functions

#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/bn.h>
#include <iostream>
#include <vector>

RSA* gen_rsa() {
    RSA *r = RSA_new(); BIGNUM *bn = BN_new(); BN_set_word(bn, RSA_F4);
    RSA_generate_key_ex(r, 2048, bn, NULL); BN_free(bn); return r;
}

std::vector<unsigned char> rsa_pub_encrypt(RSA *rsa, const std::string &m) {
    std::vector<unsigned char> ct(RSA_size(rsa));
    int l = RSA_public_encrypt(m.size(), (unsigned char*)m.data(), ct.data(), rsa, RSA_PKCS1_OAEP_PADDING);
    ct.resize(l>0?l:0); return ct;
}

std::string rsa_priv_decrypt(RSA *rsa, const std::vector<unsigned char> &ct) {
    std::vector<unsigned char> pt(RSA_size(rsa));
    int l = RSA_private_decrypt(ct.size(), ct.data(), pt.data(), rsa, RSA_PKCS1_OAEP_PADDING);
    if (l<0) return {};
    return std::string((char*)pt.data(), l);
}

int main(){
    RSA *r = gen_rsa();
    auto c = rsa_pub_encrypt(r, "hello rsa func");
    auto p = rsa_priv_decrypt(r, c);
    std::cout<<"Decrypted: "<<p<<"\n";
    RSA_free(r);
}
