
void ossl_provider_deregister_child_cb(long param_1)

{
  int iVar1;
  long lVar2;
  long *ptr;
  int iVar3;
  
  lVar2 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return;
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x20));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      ptr = (long *)OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar3);
      if (*ptr == param_1) {
        OPENSSL_sk_delete(*(undefined8 *)(lVar2 + 0x10),iVar3);
        CRYPTO_free(ptr);
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar1);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
  return;
}

