
void xptable_free(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if ((*(uint *)((long)param_1 + 8) & 1) != 0) {
    if ((*(uint *)((long)param_1 + 8) & 2) != 0) {
      CRYPTO_free(*(void **)((long)param_1 + 0x18));
      CRYPTO_free(*(void **)((long)param_1 + 0x20));
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}

