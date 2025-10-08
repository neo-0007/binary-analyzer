//RSA: load public key from PEM file and encrypt
// crypto37_rsa_encrypt_from_pem.cpp
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    FILE *fp = fopen("rsa_pub.pem","rb");
    if(!fp){ std::cerr<<"pub not found\n"; return 1;}
    RSA *rsa = PEM_read_RSAPublicKey(fp, NULL, NULL, NULL); fclose(fp);
    const char *m = "File-based RSA";
    std::vector<unsigned char> out(RSA_size(rsa));
    int len = RSA_public_encrypt(strlen(m), (unsigned char*)m, out.data(), rsa, RSA_PKCS1_OAEP_PADDING);
    if (len==-1){ std::cerr<<"encrypt failed\n"; }
    else { std::cout<<"Ciphertext len: "<<len<<"\n"; }
    RSA_free(rsa);
}
