
/* WARNING: Removing unreachable block (ram,0x00681371) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_006812e0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                   undefined4 param_5,char param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 auStack_e8 [8];
  char acStack_e0 [48];
  undefined8 local_b0;
  char *local_a8;
  long *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long *local_70;
  undefined1 local_65;
  int local_64;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_70 = (long *)(param_4 + 0xd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0x68133a;
  local_94 = param_5;
  local_90 = param_1;
  local_80 = param_3;
  local_78 = FUN_0067fd80(&local_65,local_70);
  lVar20 = *(long *)(param_4 + 8);
  if (lVar20 < 0) {
    lVar20 = 6;
  }
  local_b0 = 0x68135d;
  FUN_006c6830(param_4,local_58,(int)param_6);
  puVar11 = auStack_e8;
  puVar13 = auStack_e8;
  puVar14 = auStack_e8;
  puVar15 = auStack_e8;
  puVar10 = auStack_e8;
  local_88 = local_70;
  pcVar17 = acStack_e0;
  local_70 = (long *)pcVar17;
  if ((*(uint *)(param_4 + 0x18) & 0x104) == 0x104) {
    local_60 = FUN_006256a0();
    plVar8 = local_70;
    local_70 = &local_60;
    local_64 = FUN_0063f610(local_70,plVar8,0x36,local_58);
    plVar8 = local_70;
    plVar21 = local_88;
    if (0x35 < local_64) {
      iVar19 = local_64 + 1;
      uVar7 = (long)iVar19 + 0x17;
      puVar13 = auStack_e8;
      while (puVar14 != auStack_e8 + -(uVar7 & 0xfffffffffffff000)) {
        puVar15 = puVar13 + -0x1000;
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
        puVar14 = puVar13 + -0x1000;
        puVar13 = puVar13 + -0x1000;
      }
      uVar7 = (ulong)((uint)uVar7 & 0xff0);
      lVar20 = -uVar7;
      puVar10 = puVar15 + lVar20;
      if (uVar7 != 0) {
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
      }
      local_70 = local_88;
      local_88 = plVar8;
      pcVar17 = (char *)((ulong)(puVar15 + lVar20 + 0xf) & 0xfffffffffffffff0);
      *(undefined8 *)(puVar15 + lVar20 + -8) = 0x681751;
      local_60 = FUN_006256a0();
      *(undefined8 *)(puVar15 + lVar20 + -8) = param_8;
      *(undefined8 *)(puVar15 + lVar20 + -0x10) = param_7;
      *(undefined8 *)(puVar15 + lVar20 + -0x18) = 0x68176f;
      local_64 = FUN_0063f610(local_88,pcVar17,iVar19,local_58);
      plVar21 = local_70;
    }
  }
  else {
    local_60 = FUN_006256a0();
    plVar8 = local_70;
    local_70 = &local_60;
    local_64 = FUN_0063f610(local_70,plVar8,0x36,local_58,lVar20);
    plVar8 = local_70;
    puVar10 = auStack_e8;
    plVar21 = local_88;
    if (0x35 < local_64) {
      uVar7 = (long)(local_64 + 1) + 0x17;
      puVar15 = auStack_e8;
      while (puVar11 != auStack_e8 + -(uVar7 & 0xfffffffffffff000)) {
        puVar13 = puVar15 + -0x1000;
        *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
        puVar11 = puVar15 + -0x1000;
        puVar15 = puVar15 + -0x1000;
      }
      uVar7 = (ulong)((uint)uVar7 & 0xff0);
      lVar9 = -uVar7;
      puVar10 = puVar13 + lVar9;
      if (uVar7 != 0) {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      }
      local_70 = local_88;
      local_a0 = plVar8;
      pcVar17 = (char *)((ulong)(puVar13 + lVar9 + 0xf) & 0xfffffffffffffff0);
      local_88 = (long *)CONCAT44(local_88._4_4_,local_64 + 1);
      *(undefined8 *)(puVar13 + lVar9 + -8) = 0x681457;
      local_60 = FUN_006256a0();
      *(undefined8 *)(puVar13 + lVar9 + -8) = param_8;
      *(undefined8 *)(puVar13 + lVar9 + -0x10) = param_7;
      *(undefined8 *)(puVar13 + lVar9 + -0x18) = 0x68147b;
      local_64 = FUN_0063f610(local_a0,pcVar17,(ulong)local_88 & 0xffffffff,local_58,lVar20);
      plVar21 = local_70;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x681490;
  plVar8 = (long *)FUN_0067c1e0(plVar21);
  plVar21 = (long *)(long)local_64;
  puVar15 = puVar10 + -((long)plVar21 + 0x17U & 0xfffffffffffff000);
  for (; puVar10 != puVar15; puVar10 = puVar10 + -0x1000) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  uVar7 = (ulong)((uint)((long)plVar21 + 0x17U) & 0xff0);
  lVar20 = -uVar7;
  puVar15 = puVar10 + lVar20;
  puVar12 = puVar10 + lVar20;
  puVar13 = puVar10 + lVar20;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  pcVar1 = pcVar17 + (long)plVar21;
  puVar18 = (undefined1 *)((ulong)(puVar10 + lVar20 + 0xf) & 0xfffffffffffffff0);
  local_70 = (long *)puVar18;
  if ((char)plVar8[7] == '\x01') {
    iVar19 = local_64;
    if (pcVar1 != pcVar17) {
      local_88 = (long *)CONCAT44(local_88._4_4_,local_64);
      *(undefined8 *)(puVar10 + lVar20 + -8) = 0x6818e3;
      thunk_FUN_00713a50(puVar18,pcVar17,plVar21);
      iVar19 = (int)local_88;
    }
LAB_0068153c:
    if (plVar21 != (long *)0x0) goto LAB_00681545;
LAB_00681860:
    if (*(char *)(local_78 + 0x20) == '\0') goto LAB_00681644;
    puVar16 = (undefined1 *)0x0;
  }
  else {
    if ((char)plVar8[7] == '\0') {
      *(undefined8 *)(puVar10 + lVar20 + -8) = 0x68181f;
      local_a8 = pcVar1;
      local_a0 = plVar21;
      local_88 = plVar8;
      FUN_0063d6f0();
      pcVar3 = *(code **)(*local_88 + 0x38);
      pcVar1 = local_a8;
      plVar6 = local_a0;
      plVar8 = local_88;
    }
    else {
      pcVar3 = *(code **)(*plVar8 + 0x38);
      plVar6 = plVar21;
    }
    if (pcVar3 == FUN_0063d4f0) {
      plVar21 = (long *)(long)local_64;
      iVar19 = local_64;
      if (pcVar1 != pcVar17) {
        local_88._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
        local_88 = (long *)CONCAT44(local_88._4_4_,local_64);
        *(undefined8 *)(puVar10 + lVar20 + -8) = 0x681538;
        thunk_FUN_00713a50(puVar18,pcVar17,plVar6);
        iVar19 = (int)local_88;
      }
      goto LAB_0068153c;
    }
    *(undefined8 *)(puVar10 + lVar20 + -8) = 0x68184d;
    (*pcVar3)(plVar8,pcVar17,pcVar1,puVar18);
    plVar21 = (long *)(long)local_64;
    iVar19 = local_64;
    if (plVar21 == (long *)0x0) goto LAB_00681860;
LAB_00681545:
    local_88 = (long *)CONCAT44(local_88._4_4_,iVar19);
    *(undefined8 *)(puVar10 + lVar20 + -8) = 0x681559;
    lVar9 = thunk_FUN_007134f0(pcVar17,0x2e,plVar21);
    iVar19 = (int)local_88;
    if (lVar9 == 0) {
      puVar13 = puVar10 + lVar20;
      if ((*(char *)(local_78 + 0x20) == '\0') ||
         ((puVar16 = (undefined1 *)0x0, 2 < (int)local_88 &&
          (((puVar13 = puVar10 + lVar20, '9' < pcVar17[1] ||
            (puVar13 = puVar10 + lVar20, 9 < (byte)(pcVar17[2] - 0x30U))) ||
           (puVar13 = puVar10 + lVar20, pcVar17[1] < '0')))))) goto LAB_00681644;
    }
    else {
      puVar16 = puVar18 + (lVar9 - (long)pcVar17);
      *puVar16 = *(undefined1 *)(local_78 + 0x48);
      puVar13 = puVar10 + lVar20;
      if (*(char *)(local_78 + 0x20) == '\0') goto LAB_00681644;
    }
  }
  uVar7 = (long)plVar21 * 2 + 0x17;
  puVar13 = puVar10 + lVar20;
  while (puVar12 != puVar10 + (lVar20 - (uVar7 & 0xfffffffffffff000))) {
    puVar15 = puVar13 + -0x1000;
    *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
    puVar12 = puVar13 + -0x1000;
    puVar13 = puVar13 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar20 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
  }
  puVar10 = (undefined1 *)((ulong)(puVar15 + lVar20 + 0xf) & 0xfffffffffffffff0);
  bVar22 = (*pcVar17 - 0x2bU & 0xfd) == 0;
  puVar13 = puVar10;
  if (bVar22) {
    local_64 = iVar19 + -1;
    *puVar10 = *puVar18;
    local_70 = (long *)(puVar18 + 1);
    puVar13 = puVar10 + 1;
  }
  cVar2 = *(char *)(local_78 + 0x49);
  uVar4 = *(undefined8 *)(local_78 + 0x18);
  uVar5 = *(undefined8 *)(local_78 + 0x10);
  *(int **)(puVar15 + lVar20 + -8) = &local_64;
  *(long **)(puVar15 + lVar20 + -0x10) = local_70;
  *(undefined8 *)(puVar15 + lVar20 + -0x18) = 0x68162e;
  FUN_0067e720(local_90,uVar5,uVar4,(int)cVar2,puVar16,puVar13);
  local_64 = local_64 + (uint)bVar22;
  plVar21 = (long *)(long)local_64;
  puVar13 = puVar15 + lVar20;
  local_70 = (long *)puVar10;
LAB_00681644:
  lVar20 = *(long *)(param_4 + 0x10);
  if ((long)plVar21 < lVar20) {
    for (puVar15 = puVar13; puVar15 != puVar13 + -(lVar20 + 0x17U & 0xfffffffffffff000);
        puVar15 = puVar15 + -0x1000) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    uVar7 = (ulong)((uint)(lVar20 + 0x17U) & 0xff0);
    lVar9 = -uVar7;
    puVar13 = puVar15 + lVar9;
    if (uVar7 != 0) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    *(int **)(puVar15 + lVar9 + -0x10) = &local_64;
    *(undefined8 *)(puVar15 + lVar9 + -0x18) = 0x6817f2;
    FUN_0067fbc0(local_90,(int)(char)local_94,lVar20,param_4,
                 (undefined1 *)((ulong)(puVar15 + lVar9 + 0xf) & 0xfffffffffffffff0),local_70);
    plVar21 = (long *)(long)local_64;
    local_70 = (long *)((ulong)(puVar15 + lVar9 + 0xf) & 0xfffffffffffffff0);
  }
  *(undefined8 *)(param_4 + 0x10) = 0;
  if ((char)local_80 == '\0') {
    pcVar3 = *(code **)(*param_2 + 0x60);
    *(undefined8 *)(puVar13 + -8) = 0x681677;
    (*pcVar3)(param_2,local_70,plVar21);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -8) = FUN_00681940;
  FUN_00771f60();
}

