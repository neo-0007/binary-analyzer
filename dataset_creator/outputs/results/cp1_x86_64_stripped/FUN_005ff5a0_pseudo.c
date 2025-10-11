
bool FUN_005ff5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_4 != 0) {
    bVar2 = false;
    param_4 = FUN_005b49e0(param_3,param_4);
    if (param_4 == 0) goto LAB_005ff5ea;
  }
  iVar1 = FUN_005ff2a0(param_1,param_2,param_4);
  bVar2 = iVar1 != 0;
LAB_005ff5ea:
  FUN_004ab560(param_4);
  return bVar2;
}

