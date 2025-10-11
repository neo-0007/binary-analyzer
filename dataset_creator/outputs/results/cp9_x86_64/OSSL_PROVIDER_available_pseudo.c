
byte OSSL_PROVIDER_available(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return 0;
  }
  iVar2 = provider_activate_fallbacks(lVar3);
  if (((iVar2 != 0) &&
      (pbVar4 = (byte *)ossl_provider_find(param_1,param_2,0), pbVar4 != (byte *)0x0)) &&
     (iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(pbVar4 + 8)), iVar2 != 0)) {
    bVar1 = *pbVar4;
    CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar4 + 8));
    ossl_provider_free(pbVar4);
    return bVar1 >> 1 & 1;
  }
  return 0;
}

