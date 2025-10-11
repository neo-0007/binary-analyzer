
int FUN_0044a010(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
                long param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00486900();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))(param_1);
    }
    if (param_6 == 0) {
      return iVar1;
    }
    iVar2 = FUN_00449e10(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}

