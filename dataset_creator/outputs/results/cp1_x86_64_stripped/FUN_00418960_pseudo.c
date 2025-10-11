
int FUN_00418960(long param_1,undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  
  if ((((param_1 != 0) || (param_1 = FUN_00418710(0), param_1 != 0)) &&
      (param_4 != 0 && param_3 != 0)) &&
     (iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    iVar1 = FUN_00418110(param_1,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_004181f0(param_1,param_2,param_3,param_4);
      FUN_004222e0(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_004222e0(*(undefined8 *)(param_1 + 8));
    }
    return iVar1;
  }
  return 0;
}

