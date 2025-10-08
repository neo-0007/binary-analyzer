//HMAC-SHA256 in Function
#include <openssl/hmac.h>
#include <iostream>
#include <iomanip>

void compute_hmac(const std::string& key, const std::string& msg) {
    unsigned int len;
    unsigned char* result = HMAC(EVP_sha256(), key.c_str(), key.size(), (unsigned char*)msg.c_str(), msg.size(), NULL, &len);

    std::cout << "HMAC-SHA256: ";
    for (unsigned int i = 0; i < len; i++) std::cout << std::hex << (int)result[i];
    std::cout << std::endl;
}

int main() {
    compute_hmac("key123", "Message HMAC Function");
}
