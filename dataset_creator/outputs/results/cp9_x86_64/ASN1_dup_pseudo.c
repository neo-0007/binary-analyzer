
void * ASN1_dup(undefined1 *i2d,undefined1 *d2i,void *x)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (x != (void *)0x0) {
    iVar1 = (*(code *)i2d)(x,0);
    if (0 < iVar1) {
      ptr = CRYPTO_malloc(iVar1 + 10,"../crypto/asn1/a_dup.c",0x1e);
      if (ptr != (void *)0x0) {
        local_40 = ptr;
        iVar1 = (*(code *)i2d)(x,&local_40);
        local_38 = ptr;
        pvVar2 = (void *)(*(code *)d2i)(0,&local_38,(long)iVar1);
        CRYPTO_free(ptr);
        goto LAB_005a15a6;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_dup.c",0x20,__func___1);
      ERR_set_error(0xd,0xc0100,0);
    }
  }
  pvVar2 = (void *)0x0;
LAB_005a15a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

