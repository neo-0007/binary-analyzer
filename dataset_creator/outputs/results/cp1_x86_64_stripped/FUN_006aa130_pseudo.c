
void FUN_006aa130(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  plVar1 = (long *)*param_1;
  if (((int)param_1[1] == -1) && (plVar1 != (long *)0x0)) {
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar2 = *(int *)plVar1[2];
    }
    else {
      iVar2 = (**(code **)(*plVar1 + 0x48))();
    }
    if (iVar2 == -1) {
      *param_1 = 0;
      return;
    }
  }
  return;
}

