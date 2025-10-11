
void * CRYPTO_strndup(void *param_1,undefined8 param_2,char *param_3,int param_4)

{
  size_t __n;
  void *__dest;
  
  if (param_1 != (void *)0x0) {
    __n = OPENSSL_strnlen();
    __dest = CRYPTO_malloc((int)__n + 1,param_3,param_4);
    if (__dest != (void *)0x0) {
      __dest = memcpy(__dest,param_1,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    return __dest;
  }
  return (void *)0x0;
}

