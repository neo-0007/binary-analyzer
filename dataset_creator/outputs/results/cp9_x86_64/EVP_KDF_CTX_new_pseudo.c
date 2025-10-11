
undefined8 * EVP_KDF_CTX_new(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *ptr;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"../crypto/evp/kdf_lib.c",0x1e);
  if (ptr == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/evp/kdf_lib.c",0x22,"EVP_KDF_CTX_new");
    ERR_set_error(6,0xc0100,0);
  }
  else {
    pcVar1 = (code *)param_1[6];
    uVar3 = ossl_provider_ctx(*param_1);
    lVar4 = (*pcVar1)(uVar3);
    ptr[1] = lVar4;
    if (lVar4 != 0) {
      iVar2 = EVP_KDF_up_ref(param_1);
      if (iVar2 != 0) {
        *ptr = param_1;
        return ptr;
      }
    }
    ERR_new();
    ERR_set_debug("../crypto/evp/kdf_lib.c",0x22,"EVP_KDF_CTX_new");
    ERR_set_error(6,0xc0100,0);
    (*(code *)param_1[8])(ptr[1]);
  }
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

