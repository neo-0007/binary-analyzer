//ECDH Shared Secret
#include <openssl/ec.h>
#include <openssl/ecdh.h>
#include <openssl/obj_mac.h>
#include <iostream>
#include <vector>

int main() {
    EC_KEY *alice = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY *bob = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    EC_KEY_generate_key(alice);
    EC_KEY_generate_key(bob);

    const EC_POINT *bob_pub = EC_KEY_get0_public_key(bob);
    std::vector<unsigned char> secret(32);

    ECDH_compute_key(secret.data(), secret.size(), bob_pub, alice, NULL);
    std::cout << "ECDH shared secret: ";
    for (auto b : secret) printf("%02x", b);
    std::cout << std::endl;

    EC_KEY_free(alice);
    EC_KEY_free(bob);
}
