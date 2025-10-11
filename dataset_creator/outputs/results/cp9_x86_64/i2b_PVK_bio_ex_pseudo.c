
int i2b_PVK_bio_ex(BIO *param_1)

{
  int len;
  int iVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  len = i2b_PVK_constprop_0(&local_28);
  if (len < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = BIO_write(param_1,local_28,len);
    CRYPTO_free(local_28);
    if (len != iVar1) {
      ERR_new();
      ERR_set_debug("../crypto/pem/pvkfmt.c",0x45c,__func___1);
      iVar1 = -1;
      ERR_set_error(9,0x76,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

