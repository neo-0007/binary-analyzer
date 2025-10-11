
undefined8 x509v3_add_len_value(char *param_1,void *param_2,size_t param_3,long *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *ptr;
  long lVar4;
  
  puVar1 = (undefined8 *)*param_4;
  if ((param_1 == (char *)0x0) ||
     (param_1 = CRYPTO_strdup(param_1,"../crypto/x509/v3_utl.c",0x2f), param_1 != (char *)0x0)) {
    if (param_2 != (void *)0x0) {
      pvVar3 = memchr(param_2,0,param_3);
      if (pvVar3 != (void *)0x0) goto LAB_00588334;
      param_2 = (void *)CRYPTO_strndup(param_2,param_3,"../crypto/x509/v3_utl.c",0x35);
      if (param_2 != (void *)0x0) goto LAB_005883cf;
      goto LAB_00588337;
    }
LAB_005883cf:
    ptr = (undefined8 *)CRYPTO_malloc(0x18,"../crypto/x509/v3_utl.c",0x39);
    if (ptr == (undefined8 *)0x0) goto LAB_00588337;
    if (puVar1 != (undefined8 *)0x0) {
      *ptr = 0;
      lVar4 = *param_4;
      ptr[1] = param_1;
      ptr[2] = param_2;
      iVar2 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar2 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
      ERR_set_error(0x22,0xc0100,0);
      goto LAB_0058836f;
    }
    lVar4 = OPENSSL_sk_new_null();
    *param_4 = lVar4;
    if (lVar4 != 0) {
      *ptr = 0;
      ptr[1] = param_1;
      ptr[2] = param_2;
      iVar2 = OPENSSL_sk_push(lVar4,ptr);
      if (iVar2 != 0) {
        return 1;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
LAB_00588334:
    param_2 = (void *)0x0;
LAB_00588337:
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_utl.c",0x44,"x509v3_add_len_value");
    ERR_set_error(0x22,0xc0100,0);
    ptr = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      ptr = (undefined8 *)0x0;
      goto LAB_0058836f;
    }
  }
  OPENSSL_sk_free(*param_4);
  *param_4 = 0;
LAB_0058836f:
  CRYPTO_free(ptr);
  CRYPTO_free(param_1);
  CRYPTO_free(param_2);
  return 0;
}

