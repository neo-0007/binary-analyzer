//PBKDF2 Key Derivation in Function

#include <openssl/evp.h>
#include <iostream>
#include <iomanip>

void derive_key(const std::string& pass, const unsigned char* salt, int salt_len) {
    unsigned char key[32];
    PKCS5_PBKDF2_HMAC(pass.c_str(), pass.size(), salt, salt_len, 10000, EVP_sha256(), 32, key);

    std::cout << "Derived key: ";
    for (int i = 0; i < 32; i++) std::cout << std::hex << (int)key[i];
    std::cout << std::endl;
}

int main() {
    const unsigned char salt[] = "12345678";
    derive_key("mypassword", salt, 8);
}
