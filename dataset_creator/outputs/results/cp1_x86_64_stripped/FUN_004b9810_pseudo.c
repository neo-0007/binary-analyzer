
void FUN_004b9810(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_004b7f20(param_1 + 8);
  FUN_004b7f20(param_1 + 0x20);
  FUN_004b7f20(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    return;
  }
  FUN_0041ad60(param_1,"../crypto/bn/bn_mont.c",0x104);
  return;
}

