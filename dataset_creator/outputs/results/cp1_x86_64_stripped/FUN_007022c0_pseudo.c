
ulong FUN_007022c0(byte param_1,uint *param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((param_2[0x1d] & 0x80) != 0) {
    if ((*param_2 & 0x8000) == 0) {
      lVar3 = *(long *)(in_FS_OFFSET + 0x10);
      piVar5 = *(int **)(param_2 + 0x22);
      if (*(long *)(piVar5 + 2) != lVar3) {
        LOCK();
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar1 != 0) {
                    /* try { // try from 007023e0 to 007023e4 has its CatchHandler @ 007023ea */
          FUN_00709590();
        }
        piVar5 = *(int **)(param_2 + 0x22);
        *(long *)(piVar5 + 2) = lVar3;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    pbVar2 = *(byte **)(param_2 + 10);
    uVar4 = (ulong)(uint)param_1;
    if (pbVar2 < *(byte **)(param_2 + 0xc)) {
      *(byte **)(param_2 + 10) = pbVar2 + 1;
      *pbVar2 = param_1;
    }
    else {
                    /* try { // try from 007023a5 to 007023a9 has its CatchHandler @ 007023ea */
      uVar4 = FUN_00706570(param_2,(uint)param_1);
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
  pbVar2 = *(byte **)(param_2 + 10);
  if (*(byte **)(param_2 + 0xc) <= pbVar2) {
    uVar4 = FUN_00706570(param_2,(uint)param_1);
    return uVar4;
  }
  *(byte **)(param_2 + 10) = pbVar2 + 1;
  *pbVar2 = param_1;
  return (ulong)(uint)param_1;
}

