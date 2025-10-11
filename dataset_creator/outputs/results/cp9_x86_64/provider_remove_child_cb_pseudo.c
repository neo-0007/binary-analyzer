
bool provider_remove_child_cb(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ossl_lib_ctx_get_data(param_2,0x12,child_prov_ossl_ctx_method);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(lVar2 + 0x30))(param_1);
    lVar2 = ossl_provider_find(param_2,uVar3,1);
    if (lVar2 != 0) {
      ossl_provider_free(lVar2);
      iVar1 = ossl_provider_is_child(lVar2);
      if (iVar1 == 0) {
        return true;
      }
      iVar1 = ossl_provider_deactivate(lVar2,1);
      return iVar1 != 0;
    }
  }
  return false;
}

