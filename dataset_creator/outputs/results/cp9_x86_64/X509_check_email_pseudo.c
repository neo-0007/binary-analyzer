
undefined8 X509_check_email(undefined8 param_1,char *param_2,size_t param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  size_t __n;
  
  if (param_2 == (char *)0x0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
    __n = param_3 - 1;
    if (param_3 < 2) goto LAB_0058a1ab;
  }
  else {
    if (param_3 == 1) {
      pvVar1 = memchr(param_2,0,1);
      if (pvVar1 != (void *)0x0) {
        return 0xfffffffe;
      }
      goto LAB_0058a1ab;
    }
    __n = param_3 - 1;
    pvVar1 = memchr(param_2,0,__n);
    if (pvVar1 != (void *)0x0) {
      return 0xfffffffe;
    }
  }
  if (param_2[__n] == '\0') {
    param_3 = __n;
  }
LAB_0058a1ab:
  uVar2 = do_x509_check(param_1,param_2,param_3,param_4,1,0);
  return uVar2;
}

