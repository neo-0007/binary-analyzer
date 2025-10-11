
undefined8
ossl_ffc_params_set_validate_params
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = ossl_ffc_params_set_seed();
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 0x30) = param_4;
    uVar1 = 1;
  }
  return uVar1;
}

