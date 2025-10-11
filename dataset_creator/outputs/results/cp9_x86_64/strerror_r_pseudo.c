
char * strerror_r(int __errnum,char *__buf,size_t __buflen)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  lVar1 = __get_errlist();
  if (lVar1 != 0) {
    pcVar2 = (char *)dcgettext(&_libc_intl_domainname,lVar1,5);
    return pcVar2;
  }
  uVar3 = dcgettext(&_libc_intl_domainname,"Unknown error ",5);
  snprintf(__buf,__buflen,"%s%d",uVar3,__errnum);
  return __buf;
}

