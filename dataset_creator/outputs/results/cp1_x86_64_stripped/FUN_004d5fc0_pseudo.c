
undefined8 FUN_004d5fc0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_4 != 0 || *(long *)(param_1 + 0x18) != 0) {
    FUN_00541fa0(param_1 + 8);
    FUN_004d4a80(param_1);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    return 1;
  }
  return 0;
}

