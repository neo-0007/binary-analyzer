
/* WARNING: Removing unreachable block (ram,0x00680ce6) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_00680c50(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                   long param_5,undefined4 param_6,char param_7)

{
  long *plVar1;
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
  int iVar17;
  long *plVar18;
  undefined1 *puVar19;
  long lVar20;
  long *plVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined1 auStack_e8 [8];
  long alStack_e0 [6];
  undefined8 local_b0;
  long *local_a8;
  undefined4 local_9c;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined1 *local_70;
  undefined1 local_65;
  int local_64;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_88 = (long *)(param_5 + 0xd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0x680caf;
  local_9c = param_6;
  local_90 = param_2;
  local_80 = param_4;
  local_70 = (undefined1 *)param_1;
  local_78 = FUN_0067fd80(&local_65,local_88);
  lVar20 = *(long *)(param_5 + 8);
  if (lVar20 < 0) {
    lVar20 = 6;
  }
  local_b0 = 0x680cd2;
  FUN_006c6830(param_5,local_58,(int)param_7);
  puVar11 = auStack_e8;
  puVar13 = auStack_e8;
  puVar14 = auStack_e8;
  puVar15 = auStack_e8;
  puVar10 = auStack_e8;
  local_98 = local_88;
  plVar18 = alStack_e0;
  local_88 = plVar18;
  if ((*(uint *)(param_5 + 0x18) & 0x104) == 0x104) {
    local_60 = FUN_006256a0();
    plVar8 = local_88;
    local_88 = &local_60;
    local_64 = FUN_0063f610(local_70,local_88,plVar8,0x2d,local_58);
    plVar8 = local_88;
    plVar21 = local_98;
    if (0x2c < local_64) {
      uVar7 = (long)(local_64 + 1) + 0x17;
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
      local_88 = local_98;
      local_a8 = plVar8;
      plVar18 = (long *)((ulong)(puVar15 + lVar20 + 0xf) & 0xfffffffffffffff0);
      local_98 = (long *)CONCAT44(local_98._4_4_,local_64 + 1);
      *(undefined8 *)(puVar15 + lVar20 + -8) = 0x6810db;
      local_60 = FUN_006256a0();
      *(undefined8 *)(puVar15 + lVar20 + -8) = 0x681101;
      local_64 = FUN_0063f610(local_70,local_a8,plVar18,(ulong)local_98 & 0xffffffff,local_58);
      plVar21 = local_88;
    }
  }
  else {
    local_60 = FUN_006256a0();
    plVar8 = local_88;
    local_88 = &local_60;
    local_64 = FUN_0063f610(local_70,local_88,plVar8,0x2d,local_58,lVar20);
    plVar8 = local_88;
    puVar10 = auStack_e8;
    plVar21 = local_98;
    if (0x2c < local_64) {
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
      local_88 = local_98;
      local_a8 = plVar8;
      plVar18 = (long *)((ulong)(puVar13 + lVar9 + 0xf) & 0xfffffffffffffff0);
      local_98 = (long *)CONCAT44(local_98._4_4_,local_64 + 1);
      *(undefined8 *)(puVar13 + lVar9 + -8) = 0x680dd5;
      local_60 = FUN_006256a0();
      *(undefined8 *)(puVar13 + lVar9 + -8) = 0x680dfe;
      local_64 = FUN_0063f610(local_70,local_a8,plVar18,(ulong)local_98 & 0xffffffff,local_58,lVar20
                             );
      plVar21 = local_88;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x680e10;
  plVar8 = (long *)FUN_0067c1e0(plVar21);
  plVar21 = (long *)(long)local_64;
  puVar15 = puVar10 + -((long)plVar21 + 0x17U & 0xfffffffffffff000);
  for (; puVar10 != puVar15; puVar10 = puVar10 + -0x1000) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  uVar7 = (ulong)((uint)(char *)((long)plVar21 + 0x17U) & 0xff0);
  lVar20 = -uVar7;
  puVar15 = puVar10 + lVar20;
  puVar12 = puVar10 + lVar20;
  puVar13 = puVar10 + lVar20;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  plVar1 = (long *)((long)plVar18 + (long)plVar21);
  puVar19 = (undefined1 *)((ulong)(puVar10 + lVar20 + 0xf) & 0xfffffffffffffff0);
  local_70 = puVar19;
  if ((char)plVar8[7] == '\x01') {
    iVar17 = local_64;
    if (plVar1 != plVar18) {
      local_88 = (long *)CONCAT44(local_88._4_4_,local_64);
      *(undefined8 *)(puVar10 + lVar20 + -8) = 0x681273;
      thunk_FUN_00713a50(puVar19,plVar18,plVar21);
      iVar17 = (int)local_88;
    }
LAB_00680ebc:
    if (plVar21 != (long *)0x0) goto LAB_00680ec5;
LAB_006811f0:
    if (*(char *)(local_78 + 0x20) == '\0') goto LAB_00680fc2;
    puVar16 = (undefined1 *)0x0;
  }
  else {
    if ((char)plVar8[7] == '\0') {
      *(undefined8 *)(puVar10 + lVar20 + -8) = 0x6811af;
      local_a8 = plVar1;
      local_98 = plVar21;
      local_88 = plVar8;
      FUN_0063d6f0();
      pcVar3 = *(code **)(*local_88 + 0x38);
      plVar1 = local_a8;
      plVar6 = local_98;
      plVar8 = local_88;
    }
    else {
      pcVar3 = *(code **)(*plVar8 + 0x38);
      plVar6 = plVar21;
    }
    if (pcVar3 == FUN_0063d4f0) {
      plVar21 = (long *)(long)local_64;
      iVar17 = local_64;
      if (plVar1 != plVar18) {
        local_88._4_4_ = (undefined4)((ulong)local_88 >> 0x20);
        local_88 = (long *)CONCAT44(local_88._4_4_,local_64);
        *(undefined8 *)(puVar10 + lVar20 + -8) = 0x680eb8;
        thunk_FUN_00713a50(puVar19,plVar18,plVar6);
        iVar17 = (int)local_88;
      }
      goto LAB_00680ebc;
    }
    *(undefined8 *)(puVar10 + lVar20 + -8) = 0x6811dd;
    (*pcVar3)(plVar8,plVar18,plVar1,puVar19);
    plVar21 = (long *)(long)local_64;
    iVar17 = local_64;
    if (plVar21 == (long *)0x0) goto LAB_006811f0;
LAB_00680ec5:
    local_88 = (long *)CONCAT44(local_88._4_4_,iVar17);
    *(undefined8 *)(puVar10 + lVar20 + -8) = 0x680ed9;
    lVar9 = thunk_FUN_007134f0(plVar18,0x2e,plVar21);
    iVar17 = (int)local_88;
    if (lVar9 == 0) {
      puVar13 = puVar10 + lVar20;
      if ((*(char *)(local_78 + 0x20) == '\0') ||
         ((puVar16 = (undefined1 *)0x0, 2 < (int)local_88 &&
          (((puVar13 = puVar10 + lVar20, '9' < *(char *)((long)plVar18 + 1) ||
            (puVar13 = puVar10 + lVar20, 9 < (byte)(*(char *)((long)plVar18 + 2) - 0x30U))) ||
           (puVar13 = puVar10 + lVar20, *(char *)((long)plVar18 + 1) < '0')))))) goto LAB_00680fc2;
    }
    else {
      puVar16 = puVar19 + (lVar9 - (long)plVar18);
      *puVar16 = *(undefined1 *)(local_78 + 0x48);
      puVar13 = puVar10 + lVar20;
      if (*(char *)(local_78 + 0x20) == '\0') goto LAB_00680fc2;
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
  bVar22 = ((char)*plVar18 - 0x2bU & 0xfd) == 0;
  puVar13 = puVar10;
  if (bVar22) {
    local_64 = iVar17 + -1;
    *puVar10 = *puVar19;
    local_70 = puVar19 + 1;
    puVar13 = puVar10 + 1;
  }
  cVar2 = *(char *)(local_78 + 0x49);
  uVar4 = *(undefined8 *)(local_78 + 0x10);
  uVar5 = *(undefined8 *)(local_78 + 0x18);
  *(int **)(puVar15 + lVar20 + -8) = &local_64;
  *(undefined1 **)(puVar15 + lVar20 + -0x10) = local_70;
  *(undefined8 *)(puVar15 + lVar20 + -0x18) = 0x680fae;
  FUN_0067e720(local_90,uVar4,uVar5,(int)cVar2,puVar16,puVar13);
  local_64 = local_64 + (uint)bVar22;
  plVar21 = (long *)(long)local_64;
  puVar13 = puVar15 + lVar20;
  local_70 = puVar10;
LAB_00680fc2:
  lVar20 = *(long *)(param_5 + 0x10);
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
    *(undefined8 *)(puVar15 + lVar9 + -0x18) = 0x681182;
    FUN_0067fbc0(local_90,(int)(char)local_9c,lVar20,param_5,
                 (undefined1 *)((ulong)(puVar15 + lVar9 + 0xf) & 0xfffffffffffffff0),local_70);
    plVar21 = (long *)(long)local_64;
    local_70 = (undefined1 *)((ulong)(puVar15 + lVar9 + 0xf) & 0xfffffffffffffff0);
  }
  *(undefined8 *)(param_5 + 0x10) = 0;
  if ((char)local_80 == '\0') {
    pcVar3 = *(code **)(*param_3 + 0x60);
    *(undefined8 *)(puVar13 + -8) = 0x680ff5;
    (*pcVar3)(param_3,local_70,plVar21);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -8) = FUN_006812d0;
  FUN_00771f60();
}

