//ECC Sign
#include <openssl/ec.h>
#include <openssl/ecdsa.h>
#include <openssl/sha.h>
#include <openssl/obj_mac.h>
#include <iostream>
#include <cstring>

int main() {
    EC_KEY *eckey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY_generate_key(eckey);

    const char *msg = "ECC Sign Test";
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)msg, strlen(msg), hash);

    unsigned char *sig = nullptr;
    unsigned int sig_len;
    sig_len = ECDSA_size(eckey);
    sig = new unsigned char[sig_len];

    if (ECDSA_sign(0, hash, SHA256_DIGEST_LENGTH, sig, &sig_len, eckey))
        std::cout << "ECC Signature generated (" << sig_len << " bytes)\n";

    delete[] sig;
    EC_KEY_free(eckey);
}
