
long BIO_int_ctrl(BIO *bp,int cmd,long larg,int iarg)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = iarg;
  lVar1 = BIO_ctrl(bp,cmd,larg,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

