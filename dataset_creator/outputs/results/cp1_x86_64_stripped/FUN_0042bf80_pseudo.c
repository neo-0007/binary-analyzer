
undefined8 FUN_0042bf80(long param_1,long param_2,long param_3,long param_4)

{
  if (*(long *)(param_1 + 0x28) == 0) {
    if ((param_2 == 0) || ((*(long *)(param_1 + 0x30) == 0 && (param_3 == 0)))) {
      return 0;
    }
LAB_0042c000:
    FUN_004b7fa0();
    *(long *)(param_1 + 0x28) = param_2;
joined_r0x0042c00c:
    if (param_3 == 0) goto LAB_0042bfb8;
    param_2 = *(long *)(param_1 + 0x30);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      if (param_2 != 0) goto LAB_0042c000;
      goto joined_r0x0042c00c;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 != 0) goto LAB_0042c000;
  }
  FUN_004b7fa0(param_2);
  *(long *)(param_1 + 0x30) = param_3;
LAB_0042bfb8:
  if (param_4 != 0) {
    FUN_004b7f20(*(undefined8 *)(param_1 + 0x38));
    *(long *)(param_1 + 0x38) = param_4;
    FUN_004b7e70(param_4,4);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}

