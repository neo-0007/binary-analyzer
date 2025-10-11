
undefined8 null_einit(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_1 = 1;
    uVar1 = 1;
  }
  return uVar1;
}

