
int fgetpwent_r(FILE *__stream,passwd *__resultbuf,char *__buffer,size_t __buflen,passwd **__result)

{
  int iVar1;
  
  iVar1 = __nss_fgetent_r();
  if (iVar1 != 0) {
    __resultbuf = (passwd *)0x0;
  }
  *__result = __resultbuf;
  return iVar1;
}

