
void * i2s_ASN1_UTF8STRING(undefined8 param_1,int *param_2)

{
  void *__dest;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      __dest = CRYPTO_malloc(*param_2 + 1,"../crypto/x509/v3_utf8.c",0x26);
      if (__dest == (void *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_utf8.c",0x27,"i2s_ASN1_UTF8STRING");
        ERR_set_error(0x22,0xc0100,0);
      }
      else {
        memcpy(__dest,*(void **)(param_2 + 2),(long)*param_2);
        *(undefined1 *)((long)__dest + (long)*param_2) = 0;
      }
      return __dest;
    }
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_utf8.c",0x23,"i2s_ASN1_UTF8STRING");
  ERR_set_error(0x22,0xc0102,0);
  return (void *)0x0;
}

