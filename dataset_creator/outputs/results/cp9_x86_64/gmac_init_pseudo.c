
undefined8 gmac_init(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (iVar1 = gmac_set_ctx_params(param_1,param_4), iVar1 != 0)) {
    if (param_2 == 0) {
      return 1;
    }
    uVar2 = gmac_setkey(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

