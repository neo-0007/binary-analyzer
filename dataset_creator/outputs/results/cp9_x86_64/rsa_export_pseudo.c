
undefined4 rsa_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = ossl_rsa_get0_pss_params_30();
  iVar1 = ossl_prov_is_running();
  if ((((param_1 == 0) || (iVar1 == 0)) || ((param_2 & 0x83) == 0)) ||
     (lVar4 = OSSL_PARAM_BLD_new(), lVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    if (((((param_2 & 0x80) == 0) ||
         (iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar3), iVar1 != 0)) ||
        (iVar1 = ossl_rsa_pss_params_30_todata(uVar3,lVar4,0), iVar1 != 0)) &&
       (((param_2 & 3) == 0 || (iVar1 = ossl_rsa_todata(param_1,lVar4,0,param_2 & 1), iVar1 != 0))))
    {
      lVar5 = OSSL_PARAM_BLD_to_param(lVar4);
      if (lVar5 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (*param_3)(lVar5,param_4);
        OSSL_PARAM_free(lVar5);
      }
    }
    else {
      uVar2 = 0;
    }
    OSSL_PARAM_BLD_free(lVar4);
  }
  return uVar2;
}

