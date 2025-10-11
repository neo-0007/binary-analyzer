
bool FUN_0061b030(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((*param_2 == 0) ||
      (((iVar1 = FUN_004ae9e0(param_3,"%*scrlUrl: ",param_4,&DAT_0083e5c2), 0 < iVar1 &&
        (iVar1 = FUN_005b55e0(param_3,*param_2), iVar1 != 0)) &&
       (iVar1 = FUN_004ab7e0(param_3,&DAT_008243ea,1), 0 < iVar1)))) &&
     ((param_2[1] == 0 ||
      (((iVar1 = FUN_004ae9e0(param_3,"%*scrlNum: ",param_4,&DAT_0083e5c2), 0 < iVar1 &&
        (iVar1 = FUN_005baa80(param_3,param_2[1]), 0 < iVar1)) &&
       (iVar1 = FUN_004ab7e0(param_3,&DAT_008243ea,1), 0 < iVar1)))))) {
    if (param_2[2] == 0) {
      return true;
    }
    iVar1 = FUN_004ae9e0(param_3,"%*scrlTime: ",param_4,&DAT_0083e5c2);
    if ((0 < iVar1) && (iVar1 = FUN_005b4630(param_3,param_2[2]), iVar1 != 0)) {
      iVar1 = FUN_004ab7e0(param_3,&DAT_008243ea,1);
      return 0 < iVar1;
    }
  }
  return false;
}

