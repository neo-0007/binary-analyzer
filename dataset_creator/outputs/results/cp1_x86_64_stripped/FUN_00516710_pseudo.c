
void FUN_00516710(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x40))(param_1[1]);
      lVar1 = *param_1;
    }
    param_1[1] = 0;
    FUN_00517b20(lVar1);
    *param_1 = 0;
    FUN_0041ad60(param_1,"../crypto/encode_decode/encoder_lib.c",0xfa);
    return;
  }
  return;
}

