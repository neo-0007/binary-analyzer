//HMAC-SHA512 with reusable function
#include <openssl/hmac.h>
#include <iostream>
#include <vector>

std::vector<unsigned char> hmac_sha512(const std::string &key, const std::string &msg) {
    unsigned int len;
    unsigned char *res = HMAC(EVP_sha512(), key.data(), key.size(), (unsigned char*)msg.data(), msg.size(), NULL, &len);
    return std::vector<unsigned char>(res, res+len);
}

int main() {
    auto mac = hmac_sha512("k","message");
    std::cout<<"MAC len "<<mac.size()<<"\n";
}
