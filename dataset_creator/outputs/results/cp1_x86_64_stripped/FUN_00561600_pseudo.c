
undefined8 FUN_00561600(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if ((iVar1 != 0x16) && (iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x18)) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
}

