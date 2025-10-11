
void FUN_004da4d0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_004b7f20(*param_1);
    FUN_004b7f20(param_1[1]);
    FUN_0041ad60(param_1,"../crypto/dsa/dsa_sign.c",0x30);
    return;
  }
  return;
}

