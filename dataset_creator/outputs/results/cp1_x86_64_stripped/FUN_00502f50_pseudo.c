
void FUN_00502f50(ulong *param_1,ulong *param_2,undefined8 *param_3,long param_4,uint param_5,
                 long param_6,undefined4 param_7,long param_8,ulong *param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  byte bVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  byte *pbVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  byte bVar26;
  int local_2c0;
  uint local_2bc;
  long local_278;
  ulong *local_268;
  long local_228;
  byte local_1aa;
  byte local_1a9;
  ulong local_1a8;
  ulong local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  ulong local_168 [12];
  ulong local_108 [5];
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar26 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c0 = 1;
  puVar22 = local_108;
  for (lVar12 = 0x18; uVar5 = (-(uint)(param_5 == 0) & 0xffffff20) + 0xff, lVar12 != 0;
      lVar12 = lVar12 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
LAB_00502ff6:
  uVar24 = uVar5 - 1;
  if ((0x1f < (int)uVar5) || (param_6 == 0)) {
    if ((param_5 != 0) && (uVar5 * -0x33333333 + 0x19999999 < 0x33333333)) goto LAB_005034aa;
    if (-1 < (int)uVar24) goto code_r0x00503155;
    goto LAB_00503a22;
  }
  uVar20 = 0;
  bVar1 = *(byte *)(param_6 + ((int)(uVar5 + 0xe0) >> 3));
  bVar2 = *(byte *)(param_6 + ((int)(uVar5 + 0xa0) >> 3));
  bVar3 = *(byte *)(param_6 + ((int)(uVar5 + 0x60) >> 3));
  bVar11 = (byte)(uVar5 + 0x20) & 7;
  bVar4 = *(byte *)(param_6 + ((int)(uVar5 + 0x20) >> 3));
  puVar22 = local_168;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar22 = (ulong)(uint)(0 >> bVar11);
    puVar22 = puVar22 + (ulong)bVar26 * -2 + 1;
  }
  puVar22 = param_9 + 0xc0;
  uVar21 = 0;
  do {
    uVar18 = ((ulong)((int)(uint)bVar4 >> bVar11 & 1) |
             (long)(int)(((int)(uint)bVar2 >> ((byte)(uVar5 + 0xa0) & 7) & 1U) << 2 |
                         ((int)(uint)bVar1 >> ((byte)(uVar5 + 0xe0) & 7) & 1U) << 3 |
                        ((int)(uint)bVar3 >> ((byte)(uVar5 + 0x60) & 7) & 1U) * 2)) ^ uVar20;
    uVar18 = uVar18 | uVar18 >> 2;
    puVar10 = local_168;
    puVar17 = puVar22;
    while( true ) {
      uVar19 = *puVar17;
      puVar16 = puVar10 + 1;
      puVar17 = puVar17 + 1;
      *puVar10 = uVar19 & (ulong)(((uint)uVar18 | (uint)(uVar18 >> 1)) & 1) - 1 | uVar21;
      if (local_108 == puVar16) break;
      uVar21 = *puVar16;
      puVar10 = puVar16;
    }
    uVar20 = uVar20 + 1;
    puVar22 = puVar22 + 0xc;
    uVar21 = local_168[0];
  } while (uVar20 != 0x10);
  if (local_2c0 == 0) {
    puVar22 = local_168 + 8;
    FUN_00500ff0(local_108,&local_c8,&local_88,local_108,&local_c8,&local_88,1,local_168,
                 local_168 + 4,puVar22,puVar22);
  }
  else {
    local_108[1] = 0;
    local_108[3] = 0;
    puVar22 = local_168 + 8;
    local_108[0] = local_168[0];
    uStack_e0 = 0;
    local_108[2] = local_168[1];
    uStack_d0 = 0;
    local_108[4] = local_168[2];
    uStack_c0 = 0;
    local_d8 = local_168[3];
    uStack_b0 = 0;
    local_c8 = local_168[4];
    uStack_a0 = 0;
    local_b8 = local_168[5];
    uStack_90 = 0;
    local_a8 = local_168[6];
    uStack_80 = 0;
    local_98 = local_168[7];
    uStack_70 = 0;
    local_88 = local_168[8];
    local_78 = local_168[9];
    local_68 = local_168[10];
    uStack_60 = 0;
    uStack_50 = 0;
    local_58 = local_168[0xb];
  }
  local_268 = local_168 + 4;
  uVar20 = 0;
  bVar1 = *(byte *)(param_6 + ((int)(uVar5 + 0xc0) >> 3));
  bVar2 = *(byte *)(param_6 + ((int)(uVar5 + 0x80) >> 3));
  bVar3 = *(byte *)(param_6 + ((int)(uVar5 + 0x40) >> 3));
  bVar11 = (byte)uVar5 & 7;
  bVar4 = *(byte *)(param_6 + ((int)uVar5 >> 3));
  puVar10 = local_168;
  for (lVar12 = 0xc; uVar21 = (ulong)(uint)(0 >> bVar11), puVar17 = param_9, lVar12 != 0;
      lVar12 = lVar12 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + (ulong)bVar26 * -2 + 1;
  }
  do {
    uVar18 = ((ulong)((int)(uint)bVar4 >> bVar11 & 1) |
             (long)(int)(((int)(uint)bVar1 >> ((byte)(uVar5 + 0xc0) & 7) & 1U) << 3 |
                         ((int)(uint)bVar2 >> ((byte)(uVar5 + 0x80) & 7) & 1U) << 2 |
                        ((int)(uint)bVar3 >> ((byte)(uVar5 + 0x40) & 7) & 1U) * 2)) ^ uVar20;
    uVar18 = uVar18 | uVar18 >> 2;
    puVar10 = local_168;
    puVar16 = puVar17;
    while( true ) {
      uVar19 = *puVar16;
      puVar13 = puVar10 + 1;
      puVar16 = puVar16 + 1;
      *puVar10 = uVar19 & (ulong)(((uint)uVar18 | (uint)(uVar18 >> 1)) & 1) - 1 | uVar21;
      if (local_108 == puVar13) break;
      uVar21 = *puVar13;
      puVar10 = puVar13;
    }
    uVar20 = uVar20 + 1;
    puVar17 = puVar17 + 0xc;
    uVar21 = local_168[0];
  } while (uVar20 != 0x10);
  FUN_00500ff0(local_108,&local_c8,&local_88,local_108,&local_c8,&local_88,1,local_168,local_268,
               puVar22);
  if ((param_5 != 0) && (local_2c0 = (int)uVar5 % 5, local_2c0 == 0)) {
LAB_005034aa:
    local_228 = (long)((int)uVar5 >> 3);
    local_268 = local_168 + 4;
    uVar6 = uVar5 + 4;
    local_278 = 0;
    local_2bc = 0;
    uVar7 = uVar5 + 3;
    uVar8 = uVar5 + 2;
    uVar9 = uVar5 + 1;
    lVar12 = (long)((int)uVar24 >> 3);
    pbVar23 = (byte *)(param_4 + lVar12);
    do {
      uVar15 = 0;
      if (uVar6 < 0x100) {
        uVar15 = ((int)(uint)pbVar23[((int)uVar6 >> 3) - lVar12] >> ((byte)uVar6 & 7) & 1U) << 5;
      }
      if (uVar7 < 0x100) {
        uVar15 = uVar15 | ((int)(uint)pbVar23[((int)uVar7 >> 3) - lVar12] >> ((byte)uVar7 & 7) & 1U)
                          << 4;
      }
      if (uVar8 < 0x100) {
        uVar15 = uVar15 | ((int)(uint)pbVar23[((int)uVar8 >> 3) - lVar12] >> ((byte)uVar8 & 7) & 1U)
                          << 3;
      }
      if (uVar9 < 0x100) {
        uVar15 = uVar15 | ((int)(uint)pbVar23[((int)uVar9 >> 3) - lVar12] >> ((byte)uVar9 & 7) & 1U)
                          << 2;
      }
      if ((uVar5 < 0x100) &&
         (uVar15 = uVar15 | ((int)(uint)pbVar23[local_228 - lVar12] >> ((byte)uVar5 & 7) & 1U) * 2,
         uVar24 < 0x100)) {
        uVar15 = uVar15 | (int)(uint)*pbVar23 >> ((byte)uVar24 & 7) & 1U;
      }
      FUN_0050a120(&local_1aa,&local_1a9,uVar15);
      puVar22 = local_168;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar22 = 0;
        puVar22 = puVar22 + (ulong)bVar26 * -2 + 1;
      }
      uVar21 = 0;
      puVar22 = (ulong *)(param_8 + local_278);
      uVar20 = 0;
      do {
        uVar18 = local_1a9 ^ uVar21 | (local_1a9 ^ uVar21) >> 4;
        uVar18 = uVar18 | uVar18 >> 2;
        puVar10 = local_168;
        puVar17 = puVar22;
        while( true ) {
          uVar19 = *puVar17;
          puVar16 = puVar10 + 1;
          puVar17 = puVar17 + 1;
          *puVar10 = uVar19 & (ulong)(((uint)uVar18 | (uint)(uVar18 >> 1)) & 1) - 1 | uVar20;
          if (local_108 == puVar16) break;
          uVar20 = *puVar16;
          puVar10 = puVar16;
        }
        uVar21 = uVar21 + 1;
        puVar22 = puVar22 + 0xc;
        uVar20 = local_168[0];
      } while (uVar21 != 0x11);
      uVar19 = 0x1ffffffffff - (ulong)(0xfffffdfffffffe00 < local_168[4]);
      uVar25 = (ulong)local_1aa;
      uVar20 = local_168[4];
      puVar22 = local_168 + 5;
      puVar10 = &local_1a8;
      uVar21 = -local_168[4] - 0x20000000200;
      uVar18 = uVar19;
      while( true ) {
        puVar17 = puVar10 + 2;
        *puVar10 = uVar20 & uVar25 - 1 | -uVar25 & uVar21;
        puVar10[1] = uVar18 & -(ulong)(uVar25 != 0);
        if (local_168 == puVar17) break;
        uVar20 = *puVar22;
        uVar21 = *puVar17;
        puVar22 = puVar22 + 1;
        uVar18 = puVar10[3];
        puVar10 = puVar17;
      }
      local_1a8 = -local_168[4] - 0x20000000200;
      local_1a0 = uVar19;
      local_198 = -local_168[5];
      local_190 = 0x20000000000 - (ulong)(local_168[5] != 0);
      local_188 = -0x1fffffffe00 - local_168[6];
      local_180 = 0x1ffffffffff - (ulong)(0xfffffe0000000200 < local_168[6]);
      local_178 = -0x1fffffffe00 - local_168[7];
      local_170 = 0x1ffffffffff - (ulong)(0xfffffe0000000200 < local_168[7]);
      FUN_004fd470(local_268,&local_1a8);
      if (local_2c0 == 0) {
        FUN_00500ff0(local_108,&local_c8,&local_88,local_108,&local_c8,&local_88,param_7,local_168,
                     local_268,local_168 + 8);
      }
      else {
        local_108[1] = 0;
        local_108[3] = 0;
        local_108[0] = local_168[0];
        uStack_e0 = 0;
        local_108[2] = local_168[1];
        uStack_d0 = 0;
        local_108[4] = local_168[2];
        uStack_c0 = 0;
        local_d8 = local_168[3];
        uStack_b0 = 0;
        local_c8 = local_168[4];
        uStack_a0 = 0;
        local_b8 = local_168[5];
        uStack_90 = 0;
        local_a8 = local_168[6];
        uStack_80 = 0;
        local_98 = local_168[7];
        uStack_70 = 0;
        local_88 = local_168[8];
        local_78 = local_168[9];
        local_68 = local_168[10];
        uStack_60 = 0;
        uStack_50 = 0;
        local_58 = local_168[0xb];
      }
      local_2bc = local_2bc + 1;
      pbVar23 = pbVar23 + 0x20;
      local_278 = local_278 + 0x660;
      local_2c0 = 0;
    } while (local_2bc < param_5);
    if (-1 < (int)uVar24) goto LAB_00503461;
LAB_00503a22:
    *param_1 = local_108[0];
    param_1[1] = local_108[1];
    param_1[2] = local_108[2];
    param_1[3] = local_108[3];
    param_1[4] = local_108[4];
    param_1[5] = uStack_e0;
    param_1[6] = local_d8;
    param_1[7] = uStack_d0;
    *param_2 = local_c8;
    param_2[1] = uStack_c0;
    param_2[2] = local_b8;
    param_2[3] = uStack_b0;
    param_2[4] = local_a8;
    param_2[5] = uStack_a0;
    param_2[6] = local_98;
    param_2[7] = uStack_90;
    *param_3 = local_88;
    param_3[1] = uStack_80;
    param_3[2] = local_78;
    param_3[3] = uStack_70;
    param_3[4] = local_68;
    param_3[5] = uStack_60;
    param_3[6] = local_58;
    param_3[7] = uStack_50;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    return;
  }
  if ((int)uVar24 < 0) goto LAB_00503a22;
LAB_00503461:
  FUN_004fdbd0(local_108,&local_c8,&local_88,local_108,&local_c8);
  local_2c0 = 0;
  uVar5 = uVar24;
  goto LAB_00502ff6;
code_r0x00503155:
  uVar5 = uVar24;
  if (local_2c0 != 0) goto LAB_00502ff6;
  goto LAB_00503461;
}

