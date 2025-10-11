
void FUN_004fa160(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                 ulong *param_6,int param_7,ulong *param_8,ulong *param_9,ulong *param_10)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  ulong local_228;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  ulong local_1f0;
  undefined1 local_1e8 [32];
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  ulong local_148 [4];
  ulong local_128;
  long local_120;
  ulong local_118;
  long local_110;
  ulong local_108;
  long local_100;
  ulong local_f8;
  long local_f0;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  long local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 == 0) {
    FUN_004f8b70(&local_128,param_10);
    FUN_004f8d60(&local_208,&local_128);
    FUN_004f8c40(&local_128,&local_208,param_10);
    FUN_004f8d60(&local_1c8,&local_128);
    FUN_004f8c40(&local_b8,&local_1c8,param_5);
    FUN_004f8d60(&local_1c8,&local_b8);
    FUN_004f8c40(&local_b8,&local_208,param_4);
    FUN_004f8d60(&local_208,&local_b8);
  }
  else {
    local_1b8 = param_5[2];
    local_1c8 = *param_5;
    local_1c0 = param_5[1];
    local_1b0 = param_5[3];
    local_208 = *param_4;
    local_1f8 = param_4[2];
    local_200 = param_4[1];
    local_1f0 = param_4[3];
  }
  uVar21 = local_1b0;
  uVar18 = local_1b8;
  uVar13 = local_1c0;
  uVar7 = local_1c8;
  uVar2 = local_1f0;
  uVar1 = local_1f8;
  uVar11 = local_200;
  uVar10 = local_208;
  FUN_004f8b70(&local_128,param_6);
  FUN_004f8d60(&local_228,&local_128);
  FUN_004f8c40(&local_128,&local_228,param_6);
  FUN_004f8d60(local_1e8,&local_128);
  FUN_004f8c40(&local_128,local_1e8,param_9);
  bVar22 = 0x10000000000ff < local_118;
  uVar12 = local_118 + 0xfffeffffffffff00;
  bVar23 = 0xff < local_108;
  uVar17 = local_108 - 0x100;
  bVar24 = 0xff < local_f8;
  uVar5 = local_f8 - 0x100;
  bVar25 = 0xfffffffffffffeff < local_128;
  uVar6 = local_128 + 0x100;
  local_128 = uVar6 - uVar7;
  local_120 = (local_120 + 1 + (ulong)bVar25) - (ulong)(uVar6 < uVar7);
  local_118 = uVar12 - uVar13;
  local_110 = (local_110 + (ulong)bVar22) - (ulong)(uVar12 < uVar13);
  local_108 = uVar17 - uVar18;
  local_100 = (local_100 + (ulong)bVar23) - (ulong)(uVar17 < uVar18);
  local_f8 = uVar5 - uVar21;
  local_f0 = (local_f0 + (ulong)bVar24) - (ulong)(uVar5 < uVar21);
  FUN_004f8d60(local_1e8,&local_128);
  FUN_004f8c40(&local_128,&local_228,param_8);
  bVar22 = 0x10000000000ff < local_118;
  uVar13 = local_118 + 0xfffeffffffffff00;
  bVar23 = 0xff < local_108;
  uVar18 = local_108 - 0x100;
  bVar24 = 0xff < local_f8;
  uVar21 = local_f8 - 0x100;
  bVar25 = 0xfffffffffffffeff < local_128;
  uVar7 = local_128 + 0x100;
  local_128 = uVar7 - uVar10;
  local_120 = (local_120 + 1 + (ulong)bVar25) - (ulong)(uVar7 < uVar10);
  local_118 = uVar13 - uVar11;
  local_110 = (local_110 + (ulong)bVar22) - (ulong)(uVar13 < uVar11);
  local_108 = uVar18 - uVar1;
  local_100 = (local_100 + (ulong)bVar23) - (ulong)(uVar18 < uVar1);
  local_f8 = uVar21 - uVar2;
  local_f0 = (local_f0 + (ulong)bVar24) - (ulong)(uVar21 < uVar2);
  FUN_004f8d60(&local_228,&local_128);
  uVar3 = FUN_004f9050();
  uVar4 = FUN_004f9050(local_1e8);
  lVar8 = FUN_004f9050(param_6);
  uVar3 = uVar3 & uVar4;
  lVar9 = FUN_004f9050(param_10);
  if ((uVar3 & ~(uint)lVar9 & ~(uint)lVar8 & 1) == 0) {
    if (param_7 == 0) {
      FUN_004f8c40(&local_128,param_6,param_10);
      FUN_004f8d60(&local_1a8,&local_128);
    }
    else {
      local_1a8 = *param_6;
      local_1a0 = param_6[1];
      local_198 = param_6[2];
      local_190 = param_6[3];
    }
    puVar20 = local_148;
    FUN_004f8c40(&local_128,&local_228,&local_1a8);
    FUN_004f8d60(puVar20,&local_128);
    local_1a8 = local_228;
    local_1a0 = local_220;
    local_198 = local_218;
    local_190 = local_210;
    FUN_004f8b70(&local_128,&local_228);
    FUN_004f8d60(&local_228,&local_128);
    FUN_004f8c40(&local_128,&local_228,&local_1a8);
    FUN_004f8d60(&local_1a8,&local_128);
    FUN_004f8c40(&local_128,&local_208,&local_228);
    FUN_004f8d60(&local_208,&local_128);
    FUN_004f8c40(&local_128,&local_1c8,&local_1a8);
    FUN_004f8b70(&local_b8,local_1e8);
    uVar7 = local_1f0;
    uVar2 = local_1f8;
    uVar1 = local_200;
    uVar11 = local_208;
    bVar22 = 0x20000000001ff < local_a8;
    uVar18 = local_a8 + 0xfffdfffffffffe00;
    uVar21 = uVar18 - local_1a0;
    bVar23 = 0x1ff < local_98;
    uVar5 = local_98 - 0x200;
    uVar6 = uVar5 - local_198;
    bVar24 = 0x1ff < local_88;
    uVar12 = local_88 - 0x200;
    uVar17 = uVar12 - local_190;
    bVar25 = 0xfffffffffffffdff < local_b8;
    uVar10 = local_b8 + 0x200;
    uVar13 = uVar10 - local_1a8;
    local_b8 = uVar13 + local_208 * -2;
    local_b0 = ((local_b0 + 2 + (ulong)bVar25) - (ulong)(uVar10 < local_1a8)) -
               (ulong)(uVar13 < local_208 * 2);
    local_a8 = uVar21 + local_200 * -2;
    local_a0 = ((local_a0 + 1 + (ulong)bVar22) - (ulong)(uVar18 < local_1a0)) -
               (ulong)(uVar21 < local_200 * 2);
    local_98 = uVar6 + local_1f8 * -2;
    local_90 = ((local_90 + 1 + (ulong)bVar23) - (ulong)(uVar5 < local_198)) -
               (ulong)(uVar6 < local_1f8 * 2);
    local_88 = uVar17 + local_1f0 * -2;
    local_80 = ((local_80 + 1 + (ulong)bVar24) - (ulong)(uVar12 < local_190)) -
               (ulong)(uVar17 < local_1f0 * 2);
    FUN_004f8d60(&local_188,&local_b8);
    uVar10 = local_188;
    local_208 = (uVar11 + 0x400000000000004) - local_188;
    local_200 = (uVar1 + 0x3fffbfffffffffc) - local_180;
    local_1f8 = (uVar2 + 0x3fffffffffffffc) - local_178;
    local_1f0 = (uVar7 + 0x3fffffffffffffc) - local_170;
    FUN_004f8c40(&local_b8,local_1e8,&local_208);
    FUN_004f89f0(&local_b8,&local_128);
    puVar15 = &local_168;
    FUN_004f8d60(puVar15,&local_b8);
    uVar11 = -lVar8;
    puVar14 = &local_188;
    while( true ) {
      uVar1 = *param_8;
      puVar16 = puVar14 + 1;
      param_8 = param_8 + 1;
      *puVar14 = (uVar1 ^ uVar10) & uVar11 ^ uVar10;
      if (puVar15 == puVar16) break;
      uVar10 = *puVar16;
      puVar14 = puVar16;
    }
    uVar10 = -lVar9;
    puVar14 = &local_188;
    do {
      uVar1 = *param_4;
      puVar19 = puVar14 + 1;
      param_4 = param_4 + 1;
      *puVar14 = (uVar1 ^ *puVar14) & uVar10 ^ *puVar14;
      puVar16 = puVar15;
      puVar14 = puVar19;
    } while (puVar15 != puVar19);
    do {
      uVar1 = *param_9;
      puVar14 = puVar16 + 1;
      param_9 = param_9 + 1;
      *puVar16 = (uVar1 ^ *puVar16) & uVar11 ^ *puVar16;
      puVar16 = puVar14;
    } while (puVar20 != puVar14);
    do {
      uVar1 = *param_5;
      puVar16 = puVar15 + 1;
      param_5 = param_5 + 1;
      *puVar15 = (uVar1 ^ *puVar15) & uVar10 ^ *puVar15;
      puVar14 = puVar20;
      puVar15 = puVar16;
    } while (puVar20 != puVar16);
    do {
      uVar1 = *param_10;
      puVar15 = puVar14 + 1;
      param_10 = param_10 + 1;
      *puVar14 = (uVar1 ^ *puVar14) & uVar11 ^ *puVar14;
      puVar14 = puVar15;
    } while (&local_128 != puVar15);
    do {
      uVar11 = *param_6;
      puVar15 = puVar20 + 1;
      param_6 = param_6 + 1;
      *puVar20 = (uVar11 ^ *puVar20) & uVar10 ^ *puVar20;
      puVar20 = puVar15;
    } while (puVar15 != &local_128);
    *param_1 = local_188;
    param_1[1] = local_180;
    param_1[2] = local_178;
    param_1[3] = local_170;
    *param_2 = local_168;
    param_2[1] = local_160;
    param_2[2] = local_158;
    param_2[3] = local_150;
    *param_3 = local_148[0];
    param_3[1] = local_148[1];
    param_3[2] = local_148[2];
    param_3[3] = local_148[3];
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    FUN_004f9a30(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

