
undefined8 * FUN_0041e290(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 == 0)) {
    param_4 = thunk_FUN_007129d0(param_3);
  }
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[3] = param_4;
  param_1[4] = 0xffffffffffffffff;
  return param_1;
}

