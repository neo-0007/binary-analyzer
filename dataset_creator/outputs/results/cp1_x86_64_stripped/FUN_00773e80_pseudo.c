
void FUN_00773e80(int *param_1)

{
  int *piVar1;
  
  for (piVar1 = param_1; (*(long *)(piVar1 + 2) != 0 || (*piVar1 != 0)); piVar1 = piVar1 + 4) {
    FUN_007104f0();
  }
  FUN_007104f0(param_1);
  return;
}

