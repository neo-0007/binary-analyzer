
void FUN_004efd00(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
      (**(code **)(*param_1 + 0x10))();
    }
    FUN_004ef690(param_1);
    FUN_004b9810(param_1[0x12]);
    FUN_004efcc0(param_1[1]);
    FUN_004b7fa0(param_1[2]);
    FUN_004b7fa0(param_1[3]);
    FUN_0041ad60(param_1[6],"../crypto/ec/ec_lib.c",0x87);
    FUN_0041ad60(param_1[0x16],"../crypto/ec/ec_lib.c",0x88);
    FUN_0041ad60(param_1,"../crypto/ec/ec_lib.c",0x89);
    return;
  }
  return;
}

