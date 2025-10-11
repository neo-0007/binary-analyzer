
void * CRYPTO_clear_realloc(void *param_1,ulong param_2,ulong param_3,char *param_4,int param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    pvVar1 = CRYPTO_malloc((int)param_3,param_4,param_5);
    return pvVar1;
  }
  if (param_3 == 0) {
    pvVar1 = (void *)0x0;
    CRYPTO_clear_free(param_1,param_2,param_4,param_5);
  }
  else {
    if (param_3 < param_2) {
      OPENSSL_cleanse((void *)(param_3 + (long)param_1),param_2 - param_3);
      return param_1;
    }
    pvVar1 = CRYPTO_malloc((int)param_3,param_4,param_5);
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_1,param_2);
      CRYPTO_clear_free(param_1,param_2,param_4,param_5);
    }
  }
  return pvVar1;
}

