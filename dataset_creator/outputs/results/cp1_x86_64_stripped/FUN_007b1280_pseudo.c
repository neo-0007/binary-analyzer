
int FUN_007b1280(ulong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  lVar3 = DAT_0094b408;
  if ((DAT_0094b408 == 0) && (lVar3 = FUN_007abe10(&DAT_0094b408,FUN_007b1030,0,0), lVar3 == 0)) {
    iVar6 = -2;
  }
  else {
    lVar4 = (param_1 & 0xffffffff) * 0x10;
    piVar1 = (int *)(lVar3 + 8 + lVar4);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar6 != 0) {
      FUN_00709590(piVar1);
    }
    plVar5 = (long *)(lVar3 + lVar4);
    if (*plVar5 == 0) {
      iVar6 = 1;
      lVar3 = FUN_007b0710(param_2);
      *plVar5 = lVar3;
      if (lVar3 == 0) {
        iVar6 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
      }
    }
    else {
      FUN_007bff90();
      iVar6 = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660(piVar1);
    }
  }
  return iVar6;
}

