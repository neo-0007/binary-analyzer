
long evp_keymgmt_util_fromdata
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = evp_keymgmt_newdata(param_2);
  if (((lVar2 != 0) && (iVar1 = evp_keymgmt_import(param_2,lVar2,param_3,param_4), iVar1 != 0)) &&
     (iVar1 = evp_keymgmt_util_assign_pkey(param_1,param_2,lVar2), iVar1 != 0)) {
    return lVar2;
  }
  evp_keymgmt_freedata(param_2,lVar2);
  return 0;
}

