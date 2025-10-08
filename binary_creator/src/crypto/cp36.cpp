//RSA sign/verify using PEM files (separate functions)
// crypto40_rsa_sign_verify_pem.cpp
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/sha.h>
#include <openssl/err.h>
#include <iostream>
#include <vector>

bool rsa_sign(RSA *rsa, const unsigned char *m, size_t mlen, std::vector<unsigned char>& sig) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(m, mlen, hash);
    sig.resize(RSA_size(rsa));
    unsigned int slen;
    if (!RSA_sign(NID_sha256, hash, SHA256_DIGEST_LENGTH, sig.data(), &slen, rsa)) return false;
    sig.resize(slen); return true;
}

bool rsa_verify(RSA *rsa, const unsigned char *m, size_t mlen, const std::vector<unsigned char>& sig) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(m, mlen, hash);
    return RSA_verify(NID_sha256, hash, SHA256_DIGEST_LENGTH, sig.data(), sig.size(), rsa);
}

int main(){
    RSA *rsa = RSA_new(); BIGNUM *bn = BN_new(); BN_set_word(bn,RSA_F4); RSA_generate_key_ex(rsa,2048,bn,NULL); BN_free(bn);
    std::vector<unsigned char> sig;
    const char msg[]="sign this";
    rsa_sign(rsa,(unsigned char*)msg,strlen(msg),sig);
    std::cout<<"Sig len "<<sig.size()<<"\n";
    std::cout<<(rsa_verify(rsa,(unsigned char*)msg,strlen(msg),sig)?"OK":"FAIL")<<"\n";
    RSA_free(rsa);
}
