
int fstat(int __fd,stat *__buf)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (-1 < __fd) {
    iVar1 = fstatat64(__fd,"",(stat64 *)__buf,0x1000);
    return iVar1;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
  return -1;
}

