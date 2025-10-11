
undefined8 ossl_provider_default_props_update(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    return 0;
  }
  uVar3 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar2 + 0x20));
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar5);
      (**(code **)(lVar4 + 0x18))(param_2,*(undefined8 *)(lVar4 + 0x20));
      iVar5 = iVar6;
    } while (iVar6 != iVar1);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
  return 1;
}

