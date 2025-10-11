
/* WARNING: Removing unreachable block (ram,0x00702eda) */

void FUN_00702e20(uint param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  char *local_90;
  uint local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *puVar18;
  
  param_1 = param_1 & 1;
  puVar20 = auStack_98;
  puVar19 = auStack_98;
  cVar1 = *param_2;
  local_70 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined8 *)&stack0x00000008;
  local_88 = 0x10;
  local_78 = local_68;
  local_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  cVar2 = cVar1;
  iVar9 = 0;
  puVar11 = (undefined8 *)0x0;
  puVar10 = auStack_98;
  pcVar15 = param_2;
  if (cVar1 == '\0') {
    puVar14 = DAT_009464a0;
    if (param_1 == 0) {
LAB_007030c4:
      if (local_70 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar20 + -8) = &UNK_00703103;
        FUN_00771f60(param_1,param_2);
      }
      return;
    }
  }
  else {
LAB_00702eb5:
    do {
      puVar16 = puVar10;
      puVar23 = puVar11;
      iVar25 = iVar9;
      if ((cVar1 != '%') || (param_2[1] != 's')) {
        *(undefined8 *)(puVar16 + -8) = 0x702eae;
        param_2 = (char *)thunk_FUN_00714230(param_2 + 1,0x25);
        cVar1 = *param_2;
        iVar9 = iVar25;
        puVar11 = puVar23;
        puVar10 = puVar16;
        if (cVar1 != '\0') goto LAB_00702eb5;
      }
      if ((cVar2 == '%') && (pcVar15[1] == 's')) {
        if (local_88 < 0x30) {
          uVar24 = (ulong)local_88;
          local_88 = local_88 + 8;
          puVar11 = (undefined8 *)(local_78 + uVar24);
        }
        else {
          puVar11 = local_80;
          local_80 = local_80 + 1;
        }
        pcVar12 = (char *)*puVar11;
        param_2 = pcVar15 + 2;
        local_90 = pcVar12;
        *(undefined8 *)(puVar16 + -8) = 0x702f5c;
        lVar22 = thunk_FUN_007129d0(pcVar12);
        pcVar12 = local_90;
      }
      else {
        lVar22 = (long)param_2 - (long)pcVar15;
        pcVar12 = pcVar15;
      }
      puVar17 = puVar16 + -0x20;
      puVar18 = puVar16 + -0x20;
      *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      puVar11 = (undefined8 *)((ulong)(puVar16 + -0x11) & 0xfffffffffffffff0);
      *puVar11 = pcVar12;
      puVar11[1] = lVar22;
      puVar11[2] = puVar23;
      cVar1 = *param_2;
      cVar2 = cVar1;
      iVar9 = iVar25 + 1;
      puVar10 = puVar16 + -0x20;
      pcVar15 = param_2;
    } while (cVar1 != '\0');
    lVar21 = (long)(iVar25 + 1) * 0x10;
    puVar19 = puVar16 + -0x20;
    while (puVar18 != puVar16 + (-0x20 - (lVar21 + 0x10U & 0xfffffffffffff000))) {
      puVar17 = puVar19 + -0x1000;
      *(undefined8 *)(puVar19 + -8) = *(undefined8 *)(puVar19 + -8);
      puVar18 = puVar19 + -0x1000;
      puVar19 = puVar19 + -0x1000;
    }
    uVar24 = (ulong)((uint)(lVar21 + 0x10U) & 0xfff);
    lVar7 = -uVar24;
    puVar20 = puVar17 + lVar7;
    if (uVar24 != 0) {
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
    }
    param_2 = (char *)((ulong)(puVar17 + lVar7 + 0xf) & 0xfffffffffffffff0);
    pcVar15 = param_2 + lVar21 + -0x10;
    *(char **)pcVar15 = pcVar12;
    *(long *)(pcVar15 + 8) = lVar22;
    if (iVar25 != 0) {
      do {
        lVar4 = puVar23[1];
        uVar5 = *puVar23;
        pcVar12 = pcVar15 + -0x10;
        puVar23 = (undefined8 *)puVar23[2];
        lVar22 = lVar22 + lVar4;
        *(undefined8 *)pcVar12 = uVar5;
        *(long *)(pcVar15 + -8) = lVar4;
        pcVar15 = pcVar12;
      } while (param_2 + lVar21 + -0x20 + (ulong)(iVar25 - 1) * -0x10 != pcVar12);
    }
    syscall();
    bVar26 = param_1 == 0;
    param_1 = 2;
    if (bVar26) goto LAB_007030c4;
    uVar24 = DAT_0093eb18 + 4 + lVar22 & -DAT_0093eb18;
    *(undefined8 *)(puVar17 + lVar7 + -8) = 0x70305b;
    puVar13 = (undefined4 *)FUN_0076f020(0,uVar24,3,0x22,0xffffffff,0);
    puVar19 = puVar17 + lVar7;
    puVar14 = DAT_009464a0;
    if (puVar13 != (undefined4 *)0xffffffffffffffff) {
      *puVar13 = (int)uVar24;
      puVar14 = puVar13 + 1;
      pcVar15 = param_2 + ((long)iVar25 + 1) * 0x10;
      do {
        uVar5 = *(undefined8 *)(param_2 + 8);
        uVar6 = *(undefined8 *)param_2;
        param_2 = param_2 + 0x10;
        *(undefined8 *)(puVar17 + lVar7 + -8) = 0x703091;
        puVar14 = (undefined4 *)thunk_FUN_00713820(puVar14,uVar6,uVar5);
      } while (param_2 != pcVar15);
      *(undefined1 *)puVar14 = 0;
      puVar8 = DAT_009464a0;
      LOCK();
      UNLOCK();
      puVar19 = puVar17 + lVar7;
      puVar14 = puVar13;
      if (DAT_009464a0 != (undefined4 *)0x0) {
        uVar3 = *DAT_009464a0;
        *(undefined8 *)(puVar17 + lVar7 + -8) = 0x7030b2;
        DAT_009464a0 = puVar13;
        FUN_0076f080(puVar8,uVar3);
        puVar19 = puVar17 + lVar7;
        puVar14 = DAT_009464a0;
      }
    }
  }
  DAT_009464a0 = puVar14;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar19 + -8) = 0x7030b7;
  FUN_00404713();
}

