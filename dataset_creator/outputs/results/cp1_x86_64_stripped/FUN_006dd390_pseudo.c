
long FUN_006dd390(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,uint *param_5,
                 undefined8 *param_6,long *param_7)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  ulong local_d8;
  ulong local_c8;
  uint *local_c0;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  pcVar9 = (code *)param_1[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = (uint *)*param_4;
  if (*param_1 != 0) {
    pcVar9 = (code *)(((ulong)pcVar9 >> 0x11 | (long)pcVar9 << 0x2f) ^
                     *(ulong *)(in_FS_OFFSET + 0x30));
  }
  lVar13 = **(long **)(in_FS_OFFSET + -0xd8);
  local_c8 = (ulong)*(uint *)(lVar13 + 0x228);
  if (local_c8 == 0) {
    iVar15 = *(int *)(lVar13 + 0x260);
    if (iVar15 != 0) {
      puVar11 = *(uint **)(lVar13 + 0x268);
      uVar17 = *local_c0;
      if (local_c0 + 1 <= param_5) goto LAB_006dd6bc;
      goto LAB_006dd547;
    }
    uVar17 = *(uint *)(lVar13 + 0x250);
    if (uVar17 != 0) {
      piVar14 = *(int **)(lVar13 + 600);
      if (param_5 < local_c0 + 1) {
        lVar13 = (ulong)(local_c0 != param_5) * 3 + 4;
        local_50 = piVar14;
        goto LAB_006dd55d;
      }
      goto LAB_006dd760;
    }
  }
  else {
    lVar3 = *(long *)(lVar13 + 0x230);
    local_d8 = 0;
    lVar4 = *(long *)(lVar13 + 0x238);
    lVar5 = *(long *)(lVar13 + 0x240);
    lVar6 = *(long *)(lVar13 + 0x248);
    if (param_5 < local_c0 + 1) {
LAB_006dd547:
      lVar13 = 4;
      if (local_c0 != param_5) {
LAB_006dd558:
        lVar13 = 7;
      }
      goto LAB_006dd55d;
    }
    do {
      iVar15 = 0;
      uVar10 = local_d8 + local_c8 >> 1;
      uVar17 = *(uint *)(lVar3 + uVar10 * 4);
      uVar2 = *(uint *)(lVar4 + (ulong)uVar17 * 4);
      puVar11 = local_c0;
      while (*puVar11 == uVar2) {
        iVar15 = iVar15 + 1;
        uVar2 = *(uint *)(lVar4 + (ulong)(iVar15 + uVar17) * 4);
        if (uVar2 == 0) goto LAB_006dd590;
        puVar11 = puVar11 + 1;
        if (param_5 <= puVar11) goto LAB_006dd558;
      }
      puVar11 = local_c0;
      if (iVar15 != 0) {
        if (uVar2 != 0) goto LAB_006dd558;
LAB_006dd590:
        uVar2 = *(uint *)(lVar5 + uVar10 * 4);
        iVar16 = *(int *)(lVar6 + (ulong)uVar2 * 4);
        uVar12 = (ulong)uVar2;
        do {
          local_50 = (int *)(lVar6 + uVar12 * 4);
          if (iVar16 == 0) {
            iVar16 = 0;
            piVar14 = local_50;
          }
          else {
            iVar16 = 0;
            piVar7 = (int *)(lVar6 + 4 + uVar12 * 4);
            do {
              piVar14 = piVar7;
              iVar16 = iVar16 + 1;
              piVar7 = piVar14 + 1;
            } while (*piVar14 != 0);
          }
          local_48 = *param_6;
          FUN_0078e430(pcVar9);
          lVar13 = (*pcVar9)(param_1,param_2,&local_50,piVar14,&local_48,0,0,0);
          iVar8 = (int)lVar13;
          if (iVar8 != 6) {
            if (iVar8 == 4) {
              *param_4 = *param_4 + (long)iVar15 * 4;
              *param_7 = *param_7 + 1;
              lVar13 = 0;
              goto LAB_006dd6fc;
            }
            if (iVar8 == 5) goto LAB_006dd55d;
            goto LAB_006dd6fc;
          }
          uVar12 = (ulong)(uint)((int)uVar12 + 1 + iVar16);
          iVar16 = *(int *)(lVar6 + uVar12 * 4);
        } while (iVar16 != 0);
        puVar11 = local_c0 + iVar15;
      }
      if ((param_5 <= puVar11) || (*(uint *)(lVar4 + (ulong)(iVar15 + uVar17) * 4) < *puVar11)) {
        local_d8 = uVar10 + 1;
        uVar10 = local_c8;
      }
      local_c8 = uVar10;
    } while (local_d8 < local_c8);
    lVar13 = **(long **)(in_FS_OFFSET + -0xd8);
    iVar15 = *(int *)(lVar13 + 0x260);
    if (iVar15 != 0) {
      puVar11 = *(uint **)(lVar13 + 0x268);
      local_c0 = (uint *)*param_4;
      uVar17 = *local_c0;
LAB_006dd6bc:
      if (0 < iVar15) {
        puVar1 = puVar11 + (long)iVar15 * 3;
        do {
          if (uVar17 < *puVar11) break;
          if ((uVar17 <= puVar11[1]) && ((uVar17 - *puVar11) % puVar11[2] == 0)) {
            *param_4 = (long)(local_c0 + 1);
            *param_7 = *param_7 + 1;
            lVar13 = 0;
            goto LAB_006dd55d;
          }
          puVar11 = puVar11 + 3;
        } while (puVar11 != puVar1);
      }
    }
    uVar17 = *(uint *)(lVar13 + 0x250);
    if (uVar17 != 0) {
      piVar14 = *(int **)(lVar13 + 600);
LAB_006dd760:
      local_48 = *param_6;
      local_50 = piVar14;
      FUN_0078e430(pcVar9);
      lVar13 = (*pcVar9)(param_1,param_2,&local_50,piVar14 + uVar17,&local_48,0,0,0);
      if ((int)lVar13 != 6) {
        if ((int)lVar13 == 4) {
          *param_7 = *param_7 + 1;
          *param_4 = *param_4 + 4;
          lVar13 = 0;
        }
LAB_006dd6fc:
        *param_6 = local_48;
      }
      goto LAB_006dd55d;
    }
  }
  lVar13 = 6;
LAB_006dd55d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar13;
}

