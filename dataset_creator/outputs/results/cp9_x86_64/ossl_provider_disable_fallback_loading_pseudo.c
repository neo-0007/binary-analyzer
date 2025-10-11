
undefined8 ossl_provider_disable_fallback_loading(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return 0;
  }
  uVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x20));
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  *(byte *)(lVar1 + 0x48) = *(byte *)(lVar1 + 0x48) & 0xfe;
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x20));
  return 1;
}

