
int do_i2b_bio(BIO *param_1)

{
  int len;
  int iVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (void *)0x0;
  len = do_i2b(&local_28);
  if (-1 < len) {
    iVar1 = BIO_write(param_1,local_28,len);
    CRYPTO_free(local_28);
    if (len == iVar1) goto LAB_0054474b;
  }
  iVar1 = -1;
LAB_0054474b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

