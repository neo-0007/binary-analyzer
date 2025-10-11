
void FUN_00705ef0(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if ((DAT_00946920 != (uint *)0x0) && ((*DAT_00946920 & 0x8000) == 0)) {
    piVar2 = *(int **)(DAT_00946920 + 0x22);
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
      }
    }
  }
  DAT_00946934 = DAT_00946934 + -1;
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar3 = 1 < DAT_00946930;
    DAT_00946930 = 0;
    if (bVar3) {
      DAT_00946930 = DAT_00946934;
      FUN_00709660(&DAT_00946930);
      return;
    }
  }
  return;
}

