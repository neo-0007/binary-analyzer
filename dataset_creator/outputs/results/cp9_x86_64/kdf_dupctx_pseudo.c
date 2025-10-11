
undefined8 * kdf_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  undefined8 *puVar4;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x18,"../providers/implementations/exchange/kdf_exch.c",0x7d),
     ptr != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar1;
    uVar1 = param_1[1];
    ptr[2] = param_1[2];
    lVar3 = EVP_KDF_CTX_dup(uVar1);
    ptr[1] = lVar3;
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
      CRYPTO_free(ptr);
    }
    else {
      iVar2 = ossl_kdf_data_up_ref(ptr[2]);
      puVar4 = ptr;
      if (iVar2 == 0) {
        EVP_KDF_CTX_free(ptr[1]);
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}

