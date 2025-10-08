//Hash file with OpenSSL SHA256 (reads file)
// crypto43_sha256_file.cpp
#include <openssl/sha.h>
#include <fstream>
#include <iostream>
#include <vector>

int main() {
    std::ifstream f("crypto31_aes_cbc_helpers.cpp", std::ios::binary);
    if (!f) { std::cerr<<"file not found\n"; return 1; }
    SHA256_CTX ctx; SHA256_Init(&ctx);
    std::vector<char> buf(4096);
    while (f.read(buf.data(), buf.size()) || f.gcount()) {
        SHA256_Update(&ctx, buf.data(), f.gcount());
    }
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &ctx);
    for (int i=0;i<SHA256_DIGEST_LENGTH;i++) printf("%02x", hash[i]); std::cout<<"\n";
}
