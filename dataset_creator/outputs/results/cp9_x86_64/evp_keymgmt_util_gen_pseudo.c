
long evp_keymgmt_util_gen
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = evp_keymgmt_gen(param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = evp_keymgmt_util_assign_pkey(param_1,param_2,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  evp_keymgmt_freedata(param_2,lVar2);
  return 0;
}

