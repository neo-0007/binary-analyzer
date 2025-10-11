
char * ossl_algorithm_get1_first_name(undefined8 *param_1)

{
  char *pcVar1;
  char *__s;
  size_t sVar2;
  
  __s = (char *)*param_1;
  if (__s != (char *)0x0) {
    pcVar1 = strchr(__s,0x3a);
    sVar2 = (long)pcVar1 - (long)__s;
    if (pcVar1 == (char *)0x0) {
      sVar2 = strlen(__s);
    }
    __s = (char *)CRYPTO_strndup(__s,sVar2,"../crypto/core_algorithm.c",0xb3);
    if (__s == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/core_algorithm.c",0xb5,"ossl_algorithm_get1_first_name");
      ERR_set_error(6,0xc0100,0);
      return (char *)0x0;
    }
  }
  return __s;
}

