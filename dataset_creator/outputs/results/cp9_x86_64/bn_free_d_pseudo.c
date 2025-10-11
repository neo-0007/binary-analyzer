
void bn_free_d(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = BN_get_flags(param_1,8);
  if (iVar1 != 0) {
    CRYPTO_secure_clear_free
              (*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"../crypto/bn/bn_lib.c",0xcd);
    return;
  }
  if (param_2 != 0) {
    CRYPTO_clear_free((void *)*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,
                      "../crypto/bn/bn_lib.c",0xcf);
    return;
  }
  CRYPTO_free((void *)*param_1);
  return;
}

