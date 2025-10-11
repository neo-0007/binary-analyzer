
ulong FUN_006fec50(uint param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((*param_2 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = *(int **)(param_2 + 0x22);
    if (*(long *)(piVar5 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006fed20 to 006fed24 has its CatchHandler @ 006fed2a */
        FUN_00709590();
      }
      piVar5 = *(int **)(param_2 + 0x22);
      *(long *)(piVar5 + 2) = lVar2;
    }
    piVar5[1] = piVar5[1] + 1;
  }
  lVar2 = *(long *)(param_2 + 0x28);
  uVar4 = (ulong)param_1;
  if ((lVar2 == 0) || (puVar3 = *(uint **)(lVar2 + 0x20), *(uint **)(lVar2 + 0x28) <= puVar3)) {
                    /* try { // try from 006fecfd to 006fed01 has its CatchHandler @ 006fed2a */
    uVar4 = FUN_006ff380(param_2,param_1);
  }
  else {
    *(uint **)(lVar2 + 0x20) = puVar3 + 1;
    *puVar3 = param_1;
  }
  if ((*param_2 & 0x8000) == 0) {
    piVar5 = *(int **)(param_2 + 0x22);
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar5[2] = 0;
      piVar5[3] = 0;
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
        uVar4 = uVar4 & 0xffffffff;
      }
    }
  }
  return uVar4;
}

