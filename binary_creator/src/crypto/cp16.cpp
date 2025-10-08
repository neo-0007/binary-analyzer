//ECC Key Generation
#include <openssl/ec.h>
#include <openssl/pem.h>
#include <iostream>

int main() {
    EC_KEY *eckey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY_generate_key(eckey);

    BIO *out = BIO_new_fp(stdout, BIO_NOCLOSE);
    PEM_write_bio_EC_PUBKEY(out, eckey);

    EC_KEY_free(eckey);
    BIO_free(out);
    return 0;
}
