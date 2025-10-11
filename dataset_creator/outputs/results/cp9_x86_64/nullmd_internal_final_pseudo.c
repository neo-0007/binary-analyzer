
undefined8 nullmd_internal_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = 0;
  return 1;
}

