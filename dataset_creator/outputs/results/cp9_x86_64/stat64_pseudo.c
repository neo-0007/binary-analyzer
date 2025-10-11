
int stat64(char *__file,stat64 *__buf)

{
  int iVar1;
  
  iVar1 = fstatat64(-100,__file,__buf,0);
  return iVar1;
}

