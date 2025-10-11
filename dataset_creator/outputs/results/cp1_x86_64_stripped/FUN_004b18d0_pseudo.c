
undefined8 FUN_004b18d0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_2 + 0x10);
  if (uVar4 == *(uint *)(param_3 + 0x10)) {
    iVar2 = FUN_004b77f0(param_2,param_3);
    if (0 < iVar2) {
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      uVar3 = FUN_004b16e0(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      return uVar3;
    }
    if (iVar2 == 0) {
      FUN_004b7b50(param_1);
      uVar3 = 1;
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(*(int *)(param_3 + 0x10) == 0);
      uVar3 = FUN_004b16e0(param_1,param_3,param_2);
    }
  }
  else {
    uVar3 = FUN_004b1610();
  }
  *(uint *)(param_1 + 0x10) = uVar4;
  return uVar3;
}

