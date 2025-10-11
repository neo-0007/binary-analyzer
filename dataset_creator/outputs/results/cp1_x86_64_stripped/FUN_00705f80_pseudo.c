
void FUN_00705f80(uint *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  long in_FS_OFFSET;
  bool bVar10;
  code *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = FUN_00705ef0;
  FUN_00709520(&local_58);
  lVar1 = *(long *)(in_FS_OFFSET + 0x10);
  lVar2 = DAT_00946938;
  if (lVar1 != DAT_00946938) {
    LOCK();
    bVar10 = DAT_00946930 == 0;
    if (bVar10) {
      DAT_00946930 = 1;
    }
    UNLOCK();
    lVar2 = lVar1;
    if (!bVar10) {
      FUN_00709590(&DAT_00946930);
    }
  }
  DAT_00946938 = lVar2;
  puVar6 = (uint *)PTR_DAT_0093dac0;
  uVar8 = *param_1;
  iVar4 = DAT_00946934 + 1;
  uVar5 = uVar8 & 0x8000;
  DAT_00946920 = param_1;
  if (uVar5 == 0) {
    lVar1 = *(long *)(in_FS_OFFSET + 0x10);
    piVar9 = *(int **)(param_1 + 0x22);
    DAT_00946934 = iVar4;
    if (lVar1 != *(long *)(piVar9 + 2)) {
      LOCK();
      iVar4 = *piVar9;
      if (iVar4 == 0) {
        *piVar9 = 1;
      }
      UNLOCK();
      if (iVar4 != 0) {
        FUN_00709590();
      }
      puVar6 = (uint *)PTR_DAT_0093dac0;
      uVar8 = *param_1;
      lVar2 = *(long *)(param_1 + 0x22);
      piVar9 = (int *)(lVar2 + 4);
      *piVar9 = *piVar9 + 1;
      *(long *)(lVar2 + 8) = lVar1;
      uVar5 = uVar8 & 0x8000;
      puVar3 = (uint *)PTR_DAT_0093dac0;
      iVar4 = DAT_00946934;
      if (puVar6 != (uint *)0x0) goto LAB_00706063;
      goto LAB_00706077;
    }
    piVar9[1] = piVar9[1] + 1;
    iVar4 = DAT_00946934;
    if (puVar6 != (uint *)0x0) goto LAB_00706063;
    *param_1 = uVar8 & 0xffffff7f;
LAB_00706088:
    iVar4 = piVar9[1];
    piVar9[1] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      piVar9[2] = 0;
      piVar9[3] = 0;
      LOCK();
      iVar4 = *piVar9;
      *piVar9 = 0;
      UNLOCK();
      if (1 < iVar4) {
        FUN_00709660();
      }
    }
  }
  else {
    if (PTR_DAT_0093dac0 == (undefined *)0x0) {
      *param_1 = uVar8 & 0xffffff7f;
      goto LAB_007060af;
    }
LAB_00706063:
    DAT_00946934 = iVar4;
    puVar7 = *(uint **)(puVar6 + 0x1a);
    puVar3 = *(uint **)(puVar6 + 0x1a);
    if (param_1 != puVar6) {
      for (; puVar3 = (uint *)PTR_DAT_0093dac0, puVar7 != (uint *)0x0;
          puVar7 = *(uint **)(puVar7 + 0x1a)) {
        if (param_1 == puVar7) {
          *(undefined8 *)(puVar6 + 0x1a) = *(undefined8 *)(param_1 + 0x1a);
          *param_1 = uVar8 & 0xffffff7f;
          if (uVar5 != 0) goto LAB_007060a6;
          goto LAB_00706081;
        }
        puVar6 = puVar7;
      }
    }
LAB_00706077:
    PTR_DAT_0093dac0 = (undefined *)puVar3;
    *param_1 = uVar8 & 0xffffff7f;
    if (uVar5 == 0) {
LAB_00706081:
      piVar9 = *(int **)(param_1 + 0x22);
      goto LAB_00706088;
    }
  }
LAB_007060a6:
  DAT_00946934 = DAT_00946934 + -1;
LAB_007060af:
  DAT_00946920 = (uint *)0x0;
  if (DAT_00946934 == 0) {
    DAT_00946938 = 0;
    LOCK();
    UNLOCK();
    bVar10 = 1 < DAT_00946930;
    DAT_00946930 = DAT_00946934;
    if (bVar10) {
      FUN_00709660(&DAT_00946930);
    }
  }
  FUN_00709560(&local_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

