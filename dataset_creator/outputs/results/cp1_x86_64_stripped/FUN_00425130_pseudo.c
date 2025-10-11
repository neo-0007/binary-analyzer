
void FUN_00425130(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    FUN_00436430(*(undefined8 *)(param_2 + 8),FUN_00424fd0);
    FUN_00545bd0(*(undefined8 *)(param_2 + 0x10),FUN_00424f90);
    FUN_00545790(*(undefined8 *)(param_2 + 0x10));
    FUN_0041ad60(param_2,"../crypto/property/property.c",0xe0);
  }
  if (param_3 != 0) {
    FUN_0054a4e0(*(undefined8 *)(param_3 + 8),param_1,0);
    return;
  }
  return;
}

