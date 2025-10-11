
void ossl_asn1_string_embed_free(void *param_1,int param_2)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0x10) & 0x10) == 0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
  }
  if (param_2 == 0) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}

