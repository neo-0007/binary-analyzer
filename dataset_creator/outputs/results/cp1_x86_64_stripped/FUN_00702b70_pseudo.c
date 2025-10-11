
long FUN_00702b70(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 00702ca0 to 00702ca4 has its CatchHandler @ 00702cb1 */
        FUN_00709590();
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 00702bc6 to 00702bca has its CatchHandler @ 00702cb1 */
  lVar2 = FUN_006fe4a0(param_1,0,1,0);
  uVar3 = *param_1 & 0x8000;
  if ((*param_1 & 0x100) == 0) {
LAB_00702c2b:
    if (uVar3 == 0) {
      piVar5 = *(int **)(param_1 + 0x22);
      piVar4 = piVar5 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) goto LAB_00702bfb;
    }
  }
  else {
    if (lVar2 == -1) {
      if (uVar3 == 0) {
        piVar4 = *(int **)(param_1 + 0x22);
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
      goto LAB_00702c65;
    }
    if ((int)param_1[0x30] < 1) {
      lVar2 = lVar2 - (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x12));
      goto LAB_00702c2b;
    }
    if (uVar3 != 0) {
      return lVar2;
    }
    piVar5 = *(int **)(param_1 + 0x22);
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) {
      return lVar2;
    }
LAB_00702bfb:
    piVar5[2] = 0;
    piVar5[3] = 0;
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660();
    }
  }
  if (lVar2 != -1) {
    return lVar2;
  }
LAB_00702c65:
  if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
  }
  return -1;
}

