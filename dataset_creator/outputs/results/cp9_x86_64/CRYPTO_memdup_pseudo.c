
void * CRYPTO_memdup(void *param_1,ulong param_2,char *param_3,int param_4)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return (void *)0x0;
  }
  if (param_2 < 0x7fffffff) {
    pvVar1 = CRYPTO_malloc((int)param_2,param_3,param_4);
    if (pvVar1 != (void *)0x0) {
      pvVar1 = memcpy(pvVar1,param_1,param_2);
      return pvVar1;
    }
    ERR_new();
    ERR_set_debug("../crypto/o_str.c",0x3c,"CRYPTO_memdup");
    ERR_set_error(0xf,0xc0100,0);
  }
  return (void *)0x0;
}

