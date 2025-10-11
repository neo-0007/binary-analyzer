
void CTLOG_STORE_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x10),CTLOG_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

