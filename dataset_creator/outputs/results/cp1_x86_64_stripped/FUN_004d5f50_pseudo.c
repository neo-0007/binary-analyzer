
undefined8 FUN_004d5f50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = FUN_004b7bb0();
  }
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004b7bb0();
  uVar3 = FUN_004b7ad0(uVar2,iVar1);
  return uVar3;
}

