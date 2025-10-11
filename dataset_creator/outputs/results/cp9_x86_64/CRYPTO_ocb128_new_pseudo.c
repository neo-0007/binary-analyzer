
void * CRYPTO_ocb128_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  
  ptr = CRYPTO_malloc(0xb0,"../crypto/modes/ocb128.c",0x89);
  pvVar2 = ptr;
  if (ptr != (void *)0x0) {
    iVar1 = CRYPTO_ocb128_init(ptr,param_1,param_2,param_3,param_4,param_5);
    if (iVar1 == 0) {
      pvVar2 = (void *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return pvVar2;
}

