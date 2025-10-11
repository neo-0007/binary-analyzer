
long FUN_00440bb0(long param_1,undefined1 *param_2,undefined8 *param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 **ppuVar15;
  long lVar16;
  undefined8 **ppuVar17;
  uint *puVar18;
  uint *puVar19;
  byte bVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined8 **ppuVar26;
  ulong *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  long in_FS_OFFSET;
  bool bVar34;
  byte bVar35;
  undefined8 *local_7c8;
  uint local_7c0;
  uint local_7bc;
  undefined8 **local_7b0;
  uint local_788;
  undefined8 **local_770;
  long *local_750;
  undefined8 *local_748;
  int local_740 [2];
  undefined8 *local_738 [14];
  long local_6c8;
  undefined4 local_6c0 [30];
  undefined8 *local_648;
  undefined1 *local_640;
  undefined4 local_638 [2];
  ulong local_630;
  undefined8 uStack_628;
  ulong local_508 [129];
  uint local_100 [8];
  uint local_e0 [8];
  undefined4 local_c0 [8];
  undefined4 local_a0 [8];
  undefined4 local_80 [16];
  long local_40;
  
  bVar35 = 0;
  uVar32 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar12 = FUN_00429580(*(undefined8 *)(param_1 + 0xb8),local_508,param_5 << 6,0);
  local_7b0 = (undefined8 **)0x0;
  if (iVar12 < 1) goto LAB_00441058;
  bVar20 = (char)param_5 + 1;
  local_7bc = param_4 >> (bVar20 & 0x1f);
  local_788 = (param_4 + local_7bc) - (local_7bc << (bVar20 & 0x1f));
  if ((local_7bc < local_788) && ((local_788 + 0x16 & 0x3f) < uVar32 - 1)) {
    local_7bc = local_7bc + 1;
    local_788 = local_788 + param_5 * -4 + 1;
  }
  local_748 = param_3;
  local_648 = param_3;
  local_640 = param_2 + 0x15;
  *(ulong *)(param_2 + 5) = local_508[0];
  *(ulong *)(param_2 + 0xd) = local_508[1];
  local_630 = local_508[0];
  uStack_628 = local_508[1];
  uVar25 = local_788;
  if (local_7bc <= local_788) {
    uVar25 = local_7bc;
  }
  uVar25 = uVar25 - 0x33;
  if ((int)uVar32 < 2) {
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    uVar30 = local_508[0] >> 0x38 | (local_508[0] & 0xff000000000000) >> 0x28 |
             (local_508[0] & 0xff0000000000) >> 0x18 | (local_508[0] & 0xff00000000) >> 8 |
             (local_508[0] & 0xff000000) << 8 | (local_508[0] & 0xff0000) << 0x18 |
             (local_508[0] & 0xff00) << 0x28 | local_508[0] << 0x38;
    local_7c8 = param_3;
    if (uVar32 != 0) goto LAB_00440d4d;
    FUN_00570d00(local_100,&local_6c8,param_5);
    if (0x83f < uVar25) {
      local_7c0 = 0xffffffff;
      goto LAB_004410e8;
    }
    FUN_00570d00(local_100,&local_748,param_5);
    puVar27 = local_508;
    for (lVar23 = 0x80; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
LAB_004414ff:
    FUN_00570d00(local_100,&local_6c8,param_5);
    puVar27 = local_508;
    for (lVar23 = 0x80; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
    FUN_00570d00(local_100,&local_6c8,param_5);
    local_7b0 = (undefined8 **)0x0;
  }
  else {
    ppuVar17 = local_738;
    ppuVar15 = &local_640;
    puVar27 = local_508 + 2;
    while( true ) {
      uVar30 = *puVar27;
      uVar31 = puVar27[1];
      ppuVar15[4] = (undefined1 *)((long)param_3 + (ulong)local_7bc);
      *ppuVar17 = (undefined8 *)((long)param_3 + (ulong)local_7bc);
      puVar29 = *ppuVar15 + ((local_7bc + 0x24 & 0xfffffff0) + 0x15);
      ppuVar15[5] = puVar29;
      *(ulong *)(puVar29 + -0x10) = uVar30;
      *(ulong *)(puVar29 + -8) = uVar31;
      puVar29 = (undefined1 *)puVar27[1];
      ppuVar15[7] = (undefined1 *)*puVar27;
      ppuVar15[8] = puVar29;
      if (puVar27 + 2 == local_508 + (ulong)uVar32 * 2) break;
      param_3 = *ppuVar17;
      ppuVar17 = ppuVar17 + 2;
      ppuVar15 = ppuVar15 + 5;
      puVar27 = puVar27 + 2;
    }
    local_508[0] = *(ulong *)(param_1 + 0x2d4);
    uVar30 = local_508[0] >> 0x38 | (local_508[0] & 0xff000000000000) >> 0x28 |
             (local_508[0] & 0xff0000000000) >> 0x18 | (local_508[0] & 0xff00000000) >> 8 |
             (local_508[0] & 0xff000000) << 8 | (local_508[0] & 0xff0000) << 0x18 |
             (local_508[0] & 0xff00) << 0x28 | local_508[0] << 0x38;
    local_7c8 = local_748;
LAB_00440d4d:
    uVar13 = *(undefined4 *)(param_1 + 0x2c4);
    uVar1 = *(undefined1 *)(param_1 + 0x2dd);
    lVar23 = 0;
    local_7c0 = uVar32 - 1;
    uVar5 = *(undefined4 *)(param_1 + 0x2c8);
    uVar14 = *(uint *)(param_1 + 0x2b8);
    ppuVar17 = &local_748;
    uVar33 = *(uint *)(param_1 + 700);
    uVar6 = *(undefined4 *)(param_1 + 0x2c0);
    uVar2 = *(undefined1 *)(param_1 + 0x2de);
    uVar3 = *(undefined1 *)(param_1 + 0x2dc);
    puVar27 = local_508;
    ppuVar26 = ppuVar17;
    plVar21 = &local_6c8;
    while( true ) {
      local_750 = &local_6c8;
      *(undefined1 *)(puVar27 + 1) = uVar3;
      uVar31 = lVar23 + uVar30;
      uVar22 = local_788;
      if (local_7c0 != (uint)lVar23) {
        uVar22 = local_7bc;
      }
      local_e0[lVar23] = uVar33;
      local_100[lVar23] = uVar14;
      *(char *)((long)puVar27 + 0xb) = (char)(uVar22 >> 8);
      local_c0[lVar23] = uVar6;
      *(char *)((long)puVar27 + 0xc) = (char)uVar22;
      local_a0[lVar23] = uVar13;
      local_80[lVar23] = uVar5;
      lVar23 = lVar23 + 1;
      *(undefined1 *)((long)puVar27 + 9) = uVar1;
      *(undefined1 *)((long)puVar27 + 10) = uVar2;
      *puVar27 = uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
                 (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
                 (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 |
                 (uVar31 & 0xff00) << 0x28 | uVar31 << 0x38;
      uVar9 = local_7c8[1];
      *(undefined8 *)((long)puVar27 + 0xd) = *local_7c8;
      *(undefined8 *)((long)puVar27 + 0x15) = uVar9;
      uVar9 = local_7c8[3];
      *(undefined8 *)((long)puVar27 + 0x1d) = local_7c8[2];
      *(undefined8 *)((long)puVar27 + 0x25) = uVar9;
      uVar9 = local_7c8[5];
      *(undefined8 *)((long)puVar27 + 0x2d) = local_7c8[4];
      *(undefined8 *)((long)puVar27 + 0x35) = uVar9;
      *(undefined2 *)((long)puVar27 + 0x3d) = *(undefined2 *)(local_7c8 + 6);
      uVar4 = *(undefined1 *)((long)local_7c8 + 0x32);
      *plVar21 = (long)puVar27;
      *(uint *)(ppuVar26 + 1) = uVar22 - 0x33 >> 6;
      *(undefined1 *)((long)puVar27 + 0x3f) = uVar4;
      *ppuVar26 = (undefined8 *)((long)local_7c8 + 0x33);
      *(undefined4 *)(plVar21 + 1) = 1;
      if (uVar32 <= (uint)lVar23) break;
      local_7c8 = ppuVar26[2];
      puVar27 = puVar27 + 0x10;
      ppuVar26 = ppuVar26 + 2;
      plVar21 = plVar21 + 2;
    }
    FUN_00570d00(local_100,local_750,param_5);
    if (uVar25 < 0x840) {
      local_7c8._0_4_ = 0;
    }
    else {
      puVar24 = local_638;
      uVar14 = 0;
      plVar21 = &local_6c8;
      do {
        puVar8 = *ppuVar17;
        uVar14 = uVar14 + 1;
        ppuVar17 = ppuVar17 + 2;
        *puVar24 = 0x80;
        puVar24 = puVar24 + 10;
        *plVar21 = (long)puVar8;
        *(undefined4 *)(plVar21 + 1) = 0x20;
        plVar21 = plVar21 + 2;
      } while (uVar14 < uVar32);
LAB_004410e8:
      local_7c8._0_4_ = 0;
      uVar25 = uVar25 >> 6;
      do {
        local_7b0 = &local_748;
        FUN_00570d00(local_100,&local_6c8,param_5);
        FUN_0048c980(&local_648,param_1 + 0xc0,param_5);
        ppuVar17 = &local_648;
        plVar21 = &local_6c8;
        if (param_5 != 0) {
          do {
            puVar8 = *local_7b0;
            *(int *)(local_7b0 + 1) = *(int *)(local_7b0 + 1) + -0x20;
            ppuVar26 = local_7b0 + 2;
            *ppuVar17 = *ppuVar17 + 0x100;
            *(undefined4 *)(plVar21 + 1) = 0x20;
            *local_7b0 = puVar8 + 0x100;
            *plVar21 = (long)(puVar8 + 0x100);
            puVar8 = ppuVar17[1];
            *(undefined4 *)(ppuVar17 + 2) = 0x80;
            ppuVar17[1] = puVar8 + 0x100;
            puVar10 = (undefined8 *)puVar8[0xff];
            ppuVar17[3] = (undefined8 *)puVar8[0xfe];
            ppuVar17[4] = puVar10;
            ppuVar17 = ppuVar17 + 5;
            local_7b0 = ppuVar26;
            plVar21 = plVar21 + 2;
          } while (local_738 + (ulong)local_7c0 * 2 != ppuVar26);
        }
        uVar25 = uVar25 - 0x20;
        local_7c8._0_4_ = (int)local_7c8 + 0x800;
      } while (0x20 < uVar25);
    }
    local_770 = &local_648;
    local_7b0 = &local_748;
    FUN_00570d00(local_100,local_7b0,param_5);
    puVar27 = local_508;
    for (lVar23 = 0x80; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
    if (param_5 == 0) goto LAB_004414ff;
    lVar23 = 0;
    puVar27 = local_508;
    uVar25 = 0;
    do {
      uVar14 = uVar25;
      uVar25 = local_7bc;
      if (uVar14 == local_7c0) {
        uVar25 = local_788;
      }
      uVar33 = (-0x33 - (int)local_7c8) + *(int *)((long)local_740 + lVar23) * -0x40 + uVar25;
      lVar16 = thunk_FUN_00713a50(puVar27,(ulong)(uint)(*(int *)((long)local_740 + lVar23) * 0x40) +
                                          *(long *)((long)local_7b0 + lVar23),(ulong)uVar33);
      *(undefined1 *)((long)local_508 + (ulong)uVar33 + (ulong)uVar14 * 0x80) = 0x80;
      uVar25 = uVar25 * 8 + 0x268;
      uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 |
               uVar25 * 0x1000000;
      if (uVar33 < 0x38) {
        *(uint *)(lVar16 + 0x3c) = uVar25;
        uVar13 = 1;
      }
      else {
        *(uint *)(lVar16 + 0x7c) = uVar25;
        uVar13 = 2;
      }
      *(undefined4 *)((long)local_6c0 + lVar23) = uVar13;
      *(long *)((long)&local_6c8 + lVar23) = lVar16;
      puVar27 = (ulong *)(lVar16 + 0x80);
      lVar23 = lVar23 + 0x10;
      uVar25 = uVar14 + 1;
    } while (uVar32 != uVar14 + 1);
    FUN_00570d00(local_100,&local_6c8,param_5);
    uVar32 = *(uint *)(param_1 + 0x25c);
    uVar25 = *(uint *)(param_1 + 0x260);
    puVar27 = local_508;
    for (lVar23 = 0x80; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar27 = 0;
      puVar27 = puVar27 + (ulong)bVar35 * -2 + 1;
    }
    uVar33 = *(uint *)(param_1 + 600);
    uVar22 = *(uint *)(param_1 + 0x264);
    uVar28 = *(uint *)(param_1 + 0x268);
    puVar18 = local_100;
    plVar21 = &local_6c8;
    puVar27 = local_508;
    do {
      uVar7 = *puVar18;
      *puVar18 = uVar33;
      puVar19 = puVar18 + 1;
      *(uint *)puVar27 =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar18[8];
      *(uint *)((long)puVar27 + 4) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar18[0x10];
      *(uint *)(puVar27 + 1) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar18[0x18];
      *(uint *)((long)puVar27 + 0xc) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = puVar18[0x20];
      *plVar21 = (long)puVar27;
      puVar18[8] = uVar32;
      puVar18[0x10] = uVar25;
      puVar18[0x18] = uVar22;
      *(uint *)(puVar27 + 2) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      puVar18[0x20] = uVar28;
      *(undefined1 *)((long)puVar27 + 0x14) = 0x80;
      *(uint *)((long)puVar27 + 0x3c) = 0xa0020000;
      *(undefined4 *)(plVar21 + 1) = 1;
      puVar18 = puVar19;
      plVar21 = plVar21 + 2;
      puVar27 = puVar27 + 0x10;
    } while (local_e0 + ((ulong)local_7c0 - 7) != puVar19);
    FUN_00570d00(local_100,&local_6c8,param_5);
    local_7b0 = (undefined8 **)0x0;
    puVar18 = local_100;
    uVar32 = 0;
    do {
      uVar25 = local_7bc;
      if (uVar32 == local_7c0) {
        uVar25 = local_788;
      }
      thunk_FUN_00713a50(local_770[1],*local_770,uVar25 - (int)local_7c8);
      uVar33 = *puVar18;
      *local_770 = local_770[1];
      puVar19 = (uint *)(param_2 + (uVar25 + 0x15));
      *puVar19 = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 | uVar33 << 0x18
      ;
      uVar33 = puVar18[8];
      puVar19[1] = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
      uVar33 = puVar18[0x10];
      puVar19[2] = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
      uVar33 = puVar18[0x18];
      puVar19[3] = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
      uVar33 = puVar18[0x20];
      puVar19[4] = uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                   uVar33 << 0x18;
      uVar22 = ~(uVar25 + 0x14) & 0xf;
      uVar33 = uVar22 + 1;
      uVar30 = (ulong)uVar33;
      lVar23 = (ulong)uVar22 * 0x101010101010101;
      if (uVar33 < 8) {
        if ((uVar33 & 4) == 0) {
          if ((uVar33 != 0) && (*(char *)(puVar19 + 5) = (char)lVar23, (uVar33 & 2) != 0)) {
            *(short *)((long)puVar19 + uVar30 + 0x12) = (short)lVar23;
          }
        }
        else {
          puVar19[5] = (uint)lVar23;
          *(uint *)((long)puVar19 + uVar30 + 0x10) = (uint)lVar23;
        }
      }
      else {
        *(long *)(puVar19 + 5) = lVar23;
        *(long *)((long)puVar19 + uVar30 + 0xc) = lVar23;
        uVar33 = uVar33 + ((int)(puVar19 + 5) - (int)((ulong)(puVar19 + 7) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar33) {
          uVar28 = 0;
          do {
            uVar31 = (ulong)uVar28;
            uVar28 = uVar28 + 8;
            *(long *)(((ulong)(puVar19 + 7) & 0xfffffffffffffff8) + uVar31) = lVar23;
          } while (uVar28 < uVar33);
        }
      }
      iVar12 = uVar22 + uVar25 + 0x14;
      puVar18 = puVar18 + 1;
      *(uint *)(local_770 + 2) = (uint)((1 - (int)local_7c8) + iVar12) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x2dc);
      param_2[1] = *(undefined1 *)(param_1 + 0x2dd);
      param_2[2] = *(undefined1 *)(param_1 + 0x2de);
      uVar11 = (short)iVar12 + 0x11;
      *(ushort *)(param_2 + 3) = uVar11 * 0x100 | uVar11 >> 8;
      local_7b0 = (undefined8 **)((long)local_7b0 + (ulong)(iVar12 + 0x16));
      bVar34 = uVar14 != uVar32;
      local_770 = local_770 + 5;
      param_2 = (undefined1 *)(uVar30 + (long)(puVar19 + 5));
      uVar32 = uVar32 + 1;
    } while (bVar34);
  }
  local_770 = &local_648;
  FUN_0048c980(local_770,param_1 + 0xc0,param_5);
  FUN_004227b0(local_508,0x400);
  FUN_004227b0(local_100,0xa0);
  *(undefined8 ***)(param_1 + 0x1e8) = local_7b0;
LAB_00441058:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return (long)local_7b0;
}

