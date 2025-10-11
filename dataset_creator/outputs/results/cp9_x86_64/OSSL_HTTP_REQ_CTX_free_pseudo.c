
void OSSL_HTTP_REQ_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((long)param_1 + 0x14) != 0) {
      BIO_free_all(*(BIO **)((long)param_1 + 0x18));
    }
    BIO_free(*(BIO **)((long)param_1 + 0x58));
    BIO_free(*(BIO **)((long)param_1 + 0x60));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(*(void **)((long)param_1 + 0x40));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x70));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

