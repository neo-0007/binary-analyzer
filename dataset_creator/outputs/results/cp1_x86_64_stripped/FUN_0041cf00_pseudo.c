
undefined8 * FUN_0041cf00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  param_1[3] = 8;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}

