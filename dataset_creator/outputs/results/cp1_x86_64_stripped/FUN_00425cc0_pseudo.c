
undefined8 FUN_00425cc0(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004222c0(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0054a3e0(*(undefined8 *)(param_1 + 8),FUN_00425040);
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_004222e0(*(undefined8 *)(param_1 + 0x10));
  return 1;
}

