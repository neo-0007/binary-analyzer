
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c0180(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = DAT_0094ae00 == 0;
  if (bVar5) {
    DAT_0094ae00 = 1;
  }
  UNLOCK();
  if (!bVar5) {
    FUN_00709590(&DAT_0094ae00);
  }
  lVar1 = param_1 + 0x2c0;
  lVar2 = *(long *)(param_1 + 0x2c0);
  plVar3 = *(long **)(param_1 + 0x2c8);
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  _DAT_0094ae08 = 0;
  if (*(char *)(param_1 + 0x612) == '\0') {
    *(long **)(param_1 + 0x2c8) = &DAT_0094ae20;
    *(long *)(param_1 + 0x2c0) = DAT_0094ae20;
    *(long *)(DAT_0094ae20 + 8) = lVar1;
    _DAT_0094ae08 = 0;
    DAT_0094ae10 = DAT_0094ae10 + *(long *)(param_1 + 0x698);
    DAT_0094ae20 = lVar1;
    if (DAT_0093f0c8 < DAT_0094ae10) {
      FUN_007c00c0();
    }
  }
  else {
    FUN_0078a5b0(param_1,0);
  }
  iVar4 = DAT_0094ae00;
  LOCK();
  DAT_0094ae00 = 0;
  UNLOCK();
  if (1 < iVar4) {
    FUN_00709660(&DAT_0094ae00);
    return;
  }
  return;
}

