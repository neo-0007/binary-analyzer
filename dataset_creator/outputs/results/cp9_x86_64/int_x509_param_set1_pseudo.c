
undefined8 int_x509_param_set1(undefined8 *param_1,size_t *param_2,char *param_3,size_t param_4)

{
  void *__dest;
  
  if (param_3 == (char *)0x0) {
    __dest = (void *)0x0;
    param_4 = 0;
  }
  else {
    if (param_4 == 0) {
      param_4 = strlen(param_3);
    }
    __dest = CRYPTO_malloc((int)param_4 + 1,"../crypto/x509/x509_vpm.c",0xf7);
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_3,param_4);
    *(undefined1 *)((long)__dest + param_4) = 0;
  }
  CRYPTO_free((void *)*param_1);
  *param_1 = __dest;
  if (param_2 != (size_t *)0x0) {
    *param_2 = param_4;
  }
  return 1;
}

