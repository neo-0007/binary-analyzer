
void * ossl_siv128_new(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  
  ptr = CRYPTO_malloc(0x40,"../crypto/modes/siv128.c",0x96);
  pvVar2 = ptr;
  if (ptr != (void *)0x0) {
    iVar1 = ossl_siv128_init(ptr,param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 == 0) {
      pvVar2 = (void *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return pvVar2;
}

