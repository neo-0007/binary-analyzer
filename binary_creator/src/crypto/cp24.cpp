//Random Bytes (libsodium)
#include <sodium.h>
#include <iostream>

int main() {
    if (sodium_init() < 0) return 1;

    unsigned char buf[16];
    randombytes_buf(buf, sizeof(buf));

    std::cout << "Random bytes: ";
    for (auto b : buf) printf("%02x", b);
    std::cout << std::endl;
}
