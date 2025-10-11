
void FUN_0040b0f0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040b0e0(param_1,0x400);
  if (iVar1 == 0) {
    FUN_00412f00(*(undefined8 *)(param_1 + 0x28));
  }
  *(long *)(param_1 + 0x28) = param_2;
  if (param_2 != 0) {
    FUN_0040b0c0();
    return;
  }
  FUN_0040b0d0(param_1,0x400);
  return;
}

