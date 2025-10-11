
undefined8 BIO_ADDR_rawaddress(short *param_1,void *param_2,size_t *param_3)

{
  short sVar1;
  short *__s;
  size_t __n;
  
  __n = 4;
  __s = param_1 + 2;
  sVar1 = *param_1;
  if (sVar1 != 2) {
    __s = param_1 + 4;
    __n = 0x10;
    if (sVar1 != 10) {
      if (sVar1 != 1) {
        return 0;
      }
      __s = param_1 + 1;
      __n = strlen((char *)__s);
    }
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,__s,__n);
  }
  if (param_3 != (size_t *)0x0) {
    *param_3 = __n;
  }
  return 1;
}

