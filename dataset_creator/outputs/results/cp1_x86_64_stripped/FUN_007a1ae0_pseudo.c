
undefined8 FUN_007a1ae0(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  
  if ((*param_1 & 0x8000) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar3 = *(int **)(param_1 + 0x22);
    if (*(long *)(piVar3 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 007a1bd0 to 007a1bd4 has its CatchHandler @ 007a1bda */
        FUN_00709590();
      }
      piVar3 = *(int **)(param_1 + 0x22);
      *(long *)(piVar3 + 2) = lVar2;
    }
    piVar3[1] = piVar3[1] + 1;
  }
                    /* try { // try from 007a1b37 to 007a1b8b has its CatchHandler @ 007a1bda */
  lVar2 = FUN_007a1dc0(param_1,*param_2,3);
  if (lVar2 == -1) {
    uVar4 = 0xffffffff;
    if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
    }
  }
  else {
    if ((0 < (int)param_1[0x30]) &&
       (iVar1 = FUN_00701fb0(*(undefined8 *)(param_1 + 0x26)), iVar1 < 0)) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x58) = param_2[1];
    }
    uVar4 = 0;
  }
  if ((*param_1 & 0x8000) == 0) {
    piVar3 = *(int **)(param_1 + 0x22);
    iVar1 = piVar3[1];
    piVar3[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar3[2] = 0;
      piVar3[3] = 0;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  return uVar4;
}

