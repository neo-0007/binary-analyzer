
int lstat(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = fstatat64(-100,__file,__buf,0x100);
  return iVar1;
}

