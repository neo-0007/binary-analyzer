
int BIO_vsnprintf(char *buf,size_t n,char *format,va_list args)

{
  int iVar1;
  long in_FS_OFFSET;
  size_t local_38;
  char *local_30 [2];
  int local_1c;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = n;
  local_30[0] = buf;
  iVar1 = _dopr(local_30,0,&local_38,&local_18,&local_1c,format,args);
  if ((iVar1 == 0) || (local_1c != 0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)local_18;
    if (0x7fffffff < local_18) {
      iVar1 = -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

