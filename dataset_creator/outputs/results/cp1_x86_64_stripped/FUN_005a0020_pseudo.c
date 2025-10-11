
undefined8 FUN_005a0020(int *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_005a97e0(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_1 == 1) {
    FUN_005b0200(*(undefined8 *)(param_1 + 2));
  }
  else if (*param_1 == 2) {
    FUN_005abf40(*(undefined8 *)(param_1 + 2));
  }
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_2;
  return 1;
}

