
long * FUN_00687a90(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5,int *param_6,long *param_7,long param_8,long param_9,
                   uint *param_10)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  bool bVar8;
  char cVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 *puVar13;
  undefined1 *puVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  char cVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined1 auStack_a8 [8];
  long *local_a0;
  long *local_98;
  char local_89;
  int *local_88;
  uint *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  long local_40;
  undefined1 *puVar12;
  undefined1 *puVar14;
  
  puVar11 = auStack_a8;
  local_70 = param_7;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  plVar6 = (long *)FUN_0067c1e0(param_9 + 0xd0);
  uVar21 = param_8 * 8 + 0x17;
  puVar12 = auStack_a8;
  puVar14 = auStack_a8;
  while (puVar12 != auStack_a8 + -(uVar21 & 0xfffffffffffff000)) {
    puVar11 = puVar14 + -0x1000;
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    puVar12 = puVar14 + -0x1000;
    puVar14 = puVar14 + -0x1000;
  }
  uVar21 = (ulong)((uint)uVar21 & 0xff0);
  lVar3 = -uVar21;
  puVar15 = puVar11 + lVar3;
  puVar13 = puVar11 + lVar3;
  puVar14 = puVar11 + lVar3;
  if (uVar21 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  piVar17 = (int *)((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar11 + lVar3 + -8) = 0x687b58;
  cVar4 = FUN_00681960(&local_58,&local_68);
  if (cVar4 == '\0') {
    lVar22 = 0;
    uVar21 = 0;
    *(undefined8 *)(puVar11 + lVar3 + -8) = 0x687d5a;
    uVar10 = FUN_00681a20(&local_58);
    uVar10 = uVar10 & 0xffffffff;
    lVar2 = param_8 * 2;
    plVar18 = local_70;
    if (lVar2 == 0) {
      puVar23 = (ulong *)0x0;
      uVar10 = 0;
      puVar15 = puVar11 + lVar3;
      plVar6 = local_58;
      uVar20 = (uint)local_50;
    }
    else {
      do {
        while (*(char *)plVar18[lVar22] == (char)uVar10) {
LAB_00687da2:
          piVar17[uVar21] = (int)lVar22;
          lVar22 = lVar22 + 1;
          uVar21 = uVar21 + 1;
          if (lVar22 == lVar2) goto LAB_00687db3;
        }
        local_70 = (long *)CONCAT71(local_70._1_7_,(char)uVar10);
        pcVar1 = *(code **)(*plVar6 + 0x10);
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x687d81;
        local_78 = plVar18;
        cVar4 = (*pcVar1)(plVar6);
        uVar10 = (ulong)local_70 & 0xff;
        plVar18 = local_78;
        if ((char)local_70 == cVar4) goto LAB_00687da2;
        lVar22 = lVar22 + 1;
      } while (lVar22 != lVar2);
LAB_00687db3:
      if (uVar21 == 0) {
        uVar10 = 0;
        puVar23 = (ulong *)0x0;
        uVar21 = 0;
        plVar6 = local_58;
        uVar20 = (uint)local_50;
      }
      else {
        local_70 = local_58;
        *(undefined8 *)(puVar11 + lVar3 + -8) = 0x687e3e;
        local_78 = plVar18;
        FUN_0069d140(local_58);
        uVar10 = uVar21 * 8 + 0x17;
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
        uVar10 = 0;
        puVar23 = (ulong *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
        plVar6 = local_78;
        local_78 = local_70;
        do {
          lVar2 = plVar6[piVar17[uVar10]];
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687ebd;
          local_70 = plVar6;
          uVar7 = thunk_FUN_007129d0(lVar2);
          puVar23[uVar10] = uVar7;
          uVar10 = uVar10 + 1;
          plVar6 = local_70;
        } while (uVar21 != uVar10);
        uVar20 = 0xffffffff;
        uVar21 = 1;
        plVar18 = local_70;
        plVar6 = local_78;
      }
    }
  }
  else {
    uVar10 = 0;
    uVar21 = 0;
    puVar23 = (ulong *)0x0;
    puVar15 = puVar11 + lVar3;
    plVar18 = local_70;
    plVar6 = local_58;
    uVar20 = (uint)local_50;
  }
  bVar24 = (int)local_60 == -1;
  do {
    cVar4 = uVar20 == 0xffffffff;
    bVar8 = plVar6 != (long *)0x0 && (bool)cVar4;
    cVar9 = cVar4;
    if (bVar8) {
      if ((ulong)plVar6[3] <= (ulong)plVar6[2]) {
        local_78 = (long *)CONCAT71(local_78._1_7_,bVar8);
        local_70 = (long *)CONCAT44(local_70._4_4_,uVar20);
        pcVar1 = *(code **)(*plVar6 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x687e02;
        local_98 = plVar18;
        local_89 = cVar4;
        iVar5 = (*pcVar1)(plVar6);
        plVar18 = local_98;
        uVar20 = (uint)local_70;
        cVar4 = local_89;
        if (iVar5 == -1) {
          local_58 = (long *)0x0;
          cVar9 = (char)local_78;
          goto LAB_00687b99;
        }
      }
      cVar9 = '\0';
    }
LAB_00687b99:
    bVar8 = local_68 != (long *)0x0 && bVar24;
    cVar19 = bVar24;
    if (bVar8) {
      if ((ulong)local_68[3] <= (ulong)local_68[2]) {
        local_98 = (long *)CONCAT71(local_98._1_7_,cVar4);
        local_78 = (long *)CONCAT71(local_78._1_7_,bVar8);
        local_70 = (long *)CONCAT44(local_70._4_4_,uVar20);
        pcVar1 = *(code **)(*local_68 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x687f32;
        local_a0 = plVar18;
        local_89 = cVar9;
        iVar5 = (*pcVar1)();
        plVar18 = local_a0;
        uVar20 = (uint)local_70;
        cVar9 = local_89;
        cVar4 = (char)local_98;
        if (iVar5 == -1) {
          local_68 = (long *)0x0;
          cVar19 = (char)local_78;
          goto LAB_00687bb0;
        }
      }
      if (cVar9 == '\0') break;
    }
    else {
LAB_00687bb0:
      if (cVar19 == cVar9) break;
    }
    if ((local_58 != (long *)0x0) && (cVar4 != '\0')) {
      if ((byte *)local_58[2] < (byte *)local_58[3]) {
        uVar20 = (uint)*(byte *)local_58[2];
      }
      else {
        pcVar1 = *(code **)(*local_58 + 0x48);
        *(undefined8 *)(puVar15 + -8) = 0x687eed;
        local_70 = plVar18;
        uVar20 = (*pcVar1)();
        plVar18 = local_70;
        if (uVar20 == 0xffffffff) {
          local_58 = (long *)0x0;
        }
      }
    }
    if (uVar10 == 0) goto LAB_00687c90;
    uVar7 = 0;
    uVar16 = 0;
    do {
      while (puVar23[uVar7] <= uVar21) {
        uVar16 = uVar16 + 1;
LAB_00687be8:
        uVar7 = uVar7 + 1;
        if (uVar10 <= uVar7) goto LAB_00687c20;
      }
      if (*(char *)(plVar18[piVar17[uVar7]] + uVar21) == (char)uVar20) goto LAB_00687be8;
      uVar10 = uVar10 - 1;
      piVar17[uVar7] = piVar17[uVar10];
      puVar23[uVar7] = puVar23[uVar10];
    } while (uVar7 < uVar10);
LAB_00687c20:
    if (uVar16 == uVar10) break;
    if ((ulong)local_58[2] < (ulong)local_58[3]) {
      local_58[2] = local_58[2] + 1;
      plVar6 = local_58;
    }
    else {
      local_70 = local_58;
      pcVar1 = *(code **)(*local_58 + 0x50);
      *(undefined8 *)(puVar15 + -8) = 0x687d11;
      local_78 = plVar18;
      (*pcVar1)(local_58);
      plVar18 = local_78;
      plVar6 = local_70;
    }
    local_50 = CONCAT44(local_50._4_4_,0xffffffff);
    uVar21 = uVar21 + 1;
    uVar20 = 0xffffffff;
  } while( true );
  if (uVar10 == 1) {
    uVar10 = *puVar23;
joined_r0x00687dce:
    if (uVar10 == uVar21) {
LAB_00687d32:
      iVar5 = *piVar17;
      if ((int)param_8 <= iVar5) {
        iVar5 = iVar5 - (int)param_8;
      }
      *local_88 = iVar5;
      goto LAB_00687c97;
    }
  }
  else if (uVar10 == 2) {
    if (*puVar23 != uVar21) {
      uVar10 = puVar23[1];
      goto joined_r0x00687dce;
    }
    goto LAB_00687d32;
  }
LAB_00687c90:
  *local_80 = *local_80 | 4;
LAB_00687c97:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -8) = &UNK_00687f7b;
    FUN_00771f60();
  }
  return local_58;
}

