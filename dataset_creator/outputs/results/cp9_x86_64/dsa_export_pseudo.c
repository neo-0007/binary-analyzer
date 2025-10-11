
undefined4 dsa_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == 0)) || (lVar3 = OSSL_PARAM_BLD_new(), lVar3 == 0)) {
    return 0;
  }
  if ((param_2 & 0x84) == 0) {
LAB_0046d877:
    if (((param_2 & 3) == 0) || (iVar1 = dsa_key_todata(param_1,lVar3,0,param_2 & 1), iVar1 != 0)) {
      lVar4 = OSSL_PARAM_BLD_to_param(lVar3);
      if (lVar4 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (*param_3)(lVar4,param_4);
        OSSL_PARAM_free(lVar4);
      }
      goto LAB_0046d8d4;
    }
  }
  else {
    uVar5 = ossl_dsa_get0_params(param_1);
    iVar1 = ossl_ffc_params_todata(uVar5,lVar3,0);
    if (iVar1 != 0) goto LAB_0046d877;
  }
  uVar2 = 0;
LAB_0046d8d4:
  OSSL_PARAM_BLD_free(lVar3);
  return uVar2;
}

