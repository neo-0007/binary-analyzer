//RSA: load private key from PEM and decrypt
// crypto38_rsa_decrypt_from_pem.cpp
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <iostream>
#include <vector>

int main() {
    FILE *fp = fopen("rsa_priv.pem","rb");
    if(!fp){ std::cerr<<"priv not found\n"; return 1;}
    RSA *rsa = PEM_read_RSAPrivateKey(fp, NULL, NULL, NULL); fclose(fp);
    // In practice, use real ciphertext; here we demonstrate API only
    std::vector<unsigned char> ct(RSA_size(rsa),0);
    std::vector<unsigned char> pt(RSA_size(rsa));
    int len = RSA_private_decrypt(ct.size(), ct.data(), pt.data(), rsa, RSA_PKCS1_OAEP_PADDING);
    if (len==-1) std::cerr<<"decrypt failed\n"; else std::cout<<"Decrypted len: "<<len<<"\n";
    RSA_free(rsa);
}
