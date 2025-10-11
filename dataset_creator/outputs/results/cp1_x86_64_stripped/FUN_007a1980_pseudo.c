
undefined4 FUN_007a1980(uint *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
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
        FUN_00709590();
      }
      piVar4 = *(int **)(param_1 + 0x22);
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 007a19d7 to 007a1abc has its CatchHandler @ 007a1acf */
  lVar2 = FUN_006fe4a0(param_1,0,1,0);
  uVar3 = *param_1;
  if ((uVar3 & 0x100) == 0) {
    if (lVar2 != -1) {
      *param_2 = lVar2;
      uVar5 = 0;
      if ((int)param_1[0x30] < 1) goto LAB_007a1a44;
LAB_007a1a06:
      iVar1 = FUN_00701fb0(*(undefined8 *)(param_1 + 0x26));
      uVar3 = *param_1;
      uVar5 = 0;
      if (iVar1 < 0) {
        param_2[1] = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
      }
      goto LAB_007a1a44;
    }
  }
  else if (lVar2 != -1) {
    if (0 < (int)param_1[0x30]) {
      *param_2 = lVar2;
      goto LAB_007a1a06;
    }
    lVar2 = lVar2 - (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x12));
    if (lVar2 != -1) {
      *param_2 = lVar2;
      uVar5 = 0;
      goto LAB_007a1a44;
    }
  }
  uVar5 = 0xffffffff;
  if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
  }
LAB_007a1a44:
  if ((uVar3 & 0x8000) == 0) {
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
  return uVar5;
}

