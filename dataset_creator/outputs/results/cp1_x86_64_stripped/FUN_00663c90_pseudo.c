
void FUN_00663c90(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00938928;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_006274c0();
  param_1[8] = param_2;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *param_1 = &PTR_FUN_009366a8;
  return;
}

