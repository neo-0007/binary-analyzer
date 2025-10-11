
undefined4 mac_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    lVar3 = OSSL_PARAM_BLD_new();
    if (lVar3 != 0) {
      if ((((param_2 & 1) == 0) || (iVar1 = key_to_params(param_1,lVar3,0), iVar1 != 0)) &&
         (lVar4 = OSSL_PARAM_BLD_to_param(lVar3), lVar4 != 0)) {
        uVar2 = (*param_3)(lVar4,param_4);
        OSSL_PARAM_free(lVar4);
      }
      else {
        uVar2 = 0;
      }
      OSSL_PARAM_BLD_free(lVar3);
      return uVar2;
    }
    return 0;
  }
  return 0;
}

