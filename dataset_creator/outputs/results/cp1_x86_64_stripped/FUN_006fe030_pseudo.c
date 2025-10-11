
long FUN_006fe030(long *param_1,ulong *param_2,undefined4 param_3,uint *param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  
  if ((param_1 == (long *)0x0) || (param_2 == (ulong *)0x0)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return -1;
  }
  uVar3 = *param_4;
  if ((uVar3 & 0x8000) == 0) {
    lVar4 = *(long *)(in_FS_OFFSET + 0x10);
    piVar8 = *(int **)(param_4 + 0x22);
    if (*(long *)(piVar8 + 2) == lVar4) {
      piVar8[1] = piVar8[1] + 1;
      if ((uVar3 & 0x20) != 0) {
        lVar4 = -1;
        goto LAB_006fe1bc;
      }
      goto LAB_006fe07b;
    }
    LOCK();
    iVar2 = *piVar8;
    if (iVar2 == 0) {
      *piVar8 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      FUN_00709590();
    }
    lVar9 = *(long *)(param_4 + 0x22);
    uVar3 = *param_4;
    *(long *)(lVar9 + 8) = lVar4;
    piVar8 = (int *)(lVar9 + 4);
    *piVar8 = *piVar8 + 1;
    if ((uVar3 & 0x20) == 0) goto LAB_006fe07b;
    lVar4 = -1;
  }
  else {
    if ((uVar3 & 0x20) != 0) {
      return -1;
    }
LAB_006fe07b:
    if ((*param_1 == 0) || (*param_2 == 0)) {
      *param_2 = 0x78;
      lVar4 = FUN_007101b0(0x78);
      *param_1 = lVar4;
      if (lVar4 != 0) goto LAB_006fe0b0;
LAB_006fe29d:
      uVar3 = *param_4;
      lVar4 = -1;
    }
    else {
LAB_006fe0b0:
      lVar9 = *(long *)(param_4 + 2);
      lVar10 = *(long *)(param_4 + 4) - lVar9;
      if (lVar10 < 1) {
        iVar2 = FUN_007065e0(param_4);
        if (iVar2 == -1) goto LAB_006fe29d;
        lVar9 = *(long *)(param_4 + 2);
        lVar10 = *(long *)(param_4 + 4) - lVar9;
      }
      lVar11 = 0;
      while( true ) {
        lVar6 = thunk_FUN_007134f0(lVar9,param_3,lVar10);
        if (lVar6 != 0) {
          lVar10 = (lVar6 - lVar9) + 1;
        }
        if (0x7fffffffffffffff - lVar11 <= lVar10) {
          lVar4 = -1;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          uVar3 = *param_4;
          goto LAB_006fe1b0;
        }
        lVar4 = lVar11 + lVar10;
        lVar5 = *param_1;
        uVar7 = lVar4 + 1;
        if (*param_2 < uVar7) {
          uVar1 = *param_2 * 2;
          if (uVar7 <= uVar1) {
            uVar7 = uVar1;
          }
          lVar5 = FUN_00710840();
          if (lVar5 == 0) goto LAB_006fe29d;
          *param_1 = lVar5;
          lVar9 = *(long *)(param_4 + 2);
          *param_2 = uVar7;
        }
        thunk_FUN_00713a50(lVar5 + lVar11,lVar9,lVar10);
        *(long *)(param_4 + 2) = *(long *)(param_4 + 2) + lVar10;
                    /* try { // try from 006fe13d to 006fe2af has its CatchHandler @ 006fe2d9 */
        if ((lVar6 != 0) || (iVar2 = FUN_007065e0(param_4), iVar2 == -1)) break;
        lVar9 = *(long *)(param_4 + 2);
        lVar10 = *(long *)(param_4 + 4) - lVar9;
        lVar11 = lVar4;
      }
      *(undefined1 *)(*param_1 + lVar4) = 0;
      uVar3 = *param_4;
    }
  }
LAB_006fe1b0:
  if ((uVar3 & 0x8000) != 0) {
    return lVar4;
  }
  piVar8 = *(int **)(param_4 + 0x22);
LAB_006fe1bc:
  iVar2 = piVar8[1];
  piVar8[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    piVar8[2] = 0;
    piVar8[3] = 0;
    LOCK();
    iVar2 = *piVar8;
    *piVar8 = 0;
    UNLOCK();
    if (1 < iVar2) {
      FUN_00709660();
    }
  }
  return lVar4;
}

