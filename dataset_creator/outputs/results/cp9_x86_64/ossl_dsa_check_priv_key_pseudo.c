
undefined8 ossl_dsa_check_priv_key(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return uVar2;
}

