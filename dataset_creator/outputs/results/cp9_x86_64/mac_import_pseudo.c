
undefined8 mac_import(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    uVar2 = mac_key_fromdata(param_1,param_3);
    return uVar2;
  }
  return 0;
}

