
undefined4 * ossl_policy_data_new(undefined8 *param_1,ASN1_OBJECT *param_2,int param_3)

{
  undefined4 *ptr;
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0 && param_2 == (ASN1_OBJECT *)0x0) {
    return (undefined4 *)0x0;
  }
  if ((param_2 != (ASN1_OBJECT *)0x0) && (param_2 = OBJ_dup(param_2), param_2 == (ASN1_OBJECT *)0x0)
     ) {
    return (undefined4 *)0x0;
  }
  ptr = (undefined4 *)CRYPTO_zalloc(0x20,"../crypto/x509/pcy_data.c",0x34);
  if (ptr == (undefined4 *)0x0) {
    ASN1_OBJECT_free(param_2);
    ERR_new();
    ERR_set_debug("../crypto/x509/pcy_data.c",0x37,"ossl_policy_data_new");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    lVar1 = OPENSSL_sk_new_null();
    *(long *)(ptr + 6) = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
      ASN1_OBJECT_free(param_2);
      ERR_new();
      ERR_set_debug("../crypto/x509/pcy_data.c",0x3e,"ossl_policy_data_new");
      ERR_set_error(0x22,0xc0100,0);
      return (undefined4 *)0x0;
    }
    if (param_3 != 0) {
      *ptr = 0x10;
    }
    if (param_2 == (ASN1_OBJECT *)0x0) {
      *(undefined8 *)(ptr + 2) = *param_1;
      *param_1 = 0;
    }
    else {
      *(ASN1_OBJECT **)(ptr + 2) = param_2;
      if (param_1 == (undefined8 *)0x0) {
        return ptr;
      }
    }
    *(undefined8 *)(ptr + 4) = param_1[1];
    param_1[1] = 0;
  }
  return ptr;
}

