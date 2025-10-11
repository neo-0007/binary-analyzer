
void FUN_0053f190(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x40))(param_1[1]);
    param_1[1] = 0;
    thunk_FUN_0053f9f0(*param_1);
    FUN_0041ad60(param_1,"../crypto/evp/mac_lib.c",0x30);
    return;
  }
  return;
}

