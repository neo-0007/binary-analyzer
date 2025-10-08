//SHA512 Hash
#include <openssl/sha.h>
#include <iostream>
#include <iomanip>
#include <string.h>

int main() {
    const char *msg = "Hello SHA512";
    unsigned char hash[SHA512_DIGEST_LENGTH];
    SHA512((unsigned char*)msg, strlen(msg), hash);

    std::cout << "SHA512: ";
    for (int i = 0; i < SHA512_DIGEST_LENGTH; i++) std::cout << std::hex << (int)hash[i];
    std::cout << std::endl;
}
