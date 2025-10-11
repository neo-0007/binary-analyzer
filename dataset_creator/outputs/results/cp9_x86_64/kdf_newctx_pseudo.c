
undefined8 * kdf_newctx(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x18,"../providers/implementations/exchange/kdf_exch.c",0x2e);
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_2;
      uVar2 = ossl_prov_ctx_get0_libctx(param_2);
      lVar3 = EVP_KDF_fetch(uVar2,param_1,0);
      if (lVar3 != 0) {
        uVar2 = EVP_KDF_CTX_new(lVar3);
        ptr[1] = uVar2;
        EVP_KDF_free(lVar3);
        if (ptr[1] != 0) {
          return ptr;
        }
      }
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}

