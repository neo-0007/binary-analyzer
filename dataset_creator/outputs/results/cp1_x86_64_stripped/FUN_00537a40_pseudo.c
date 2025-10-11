
void FUN_00537a40(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x80);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_005379e0();
      return;
    }
    if (iVar2 + -1 < 1) {
      FUN_005379e0();
      return;
    }
  }
  return;
}

