//Random Bytes Generator in Function (libsodium)
#include <sodium.h>
#include <iostream>

void print_random_bytes(int n) {
    unsigned char buf[n];
    randombytes_buf(buf, n);

    std::cout << "Random bytes: ";
    for (int i = 0; i < n; i++) printf("%02x", buf[i]);
    std::cout << std::endl;
}

int main() {
    if (sodium_init() < 0) return 1;
    print_random_bytes(16);
}
