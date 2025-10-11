
void FUN_00795710(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x88);
  iVar1 = piVar2[1];
  piVar2[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    piVar2[2] = 0;
    piVar2[3] = 0;
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660();
      return;
    }
  }
  return;
}

