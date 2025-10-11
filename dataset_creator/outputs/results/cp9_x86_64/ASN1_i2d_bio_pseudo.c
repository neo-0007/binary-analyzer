
int ASN1_i2d_bio(undefined1 *i2d,BIO *out,uchar *x)

{
  int num;
  int iVar1;
  void *ptr;
  int iVar2;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  num = (*(code *)i2d)(x,0);
  iVar2 = 0;
  if (0 < num) {
    ptr = CRYPTO_malloc(num,"../crypto/asn1/a_i2d_fp.c",0x2c);
    if (ptr == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_i2d_fp.c",0x2e,__func___3);
      ERR_set_error(0xd,0xc0100,0);
      iVar2 = 0;
    }
    else {
      local_48 = ptr;
      (*(code *)i2d)(x,&local_48);
      iVar2 = 0;
      while( true ) {
        iVar1 = BIO_write(out,(void *)((long)iVar2 + (long)ptr),num);
        if (num == iVar1) break;
        if (iVar1 < 1) {
          iVar2 = 0;
          goto LAB_005a1a43;
        }
        iVar2 = iVar2 + iVar1;
        num = num - iVar1;
      }
      iVar2 = 1;
LAB_005a1a43:
      CRYPTO_free(ptr);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

