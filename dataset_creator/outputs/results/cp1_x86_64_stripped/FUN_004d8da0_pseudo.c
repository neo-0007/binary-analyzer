
undefined8 FUN_004d8da0(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    FUN_004b7fa0(*(undefined8 *)(param_1 + 0x68));
    *(long *)(param_1 + 0x68) = param_2;
  }
  if (param_3 != 0) {
    FUN_004b7fa0(*(undefined8 *)(param_1 + 0x70));
    *(long *)(param_1 + 0x70) = param_3;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}

