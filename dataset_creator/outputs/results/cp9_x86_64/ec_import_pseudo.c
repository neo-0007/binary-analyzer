
undefined8 ec_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 4) != 0)) {
    uVar2 = common_import_part_0(param_1,param_2,param_3,0);
    return uVar2;
  }
  return 0;
}

