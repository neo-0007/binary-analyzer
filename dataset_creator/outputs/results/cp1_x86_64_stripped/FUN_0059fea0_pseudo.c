
undefined8 FUN_0059fea0(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 1) {
    uVar1 = FUN_005a1b20(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 != 2) {
    return 1;
  }
  uVar1 = FUN_005a97e0(*(undefined8 *)(param_1 + 2));
  return uVar1;
}

