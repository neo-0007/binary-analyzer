
undefined4 int_x509_param_set_hosts(long param_1,int param_2,char *param_3,size_t param_4)

{
  int iVar1;
  void *pvVar2;
  size_t __n;
  long lVar3;
  
  if ((param_4 == 0) || (param_3 == (char *)0x0)) {
    if ((param_3 == (char *)0x0) || (param_4 = strlen(param_3), param_4 == 0)) {
      if (param_2 != 0) {
        return 1;
      }
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),str_free);
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 1;
    }
  }
  else {
    __n = param_4 - 1;
    if (param_4 == 1) {
      __n = 1;
    }
    pvVar2 = memchr(param_3,0,__n);
    if (pvVar2 != (void *)0x0) {
      return 0;
    }
  }
  lVar3 = param_4 - (param_3[param_4 - 1] == '\0');
  if (param_2 == 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x38),str_free);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (param_3 == (char *)0x0 || lVar3 == 0) {
    return 1;
  }
  pvVar2 = (void *)CRYPTO_strndup(param_3,lVar3,"../crypto/x509/x509_vpm.c",0x3b);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 == 0) {
        CRYPTO_free(pvVar2);
        return 0;
      }
    }
    iVar1 = OPENSSL_sk_push(lVar3,pvVar2);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(pvVar2);
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x38));
    if (iVar1 == 0) {
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return 0;
}

