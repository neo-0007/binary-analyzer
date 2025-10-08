//ECC verify
#include <openssl/ec.h>
#include <openssl/ecdsa.h>
#include <openssl/sha.h>
#include <iostream>
#include <cstring>
#include <openssl/obj_mac.h>

int main() {
    EC_KEY *eckey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY_generate_key(eckey);

    const char *msg = "ECC Verify Test";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)msg, strlen(msg), hash);

    unsigned char sig[72];
    unsigned int sig_len;
    ECDSA_sign(0, hash, SHA256_DIGEST_LENGTH, sig, &sig_len, eckey);

    int verify = ECDSA_verify(0, hash, SHA256_DIGEST_LENGTH, sig, sig_len, eckey);
    std::cout << (verify ? "Verified!" : "Verification failed!") << std::endl;

    EC_KEY_free(eckey);
}
