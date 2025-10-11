
bool ossl_provider_activate(long param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_3 != 0) && ((*(byte *)(param_1 + 200) & 1) == 0)) {
    return true;
  }
  iVar2 = provider_activate(param_1,1,param_2);
  if (0 < iVar2) {
    if (iVar2 != 1) {
      return true;
    }
    lVar6 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
    if (lVar6 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
      ERR_set_error(0xf,0xc0103,0);
    }
    else {
      iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar6 + 0x20));
      if (iVar2 != 0) {
        bVar1 = *(byte *)(lVar6 + 0x48);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar6 + 0x20));
        if ((bVar1 >> 1 & 1) == 0) {
          iVar2 = evp_method_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar3 = ossl_encoder_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar4 = ossl_decoder_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          iVar5 = ossl_store_loader_store_cache_flush(*(undefined8 *)(param_1 + 0x50));
          return iVar2 + iVar3 + iVar4 + iVar5 == 4;
        }
        return true;
      }
    }
  }
  return false;
}

