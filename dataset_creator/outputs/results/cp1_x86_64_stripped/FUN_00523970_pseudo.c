
ulong FUN_00523970(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = FUN_00521cc0();
  if ((int)uVar1 < 1) {
    return (ulong)uVar1;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 2) {
LAB_005239e7:
      uVar3 = FUN_00521e40(param_1,param_2,param_3);
      return uVar3;
    }
  }
  else {
    if (param_1 != 8) goto LAB_0052399d;
    if (*(int *)(param_3 + 8) != 1) goto LAB_005239e7;
  }
  FUN_00423e90(param_3 + 0x40,0x32,*(undefined8 *)(param_3 + 0x20),0);
  *(long *)(param_3 + 0x20) = param_3 + 0x40;
  *(undefined4 *)(param_3 + 0x1c) = 0;
LAB_0052399d:
  uVar1 = FUN_00521e40(param_1,param_2,param_3);
  uVar3 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    if (param_1 == 7) {
      if (*(int *)(param_3 + 8) != 2) {
        return uVar3;
      }
    }
    else {
      if (param_1 != 2) {
        return uVar3;
      }
      if (*(int *)(param_3 + 8) != 1) {
        return uVar3;
      }
    }
    uVar2 = FUN_00424530(*(undefined8 *)(param_3 + 0x20),0);
    *(undefined8 *)(param_3 + 0x20) = uVar2;
  }
  return uVar3;
}

