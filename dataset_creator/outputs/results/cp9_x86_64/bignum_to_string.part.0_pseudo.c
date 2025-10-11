
void * bignum_to_string_part_0(BIGNUM *param_1)

{
  long lVar1;
  char *__s;
  size_t sVar2;
  void *pvVar3;
  
  __s = BN_bn2hex(param_1);
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    lVar1 = sVar2 + 3;
    pvVar3 = CRYPTO_malloc((int)lVar1,"../crypto/x509/v3_utl.c",0x93);
    if (pvVar3 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_utl.c",0x95,"bignum_to_string");
      ERR_set_error(0x22,0xc0100,0);
      CRYPTO_free(__s);
    }
    else {
      if (*__s == '-') {
        OPENSSL_strlcpy(pvVar3,&DAT_0080043c,lVar1);
        OPENSSL_strlcat(pvVar3,__s + 1,lVar1);
      }
      else {
        OPENSSL_strlcpy(pvVar3,"0x",lVar1);
        OPENSSL_strlcat(pvVar3,__s,lVar1);
      }
      CRYPTO_free(__s);
    }
    return pvVar3;
  }
  return (void *)0x0;
}

