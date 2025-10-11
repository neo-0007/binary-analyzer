
bool dh_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 7) != 0)) &&
     (iVar1 = ossl_dh_params_fromdata(param_1,param_3), iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return true;
    }
    iVar1 = ossl_dh_key_fromdata(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}

