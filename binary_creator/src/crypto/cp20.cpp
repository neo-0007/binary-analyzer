//SHA1 Hash
#include <openssl/sha.h>
#include <iostream>
#include <iomanip>
#include <string.h>

int main() {
    const char *msg = "Hello SHA1";
    unsigned char hash[SHA_DIGEST_LENGTH];
    SHA1((unsigned char*)msg, strlen(msg), hash);

    std::cout << "SHA1: ";
    for (int i = 0; i < SHA_DIGEST_LENGTH; i++) std::cout << std::hex << (int)hash[i];
    std::cout << std::endl;
}

