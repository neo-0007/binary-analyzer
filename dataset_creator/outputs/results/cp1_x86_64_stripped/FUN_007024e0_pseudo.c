
ulong FUN_007024e0(uint *param_1)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((param_1[0x1d] & 0x80) != 0) {
    if ((*param_1 & 0x8000) == 0) {
      lVar3 = *(long *)(in_FS_OFFSET + 0x10);
      piVar5 = *(int **)(param_1 + 0x22);
      if (*(long *)(piVar5 + 2) != lVar3) {
        LOCK();
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar1 != 0) {
                    /* try { // try from 007025e8 to 007025ec has its CatchHandler @ 007025ef */
          FUN_00709590();
        }
        piVar5 = *(int **)(param_1 + 0x22);
        *(long *)(piVar5 + 2) = lVar3;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    pbVar2 = *(byte **)(param_1 + 2);
    if (pbVar2 < *(byte **)(param_1 + 4)) {
      *(byte **)(param_1 + 2) = pbVar2 + 1;
      uVar4 = (ulong)*pbVar2;
    }
    else {
                    /* try { // try from 007025b3 to 007025b7 has its CatchHandler @ 007025ef */
      uVar4 = FUN_007067b0(param_1);
    }
    if ((*param_1 & 0x8000) == 0) {
      piVar5 = *(int **)(param_1 + 0x22);
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
  pbVar2 = *(byte **)(param_1 + 2);
  if (*(byte **)(param_1 + 4) <= pbVar2) {
    uVar4 = FUN_007067b0();
    return uVar4;
  }
  *(byte **)(param_1 + 2) = pbVar2 + 1;
  return (ulong)*pbVar2;
}

