
ulong FUN_006fdc50(undefined8 param_1,ulong param_2,ulong param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  
  uVar5 = param_2 * param_3;
  uVar6 = uVar5;
  if (uVar5 != 0) {
    if ((*param_4 & 0x8000) == 0) {
      lVar2 = *(long *)(in_FS_OFFSET + 0x10);
      piVar4 = *(int **)(param_4 + 0x22);
      if (*(long *)(piVar4 + 2) != lVar2) {
        LOCK();
        iVar1 = *piVar4;
        if (iVar1 == 0) {
          *piVar4 = 1;
        }
        UNLOCK();
        if (iVar1 != 0) {
                    /* try { // try from 006fdd38 to 006fdd3c has its CatchHandler @ 006fdd42 */
          FUN_00709590();
        }
        piVar4 = *(int **)(param_4 + 0x22);
        *(long *)(piVar4 + 2) = lVar2;
      }
      piVar4[1] = piVar4[1] + 1;
    }
                    /* try { // try from 006fdcc4 to 006fdcc8 has its CatchHandler @ 006fdd42 */
    uVar3 = FUN_00706d20(param_4,param_1,uVar5);
    if ((*param_4 & 0x8000) == 0) {
      piVar4 = *(int **)(param_4 + 0x22);
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
        }
      }
    }
    uVar6 = param_3;
    if (uVar5 - uVar3 != 0) {
      uVar6 = uVar3 / param_2;
    }
  }
  return uVar6;
}

