
undefined8
drbg_ctr_instantiate_wrapper
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = drbg_ctr_set_ctx_params(param_1,param_6);
    if (iVar1 != 0) {
      uVar2 = ossl_prov_drbg_instantiate(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
  }
  return 0;
}

