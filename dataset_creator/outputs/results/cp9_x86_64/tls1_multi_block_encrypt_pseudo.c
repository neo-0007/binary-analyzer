
long tls1_multi_block_encrypt
               (long param_1,undefined1 *param_2,undefined8 *param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ushort uVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined1 **ppuVar17;
  void *pvVar18;
  undefined8 **ppuVar19;
  uint *puVar20;
  uint *puVar21;
  byte bVar22;
  long *plVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  long lVar27;
  ulong *puVar28;
  uint uVar29;
  undefined8 **ppuVar30;
  undefined1 *puVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long in_FS_OFFSET;
  bool bVar36;
  byte bVar37;
  undefined8 *local_840;
  uint local_834;
  uint local_830;
  uint local_82c;
  long local_828;
  undefined8 **local_820;
  long *local_818;
  undefined8 **local_800;
  undefined8 *local_7a8;
  int local_7a0 [2];
  undefined8 *local_798 [14];
  long local_728;
  undefined4 local_720 [30];
  undefined8 *local_6a8;
  undefined1 *local_6a0;
  undefined4 local_698 [2];
  ulong local_690;
  undefined8 uStack_688;
  ulong local_568 [129];
  uint local_160 [8];
  uint local_140 [8];
  uint local_120 [8];
  uint local_100 [8];
  uint local_e0 [8];
  uint local_c0 [8];
  uint local_a0 [8];
  uint local_80 [16];
  long local_40;
  
  bVar37 = 0;
  local_828 = 0;
  uVar34 = param_5 * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xb8),local_568,param_5 << 6,0);
  if (iVar14 < 1) goto LAB_00440808;
  bVar22 = (char)param_5 + 1;
  local_830 = param_4 >> (bVar22 & 0x1f);
  local_82c = (param_4 + local_830) - (local_830 << (bVar22 & 0x1f));
  if ((local_830 < local_82c) && ((local_82c + 0x16 & 0x3f) < uVar34 - 1)) {
    local_830 = local_830 + 1;
    local_82c = local_82c + param_5 * -4 + 1;
  }
  local_7a8 = param_3;
  local_6a8 = param_3;
  local_6a0 = param_2 + 0x15;
  *(ulong *)(param_2 + 5) = local_568[0];
  *(ulong *)(param_2 + 0xd) = local_568[1];
  local_690 = local_568[0];
  uStack_688 = local_568[1];
  uVar26 = local_82c;
  if (local_830 <= local_82c) {
    uVar26 = local_830;
  }
  uVar26 = uVar26 - 0x33;
  if ((int)uVar34 < 2) {
    local_568[0] = *(ulong *)(param_1 + 0x300);
    uVar32 = local_568[0] >> 0x38 | (local_568[0] & 0xff000000000000) >> 0x28 |
             (local_568[0] & 0xff0000000000) >> 0x18 | (local_568[0] & 0xff00000000) >> 8 |
             (local_568[0] & 0xff000000) << 8 | (local_568[0] & 0xff0000) << 0x18 |
             (local_568[0] & 0xff00) << 0x28 | local_568[0] << 0x38;
    local_840 = param_3;
    if (uVar34 != 0) goto LAB_004404b5;
    sha256_multi_block(local_160,&local_728,param_5);
    if (0x83f < uVar26) {
      local_834 = 0xffffffff;
      goto LAB_0044089b;
    }
    sha256_multi_block(local_160,&local_7a8,param_5);
    puVar28 = local_568;
    for (lVar27 = 0x80; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
    }
LAB_00440d4d:
    local_818 = &local_728;
    sha256_multi_block(local_160,local_818,param_5);
    local_828 = 0;
    puVar28 = local_568;
    for (lVar27 = 0x80; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
    }
    sha256_multi_block(local_160,local_818,param_5);
  }
  else {
    ppuVar19 = local_798;
    ppuVar17 = &local_6a0;
    puVar28 = local_568 + 2;
    while( true ) {
      uVar32 = *puVar28;
      uVar33 = puVar28[1];
      ppuVar17[4] = (undefined1 *)((long)param_3 + (ulong)local_830);
      *ppuVar19 = (undefined8 *)((long)param_3 + (ulong)local_830);
      puVar31 = *ppuVar17 + ((local_830 + 0x30 & 0xfffffff0) + 0x15);
      ppuVar17[5] = puVar31;
      *(ulong *)(puVar31 + -0x10) = uVar32;
      *(ulong *)(puVar31 + -8) = uVar33;
      puVar31 = (undefined1 *)puVar28[1];
      ppuVar17[7] = (undefined1 *)*puVar28;
      ppuVar17[8] = puVar31;
      if (puVar28 + 2 == local_568 + (ulong)uVar34 * 2) break;
      param_3 = *ppuVar19;
      ppuVar19 = ppuVar19 + 2;
      ppuVar17 = ppuVar17 + 5;
      puVar28 = puVar28 + 2;
    }
    local_568[0] = *(ulong *)(param_1 + 0x300);
    uVar32 = local_568[0] >> 0x38 | (local_568[0] & 0xff000000000000) >> 0x28 |
             (local_568[0] & 0xff0000000000) >> 0x18 | (local_568[0] & 0xff00000000) >> 8 |
             (local_568[0] & 0xff000000) << 8 | (local_568[0] & 0xff0000) << 0x18 |
             (local_568[0] & 0xff00) << 0x28 | local_568[0] << 0x38;
    local_840 = local_7a8;
LAB_004404b5:
    uVar1 = *(undefined1 *)(param_1 + 0x309);
    ppuVar19 = &local_7a8;
    uVar16 = *(uint *)(param_1 + 0x2ec);
    lVar27 = 0;
    local_834 = uVar34 - 1;
    uVar35 = *(uint *)(param_1 + 0x2f0);
    uVar24 = *(uint *)(param_1 + 0x2d8);
    uVar29 = *(uint *)(param_1 + 0x2f4);
    uVar2 = *(undefined1 *)(param_1 + 0x308);
    uVar5 = *(uint *)(param_1 + 0x2dc);
    uVar6 = *(uint *)(param_1 + 0x2e0);
    uVar7 = *(uint *)(param_1 + 0x2e4);
    uVar8 = *(uint *)(param_1 + 0x2e8);
    uVar3 = *(undefined1 *)(param_1 + 0x30a);
    puVar28 = local_568;
    puVar20 = local_160;
    ppuVar30 = ppuVar19;
    plVar23 = &local_728;
    while( true ) {
      *(undefined1 *)(puVar28 + 1) = uVar2;
      uVar33 = lVar27 + uVar32;
      uVar10 = local_82c;
      if (local_834 != (uint)lVar27) {
        uVar10 = local_830;
      }
      puVar20[0x28] = uVar16;
      lVar27 = lVar27 + 1;
      *puVar20 = uVar24;
      *(char *)((long)puVar28 + 0xb) = (char)(uVar10 >> 8);
      puVar20[8] = uVar5;
      *(char *)((long)puVar28 + 0xc) = (char)uVar10;
      puVar20[0x10] = uVar6;
      *(undefined1 *)((long)puVar28 + 9) = uVar1;
      puVar20[0x18] = uVar7;
      *(undefined1 *)((long)puVar28 + 10) = uVar3;
      puVar20[0x20] = uVar8;
      puVar20[0x30] = uVar35;
      puVar20[0x38] = uVar29;
      *puVar28 = uVar33 >> 0x38 | (uVar33 & 0xff000000000000) >> 0x28 |
                 (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
                 (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
                 (uVar33 & 0xff00) << 0x28 | uVar33 << 0x38;
      uVar11 = local_840[1];
      *(undefined8 *)((long)puVar28 + 0xd) = *local_840;
      *(undefined8 *)((long)puVar28 + 0x15) = uVar11;
      uVar11 = local_840[3];
      *(undefined8 *)((long)puVar28 + 0x1d) = local_840[2];
      *(undefined8 *)((long)puVar28 + 0x25) = uVar11;
      uVar11 = local_840[5];
      *(undefined8 *)((long)puVar28 + 0x2d) = local_840[4];
      *(undefined8 *)((long)puVar28 + 0x35) = uVar11;
      *(undefined2 *)((long)puVar28 + 0x3d) = *(undefined2 *)(local_840 + 6);
      uVar4 = *(undefined1 *)((long)local_840 + 0x32);
      *plVar23 = (long)puVar28;
      *(uint *)(ppuVar30 + 1) = uVar10 - 0x33 >> 6;
      *(undefined1 *)((long)puVar28 + 0x3f) = uVar4;
      *(undefined4 *)(plVar23 + 1) = 1;
      *ppuVar30 = (undefined8 *)((long)local_840 + 0x33);
      if (uVar34 <= (uint)lVar27) break;
      local_840 = ppuVar30[2];
      puVar28 = puVar28 + 0x10;
      puVar20 = puVar20 + 1;
      ppuVar30 = ppuVar30 + 2;
      plVar23 = plVar23 + 2;
    }
    sha256_multi_block(local_160,&local_728,param_5);
    if (uVar26 < 0x840) {
      local_840._0_4_ = 0;
    }
    else {
      puVar25 = local_698;
      uVar16 = 0;
      plVar23 = &local_728;
      do {
        puVar9 = *ppuVar19;
        uVar16 = uVar16 + 1;
        ppuVar19 = ppuVar19 + 2;
        *puVar25 = 0x80;
        puVar25 = puVar25 + 10;
        *plVar23 = (long)puVar9;
        *(undefined4 *)(plVar23 + 1) = 0x20;
        plVar23 = plVar23 + 2;
      } while (uVar16 < uVar34);
LAB_0044089b:
      local_818 = &local_728;
      local_840._0_4_ = 0;
      uVar26 = uVar26 >> 6;
      do {
        local_820 = &local_7a8;
        sha256_multi_block(local_160,local_818,param_5);
        aesni_multi_cbc_encrypt(&local_6a8,param_1 + 0xc0,param_5);
        ppuVar19 = &local_6a8;
        plVar23 = local_818;
        if (param_5 != 0) {
          do {
            puVar9 = *local_820;
            *(int *)(local_820 + 1) = *(int *)(local_820 + 1) + -0x20;
            ppuVar30 = local_820 + 2;
            *ppuVar19 = *ppuVar19 + 0x100;
            *(undefined4 *)(plVar23 + 1) = 0x20;
            *local_820 = puVar9 + 0x100;
            *plVar23 = (long)(puVar9 + 0x100);
            puVar9 = ppuVar19[1];
            *(undefined4 *)(ppuVar19 + 2) = 0x80;
            ppuVar19[1] = puVar9 + 0x100;
            puVar12 = (undefined8 *)puVar9[0xff];
            ppuVar19[3] = (undefined8 *)puVar9[0xfe];
            ppuVar19[4] = puVar12;
            ppuVar19 = ppuVar19 + 5;
            local_820 = ppuVar30;
            plVar23 = plVar23 + 2;
          } while (ppuVar30 != local_798 + (ulong)local_834 * 2);
        }
        uVar26 = uVar26 - 0x20;
        local_840._0_4_ = (int)local_840 + 0x800;
      } while (0x20 < uVar26);
    }
    local_818 = &local_728;
    local_800 = &local_6a8;
    local_820 = &local_7a8;
    sha256_multi_block(local_160,local_820,param_5);
    puVar28 = local_568;
    for (lVar27 = 0x80; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
    }
    if (param_5 == 0) goto LAB_00440d4d;
    lVar27 = 0;
    puVar28 = local_568;
    uVar26 = 0;
    do {
      uVar16 = uVar26;
      uVar26 = local_830;
      if (uVar16 == local_834) {
        uVar26 = local_82c;
      }
      uVar35 = (-0x33 - (int)local_840) + *(int *)((long)local_7a0 + lVar27) * -0x40 + uVar26;
      pvVar18 = memcpy(puVar28,(void *)((ulong)(uint)(*(int *)((long)local_7a0 + lVar27) * 0x40) +
                                       *(long *)((long)local_820 + lVar27)),(ulong)uVar35);
      *(undefined1 *)((long)local_568 + (ulong)uVar35 + (ulong)uVar16 * 0x80) = 0x80;
      uVar26 = uVar26 * 8 + 0x268;
      uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 |
               uVar26 * 0x1000000;
      if (uVar35 < 0x38) {
        *(uint *)((long)pvVar18 + 0x3c) = uVar26;
        uVar15 = 1;
      }
      else {
        *(uint *)((long)pvVar18 + 0x7c) = uVar26;
        uVar15 = 2;
      }
      *(undefined4 *)((long)local_720 + lVar27) = uVar15;
      *(void **)((long)local_818 + lVar27) = pvVar18;
      puVar28 = (ulong *)((long)pvVar18 + 0x80);
      lVar27 = lVar27 + 0x10;
      uVar26 = uVar16 + 1;
    } while (uVar34 != uVar16 + 1);
    sha256_multi_block(local_160,local_818,param_5);
    uVar34 = *(uint *)(param_1 + 0x278);
    puVar28 = local_568;
    for (lVar27 = 0x80; lVar27 != 0; lVar27 = lVar27 + -1) {
      *puVar28 = 0;
      puVar28 = puVar28 + (ulong)bVar37 * -2 + 1;
    }
    uVar26 = *(uint *)(param_1 + 0x268);
    uVar35 = *(uint *)(param_1 + 0x26c);
    uVar24 = *(uint *)(param_1 + 0x270);
    uVar29 = *(uint *)(param_1 + 0x274);
    uVar5 = *(uint *)(param_1 + 0x27c);
    uVar6 = *(uint *)(param_1 + 0x284);
    uVar7 = *(uint *)(param_1 + 0x280);
    puVar20 = local_160;
    plVar23 = local_818;
    puVar28 = local_568;
    do {
      uVar8 = *puVar20;
      *puVar20 = uVar26;
      puVar21 = puVar20 + 1;
      *(uint *)puVar28 =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[8];
      *(uint *)((long)puVar28 + 4) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x10];
      *(uint *)(puVar28 + 1) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x18];
      *(uint *)((long)puVar28 + 0xc) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x20];
      *(uint *)(puVar28 + 2) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x28];
      *(uint *)((long)puVar28 + 0x14) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x30];
      *(uint *)(puVar28 + 3) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      uVar8 = puVar20[0x38];
      *plVar23 = (long)puVar28;
      puVar20[8] = uVar35;
      puVar20[0x10] = uVar24;
      puVar20[0x18] = uVar29;
      puVar20[0x20] = uVar34;
      puVar20[0x28] = uVar5;
      puVar20[0x30] = uVar7;
      *(uint *)((long)puVar28 + 0x1c) =
           uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      puVar20[0x38] = uVar6;
      *(undefined1 *)(puVar28 + 4) = 0x80;
      *(uint *)((long)puVar28 + 0x3c) = 0x30000;
      *(undefined4 *)(plVar23 + 1) = 1;
      puVar20 = puVar21;
      plVar23 = plVar23 + 2;
      puVar28 = puVar28 + 0x10;
    } while (local_140 + ((ulong)local_834 - 7) != puVar21);
    sha256_multi_block(local_160,local_818,param_5);
    local_828 = 0;
    puVar20 = local_160;
    uVar34 = 0;
    do {
      uVar26 = local_830;
      if (uVar34 == local_834) {
        uVar26 = local_82c;
      }
      memcpy(local_800[1],*local_800,(ulong)(uVar26 - (int)local_840));
      uVar35 = *puVar20;
      *local_800 = local_800[1];
      puVar21 = (uint *)(param_2 + (uVar26 + 0x15));
      *puVar21 = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 | uVar35 << 0x18
      ;
      uVar35 = puVar20[8];
      puVar21[1] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x10];
      puVar21[2] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x18];
      puVar21[3] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x20];
      puVar21[4] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x28];
      puVar21[5] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x30];
      puVar21[6] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar35 = puVar20[0x38];
      puVar21[7] = uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                   uVar35 << 0x18;
      uVar24 = ~(uVar26 + 0x20) & 0xf;
      uVar35 = uVar24 + 1;
      uVar32 = (ulong)uVar35;
      lVar27 = (ulong)uVar24 * 0x101010101010101;
      if (uVar35 < 8) {
        if ((uVar35 & 4) == 0) {
          if ((uVar35 != 0) && (*(char *)(puVar21 + 8) = (char)lVar27, (uVar35 & 2) != 0)) {
            *(short *)((long)puVar21 + uVar32 + 0x1e) = (short)lVar27;
          }
        }
        else {
          puVar21[8] = (uint)lVar27;
          *(uint *)((long)puVar21 + uVar32 + 0x1c) = (uint)lVar27;
        }
      }
      else {
        *(long *)(puVar21 + 8) = lVar27;
        *(long *)((long)puVar21 + uVar32 + 0x18) = lVar27;
        uVar35 = uVar35 + ((int)(puVar21 + 8) - (int)((ulong)(puVar21 + 10) & 0xfffffffffffffff8)) &
                 0xfffffff8;
        if (7 < uVar35) {
          uVar29 = 0;
          do {
            uVar33 = (ulong)uVar29;
            uVar29 = uVar29 + 8;
            *(long *)(((ulong)(puVar21 + 10) & 0xfffffffffffffff8) + uVar33) = lVar27;
          } while (uVar29 < uVar35);
        }
      }
      iVar14 = uVar24 + uVar26 + 0x20;
      puVar20 = puVar20 + 1;
      *(uint *)(local_800 + 2) = (uint)((1 - (int)local_840) + iVar14) >> 4;
      *param_2 = *(undefined1 *)(param_1 + 0x308);
      param_2[1] = *(undefined1 *)(param_1 + 0x309);
      param_2[2] = *(undefined1 *)(param_1 + 0x30a);
      uVar13 = (short)iVar14 + 0x11;
      *(ushort *)(param_2 + 3) = uVar13 * 0x100 | uVar13 >> 8;
      local_828 = local_828 + (ulong)(iVar14 + 0x16);
      bVar36 = uVar16 != uVar34;
      param_2 = (undefined1 *)(uVar32 + (long)(puVar21 + 8));
      local_800 = local_800 + 5;
      uVar34 = uVar34 + 1;
    } while (bVar36);
  }
  local_800 = &local_6a8;
  aesni_multi_cbc_encrypt(local_800,param_1 + 0xc0,param_5);
  OPENSSL_cleanse(local_568,0x400);
  OPENSSL_cleanse(local_160,0x100);
  *(long *)(param_1 + 0x1e8) = local_828;
LAB_00440808:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_828;
}

