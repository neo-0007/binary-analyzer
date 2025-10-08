//EC: write and read EC keys PEM
#include <openssl/ec.h>
#include <openssl/pem.h>
#include <iostream>

int main() {
    EC_KEY *e = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY_generate_key(e);
    FILE *f = fopen("ec_priv.pem","wb");
    PEM_write_ECPrivateKey(f, e, NULL, NULL, 0, NULL, NULL);
    fclose(f);
    f = fopen("ec_pub.pem","wb");
    PEM_write_EC_PUBKEY(f, e);
    fclose(f);
    EC_KEY_free(e);
    std::cout<<"Wrote EC PEMs\n";
}
