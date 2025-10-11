
void OPENSSL_sk_pop_free(int *param_1,code *param_2)

{
  long lVar1;
  
  if (param_1 != (int *)0x0) {
    if (0 < *param_1) {
      lVar1 = 0;
      do {
        if (*(long *)(*(long *)(param_1 + 2) + lVar1 * 8) != 0) {
          (*param_2)();
        }
        lVar1 = lVar1 + 1;
      } while ((int)lVar1 < *param_1);
    }
    OPENSSL_sk_free(param_1);
    return;
  }
  return;
}

