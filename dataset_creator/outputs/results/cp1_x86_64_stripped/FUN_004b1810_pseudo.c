
undefined8 FUN_004b1810(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == *(int *)(param_3 + 0x10)) {
    uVar3 = FUN_004b1610();
    *(int *)(param_1 + 0x10) = iVar2;
    return uVar3;
  }
  iVar2 = FUN_004b77f0(param_2,param_3);
  if (iVar2 < 1) {
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_3 + 0x10);
      uVar3 = FUN_004b16e0(param_1,param_3,param_2);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      return uVar3;
    }
    FUN_004b7b50(param_1);
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = FUN_004b16e0(param_1,param_2,param_3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return uVar3;
}

