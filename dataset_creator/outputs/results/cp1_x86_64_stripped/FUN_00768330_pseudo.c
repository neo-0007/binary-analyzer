
long FUN_00768330(int param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 == (long *)0x0) {
    if (*(int *)(param_2 + 0x1d0) == 0) {
      return 0;
    }
  }
  else if (((int)plVar1[2] != 0) || (*(int *)(param_2 + 0x1d0) == 0)) goto LAB_0076834f;
  FUN_00768020(param_2);
  plVar1 = *(long **)(param_2 + 0x28);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
LAB_0076834f:
  return *plVar1 + (long)param_1 * 0x48;
}

