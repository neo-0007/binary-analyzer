
void FUN_007760a0(long param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    LOCK();
    bVar3 = DAT_0094abe0 == 0;
    if (bVar3) {
      DAT_0094abe0 = 1;
    }
    UNLOCK();
    if (!bVar3) {
      FUN_00709590(&DAT_0094abe0);
    }
    if (*(int *)(param_1 + -0x14) == 0) {
      FUN_007104f0(param_1 + -0x18);
    }
    iVar2 = DAT_0094abe0;
    LOCK();
    DAT_0094abe0 = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660(&DAT_0094abe0);
      return;
    }
  }
  return;
}

