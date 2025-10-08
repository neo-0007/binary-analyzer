//RSA: write public/private PEM files to disk (keygen)
// crypto36_rsa_pem_write.cpp
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/bn.h>
#include <iostream>

int main() {
    RSA *rsa = RSA_new();
    BIGNUM *bn = BN_new();
    BN_set_word(bn, RSA_F4);
    RSA_generate_key_ex(rsa, 2048, bn, NULL);

    FILE *fp = fopen("rsa_priv.pem","wb");
    PEM_write_RSAPrivateKey(fp, rsa, NULL, NULL, 0, NULL, NULL);
    fclose(fp);
    fp = fopen("rsa_pub.pem","wb");
    PEM_write_RSAPublicKey(fp, rsa);
    fclose(fp);

    RSA_free(rsa); BN_free(bn);
    std::cout << "Wrote rsa_priv.pem and rsa_pub.pem\n";
}
