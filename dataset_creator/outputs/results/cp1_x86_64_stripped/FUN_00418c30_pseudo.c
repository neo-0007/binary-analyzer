
void FUN_00418c30(byte *param_1)

{
  if (param_1 == (byte *)0x0) {
    return;
  }
  if ((*param_1 & 1) != 0) {
    return;
  }
  FUN_00545bd0(*(undefined8 *)(param_1 + 0x10),FUN_004180c0);
  FUN_00545790(*(undefined8 *)(param_1 + 0x10));
  FUN_00422300(*(undefined8 *)(param_1 + 8));
  FUN_0041ad60(param_1,"../crypto/core_namemap.c",0x212);
  return;
}

