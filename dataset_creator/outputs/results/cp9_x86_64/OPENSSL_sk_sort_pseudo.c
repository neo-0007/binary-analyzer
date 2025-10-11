
void OPENSSL_sk_sort(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((param_1[4] == 0) && (*(__compar_fn_t *)(param_1 + 6) != (__compar_fn_t)0x0)) {
      if (*param_1 < 2) {
        param_1[4] = 1;
      }
      else {
        qsort(*(void **)(param_1 + 2),(long)*param_1,8,*(__compar_fn_t *)(param_1 + 6));
        param_1[4] = 1;
      }
    }
    return;
  }
  return;
}

