
void FUN_005c8b30(long param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  uint *local_188;
  ulong local_168;
  ulong local_148;
  ulong local_138;
  byte local_120;
  int local_11c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  uint local_c8 [16];
  uint local_88 [16];
  uint local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = 0;
  local_108 = (undefined1  [16])0x0;
  iVar22 = 0x10;
  if (param_2 < 0x11) {
    iVar22 = param_2;
  }
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (0 < param_2) {
    do {
      *(uint *)(local_108 + lVar7 * 4) = (uint)*(byte *)(param_3 + lVar7);
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < iVar22);
  }
  local_11c = 2;
  *(uint *)(param_1 + 0x80) = (uint)(param_2 < 0xb);
  uVar8 = (ulong)(uint)local_d8._8_4_;
  uVar3 = local_108._0_4_ << 0x18 | local_108._4_4_ << 0x10 | local_108._12_4_ |
          local_108._8_4_ << 8;
  uVar4 = local_f8._0_4_ << 0x18 | local_f8._4_4_ << 0x10 | local_f8._12_4_ | local_f8._8_4_ << 8;
  uVar5 = local_e8._0_4_ << 0x18 | local_e8._4_4_ << 0x10 | local_e8._12_4_ | local_e8._8_4_ << 8;
  uVar6 = local_d8._0_4_ << 0x18 | local_d8._4_4_ << 0x10 | local_d8._12_4_ | local_d8._8_4_ << 8;
  uVar19 = *(uint *)(&DAT_008163e0 + (ulong)(uint)local_d8._12_4_ * 4);
  uVar12 = *(uint *)(&DAT_00815fe0 + (ulong)(uint)local_e8._0_4_ * 4);
  uVar20 = *(uint *)(&DAT_008163e0 + (ulong)(uint)local_e8._12_4_ * 4);
  local_138 = (ulong)(uint)local_d8._0_4_;
  local_168 = (ulong)(uint)local_d8._4_4_;
  uVar9 = (ulong)(uint)local_e8._8_4_;
  local_148 = (ulong)(uint)local_e8._4_4_;
  local_188 = local_c8;
  while( true ) {
    uVar12 = *(uint *)(&DAT_008167e0 + local_168 * 4) ^ *(uint *)(&DAT_00815fe0 + local_138 * 4) ^
             *(uint *)(&DAT_00815be0 + uVar8 * 4) ^ uVar3 ^ uVar19 ^ uVar12;
    uVar21 = (ulong)(uVar12 >> 0x10 & 0xff);
    uVar10 = (ulong)(uVar12 >> 8 & 0xff);
    uVar19 = *(uint *)(&DAT_00815fe0 + uVar21 * 4);
    uVar23 = (ulong)(uVar12 >> 0x18);
    uVar8 = (ulong)(uVar12 & 0xff);
    uVar5 = uVar5 ^ *(uint *)(&DAT_008167e0 + uVar23 * 4) ^ *(uint *)(&DAT_00815be0 + uVar8 * 4) ^
                    *(uint *)(&DAT_00815be0 + uVar9 * 4) ^ *(uint *)(&DAT_008163e0 + uVar10 * 4) ^
                    uVar19;
    uVar9 = (ulong)(uVar5 >> 8 & 0xff);
    uVar24 = (ulong)(uVar5 >> 0x10 & 0xff);
    uVar3 = *(uint *)(&DAT_008163e0 + uVar9 * 4);
    uVar13 = *(uint *)(&DAT_00815fe0 + uVar24 * 4);
    uVar14 = *(uint *)(&DAT_00815be0 + (ulong)(uVar5 >> 0x18) * 4);
    uVar25 = (ulong)(uVar5 & 0xff);
    uVar6 = uVar14 ^ *(uint *)(&DAT_008167e0 + uVar25 * 4) ^
            *(uint *)(&DAT_008167e0 + local_148 * 4) ^ uVar3 ^ uVar13 ^ uVar6;
    uVar17 = *(uint *)(&DAT_008167e0 + (ulong)(uVar6 >> 8 & 0xff) * 4);
    uVar18 = (ulong)(uVar6 >> 0x10 & 0xff);
    uVar20 = *(uint *)(&DAT_00815fe0 + (ulong)(uVar6 & 0xff) * 4) ^
             *(uint *)(&DAT_00815be0 + (ulong)(uVar6 >> 0x18) * 4) ^ uVar17 ^
             *(uint *)(&DAT_008163e0 + uVar18 * 4) ^ uVar4 ^ uVar20;
    uVar4 = *(uint *)(&DAT_00815be0 + uVar9 * 4);
    *local_188 = *(uint *)(&DAT_00815fe0 + uVar25 * 4) ^ *(uint *)(&DAT_008167e0 + uVar10 * 4) ^
                 uVar4 ^ *(uint *)(&DAT_008167e0 + (ulong)(uVar6 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008163e0 + uVar18 * 4);
    local_188[1] = uVar3 ^ uVar13 ^ uVar14 ^ *(uint *)(&DAT_008163e0 + (ulong)(uVar6 & 0xff) * 4) ^
                   uVar17;
    uVar3 = *(uint *)(&DAT_00815be0 + uVar10 * 4);
    local_188[2] = *(uint *)(&DAT_00815fe0 + uVar8 * 4) ^ uVar3 ^
                   *(uint *)(&DAT_00815fe0 + uVar18 * 4) ^
                   *(uint *)(&DAT_008167e0 + (ulong)(uVar20 >> 0x18) * 4) ^
                   *(uint *)(&DAT_008163e0 + (ulong)(uVar20 >> 0x10 & 0xff) * 4);
    local_188[3] = uVar19 ^ *(uint *)(&DAT_00815be0 + uVar23 * 4) ^
                   *(uint *)(&DAT_008163e0 + (ulong)(uVar20 & 0xff) * 4) ^
                   *(uint *)(&DAT_00815be0 + (ulong)(uVar20 >> 0x18) * 4) ^
                   *(uint *)(&DAT_008167e0 + (ulong)(uVar20 >> 8 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_008163e0 + uVar25 * 4) ^
            *(uint *)(&DAT_00815fe0 + (ulong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_00815fe0 + uVar23 * 4) ^ uVar4 ^ *(uint *)(&DAT_008167e0 + uVar24 * 4) ^
            uVar6;
    uVar9 = (ulong)(uVar6 & 0xff);
    uVar23 = (ulong)(uVar6 >> 0x10 & 0xff);
    uVar13 = uVar3 ^ uVar12 ^ *(uint *)(&DAT_008167e0 + (ulong)(uVar6 >> 0x18) * 4) ^
             *(uint *)(&DAT_00815be0 + uVar9 * 4) ^
             *(uint *)(&DAT_008163e0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_00815fe0 + uVar23 * 4);
    uVar19 = *(uint *)(&DAT_008167e0 + (ulong)(uVar13 & 0xff) * 4);
    uVar12 = *(uint *)(&DAT_008163e0 + (ulong)(uVar13 >> 8 & 0xff) * 4);
    uVar24 = (ulong)(uVar13 >> 0x10 & 0xff);
    uVar14 = uVar5 ^ *(uint *)(&DAT_008167e0 + uVar21 * 4) ^ uVar19 ^
             *(uint *)(&DAT_00815be0 + (ulong)(uVar13 >> 0x18) * 4) ^ uVar12 ^
             *(uint *)(&DAT_00815fe0 + uVar24 * 4);
    uVar10 = (ulong)(uVar14 >> 8 & 0xff);
    uVar21 = (ulong)(uVar14 >> 0x18);
    uVar27 = (ulong)(uVar14 & 0xff);
    uVar18 = (ulong)(uVar14 >> 0x10 & 0xff);
    uVar4 = uVar20 ^ *(uint *)(&DAT_008163e0 + uVar8 * 4) ^ *(uint *)(&DAT_00815fe0 + uVar27 * 4) ^
            *(uint *)(&DAT_00815be0 + uVar21 * 4) ^ *(uint *)(&DAT_008167e0 + uVar10 * 4) ^
            *(uint *)(&DAT_008163e0 + uVar18 * 4);
    local_168 = (ulong)(uVar4 >> 8 & 0xff);
    uVar8 = (ulong)(uVar4 >> 0x10 & 0xff);
    uVar20 = *(uint *)(&DAT_00815fe0 + (ulong)(uVar4 >> 0x18) * 4);
    local_188[4] = *(uint *)(&DAT_008163e0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_008167e0 + uVar9 * 4) ^ *(uint *)(&DAT_008167e0 + uVar21 * 4) ^
                   uVar20 ^ *(uint *)(&DAT_00815be0 + uVar8 * 4);
    local_188[5] = *(uint *)(&DAT_008167e0 + uVar23 * 4) ^
                   *(uint *)(&DAT_008163e0 + (ulong)(uVar6 >> 0x18) * 4) ^
                   *(uint *)(&DAT_00815be0 + (ulong)(uVar4 & 0xff) * 4) ^
                   *(uint *)(&DAT_00815fe0 + local_168 * 4) ^ *(uint *)(&DAT_008163e0 + uVar8 * 4);
    uVar3 = *(uint *)(&DAT_00815fe0 + uVar21 * 4);
    uVar5 = *(uint *)(&DAT_008163e0 + (ulong)(uVar4 & 0xff) * 4);
    local_188[6] = uVar19 ^ *(uint *)(&DAT_00815fe0 + uVar9 * 4) ^ uVar12 ^ uVar3 ^
                   *(uint *)(&DAT_00815be0 + uVar18 * 4);
    local_188[7] = *(uint *)(&DAT_008163e0 + (ulong)(uVar13 >> 0x18) * 4) ^
                   *(uint *)(&DAT_00815be0 + (ulong)(uVar13 & 0xff) * 4) ^
                   *(uint *)(&DAT_008167e0 + uVar24 * 4) ^ *(uint *)(&DAT_00815be0 + uVar27 * 4) ^
                   *(uint *)(&DAT_00815fe0 + uVar10 * 4);
    uVar6 = uVar3 ^ uVar6 ^ uVar20 ^ uVar5 ^ *(uint *)(&DAT_008167e0 + uVar8 * 4) ^
            *(uint *)(&DAT_00815be0 + local_168 * 4);
    uVar23 = (ulong)(uVar6 >> 8 & 0xff);
    uVar25 = (ulong)(uVar6 & 0xff);
    uVar9 = (ulong)(uVar6 >> 0x18);
    uVar26 = (ulong)(uVar6 >> 0x10 & 0xff);
    uVar17 = *(uint *)(&DAT_00815fe0 + uVar26 * 4) ^
             uVar14 ^ *(uint *)(&DAT_00815be0 + uVar10 * 4) ^ *(uint *)(&DAT_008167e0 + uVar9 * 4) ^
             *(uint *)(&DAT_00815be0 + uVar25 * 4) ^ *(uint *)(&DAT_008163e0 + uVar23 * 4);
    uVar24 = (ulong)(uVar17 >> 8 & 0xff);
    uVar8 = (ulong)(uVar17 >> 0x18);
    local_120 = (byte)uVar17;
    uVar10 = (ulong)(uVar17 >> 0x10 & 0xff);
    uVar19 = *(uint *)(&DAT_008167e0 + (ulong)local_120 * 4);
    uVar3 = uVar4 ^ *(uint *)(&DAT_008167e0 + uVar18 * 4) ^ uVar19 ^
            *(uint *)(&DAT_00815be0 + uVar8 * 4) ^ *(uint *)(&DAT_008163e0 + uVar24 * 4) ^
            *(uint *)(&DAT_00815fe0 + uVar10 * 4);
    uVar18 = (ulong)(uVar3 >> 8 & 0xff);
    uVar21 = (ulong)(uVar3 >> 0x10 & 0xff);
    uVar14 = uVar13 ^ *(uint *)(&DAT_008163e0 + uVar27 * 4) ^
             *(uint *)(&DAT_00815fe0 + (ulong)(uVar3 & 0xff) * 4) ^
             *(uint *)(&DAT_00815be0 + (ulong)(uVar3 >> 0x18) * 4) ^
             *(uint *)(&DAT_008167e0 + uVar18 * 4) ^ *(uint *)(&DAT_008163e0 + uVar21 * 4);
    local_188[8] = *(uint *)(&DAT_008167e0 + uVar21 * 4) ^
                   *(uint *)(&DAT_008163e0 + uVar23 * 4) ^ *(uint *)(&DAT_008167e0 + uVar25 * 4) ^
                   *(uint *)(&DAT_00815fe0 + (ulong)(uVar14 >> 0x18) * 4) ^
                   *(uint *)(&DAT_00815be0 + (ulong)(uVar14 >> 0x10 & 0xff) * 4);
    uVar12 = *(uint *)(&DAT_008167e0 + uVar26 * 4);
    local_188[9] = uVar12 ^ *(uint *)(&DAT_008163e0 + uVar9 * 4) ^
                   *(uint *)(&DAT_00815be0 + (ulong)(uVar14 & 0xff) * 4) ^
                   *(uint *)(&DAT_008163e0 + (ulong)(uVar14 >> 0x18) * 4) ^
                   *(uint *)(&DAT_00815fe0 + (ulong)(uVar14 >> 8 & 0xff) * 4);
    uVar20 = *(uint *)(&DAT_00815be0 + uVar24 * 4);
    uVar5 = *(uint *)(&DAT_008167e0 + uVar10 * 4);
    local_188[10] =
         *(uint *)(&DAT_008163e0 + uVar24 * 4) ^ uVar19 ^ *(uint *)(&DAT_00815fe0 + uVar23 * 4) ^
         *(uint *)(&DAT_00815fe0 + (ulong)(uVar3 >> 0x18) * 4) ^
         *(uint *)(&DAT_00815be0 + uVar21 * 4);
    local_188[0xb] =
         *(uint *)(&DAT_008163e0 + uVar8 * 4) ^ uVar5 ^ uVar20 ^
         *(uint *)(&DAT_00815be0 + (ulong)(uVar3 & 0xff) * 4) ^
         *(uint *)(&DAT_00815fe0 + uVar18 * 4);
    uVar3 = *(uint *)(&DAT_008163e0 + (ulong)local_120 * 4) ^ *(uint *)(&DAT_00815fe0 + uVar8 * 4) ^
            *(uint *)(&DAT_00815fe0 + uVar9 * 4) ^ uVar5 ^ uVar20 ^ uVar3;
    uVar8 = (ulong)(uVar3 >> 8 & 0xff);
    uVar10 = (ulong)(uVar3 & 0xff);
    uVar13 = *(uint *)(&DAT_00815fe0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
    uVar4 = uVar6 ^ *(uint *)(&DAT_00815be0 + uVar23 * 4) ^
            *(uint *)(&DAT_008167e0 + (ulong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_00815be0 + uVar10 * 4) ^ *(uint *)(&DAT_008163e0 + uVar8 * 4) ^ uVar13;
    uVar23 = (ulong)(uVar4 >> 8 & 0xff);
    uVar21 = (ulong)(uVar4 & 0xff);
    uVar5 = uVar12 ^ uVar17 ^ *(uint *)(&DAT_008167e0 + uVar21 * 4) ^
            *(uint *)(&DAT_00815be0 + (ulong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_008163e0 + uVar23 * 4) ^
            *(uint *)(&DAT_00815fe0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
    uVar9 = (ulong)(uVar5 >> 8 & 0xff);
    local_148 = (ulong)(uVar5 >> 0x10 & 0xff);
    uVar18 = (ulong)(uVar5 >> 0x18);
    uVar19 = *(uint *)(&DAT_008163e0 + local_148 * 4);
    uVar6 = uVar14 ^ *(uint *)(&DAT_008163e0 + uVar25 * 4) ^
            *(uint *)(&DAT_00815fe0 + (ulong)(uVar5 & 0xff) * 4) ^
            *(uint *)(&DAT_00815be0 + uVar18 * 4) ^ *(uint *)(&DAT_008167e0 + uVar9 * 4) ^ uVar19;
    local_138 = (ulong)(uVar6 >> 0x18);
    local_168 = (ulong)(uVar6 >> 0x10);
    uVar14 = *(uint *)(&DAT_00815fe0 + uVar21 * 4);
    uVar20 = *(uint *)(&DAT_008163e0 + (ulong)(uVar5 & 0xff) * 4);
    uVar17 = *(uint *)(&DAT_008167e0 + uVar10 * 4);
    uVar1 = *(uint *)(&DAT_00815be0 + uVar23 * 4);
    uVar2 = *(uint *)(&DAT_008167e0 + uVar18 * 4);
    local_188[0xd] =
         *(uint *)(&DAT_00815be0 + (ulong)(uVar4 >> 0x18) * 4) ^
         *(uint *)(&DAT_008163e0 + uVar21 * 4) ^
         *(uint *)(&DAT_00815fe0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^ uVar20 ^
         *(uint *)(&DAT_008167e0 + uVar9 * 4);
    uVar12 = *(uint *)(&DAT_00815fe0 + uVar18 * 4);
    local_188[0xc] = uVar14 ^ uVar17 ^ uVar1 ^ uVar2 ^ uVar19;
    local_168 = local_168 & 0xff;
    local_188[0xe] =
         *(uint *)(&DAT_00815fe0 + uVar10 * 4) ^ *(uint *)(&DAT_00815be0 + uVar8 * 4) ^ uVar12 ^
         *(uint *)(&DAT_008167e0 + local_138 * 4) ^ *(uint *)(&DAT_008163e0 + local_168 * 4);
    uVar19 = *(uint *)(&DAT_008163e0 + (ulong)(uVar6 & 0xff) * 4);
    uVar8 = (ulong)(uVar6 >> 8 & 0xff);
    local_188[0xf] =
         uVar13 ^ *(uint *)(&DAT_00815be0 + (ulong)(uVar3 >> 0x18) * 4) ^ uVar19 ^
         *(uint *)(&DAT_008167e0 + uVar8 * 4) ^ *(uint *)(&DAT_00815be0 + local_168 * 4);
    if (local_11c == 1) break;
    local_11c = 1;
    local_188 = local_88;
  }
  puVar11 = (uint *)(param_1 + 4);
  puVar15 = local_88;
  do {
    puVar16 = puVar15 + 1;
    puVar11[-1] = puVar15[-0x10];
    *puVar11 = *puVar15 + 0x10 & 0x1f;
    puVar11 = puVar11 + 2;
    puVar15 = puVar16;
  } while (puVar16 != local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

