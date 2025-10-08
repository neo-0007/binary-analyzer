//SHA256 Hash in a Function
#include <openssl/sha.h>
#include <iostream>
#include <iomanip>

void print_sha256(const std::string& msg) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256((unsigned char*)msg.c_str(), msg.size(), hash);

    std::cout << "SHA256: ";
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) std::cout << std::hex << (int)hash[i];
    std::cout << std::endl;
}

int main() {
    print_sha256("Hash me in a function!");
}
