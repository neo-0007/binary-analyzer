
int FUN_006b8fa0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  while( true ) {
    if (*param_1 != 0x2f) {
      return iVar1;
    }
    if (*(long *)(param_1 + 4) == 0) break;
    param_1 = *(int **)(param_1 + 6);
    iVar1 = iVar1 + 1;
    if (param_1 == (int *)0x0) {
      return iVar1;
    }
  }
  return iVar1;
}

