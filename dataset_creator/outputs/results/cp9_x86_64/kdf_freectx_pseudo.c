
void kdf_freectx(void *param_1)

{
  EVP_KDF_CTX_free(*(undefined8 *)((long)param_1 + 8));
  ossl_kdf_data_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}

