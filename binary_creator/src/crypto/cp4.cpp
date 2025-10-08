//sha-256 older version (depricated)

#include <iomanip>
#include <openssl/sha.h>
#include <iostream>
#include <string.h>

int main() {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    const char *input = "OpenSSL SHA256 Demo";

    SHA256((unsigned char*)input, strlen(input), hash);

    std::cout << "SHA-256: ";
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    std::cout << std::endl;
    return 0;
}