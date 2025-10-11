
CONF_VALUE * _CONF_new_section(CONF *conf,char *section)

{
  lhash_st_CONF_VALUE *plVar1;
  char *pcVar2;
  CONF_VALUE *ptr;
  size_t sVar3;
  char *__dest;
  long lVar4;
  int iVar5;
  
  pcVar2 = (char *)OPENSSL_sk_new_null();
  if (pcVar2 == (char *)0x0) {
    ptr = (CONF_VALUE *)0x0;
    OPENSSL_sk_free(0);
  }
  else {
    ptr = (CONF_VALUE *)CRYPTO_malloc(0x18,"../crypto/conf/conf_api.c",0xc1);
    if (ptr == (CONF_VALUE *)0x0) {
      OPENSSL_sk_free(pcVar2);
    }
    else {
      sVar3 = strlen(section);
      iVar5 = (int)sVar3 + 1;
      __dest = (char *)CRYPTO_malloc(iVar5,"../crypto/conf/conf_api.c",0xc4);
      ptr->section = __dest;
      if (__dest != (char *)0x0) {
        memcpy(__dest,section,(long)iVar5);
        ptr->value = pcVar2;
        plVar1 = conf->data;
        ptr->name = (char *)0x0;
        lVar4 = OPENSSL_LH_insert(plVar1,ptr);
        if ((lVar4 == 0) && (iVar5 = OPENSSL_LH_error(conf->data), iVar5 < 1)) {
          return ptr;
        }
      }
      OPENSSL_sk_free(pcVar2);
      CRYPTO_free(ptr->section);
    }
  }
  CRYPTO_free(ptr);
  return (CONF_VALUE *)0x0;
}

