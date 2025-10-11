
undefined8 FUN_0053d300(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    FUN_00436430(*(undefined8 *)(param_1 + 0x78),FUN_0053d280);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x38) != 0) && (uVar1 = FUN_004222c0(), (int)uVar1 == 0)) {
      return uVar1;
    }
    FUN_00436430(*(undefined8 *)(param_1 + 0x78),FUN_0053d280);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_004222e0();
      return 1;
    }
  }
  return 1;
}

