
void FUN_004efcc0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*(code **)(*param_1 + 0x58) != (code *)0x0) {
      (**(code **)(*param_1 + 0x58))();
    }
    FUN_0041ad60(param_1,"../crypto/ec/ec_lib.c",0x2f1);
    return;
  }
  return;
}

