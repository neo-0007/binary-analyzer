
void bn_free(undefined8 *param_1,long param_2)

{
  BIGNUM *a;
  
  a = (BIGNUM *)*param_1;
  if (a != (BIGNUM *)0x0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      BN_free(a);
    }
    else {
      BN_clear_free(a);
    }
    *param_1 = 0;
  }
  return;
}

