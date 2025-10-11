
ulong ossl_dh_params_todata(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar2 = DH_get_length();
  uVar3 = ossl_dh_get0_params(param_1);
  uVar4 = ossl_ffc_params_todata(uVar3,param_2,param_3);
  if (((int)uVar4 != 0) && (uVar4 = 1, 0 < lVar2)) {
    iVar1 = ossl_param_build_set_long(param_2,param_3,"priv_len",lVar2);
    return (ulong)(iVar1 != 0);
  }
  return uVar4;
}

