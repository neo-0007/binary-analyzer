
undefined8 mac_hmac_settable_ctx_params(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx(param_2);
  lVar2 = EVP_MAC_fetch(uVar1,&DAT_007c9964,0);
  if (lVar2 != 0) {
    uVar1 = EVP_MAC_settable_ctx_params(lVar2);
    EVP_MAC_free(lVar2);
    return uVar1;
  }
  return 0;
}

