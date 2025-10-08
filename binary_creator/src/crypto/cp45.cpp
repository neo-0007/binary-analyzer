//RSA Encryption + Decryption in Functions
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <iostream>
#include <cstring>

RSA* generate_rsa() {
    RSA* rsa = RSA_new();
    BIGNUM* bn = BN_new();
    BN_set_word(bn, RSA_F4);
    RSA_generate_key_ex(rsa, 2048, bn, NULL);
    BN_free(bn);
    return rsa;
}

void rsa_encrypt_decrypt(RSA* rsa, const char* msg) {
    unsigned char ciphertext[256], decrypted[256];
    int len = RSA_public_encrypt(strlen(msg), (unsigned char*)msg, ciphertext, rsa, RSA_PKCS1_OAEP_PADDING);
    int decrypted_len = RSA_private_decrypt(len, ciphertext, decrypted, rsa, RSA_PKCS1_OAEP_PADDING);

    decrypted[decrypted_len] = '\0';
    std::cout << "Original: " << msg << "\nDecrypted: " << decrypted << std::endl;
}

int main() {
    RSA* rsa = generate_rsa();
    rsa_encrypt_decrypt(rsa, "RSA Encryption Function Test");
    RSA_free(rsa);
}
