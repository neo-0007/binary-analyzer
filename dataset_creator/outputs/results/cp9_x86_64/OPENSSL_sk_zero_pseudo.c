
void OPENSSL_sk_zero(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  memset(*(void **)(param_1 + 2),0,(long)*param_1 << 3);
  *param_1 = 0;
  return;
}

