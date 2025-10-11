
int FUN_0044acc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
                undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00486880();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(param_1);
    }
    iVar2 = FUN_0044a490(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}

