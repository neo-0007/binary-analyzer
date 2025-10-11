
void bn_correct_top(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    plVar2 = (long *)(*param_1 + (long)iVar1 * 8);
    do {
      plVar2 = plVar2 + -1;
      if (*plVar2 != 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}

