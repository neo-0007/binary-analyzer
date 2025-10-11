
undefined8 FUN_005ceaf0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004b7690();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_004b7690();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  lVar2 = FUN_004b7690();
  *(long *)(param_1 + 0x20) = lVar2;
  if (((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != 0)) && (lVar2 != 0)) {
    return 1;
  }
  FUN_004b7fa0();
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x18));
  FUN_004b7fa0(*(undefined8 *)(param_1 + 0x20));
  return 0;
}

