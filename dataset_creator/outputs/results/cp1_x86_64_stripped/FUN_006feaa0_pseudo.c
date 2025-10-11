
ulong FUN_006feaa0(uint *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  ulong uVar5;
  int *piVar6;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar6 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar6 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006feb60 to 006feb64 has its CatchHandler @ 006feb6a */
        FUN_00709590();
      }
      piVar6 = *(int **)(param_1 + 0x22);
      *(long *)(piVar6 + 2) = lVar2;
    }
    piVar6[1] = piVar6[1] + 1;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if ((plVar3 == (long *)0x0) || (puVar4 = (uint *)*plVar3, (uint *)plVar3[1] <= puVar4)) {
                    /* try { // try from 006feb43 to 006feb47 has its CatchHandler @ 006feb6a */
    uVar5 = FUN_006ff800(param_1);
  }
  else {
    *plVar3 = (long)(puVar4 + 1);
    uVar5 = (ulong)*puVar4;
  }
  if ((*param_1 & 0x8000) == 0) {
    piVar6 = *(int **)(param_1 + 0x22);
    iVar1 = piVar6[1];
    piVar6[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
        uVar5 = uVar5 & 0xffffffff;
      }
    }
  }
  return uVar5;
}

