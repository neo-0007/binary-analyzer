
void mac_freectx(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 8));
  EVP_MAC_CTX_free(*(undefined8 *)((long)param_1 + 0x18));
  ossl_mac_key_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}

