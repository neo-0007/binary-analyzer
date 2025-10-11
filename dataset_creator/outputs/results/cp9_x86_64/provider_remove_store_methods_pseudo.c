
bool provider_remove_store_methods(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
  if (lVar6 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return false;
  }
  iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar6 + 0x20));
  if (iVar2 != 0) {
    bVar1 = *(byte *)(lVar6 + 0x48);
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
    if ((bVar1 >> 1 & 1) != 0) {
      return true;
    }
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xb8));
    if (iVar2 != 0) {
      CRYPTO_free(*(void **)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xb8));
      iVar2 = evp_method_store_remove_all_provided(param_1);
      iVar3 = ossl_encoder_store_remove_all_provided(param_1);
      iVar4 = ossl_decoder_store_remove_all_provided(param_1);
      iVar5 = ossl_store_loader_store_remove_all_provided(param_1);
      return iVar2 + iVar3 + iVar4 + iVar5 == 4;
    }
  }
  return false;
}

