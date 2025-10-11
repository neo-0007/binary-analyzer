
void FUN_005c98d0(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  FUN_0041ad60(*(undefined8 *)(param_1 + 0x20),"../crypto/conf/conf_api.c",0x8d);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00545d80(*(long *)(param_1 + 0x10),0);
    FUN_00545c40(*(undefined8 *)(param_1 + 0x10),FUN_005c9550,*(undefined8 *)(param_1 + 0x10));
    FUN_00545bd0(*(undefined8 *)(param_1 + 0x10),FUN_005c9580);
    FUN_00545790(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}

