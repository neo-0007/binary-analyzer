
undefined8 FUN_004a2b60(int param_1,long *param_2)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    FUN_004227b0(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    return 1;
  }
  return 1;
}

