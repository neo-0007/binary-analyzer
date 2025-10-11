
long FUN_00771d50(long param_1,ulong param_2,int param_3,uint *param_4)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  
  if (param_3 < 1) {
    lVar6 = 0;
  }
  else {
    uVar3 = *param_4;
    if ((uVar3 & 0x8000) == 0) {
      lVar6 = *(long *)(in_FS_OFFSET + 0x10);
      piVar5 = *(int **)(param_4 + 0x22);
      if (*(long *)(piVar5 + 2) != lVar6) {
        LOCK();
        iVar1 = *piVar5;
        if (iVar1 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar1 != 0) {
                    /* try { // try from 00771e80 to 00771e8e has its CatchHandler @ 00771e8f */
          FUN_00709590();
        }
        piVar5 = *(int **)(param_4 + 0x22);
        uVar3 = *param_4;
        *(long *)(piVar5 + 2) = lVar6;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    *param_4 = uVar3 & 0xffffffdf;
    uVar2 = (long)param_3 - 1U;
    if (param_2 < (long)param_3 - 1U) {
      uVar2 = param_2;
    }
                    /* try { // try from 00771de4 to 00771de8 has its CatchHandler @ 00771e8f */
    uVar2 = FUN_006fe490(param_4,param_1,uVar2,10,1);
    uVar4 = *param_4;
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else if (((uVar4 & 0x20) == 0) || (lVar6 = 0, *(int *)(in_FS_OFFSET + -0x58) == 0xb)) {
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00771d30();
      }
      *(undefined1 *)(param_1 + uVar2) = 0;
      uVar4 = *param_4;
      lVar6 = param_1;
    }
    *param_4 = uVar3 & 0x20 | uVar4;
    if ((uVar4 & 0x8000) == 0) {
      piVar5 = *(int **)(param_4 + 0x22);
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
        }
      }
    }
  }
  return lVar6;
}

