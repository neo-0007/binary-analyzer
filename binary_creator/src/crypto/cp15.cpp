//RSA Verify
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/sha.h>
#include <openssl/err.h>
#include <iostream>
#include <cstring>

int main() {
    RSA *rsa = RSA_new();
    BIGNUM *bn = BN_new();
    BN_set_word(bn, RSA_F4);
    RSA_generate_key_ex(rsa, 2048, bn, NULL);

    const char *msg = "Verify me!";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)msg, strlen(msg), hash);

    unsigned char sig[256];
    unsigned int sig_len;
    RSA_sign(NID_sha256, hash, SHA256_DIGEST_LENGTH, sig, &sig_len, rsa);

    if (RSA_verify(NID_sha256, hash, SHA256_DIGEST_LENGTH, sig, sig_len, rsa))
        std::cout << "Signature verified!" << std::endl;
    else
        std::cout << "Verification failed!" << std::endl;

    RSA_free(rsa);
    BN_free(bn);
    return 0;
}
