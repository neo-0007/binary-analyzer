
char * BIO_ptr_ctrl(BIO *bp,int cmd,long larg)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (char *)0x0;
  lVar1 = BIO_ctrl(bp,cmd,larg,&local_18);
  pcVar2 = (char *)0x0;
  if (0 < lVar1) {
    pcVar2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

