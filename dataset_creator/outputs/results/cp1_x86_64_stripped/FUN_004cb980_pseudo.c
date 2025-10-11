
undefined8 FUN_004cb980(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x11) == -1) {
    return 0;
  }
  if (param_3 != 0) {
    iVar1 = FUN_004096f0(*param_1);
    if (iVar1 < 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x11);
    if (0 < iVar2) {
      uVar3 = (long)(iVar1 - iVar2);
      if (param_3 < (ulong)(long)(iVar1 - iVar2)) {
        uVar3 = param_3;
      }
      thunk_FUN_00713a50((long)(param_1 + 0xd) + (long)iVar2,param_2,uVar3);
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + (int)uVar3;
      param_3 = param_3 - uVar3;
      if (param_3 == 0) {
        return 1;
      }
      param_2 = param_2 + uVar3;
      iVar2 = FUN_00409710(*param_1,param_1 + 9,param_1 + 0xd,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
    }
    uVar3 = (ulong)iVar1;
    for (; uVar3 < param_3; param_3 = param_3 - uVar3) {
      iVar2 = FUN_00409710(*param_1,param_1 + 9,param_2,iVar1);
      if (iVar2 < 1) {
        return 0;
      }
      param_2 = param_2 + uVar3;
    }
    thunk_FUN_00713a50(param_1 + 0xd,param_2,param_3);
    *(int *)(param_1 + 0x11) = (int)param_3;
  }
  return 1;
}

