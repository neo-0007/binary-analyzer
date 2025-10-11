
undefined8 FUN_0042c040(long param_1,long param_2,long param_3)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    if ((param_2 == 0) || ((*(long *)(param_1 + 0x48) == 0 && (param_3 == 0)))) {
      return 0;
    }
LAB_0042c090:
    FUN_004b7f20();
    *(long *)(param_1 + 0x40) = param_2;
    FUN_004b7e70(param_2,4);
joined_r0x0042c0a9:
    if (param_3 == 0) goto LAB_0042c06b;
    param_2 = *(long *)(param_1 + 0x48);
  }
  else {
    if (*(long *)(param_1 + 0x48) != 0) {
      if (param_2 != 0) goto LAB_0042c090;
      goto joined_r0x0042c0a9;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 != 0) goto LAB_0042c090;
  }
  FUN_004b7f20(param_2);
  *(long *)(param_1 + 0x48) = param_3;
  FUN_004b7e70(param_3,4);
LAB_0042c06b:
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}

