
void evp_md_free_int(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 0x60));
  ossl_provider_free(*(undefined8 *)((long)param_1 + 0x70));
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x80));
  CRYPTO_free(param_1);
  return;
}

