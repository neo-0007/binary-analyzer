
ulong * FUN_0065f700(undefined8 param_1,ulong *param_2,ulong param_3,long *param_4,int param_5,
                    int *param_6,ulong *param_7,long param_8,long param_9,uint *param_10)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  bool bVar4;
  ulong **ppuVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  ulong **ppuVar13;
  undefined1 *puVar15;
  char cVar18;
  char cVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  long in_FS_OFFSET;
  bool bVar27;
  char cVar28;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  int *local_80;
  uint *local_78;
  ulong *local_70;
  ulong local_68;
  ulong *local_60;
  ulong *local_58;
  ulong *local_50;
  long local_40;
  ulong **ppuVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  
  uVar21 = param_3 & 0xffffffff;
  ppuVar13 = &local_98;
  local_60 = param_7;
  local_78 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_6;
  local_68 = param_3;
  local_58 = (ulong *)param_4;
  local_50 = param_2;
  puVar9 = (ulong *)FUN_006a4ba0(param_9 + 0xd0);
  uVar12 = param_8 * 8 + 0x17;
  ppuVar14 = &local_98;
  ppuVar5 = &local_98;
  while (ppuVar14 != (ulong **)((long)&local_98 - (uVar12 & 0xfffffffffffff000))) {
    ppuVar13 = (ulong **)((long)ppuVar5 + -0x1000);
    *(undefined8 *)((long)ppuVar5 + -8) = *(undefined8 *)((long)ppuVar5 + -8);
    ppuVar14 = (ulong **)((long)ppuVar5 + -0x1000);
    ppuVar5 = (ulong **)((long)ppuVar5 + -0x1000);
  }
  uVar12 = (ulong)((uint)uVar12 & 0xff0);
  lVar3 = -uVar12;
  puVar15 = (undefined1 *)((long)ppuVar13 + lVar3);
  puVar16 = (undefined1 *)((long)ppuVar13 + lVar3);
  puVar17 = (undefined1 *)((long)ppuVar13 + lVar3);
  if (uVar12 != 0) {
    *(undefined8 *)((long)ppuVar13 + -8) = *(undefined8 *)((long)ppuVar13 + -8);
  }
  puVar25 = (ulong *)((ulong)((long)ppuVar13 + lVar3 + 0xf) & 0xfffffffffffffff0);
  cVar18 = param_2 != (ulong *)0x0 && (int)local_68 == -1;
  puVar26 = local_50;
  puVar22 = local_60;
  cVar28 = (int)local_68 == -1;
  if ((bool)cVar18) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar7 = *(int *)param_2[2];
      cVar19 = cVar18;
    }
    else {
      local_88 = local_60;
      local_70 = local_50;
      local_60 = (ulong *)CONCAT71(local_60._1_7_,cVar18);
      pcVar2 = *(code **)(*param_2 + 0x48);
      *(undefined8 *)((long)ppuVar13 + lVar3 + -8) = 0x65fcd2;
      local_50 = puVar9;
      iVar7 = (*pcVar2)(param_2);
      puVar9 = local_50;
      puVar26 = local_70;
      puVar22 = local_88;
      cVar19 = (byte)local_60;
    }
    cVar28 = '\0';
    cVar18 = cVar19;
    if (iVar7 == -1) {
      puVar26 = (ulong *)0x0;
      cVar18 = '\0';
      cVar28 = cVar19;
    }
  }
  bVar27 = param_5 == -1;
  local_50 = (ulong *)CONCAT71(local_50._1_7_,bVar27);
  bVar4 = param_4 != (long *)0x0 && bVar27;
  if (bVar4) {
    local_58 = puVar9;
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar7 = *(int *)param_4[2];
    }
    else {
      local_70 = (ulong *)CONCAT71(local_70._1_7_,cVar28);
      local_60 = (ulong *)CONCAT71(local_60._1_7_,cVar18);
      pcVar2 = *(code **)(*param_4 + 0x48);
      *(undefined8 *)((long)ppuVar13 + lVar3 + -8) = 0x65fd07;
      local_90 = puVar22;
      local_88 = puVar26;
      iVar7 = (*pcVar2)(param_4);
      puVar26 = local_88;
      puVar22 = local_90;
      cVar28 = (byte)local_70;
      cVar18 = (byte)local_60;
    }
    plVar6 = (long *)0x0;
    if (iVar7 != -1) {
      plVar6 = param_4;
    }
    bVar27 = iVar7 == -1 && bVar4;
    puVar9 = local_58;
    local_58 = (ulong *)plVar6;
  }
  if ((bool)cVar28 == bVar27) {
    uVar12 = 0;
    uVar23 = 0;
    puVar9 = (ulong *)0x0;
    puVar15 = (undefined1 *)((long)ppuVar13 + lVar3);
  }
  else {
    if (cVar18 == '\0') {
      iVar7 = (int)local_68;
    }
    else {
      if ((int *)puVar26[2] < (int *)puVar26[3]) {
        iVar7 = *(int *)puVar26[2];
      }
      else {
        pcVar2 = *(code **)(*puVar26 + 0x48);
        *(undefined8 *)((long)ppuVar13 + lVar3 + -8) = 0x65fd38;
        local_88 = puVar22;
        local_70 = puVar9;
        local_60 = puVar26;
        iVar7 = (*pcVar2)(puVar26);
        puVar9 = local_70;
        puVar26 = local_60;
        puVar22 = local_88;
      }
      if (iVar7 == -1) {
        puVar26 = (ulong *)0x0;
      }
    }
    if ((ulong *)(param_8 * 2) == (ulong *)0x0) {
      uVar23 = 0;
      puVar9 = (ulong *)0x0;
      uVar12 = 0;
    }
    else {
      uVar23 = 0;
      local_88 = (ulong *)CONCAT44(local_88._4_4_,(int)param_3);
      puVar24 = (ulong *)0x0;
      local_90 = puVar26;
      local_70 = puVar25;
      local_60 = (ulong *)(param_8 * 2);
      do {
        while (*(int *)puVar22[(long)puVar24] == iVar7) {
LAB_0065fa83:
          *(int *)((long)local_70 + uVar23 * 4) = (int)puVar24;
          uVar23 = uVar23 + 1;
          puVar24 = (ulong *)((long)puVar24 + 1);
          if (puVar24 == local_60) goto LAB_0065fa99;
        }
        pcVar2 = *(code **)(*puVar9 + 0x30);
        *(undefined8 *)((long)ppuVar13 + lVar3 + -8) = 0x65fa69;
        iVar8 = (*pcVar2)(puVar9);
        if (iVar8 == iVar7) goto LAB_0065fa83;
        puVar24 = (ulong *)((long)puVar24 + 1);
      } while (puVar24 != local_60);
LAB_0065fa99:
      puVar25 = local_70;
      uVar21 = (ulong)local_88 & 0xffffffff;
      uVar12 = 0;
      puVar26 = local_90;
      puVar9 = (ulong *)0x0;
      puVar15 = (undefined1 *)((long)ppuVar13 + lVar3);
      if (uVar23 != 0) {
        if (local_90[2] < local_90[3]) {
          local_90[2] = local_90[2] + 4;
          local_60 = local_90;
        }
        else {
          local_60 = local_90;
          pcVar2 = *(code **)(*local_90 + 0x50);
          *(undefined8 *)((long)ppuVar13 + lVar3 + -8) = 0x65fd5c;
          local_70 = puVar22;
          (*pcVar2)(local_90);
          puVar22 = local_70;
        }
        uVar12 = uVar23 * 8 + 0x17;
        puVar15 = (undefined1 *)((long)ppuVar13 + lVar3);
        while (puVar17 != (undefined1 *)((long)ppuVar13 + (lVar3 - (uVar12 & 0xfffffffffffff000))))
        {
          puVar16 = puVar15 + -0x1000;
          *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          puVar17 = puVar15 + -0x1000;
          puVar15 = puVar15 + -0x1000;
        }
        uVar12 = (ulong)((uint)uVar12 & 0xff0);
        lVar3 = -uVar12;
        puVar15 = puVar16 + lVar3;
        if (uVar12 != 0) {
          *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
        }
        uVar12 = 0;
        local_70 = local_60;
        local_60 = (ulong *)((ulong)(puVar16 + lVar3 + 0xf) & 0xfffffffffffffff0);
        do {
          uVar21 = puVar22[*(int *)((long)puVar25 + uVar12 * 4)];
          *(undefined8 *)(puVar16 + lVar3 + -8) = 0x65fb45;
          uVar21 = thunk_FUN_007564d0(uVar21);
          ((ulong *)((ulong)(puVar16 + lVar3 + 0xf) & 0xfffffffffffffff0))[uVar12] = uVar21;
          uVar12 = uVar12 + 1;
        } while (uVar23 != uVar12);
        uVar21 = 0xffffffff;
        uVar23 = 1;
        puVar26 = local_70;
        puVar9 = local_60;
      }
    }
  }
  do {
    iVar7 = (int)uVar21;
    cVar28 = iVar7 == -1;
    bVar10 = puVar26 != (ulong *)0x0 && (bool)cVar28;
    bVar11 = cVar28;
    if ((bool)bVar10) {
      if ((int *)puVar26[2] < (int *)puVar26[3]) {
        iVar8 = *(int *)puVar26[2];
      }
      else {
        local_88 = (ulong *)CONCAT44(local_88._4_4_,iVar7);
        local_70 = (ulong *)CONCAT71(local_70._1_7_,cVar28);
        local_60 = (ulong *)CONCAT71(local_60._1_7_,bVar10);
        pcVar2 = *(code **)(*puVar26 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x65fc31;
        local_90 = puVar22;
        iVar8 = (*pcVar2)(puVar26);
        iVar7 = (int)local_88;
        puVar22 = local_90;
        cVar28 = (byte)local_70;
        bVar10 = (byte)local_60;
      }
      if (iVar8 == -1) {
        puVar26 = (ulong *)0x0;
        bVar11 = bVar10;
      }
      else {
        bVar11 = 0;
      }
    }
    bVar10 = local_58 != (ulong *)0x0 & (byte)local_50;
    if (bVar10 == 0) {
      puVar24 = local_60;
      if (bVar11 == (byte)local_50) break;
    }
    else {
      if ((int *)local_58[2] < (int *)local_58[3]) {
        iVar8 = *(int *)local_58[2];
      }
      else {
        local_90 = (ulong *)CONCAT44(local_90._4_4_,iVar7);
        local_88 = (ulong *)CONCAT71(local_88._1_7_,cVar28);
        local_70 = (ulong *)CONCAT71(local_70._1_7_,bVar10);
        local_60 = (ulong *)CONCAT71(local_60._1_7_,bVar11);
        pcVar2 = *(code **)(*local_58 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x65fc6b;
        local_98 = puVar22;
        iVar8 = (*pcVar2)();
        iVar7 = (int)local_90;
        puVar22 = local_98;
        bVar11 = (byte)local_60;
        cVar28 = (char)local_88;
        bVar10 = (byte)local_70;
      }
      puVar24 = (ulong *)(long *)0x0;
      if (iVar8 != -1) {
        bVar10 = 0;
        puVar24 = local_58;
      }
      local_58 = puVar24;
      puVar24 = local_60;
      if (bVar11 == bVar10) break;
    }
    puVar24 = local_60;
    if ((puVar26 != (ulong *)0x0) && (cVar28 != '\0')) {
      if ((int *)puVar26[2] < (int *)puVar26[3]) {
        iVar7 = *(int *)puVar26[2];
      }
      else {
        local_60 = (ulong *)CONCAT44(local_60._4_4_,iVar7);
        pcVar2 = *(code **)(*puVar26 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x65fc06;
        local_70 = puVar22;
        iVar7 = (*pcVar2)(puVar26);
        puVar22 = local_70;
      }
      puVar24 = local_60;
      if (iVar7 == -1) {
        puVar26 = (ulong *)0x0;
      }
    }
    local_60 = puVar22;
    if (uVar12 == 0) goto LAB_0065f9b6;
    uVar21 = 0;
    uVar20 = 0;
LAB_0065f87d:
    do {
      if (uVar23 < puVar9[uVar21]) {
        piVar1 = (int *)((long)puVar25 + uVar21 * 4);
        if (*(int *)(local_60[*piVar1] + uVar23 * 4) != iVar7) {
          uVar12 = uVar12 - 1;
          *piVar1 = *(int *)((long)puVar25 + uVar12 * 4);
          puVar9[uVar21] = puVar9[uVar12];
          if (uVar12 <= uVar21) break;
          goto LAB_0065f87d;
        }
      }
      else {
        uVar20 = uVar20 + 1;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar12);
    if (uVar20 == uVar12) break;
    if (puVar26[2] < puVar26[3]) {
      puVar26[2] = puVar26[2] + 4;
      puVar22 = local_60;
      local_60 = puVar24;
    }
    else {
      pcVar2 = *(code **)(*puVar26 + 0x50);
      *(undefined8 *)(puVar15 + -8) = 0x65fa0d;
      (*pcVar2)(puVar26);
      puVar22 = local_60;
    }
    uVar23 = uVar23 + 1;
    uVar21 = 0xffffffff;
  } while( true );
  local_60 = puVar24;
  puVar24 = local_60;
  if (uVar12 == 1) {
    uVar12 = *puVar9;
joined_r0x0065fb89:
    if (uVar12 == uVar23) {
LAB_0065f93b:
      iVar7 = (int)*puVar25;
      if ((int)param_8 <= iVar7) {
        iVar7 = iVar7 - (int)param_8;
      }
      *local_80 = iVar7;
      goto LAB_0065f9bd;
    }
  }
  else if (uVar12 == 2) {
    if (*puVar9 != uVar23) {
      uVar12 = puVar9[1];
      goto joined_r0x0065fb89;
    }
    goto LAB_0065f93b;
  }
LAB_0065f9b6:
  local_60 = puVar24;
  *local_78 = *local_78 | 4;
LAB_0065f9bd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar26;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_0065fd6e;
  FUN_00771f60();
}

