
undefined8 infopair_add(long *param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  long lVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"../crypto/provider_core.c",0x2ee);
  if (ptr == (undefined8 *)0x0) goto LAB_0041debf;
  if (*param_1 == 0) {
    lVar3 = OPENSSL_sk_new_null();
    *param_1 = lVar3;
    if (lVar3 != 0) goto LAB_0041de40;
LAB_0041de8d:
    pcVar2 = (char *)*ptr;
  }
  else {
LAB_0041de40:
    pcVar2 = CRYPTO_strdup(param_2,"../crypto/provider_core.c",0x2f1);
    *ptr = pcVar2;
    if (pcVar2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_3,"../crypto/provider_core.c",0x2f2);
      ptr[1] = pcVar2;
      if ((pcVar2 != (char *)0x0) && (iVar1 = OPENSSL_sk_push(*param_1,ptr), 0 < iVar1)) {
        return 1;
      }
      goto LAB_0041de8d;
    }
  }
  CRYPTO_free(pcVar2);
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free(ptr);
LAB_0041debf:
  ERR_new();
  ERR_set_debug("../crypto/provider_core.c",0x2fb,"infopair_add");
  ERR_set_error(0xf,0xc0100,0);
  return 0;
}

