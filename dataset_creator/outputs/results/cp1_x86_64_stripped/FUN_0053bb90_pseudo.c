
void FUN_0053bb90(long *param_1)

{
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x40))(param_1[1]);
    param_1[1] = 0;
    thunk_FUN_0053bf90(*param_1);
    FUN_0041ad60(param_1,"../crypto/evp/kdf_lib.c",0x34);
    return;
  }
  return;
}

