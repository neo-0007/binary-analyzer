//PBKDF2 Key Derivation
#include <openssl/evp.h>
#include <iostream>
#include <iomanip>
#include <string.h>

int main() {
    const char *pass = "mypassword";
    const unsigned char salt[] = "12345678";
    unsigned char key[32];

    PKCS5_PBKDF2_HMAC(pass, strlen(pass), salt, 8, 10000, EVP_sha256(), 32, key);

    std::cout << "Derived key: ";
    for (int i = 0; i < 32; i++) std::cout << std::hex << (int)key[i];
    std::cout << std::endl;
}
