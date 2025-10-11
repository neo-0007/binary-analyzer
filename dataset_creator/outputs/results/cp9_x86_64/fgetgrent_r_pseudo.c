
int fgetgrent_r(FILE *__stream,group *__resultbuf,char *__buffer,size_t __buflen,group **__result)

{
  int iVar1;
  
  iVar1 = __nss_fgetent_r();
  if (iVar1 != 0) {
    __resultbuf = (group *)0x0;
  }
  *__result = __resultbuf;
  return iVar1;
}

