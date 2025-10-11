
void FUN_00779db0(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = DAT_0094acf0 == 0;
  if (bVar3) {
    DAT_0094acf0 = 1;
  }
  UNLOCK();
  iVar1 = DAT_0094acf0;
  piVar2 = DAT_0094acf8;
  if (!bVar3) {
    FUN_00709590(&DAT_0094acf0);
    iVar1 = DAT_0094acf0;
    piVar2 = DAT_0094acf8;
  }
  for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0x84)) {
    while (*piVar2 != 0) {
      piVar2 = *(int **)(piVar2 + 0x84);
      if (piVar2 == (int *)0x0) goto LAB_00779df0;
    }
    DAT_0094acf0 = iVar1;
    *piVar2 = 2;
    iVar1 = DAT_0094acf0;
  }
LAB_00779df0:
  LOCK();
  DAT_0094acf0 = 0;
  UNLOCK();
  if (1 < iVar1) {
    FUN_00709660(&DAT_0094acf0);
    return;
  }
  return;
}

