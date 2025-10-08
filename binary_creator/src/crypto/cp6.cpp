#include <sodium.h>
#include <iostream>

int main() {
    if (sodium_init() < 0) {
        std::cerr << "libsodium init failed\n";
        return 1;
    }

    unsigned char random_bytes[16];
    randombytes_buf(random_bytes, sizeof(random_bytes));

    std::cout << "Random bytes: ";
    for (unsigned char b : random_bytes)
        printf("%02x", b);
    std::cout << std::endl;
    return 0;
}