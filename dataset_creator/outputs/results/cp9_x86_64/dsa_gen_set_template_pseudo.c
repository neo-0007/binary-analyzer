
undefined8 dsa_gen_set_template(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      return 0;
    }
    uVar1 = ossl_dsa_get0_params(param_2);
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

