
long FUN_00698e70(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (-1 < param_3)) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    **(undefined4 **)(param_1 + 0x48) = 0;
    FUN_00698d90();
    return param_1;
  }
  return param_1;
}

