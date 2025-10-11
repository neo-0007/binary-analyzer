
undefined8 FUN_004d6060(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    FUN_004b7f20(*(undefined8 *)(param_1 + 0x70));
    *(long *)(param_1 + 0x70) = param_2;
  }
  if (param_3 != 0) {
    FUN_004b7f20(*(undefined8 *)(param_1 + 0x78));
    *(long *)(param_1 + 0x78) = param_3;
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  return 1;
}

