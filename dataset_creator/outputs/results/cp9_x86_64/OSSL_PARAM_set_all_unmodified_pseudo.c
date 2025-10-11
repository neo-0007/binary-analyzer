
void OSSL_PARAM_set_all_unmodified(long *param_1)

{
  if (param_1 != (long *)0x0) {
    for (; *param_1 != 0; param_1 = param_1 + 5) {
      param_1[4] = -1;
    }
  }
  return;
}

