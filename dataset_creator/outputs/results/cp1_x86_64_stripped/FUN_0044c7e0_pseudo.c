
undefined8 FUN_0044c7e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_00594160(param_2,param_1 + 0x18);
  param_1[0x16] = param_1 + 0x18;
  if (((*(byte *)((long)param_1 + 0x3c) & 2) == 0) && (*(int *)(param_1 + 2) - 1U < 2)) {
    *param_1 = FUN_00594d40;
    return 1;
  }
  *param_1 = FUN_005942b0;
  return 1;
}

