
ulong * FUN_006b0200(undefined8 param_1,ulong *param_2,ulong param_3,long *param_4,
                    undefined8 param_5,int *param_6,ulong *param_7,long param_8,long param_9,
                    uint *param_10)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar13;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  byte bVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  long in_FS_OFFSET;
  byte bVar24;
  undefined1 auStack_98 [7];
  byte local_91;
  int local_90;
  int local_8c;
  int *local_88;
  uint *local_80;
  ulong *local_78;
  ulong *local_70;
  long *local_68;
  undefined8 local_60;
  ulong *local_58;
  ulong local_50;
  long local_40;
  undefined1 *puVar12;
  undefined1 *puVar14;
  
  puVar11 = auStack_98;
  local_70 = param_7;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  plVar9 = (long *)FUN_006a4ba0(param_9 + 0xd0);
  uVar22 = param_8 * 8 + 0x17;
  puVar12 = auStack_98;
  puVar14 = auStack_98;
  while (puVar12 != auStack_98 + -(uVar22 & 0xfffffffffffff000)) {
    puVar11 = puVar14 + -0x1000;
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    puVar12 = puVar14 + -0x1000;
    puVar14 = puVar14 + -0x1000;
  }
  uVar22 = (ulong)((uint)uVar22 & 0xff0);
  lVar3 = -uVar22;
  puVar15 = puVar11 + lVar3;
  puVar13 = puVar11 + lVar3;
  puVar14 = puVar11 + lVar3;
  if (uVar22 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  puVar20 = (ulong *)((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b02c8;
  cVar4 = FUN_006aa060(&local_58,&local_68);
  if (cVar4 == '\0') {
    puVar23 = (ulong *)0x0;
    uVar22 = 0;
    *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b0517;
    iVar8 = FUN_006aa130(&local_58);
    puVar21 = local_70;
    puVar18 = (ulong *)(param_8 * 2);
    if ((ulong *)(param_8 * 2) == (ulong *)0x0) {
      uVar16 = local_50 & 0xffffffff;
      uVar10 = 0;
      puVar18 = local_58;
    }
    else {
LAB_006b0559:
      do {
        local_70 = puVar18;
        local_78 = puVar20;
        if (*(int *)puVar21[(long)puVar23] != iVar8) {
          pcVar2 = *(code **)(*plVar9 + 0x30);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b054a;
          iVar7 = (*pcVar2)(plVar9);
          if (iVar8 != iVar7) {
            puVar23 = (ulong *)((long)puVar23 + 1);
            puVar20 = local_78;
            puVar18 = local_70;
            if (local_70 == puVar23) break;
            goto LAB_006b0559;
          }
        }
        *(int *)((long)local_78 + uVar22 * 4) = (int)puVar23;
        uVar22 = uVar22 + 1;
        puVar23 = (ulong *)((long)puVar23 + 1);
        puVar20 = local_78;
        puVar18 = local_70;
      } while (local_70 != puVar23);
      puVar20 = local_78;
      if (uVar22 == 0) {
        uVar16 = local_50 & 0xffffffff;
        uVar10 = 0;
        uVar22 = 0;
        puVar15 = puVar11 + lVar3;
        puVar18 = local_58;
        puVar23 = (ulong *)0x0;
      }
      else {
        local_70 = local_58;
        local_78 = puVar21;
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x6b05db;
        FUN_0069d900(local_58);
        puVar21 = local_78;
        uVar10 = uVar22 * 8 + 0x17;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        puVar15 = puVar11 + lVar3;
        while (puVar13 != puVar11 + (lVar3 - (uVar10 & 0xfffffffffffff000))) {
          puVar14 = puVar15 + -0x1000;
          *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          puVar13 = puVar15 + -0x1000;
          puVar15 = puVar15 + -0x1000;
        }
        uVar10 = (ulong)((uint)uVar10 & 0xff0);
        lVar3 = -uVar10;
        puVar15 = puVar14 + lVar3;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
        }
        local_78 = local_70;
        uVar10 = 0;
        local_70 = (ulong *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
        do {
          uVar16 = puVar21[*(int *)((long)puVar20 + uVar10 * 4)];
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b065e;
          uVar16 = thunk_FUN_007564d0(uVar16);
          ((ulong *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0))[uVar10] = uVar16;
          uVar10 = uVar10 + 1;
        } while (uVar22 != uVar10);
        uVar16 = 0xffffffff;
        uVar22 = 1;
        puVar18 = local_78;
        puVar23 = local_70;
      }
    }
  }
  else {
    uVar16 = local_50 & 0xffffffff;
    uVar10 = 0;
    uVar22 = 0;
    puVar15 = puVar11 + lVar3;
    puVar21 = local_70;
    puVar18 = local_58;
    puVar23 = (ulong *)0x0;
  }
  bVar24 = (int)local_60 == -1;
  do {
    iVar8 = (int)uVar16;
    cVar4 = iVar8 == -1;
    bVar5 = puVar18 != (ulong *)0x0 && (bool)cVar4;
    bVar19 = cVar4;
    if ((bool)bVar5) {
      if ((int *)puVar18[2] < (int *)puVar18[3]) {
        iVar7 = *(int *)puVar18[2];
      }
      else {
        local_90 = CONCAT31(local_90._1_3_,bVar24);
        local_78 = (ulong *)CONCAT71(local_78._1_7_,cVar4);
        local_70 = (ulong *)CONCAT71(local_70._1_7_,bVar5);
        pcVar2 = *(code **)(*puVar18 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6b06fc;
        local_8c = iVar8;
        iVar7 = (*pcVar2)();
        bVar24 = (byte)local_90;
        cVar4 = (byte)local_78;
        bVar5 = (byte)local_70;
        iVar8 = local_8c;
      }
      if (iVar7 == -1) {
        local_58 = (ulong *)0x0;
        bVar19 = bVar5;
      }
      else {
        bVar19 = 0;
      }
    }
    bVar6 = local_68 != (long *)0x0 & bVar24;
    bVar5 = bVar24;
    if (bVar6 == 0) {
LAB_006b0332:
      if (bVar19 == bVar5) break;
    }
    else {
      if ((int *)local_68[2] < (int *)local_68[3]) {
        iVar7 = *(int *)local_68[2];
      }
      else {
        local_8c = CONCAT31(local_8c._1_3_,cVar4);
        local_78 = (ulong *)CONCAT71(local_78._1_7_,bVar19);
        local_70 = (ulong *)CONCAT71(local_70._1_7_,bVar6);
        pcVar2 = *(code **)(*local_68 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6b06a9;
        local_91 = bVar24;
        local_90 = iVar8;
        iVar7 = (*pcVar2)();
        bVar24 = local_91;
        bVar6 = (byte)local_70;
        bVar19 = (byte)local_78;
        cVar4 = (char)local_8c;
        iVar8 = local_90;
      }
      if (iVar7 == -1) {
        local_68 = (long *)0x0;
        bVar5 = bVar6;
        goto LAB_006b0332;
      }
      if (bVar19 == 0) break;
    }
    if ((local_58 != (ulong *)0x0) && (cVar4 != '\0')) {
      if ((int *)local_58[2] < (int *)local_58[3]) {
        iVar8 = *(int *)local_58[2];
      }
      else {
        local_70 = (ulong *)CONCAT71(local_70._1_7_,bVar24);
        pcVar2 = *(code **)(*local_58 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x6b06d6;
        iVar8 = (*pcVar2)();
        bVar24 = (byte)local_70;
      }
      if (iVar8 == -1) {
        local_58 = (ulong *)0x0;
      }
    }
    if (uVar10 == 0) goto LAB_006b0430;
    uVar16 = 0;
    uVar17 = 0;
    do {
      while (puVar23[uVar16] <= uVar22) {
        uVar17 = uVar17 + 1;
LAB_006b0370:
        uVar16 = uVar16 + 1;
        if (uVar10 <= uVar16) goto LAB_006b03a8;
      }
      piVar1 = (int *)((long)puVar20 + uVar16 * 4);
      if (*(int *)(puVar21[*piVar1] + uVar22 * 4) == iVar8) goto LAB_006b0370;
      uVar10 = uVar10 - 1;
      *piVar1 = *(int *)((long)puVar20 + uVar10 * 4);
      puVar23[uVar16] = puVar23[uVar10];
    } while (uVar16 < uVar10);
LAB_006b03a8:
    if (uVar17 == uVar10) break;
    if (local_58[2] < local_58[3]) {
      local_58[2] = local_58[2] + 4;
      puVar18 = local_58;
    }
    else {
      local_78 = (ulong *)CONCAT71(local_78._1_7_,bVar24);
      local_70 = local_58;
      pcVar2 = *(code **)(*local_58 + 0x50);
      *(undefined8 *)(puVar15 + -8) = 0x6b04ce;
      (*pcVar2)();
      puVar18 = local_70;
      bVar24 = (byte)local_78;
    }
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    uVar22 = uVar22 + 1;
    uVar16 = 0xffffffff;
  } while( true );
  if (uVar10 == 1) {
    uVar10 = *puVar23;
joined_r0x006b05b5:
    if (uVar10 == uVar22) {
LAB_006b04ef:
      iVar8 = (int)*puVar20;
      if ((int)param_8 <= iVar8) {
        iVar8 = iVar8 - (int)param_8;
      }
      *local_88 = iVar8;
      goto LAB_006b0437;
    }
  }
  else if (uVar10 == 2) {
    if (*puVar23 != uVar22) {
      uVar10 = puVar23[1];
      goto joined_r0x006b05b5;
    }
    goto LAB_006b04ef;
  }
LAB_006b0430:
  *local_80 = *local_80 | 4;
LAB_006b0437:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -8) = &UNK_006b0729;
    FUN_00771f60();
  }
  return local_58;
}

