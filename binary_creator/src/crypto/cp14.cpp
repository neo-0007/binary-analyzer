//RSA Sign
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

    const char *msg = "Sign me!";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)msg, strlen(msg), hash);

    unsigned char sig[256];
    unsigned int sig_len;
    if (!RSA_sign(NID_sha256, hash, SHA256_DIGEST_LENGTH, sig, &sig_len, rsa)) {
        ERR_print_errors_fp(stderr);
        return 1;
    }

    std::cout << "Signature: ";
    for (int i = 0; i < sig_len; i++) printf("%02x", sig[i]);
    std::cout << std::endl;

    RSA_free(rsa);
    BN_free(bn);
    return 0;
}
