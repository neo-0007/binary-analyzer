
byte ecx_import(long param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return param_2 & 3;
    }
    iVar1 = ossl_ecx_key_fromdata(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}

