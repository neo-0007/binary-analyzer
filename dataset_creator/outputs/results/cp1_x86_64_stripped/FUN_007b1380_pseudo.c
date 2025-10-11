
undefined8 FUN_007b1380(ulong param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = DAT_0094b408;
  if (DAT_0094b408 != 0) {
    lVar4 = (param_1 & 0xffffffff) * 0x10;
    piVar1 = (int *)(DAT_0094b408 + 8 + lVar4);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      FUN_00709590(piVar1);
    }
    plVar5 = (long *)(lVar3 + lVar4);
    if (*plVar5 != 0) {
      FUN_006fd190();
      *plVar5 = 0;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660(piVar1);
    }
  }
  return 1;
}

