
int _CONF_add_string(CONF *conf,CONF_VALUE *section,CONF_VALUE *value)

{
  char *pcVar1;
  int iVar2;
  void *ptr;
  
  pcVar1 = section->value;
  value->section = section->section;
  iVar2 = OPENSSL_sk_push(pcVar1,value);
  if (iVar2 != 0) {
    iVar2 = 1;
    ptr = (void *)OPENSSL_LH_insert(conf->data,value);
    if (ptr != (void *)0x0) {
      OPENSSL_sk_delete_ptr(pcVar1,ptr);
      CRYPTO_free(*(void **)((long)ptr + 8));
      CRYPTO_free(*(void **)((long)ptr + 0x10));
      CRYPTO_free(ptr);
      return 1;
    }
  }
  return iVar2;
}

