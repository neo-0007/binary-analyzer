//RSA key generation

#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <iostream>

int main() {
    RSA *rsa = RSA_new();
    BIGNUM *bn = BN_new();
    BN_set_word(bn, RSA_F4);

    if (RSA_generate_key_ex(rsa, 2048, bn, NULL) != 1) {
        std::cerr << "RSA key generation failed.\n";
        return 1;
    }

    BIO *bp = BIO_new_fp(stdout, BIO_NOCLOSE);
    PEM_write_bio_RSAPublicKey(bp, rsa);

    RSA_free(rsa);
    BN_free(bn);
    BIO_free(bp);
    return 0;
}