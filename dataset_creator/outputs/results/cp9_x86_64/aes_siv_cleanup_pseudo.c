
void aes_siv_cleanup(long param_1)

{
  ossl_siv128_cleanup(param_1 + 0x18);
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x60));
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x58));
  return;
}

