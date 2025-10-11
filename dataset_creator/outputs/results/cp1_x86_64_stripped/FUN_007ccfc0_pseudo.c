
void FUN_007ccfc0(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = DAT_0094abe8;
  if (DAT_0094abe8 != 0) {
    LOCK();
    piVar1 = (int *)(DAT_0094abe8 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      LOCK();
      bVar4 = DAT_0094abe0 == 0;
      if (bVar4) {
        DAT_0094abe0 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        FUN_00709590(&DAT_0094abe0);
      }
      if (*(int *)(lVar3 + 4) == 0) {
        FUN_007104f0(lVar3);
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
  }
  return;
}

