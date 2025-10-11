
void trtable_free(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if ((*(uint *)((long)param_1 + 4) & 1) != 0) {
    if ((*(uint *)((long)param_1 + 4) & 2) != 0) {
      CRYPTO_free(*(void **)((long)param_1 + 0x10));
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}

