
ulong FUN_006feb80(int param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((*param_2 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_2 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006fec30 to 006fec34 has its CatchHandler @ 006fec37 */
        FUN_00709590();
      }
      piVar4 = *(int **)(param_2 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  FUN_00701c30(param_2,1);
  uVar3 = 0xffffffff;
  if (param_1 != -1) {
    uVar3 = FUN_006ffe60(param_2,param_1);
  }
  if ((*param_2 & 0x8000) == 0) {
    piVar4 = *(int **)(param_2 + 0x22);
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
        uVar3 = uVar3 & 0xffffffff;
      }
    }
  }
  return uVar3;
}

