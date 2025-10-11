
ulong * FUN_0064b080(undefined8 param_1,ulong *param_2,ulong param_3,long *param_4,int param_5,
                    int *param_6,ulong *param_7,long param_8,long param_9,uint *param_10)

{
  int *piVar1;
  code *pcVar2;
  long lVar3;
  ulong **ppuVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong *puVar8;
  long *plVar9;
  bool bVar10;
  byte bVar11;
  bool bVar12;
  ulong uVar13;
  ulong **ppuVar14;
  undefined1 *puVar16;
  char cVar19;
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  long in_FS_OFFSET;
  byte bVar28;
  char cVar29;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  int *local_78;
  uint *local_70;
  ulong *local_68;
  ulong local_60;
  ulong *local_58;
  long *local_50;
  long local_40;
  ulong **ppuVar15;
  undefined1 *puVar17;
  undefined1 *puVar18;
  
  uVar22 = param_3 & 0xffffffff;
  ppuVar14 = &local_98;
  local_68 = param_7;
  local_70 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_6;
  local_60 = param_3;
  local_58 = param_2;
  local_50 = param_4;
  puVar8 = (ulong *)FUN_0067c1e0(param_9 + 0xd0);
  uVar13 = param_8 * 8 + 0x17;
  ppuVar15 = &local_98;
  ppuVar4 = &local_98;
  while (ppuVar15 != (ulong **)((long)&local_98 - (uVar13 & 0xfffffffffffff000))) {
    ppuVar14 = (ulong **)((long)ppuVar4 + -0x1000);
    *(undefined8 *)((long)ppuVar4 + -8) = *(undefined8 *)((long)ppuVar4 + -8);
    ppuVar15 = (ulong **)((long)ppuVar4 + -0x1000);
    ppuVar4 = (ulong **)((long)ppuVar4 + -0x1000);
  }
  uVar13 = (ulong)((uint)uVar13 & 0xff0);
  lVar3 = -uVar13;
  puVar16 = (undefined1 *)((long)ppuVar14 + lVar3);
  puVar17 = (undefined1 *)((long)ppuVar14 + lVar3);
  puVar18 = (undefined1 *)((long)ppuVar14 + lVar3);
  if (uVar13 != 0) {
    *(undefined8 *)((long)ppuVar14 + -8) = *(undefined8 *)((long)ppuVar14 + -8);
  }
  puVar25 = (ulong *)((ulong)((long)ppuVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
  cVar19 = param_2 != (ulong *)0x0 && (int)local_60 == -1;
  puVar27 = local_58;
  puVar23 = local_68;
  cVar29 = (int)local_60 == -1;
  if (((bool)cVar19) && (cVar29 = '\0', param_2[3] <= param_2[2])) {
    local_90 = local_68;
    local_88 = local_58;
    local_80 = (ulong *)((ulong)local_80 & 0xffffffffffffff00);
    local_68 = (ulong *)CONCAT71(local_68._1_7_,cVar19);
    pcVar2 = *(code **)(*param_2 + 0x48);
    *(undefined8 *)((long)ppuVar14 + lVar3 + -8) = 0x64b533;
    local_58 = puVar8;
    iVar7 = (*pcVar2)(param_2);
    puVar8 = local_58;
    puVar27 = local_88;
    puVar23 = local_90;
    cVar29 = (byte)local_80;
    cVar19 = (byte)local_68;
    if (iVar7 == -1) {
      puVar27 = (ulong *)0x0;
      cVar19 = '\0';
      cVar29 = (byte)local_68;
    }
  }
  bVar28 = param_5 == -1;
  bVar12 = param_4 != (long *)0x0 && (bool)bVar28;
  bVar10 = (bool)bVar28;
  if (bVar12) {
    if ((ulong)param_4[2] < (ulong)param_4[3]) {
      bVar10 = false;
    }
    else {
      local_88 = (ulong *)CONCAT71(local_88._1_7_,bVar28);
      local_80 = (ulong *)CONCAT71(local_80._1_7_,cVar29);
      local_68 = (ulong *)CONCAT71(local_68._1_7_,cVar19);
      pcVar2 = *(code **)(*param_4 + 0x48);
      *(undefined8 *)((long)ppuVar14 + lVar3 + -8) = 0x64b697;
      local_98 = puVar23;
      local_90 = puVar27;
      local_58 = puVar8;
      iVar7 = (*pcVar2)(param_4);
      bVar10 = iVar7 == -1 && bVar12;
      local_50 = (long *)0x0;
      puVar8 = local_58;
      puVar27 = local_90;
      puVar23 = local_98;
      cVar29 = (byte)local_80;
      cVar19 = (byte)local_68;
      bVar28 = (byte)local_88;
      if (iVar7 != -1) {
        local_50 = param_4;
      }
    }
  }
  if ((bool)cVar29 == bVar10) {
    uVar13 = 0;
    uVar24 = 0;
    puVar8 = (ulong *)0x0;
    puVar16 = (undefined1 *)((long)ppuVar14 + lVar3);
  }
  else {
    if (cVar19 == '\0') {
      cVar29 = (char)local_60;
    }
    else if ((char *)puVar27[2] < (char *)puVar27[3]) {
      cVar29 = *(char *)puVar27[2];
    }
    else {
      local_80 = (ulong *)CONCAT71(local_80._1_7_,bVar28);
      pcVar2 = *(code **)(*puVar27 + 0x48);
      *(undefined8 *)((long)ppuVar14 + lVar3 + -8) = 0x64b6ec;
      local_88 = puVar23;
      local_68 = puVar8;
      local_58 = puVar27;
      iVar7 = (*pcVar2)(puVar27);
      bVar10 = iVar7 == -1;
      if (bVar10) {
        iVar7 = -1;
      }
      cVar29 = (char)iVar7;
      puVar8 = local_68;
      puVar27 = local_58;
      puVar23 = local_88;
      bVar28 = (byte)local_80;
      if (bVar10) {
        puVar27 = (ulong *)0x0;
      }
    }
    if ((ulong *)(param_8 * 2) == (ulong *)0x0) {
      uVar24 = 0;
      puVar8 = (ulong *)0x0;
      uVar13 = 0;
    }
    else {
      puVar26 = (ulong *)0x0;
      local_80 = (ulong *)CONCAT44(local_80._4_4_,(int)param_3);
      uVar24 = 0;
      local_88 = (ulong *)CONCAT71(local_88._1_7_,bVar28);
      local_90 = puVar27;
      local_68 = puVar25;
      local_58 = (ulong *)(param_8 * 2);
      do {
        while (*(char *)puVar23[(long)puVar26] == cVar29) {
LAB_0064b3c5:
          *(int *)((long)local_68 + uVar24 * 4) = (int)puVar26;
          uVar24 = uVar24 + 1;
          puVar26 = (ulong *)((long)puVar26 + 1);
          if (local_58 == puVar26) goto LAB_0064b3db;
        }
        pcVar2 = *(code **)(*puVar8 + 0x10);
        *(undefined8 *)((long)ppuVar14 + lVar3 + -8) = 0x64b3aa;
        cVar19 = (*pcVar2)(puVar8);
        if (cVar19 == cVar29) goto LAB_0064b3c5;
        puVar26 = (ulong *)((long)puVar26 + 1);
      } while (local_58 != puVar26);
LAB_0064b3db:
      puVar25 = local_68;
      uVar22 = (ulong)local_80 & 0xffffffff;
      uVar13 = 0;
      puVar27 = local_90;
      bVar28 = (byte)local_88;
      puVar8 = (ulong *)0x0;
      puVar16 = (undefined1 *)((long)ppuVar14 + lVar3);
      if (uVar24 != 0) {
        if (local_90[2] < local_90[3]) {
          local_90[2] = local_90[2] + 1;
          local_58 = local_90;
        }
        else {
          local_68 = (ulong *)CONCAT71(local_68._1_7_,(byte)local_88);
          local_58 = local_90;
          pcVar2 = *(code **)(*local_90 + 0x50);
          *(undefined8 *)((long)ppuVar14 + lVar3 + -8) = 0x64b72d;
          local_80 = puVar23;
          (*pcVar2)(local_90);
          puVar23 = local_80;
          bVar28 = (byte)local_68;
        }
        uVar13 = uVar24 * 8 + 0x17;
        puVar16 = (undefined1 *)((long)ppuVar14 + lVar3);
        while (puVar18 != (undefined1 *)((long)ppuVar14 + (lVar3 - (uVar13 & 0xfffffffffffff000))))
        {
          puVar17 = puVar16 + -0x1000;
          *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
          puVar18 = puVar16 + -0x1000;
          puVar16 = puVar16 + -0x1000;
        }
        uVar13 = (ulong)((uint)uVar13 & 0xff0);
        lVar3 = -uVar13;
        puVar16 = puVar17 + lVar3;
        if (uVar13 != 0) {
          *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
        }
        local_68 = (ulong *)CONCAT71(local_68._1_7_,bVar28);
        uVar13 = 0;
        local_80 = local_58;
        local_58 = (ulong *)((ulong)(puVar17 + lVar3 + 0xf) & 0xfffffffffffffff0);
        do {
          uVar22 = puVar23[*(int *)((long)puVar25 + uVar13 * 4)];
          *(undefined8 *)(puVar17 + lVar3 + -8) = 0x64b48d;
          uVar22 = thunk_FUN_007129d0(uVar22);
          ((ulong *)((ulong)(puVar17 + lVar3 + 0xf) & 0xfffffffffffffff0))[uVar13] = uVar22;
          uVar13 = uVar13 + 1;
        } while (uVar24 != uVar13);
        uVar22 = 0xffffffff;
        uVar24 = 1;
        puVar27 = local_80;
        bVar28 = (byte)local_68;
        puVar8 = local_58;
      }
    }
  }
  do {
    cVar29 = (int)uVar22 == -1;
    bVar10 = puVar27 != (ulong *)0x0 && (bool)cVar29;
    bVar11 = cVar29;
    if (bVar10) {
      if (puVar27[2] < puVar27[3]) {
        bVar11 = 0;
      }
      else {
        local_88 = (ulong *)CONCAT71(local_88._1_7_,bVar28);
        local_80 = (ulong *)CONCAT44(local_80._4_4_,(int)uVar22);
        local_68 = (ulong *)CONCAT71(local_68._1_7_,cVar29);
        local_58 = (ulong *)CONCAT71(local_58._1_7_,bVar10);
        pcVar2 = *(code **)(*puVar27 + 0x48);
        *(undefined8 *)(puVar16 + -8) = 0x64b5bd;
        local_90 = puVar23;
        iVar7 = (*pcVar2)(puVar27);
        uVar22 = (ulong)local_80 & 0xffffffff;
        puVar23 = local_90;
        bVar28 = (byte)local_88;
        cVar29 = (byte)local_68;
        if (iVar7 == -1) {
          puVar27 = (ulong *)0x0;
          bVar11 = (byte)local_58;
        }
        else {
          bVar11 = 0;
        }
      }
    }
    bVar5 = local_50 != (long *)0x0 & bVar28;
    bVar20 = bVar28;
    if (bVar5 == 0) {
LAB_0064b1bd:
      puVar26 = local_68;
      if (bVar11 == bVar20) break;
    }
    else {
      if ((ulong)local_50[3] <= (ulong)local_50[2]) {
        local_68 = (ulong *)CONCAT71(local_68._1_7_,bVar5);
        local_90 = (ulong *)CONCAT71(local_90._1_7_,bVar28);
        local_88 = (ulong *)CONCAT44(local_88._4_4_,(int)uVar22);
        local_80 = (ulong *)CONCAT71(local_80._1_7_,cVar29);
        local_58 = (ulong *)CONCAT71(local_58._1_7_,bVar11);
        pcVar2 = *(code **)(*local_50 + 0x48);
        *(undefined8 *)(puVar16 + -8) = 0x64b616;
        local_98 = puVar23;
        iVar7 = (*pcVar2)(local_50);
        uVar22 = (ulong)local_88 & 0xffffffff;
        bVar20 = (byte)local_68;
        if (iVar7 != -1) {
          bVar20 = 0;
        }
        plVar9 = (long *)0x0;
        if (iVar7 != -1) {
          plVar9 = local_50;
        }
        puVar23 = local_98;
        local_50 = plVar9;
        bVar28 = (byte)local_90;
        bVar11 = (byte)local_58;
        cVar29 = (byte)local_80;
        goto LAB_0064b1bd;
      }
      puVar26 = local_68;
      if (bVar11 == 0) break;
    }
    if ((puVar27 == (ulong *)0x0) || (cVar29 == '\0')) {
LAB_0064b1d6:
      cVar29 = (char)uVar22;
      puVar26 = local_68;
    }
    else {
      if ((char *)puVar27[3] <= (char *)puVar27[2]) {
        local_68 = (ulong *)CONCAT71(local_68._1_7_,bVar28);
        local_58 = (ulong *)CONCAT44(local_58._4_4_,(int)uVar22);
        pcVar2 = *(code **)(*puVar27 + 0x48);
        *(undefined8 *)(puVar16 + -8) = 0x64b575;
        local_80 = puVar23;
        uVar6 = (*pcVar2)(puVar27);
        uVar22 = (ulong)uVar6;
        puVar23 = local_80;
        bVar28 = (byte)local_68;
        if (uVar6 == 0xffffffff) {
          uVar22 = 0xffffffff;
          puVar27 = (ulong *)0x0;
        }
        goto LAB_0064b1d6;
      }
      cVar29 = *(char *)puVar27[2];
      puVar26 = local_68;
    }
    local_68 = puVar23;
    if (uVar13 == 0) goto LAB_0064b2f1;
    uVar22 = 0;
    uVar21 = 0;
    do {
      while (puVar8[uVar22] <= uVar24) {
        uVar21 = uVar21 + 1;
LAB_0064b1f0:
        uVar22 = uVar22 + 1;
        if (uVar13 <= uVar22) goto LAB_0064b227;
      }
      piVar1 = (int *)((long)puVar25 + uVar22 * 4);
      if (*(char *)(local_68[*piVar1] + uVar24) == cVar29) goto LAB_0064b1f0;
      uVar13 = uVar13 - 1;
      *piVar1 = *(int *)((long)puVar25 + uVar13 * 4);
      puVar8[uVar22] = puVar8[uVar13];
    } while (uVar22 < uVar13);
LAB_0064b227:
    if (uVar21 == uVar13) break;
    if (puVar27[2] < puVar27[3]) {
      puVar27[2] = puVar27[2] + 1;
      puVar23 = local_68;
      local_68 = puVar26;
    }
    else {
      local_58._1_7_ = (undefined7)((ulong)local_58 >> 8);
      local_58 = (ulong *)CONCAT71(local_58._1_7_,bVar28);
      pcVar2 = *(code **)(*puVar27 + 0x50);
      *(undefined8 *)(puVar16 + -8) = 0x64b349;
      (*pcVar2)(puVar27);
      puVar23 = local_68;
      bVar28 = (byte)local_58;
    }
    uVar24 = uVar24 + 1;
    uVar22 = 0xffffffff;
  } while( true );
  local_68 = puVar26;
  puVar26 = local_68;
  if (uVar13 == 1) {
    uVar13 = *puVar8;
joined_r0x0064b4d6:
    if (uVar13 == uVar24) {
LAB_0064b296:
      iVar7 = (int)*puVar25;
      if ((int)param_8 <= iVar7) {
        iVar7 = iVar7 - (int)param_8;
      }
      *local_78 = iVar7;
      goto LAB_0064b2f8;
    }
  }
  else if (uVar13 == 2) {
    if (*puVar8 != uVar24) {
      uVar13 = puVar8[1];
      goto joined_r0x0064b4d6;
    }
    goto LAB_0064b296;
  }
LAB_0064b2f1:
  local_68 = puVar26;
  *local_70 = *local_70 | 4;
LAB_0064b2f8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar16 + -8) = &UNK_0064b744;
    FUN_00771f60();
  }
  return puVar27;
}

