
long * OSSL_PARAM_locate(long *param_1,char *param_2)

{
  int iVar1;
  long *__s2;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (param_2 != (char *)0x0) {
    __s2 = (long *)*param_1;
    if (__s2 == (long *)0x0) {
      __s2 = (long *)0x0;
    }
    else {
      do {
        iVar1 = strcmp(param_2,(char *)__s2);
        if (iVar1 == 0) {
          return param_1;
        }
        __s2 = (long *)param_1[5];
        param_1 = param_1 + 5;
      } while (__s2 != (long *)0x0);
    }
    return __s2;
  }
  return (long *)0x0;
}

