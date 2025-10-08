//HMAC-SHA256
#include <openssl/hmac.h>
#include <iostream>
#include <iomanip>
#include <string.h>

int main() {
    const char *key = "secret";
    const char *msg = "Hello HMAC";

    unsigned char* result;
    unsigned int len = 32;

    result = HMAC(EVP_sha256(), key, strlen(key), (unsigned char*)msg, strlen(msg), NULL, &len);

    std::cout << "HMAC-SHA256: ";
    for (unsigned int i = 0; i < len; i++) std::cout << std::hex << (int)result[i];
    std::cout << std::endl;
}
