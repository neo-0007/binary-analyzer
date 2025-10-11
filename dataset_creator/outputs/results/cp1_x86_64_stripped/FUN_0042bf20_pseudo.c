
undefined2 FUN_0042bf20(long param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_004b7bb0(*(undefined8 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x10) != 1) {
LAB_0042bf3e:
    uVar1 = FUN_0042bd50(uVar2);
    return uVar1;
  }
  iVar3 = FUN_00436480(*(undefined8 *)(param_1 + 0x88));
  if (0 < iVar3) {
    iVar4 = FUN_0042d5f0(uVar2);
    if (iVar3 + 1 < iVar4) goto LAB_0042bf3e;
  }
  return 0;
}

