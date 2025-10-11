
undefined4 namemap_add_name_n_part_0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  long *ptr;
  void *ptr_00;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"../crypto/core_namemap.c",0xfe);
  if (ptr != (long *)0x0) {
    ptr_00 = (void *)CRYPTO_strndup(param_3,param_4,"../crypto/core_namemap.c",0xff);
    *ptr = (long)ptr_00;
    if (ptr_00 != (void *)0x0) {
      if (param_2 == 0) {
        LOCK();
        piVar1 = (int *)(param_1 + 0x18);
        param_2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        param_2 = param_2 + 1;
      }
      *(int *)(ptr + 1) = param_2;
      OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x10),ptr);
      iVar2 = OPENSSL_LH_error(*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 0) {
        return (int)ptr[1];
      }
      ptr_00 = (void *)*ptr;
    }
    CRYPTO_free(ptr_00);
  }
  CRYPTO_free(ptr);
  return 0;
}

