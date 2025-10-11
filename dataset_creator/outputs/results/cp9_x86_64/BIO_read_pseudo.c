
int BIO_read(BIO *b,void *data,int len)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (-1 < len) {
    iVar1 = bio_read_intern(b,data,(long)len,local_18);
    if (0 < iVar1) {
      iVar1 = local_18[0];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

