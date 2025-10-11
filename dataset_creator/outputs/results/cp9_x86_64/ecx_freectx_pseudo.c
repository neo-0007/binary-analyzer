
void ecx_freectx(void *param_1)

{
  ossl_ecx_key_free(*(undefined8 *)((long)param_1 + 8));
  ossl_ecx_key_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}

