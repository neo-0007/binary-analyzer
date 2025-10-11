
void FUN_00710080(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_0093e160;
  if (DAT_0094a9a8 != '\0') {
    do {
      while( true ) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar1 < 2) break;
        FUN_00709660(piVar2);
        piVar2 = *(int **)(piVar2 + 0x21c);
        if (piVar2 == &DAT_0093e160) goto LAB_007100d0;
      }
      piVar2 = *(int **)(piVar2 + 0x21c);
    } while (piVar2 != &DAT_0093e160);
LAB_007100d0:
    iVar1 = DAT_0094a9ac;
    LOCK();
    DAT_0094a9ac = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660(&DAT_0094a9ac);
      return;
    }
  }
  return;
}

