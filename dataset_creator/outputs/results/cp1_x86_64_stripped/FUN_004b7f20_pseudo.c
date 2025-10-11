
void FUN_004b7f20(long *param_1)

{
  int iVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    iVar1 = FUN_004b7e80(param_1,2);
    if (iVar1 == 0) {
      FUN_004b7e90(param_1,1);
    }
  }
  iVar1 = FUN_004b7e80(param_1,1);
  if (iVar1 == 0) {
    return;
  }
  FUN_004227b0(param_1,0x18);
  FUN_0041ad60(param_1,"../crypto/bn/bn_lib.c",0xdd);
  return;
}

