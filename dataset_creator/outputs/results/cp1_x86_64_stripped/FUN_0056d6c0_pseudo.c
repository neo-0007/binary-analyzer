
uint FUN_0056d6c0(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = FUN_004b75a0();
    iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x38),uVar3);
    if (-1 < iVar1) {
      uVar2 = FUN_004b7840(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28));
      return uVar2 >> 0x1f;
    }
  }
  return 0;
}

