
undefined8 ossl_dsa_check_params(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    uVar2 = ossl_ffc_params_full_validate();
    return uVar2;
  }
  uVar2 = ossl_ffc_params_simple_validate(*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,param_3);
  return uVar2;
}

