
int * FUN_0055e460(long param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    return *(int **)(param_1 + 0x20);
  }
  iVar1 = FUN_0055e430(param_1);
  piVar2 = (int *)0x0;
  if ((iVar1 != 0) && (piVar2 = *(int **)(param_1 + 0x20), piVar2 != (int *)0x0)) {
    if (*piVar2 == 4) {
      return *(int **)(piVar2 + 2);
    }
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

