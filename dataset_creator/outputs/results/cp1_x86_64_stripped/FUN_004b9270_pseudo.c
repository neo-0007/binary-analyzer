
undefined4
FUN_004b9270(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
            undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = FUN_004b8a20(param_1,param_2,param_4,param_5);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_4 + 0x10) == 0) {
    lVar3 = 0;
  }
  else {
    param_4 = FUN_004b82e0(param_4);
    if (param_4 == 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0;
    lVar3 = param_4;
  }
  uVar2 = FUN_004b9170(param_1,param_1,param_3,param_4);
  FUN_004b7fa0(lVar3);
  return uVar2;
}

