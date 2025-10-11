
undefined8 FUN_004d8ce0(long param_1,long param_2,long param_3,long param_4)

{
  if (param_2 == 0 && *(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if ((param_3 != 0 || *(long *)(param_1 + 0x10) != 0) &&
     (param_4 != 0 || *(long *)(param_1 + 0x18) != 0)) {
    FUN_00541fa0(param_1 + 8);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
    return 1;
  }
  return 0;
}

