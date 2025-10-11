
undefined8 OPENSSL_sk_set(int *param_1,int param_2,undefined8 param_3)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8) = param_3;
    param_1[4] = 0;
    return *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
  }
  return 0;
}

