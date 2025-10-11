
undefined8 buffer_new(long param_1)

{
  undefined4 *ptr;
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  ptr = (undefined4 *)CRYPTO_zalloc(0x28,"../crypto/bio/bf_buff.c",0x2f);
  if (ptr != (undefined4 *)0x0) {
    *ptr = 0x1000;
    pvVar1 = CRYPTO_malloc(0x1000,"../crypto/bio/bf_buff.c",0x34);
    *(void **)(ptr + 2) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      CRYPTO_free(ptr);
      return 0;
    }
    ptr[1] = 0x1000;
    pvVar1 = CRYPTO_malloc(0x1000,"../crypto/bio/bf_buff.c",0x3a);
    *(void **)(ptr + 6) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      CRYPTO_free(*(void **)(ptr + 2));
      CRYPTO_free(ptr);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar2 = 1;
      *(undefined4 **)(param_1 + 0x40) = ptr;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return uVar2;
}

