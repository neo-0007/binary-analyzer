
bool provider_create_child_cb(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar2 = ossl_lib_ctx_get_data(param_2,0x12,child_prov_ossl_ctx_method);
  if (lVar2 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x10));
    if (iVar1 != 0) {
      uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
      *(undefined8 *)(lVar2 + 8) = param_1;
      lVar4 = ossl_provider_find(param_2,uVar3,1);
      if (lVar4 == 0) {
        lVar4 = ossl_provider_new(param_2,uVar3,ossl_child_provider_init,1);
        if (lVar4 != 0) {
          iVar1 = ossl_provider_activate(lVar4,0,0);
          if (iVar1 != 0) {
            iVar1 = ossl_provider_set_child(lVar4,param_1);
            if (iVar1 != 0) {
              iVar1 = ossl_provider_add_to_store(lVar4,0,0);
              if (iVar1 != 0) {
                bVar5 = true;
                goto LAB_0041d890;
              }
            }
            ossl_provider_deactivate(lVar4,0);
            ossl_provider_free(lVar4);
          }
        }
        bVar5 = false;
      }
      else {
        ossl_provider_free(lVar4);
        iVar1 = ossl_provider_activate(lVar4,0,1);
        bVar5 = iVar1 != 0;
      }
LAB_0041d890:
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x10));
      return bVar5;
    }
  }
  return false;
}

