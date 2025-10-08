//RSA Decryption
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/err.h>
#include <iostream>
#include <cstring>

int main() {
    RSA *rsa = RSA_new();
    BIGNUM *bn = BN_new();
    BN_set_word(bn, RSA_F4);
    RSA_generate_key_ex(rsa, 2048, bn, NULL);

    const char *msg = "Hello RSA!";
    unsigned char ciphertext[256], decrypted[256];
    int len = RSA_public_encrypt(strlen(msg), (unsigned char*)msg, ciphertext, rsa, RSA_PKCS1_OAEP_PADDING);
    int decrypted_len = RSA_private_decrypt(len, ciphertext, decrypted, rsa, RSA_PKCS1_OAEP_PADDING);

    if (decrypted_len == -1) { ERR_print_errors_fp(stderr); return 1; }

    decrypted[decrypted_len] = '\0';
    std::cout << "Decrypted: " << decrypted << std::endl;

    RSA_free(rsa);
    BN_free(bn);
    return 0;
}
