//HMAC-SHA512 in a Function
#include <openssl/hmac.h>
#include <iostream>
#include <iomanip>

void hmac_sha512(const std::string& key, const std::string& msg) {
    unsigned int len;
    unsigned char* result = HMAC(EVP_sha512(), key.c_str(), key.size(),
                                 (unsigned char*)msg.c_str(), msg.size(), NULL, &len);

    std::cout << "HMAC-SHA512: ";
    for (unsigned int i = 0; i < len; i++) std::cout << std::hex << (int)result[i];
    std::cout << std::endl;
}

int main() {
    hmac_sha512("mykey", "Hello HMAC-SHA512 Function");
}
