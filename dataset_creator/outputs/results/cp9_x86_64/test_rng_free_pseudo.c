
void test_rng_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x18));
    CRYPTO_free(*(void **)((long)param_1 + 0x20));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x40));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

