
undefined8 FUN_00406b30(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_0040b0e0(param_1,0x400);
    if (iVar1 == 0) {
      FUN_00412f00(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_00406a90(param_1,0,0);
    FUN_004227b0(param_1,0x48);
    return 1;
  }
  return 1;
}

