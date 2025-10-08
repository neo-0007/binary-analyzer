//RSA Encryption
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

    const char *message = "Hello RSA!";
    unsigned char ciphertext[256];
    int len = RSA_public_encrypt(strlen(message), (unsigned char*)message, ciphertext, rsa, RSA_PKCS1_OAEP_PADDING);

    if (len == -1) { ERR_print_errors_fp(stderr); return 1; }

    std::cout << "Ciphertext: ";
    for (int i = 0; i < len; i++) printf("%02x", ciphertext[i]);
    std::cout << std::endl;

    RSA_free(rsa);
    BN_free(bn);
    return 0;
}
