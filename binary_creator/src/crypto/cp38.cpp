//ECDSA sign/verify with keys from PEM

#include <openssl/pem.h>
#include <openssl/ecdsa.h>
#include <openssl/sha.h>
#include <iostream>
#include <vector>

int main() {
    FILE *f = fopen("ec_priv.pem","rb");
    if (!f) { std::cerr<<"No key\n"; return 1; }
    EC_KEY *e = PEM_read_ECPrivateKey(f, NULL, NULL, NULL); fclose(f);
    const char *m="ecdsa pem";
    unsigned char h[SHA256_DIGEST_LENGTH]; SHA256((unsigned char*)m, strlen(m), h);
    unsigned char *sig = NULL; unsigned int siglen = ECDSA_size(e);
    sig = (unsigned char*)OPENSSL_malloc(siglen);
    if (ECDSA_sign(0,h,SHA256_DIGEST_LENGTH,sig,&siglen,e)) std::cout<<"Signed length "<<siglen<<"\n";
    EC_KEY_free(e); OPENSSL_free(sig);
}
