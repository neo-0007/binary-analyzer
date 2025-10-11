
void FUN_005081e0(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7,long param_8,ulong *param_9)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  byte *pbVar17;
  long lVar18;
  long in_FS_OFFSET;
  byte bVar19;
  ulong *local_308;
  byte local_2cc;
  byte local_2c8;
  byte local_2c4;
  byte local_2c0;
  byte local_2bc;
  byte local_284;
  byte local_24a;
  byte local_249;
  ulong local_248 [4];
  ulong local_228;
  ulong uStack_220;
  ulong local_218;
  ulong uStack_210;
  ulong local_208;
  ulong uStack_200;
  ulong local_1f8;
  ulong uStack_1f0;
  ulong local_1e8;
  ulong uStack_1e0;
  ulong local_1d8;
  ulong uStack_1d0;
  ulong local_1c8;
  ulong uStack_1c0;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong local_168 [27];
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  
  bVar19 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = true;
  puVar9 = local_248;
  for (lVar4 = 0x1b; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  iVar16 = (-(uint)(param_5 == 0) & 0xfffffe7a) + 0x208;
LAB_005082a6:
  iVar1 = iVar16 + -1;
  if ((0x82 < iVar16) || (param_6 == 0)) {
    if ((param_5 != 0) && (iVar16 * -0x33333333 + 0x19999999U < 0x33333333)) {
LAB_0050878e:
      local_308 = local_168 + 9;
      local_2cc = (byte)(iVar16 + 4) & 7;
      uVar13 = 0;
      lVar4 = (long)(iVar16 + 4 >> 3);
      local_2c8 = (byte)(iVar16 + 3) & 7;
      local_2c4 = (byte)(iVar16 + 2) & 7;
      local_2c0 = (byte)(iVar16 + 1) & 7;
      local_284 = (byte)iVar1 & 7;
      local_2bc = (byte)iVar16 & 7;
      pbVar17 = (byte *)(param_4 + lVar4);
      lVar18 = 0;
      do {
        uVar7 = ((int)(uint)pbVar17[(iVar16 + 3 >> 3) - lVar4] >> local_2c8 & 1U) << 4 |
                ((int)(uint)pbVar17[(iVar16 + 2 >> 3) - lVar4] >> local_2c4 & 1U) << 3 |
                ((int)(uint)*pbVar17 >> local_2cc & 1U) << 5 |
                ((int)(uint)pbVar17[(iVar16 + 1 >> 3) - lVar4] >> local_2c0 & 1U) << 2 |
                ((int)(uint)pbVar17[(iVar16 >> 3) - lVar4] >> local_2bc & 1U) * 2;
        if (iVar1 != -1) {
          uVar7 = uVar7 | (int)(uint)pbVar17[(iVar1 >> 3) - lVar4] >> local_284 & 1U;
        }
        FUN_0050a120(&local_24a,&local_249,uVar7);
        puVar9 = local_168;
        for (lVar5 = 0x1b; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + (ulong)bVar19 * -2 + 1;
        }
        uVar15 = 0;
        puVar9 = (ulong *)(param_8 + lVar18);
        uVar14 = 0;
        do {
          uVar12 = local_249 ^ uVar15 | (local_249 ^ uVar15) >> 4;
          uVar12 = uVar12 | uVar12 >> 2;
          puVar6 = local_168;
          puVar10 = puVar9;
          while( true ) {
            uVar11 = *puVar10;
            puVar8 = puVar6 + 1;
            puVar10 = puVar10 + 1;
            *puVar6 = uVar11 & (ulong)(((uint)uVar12 | (uint)(uVar12 >> 1)) & 1) - 1 | uVar14;
            if (&local_90 == puVar8) break;
            uVar14 = *puVar8;
            puVar6 = puVar8;
          }
          uVar15 = uVar15 + 1;
          puVar9 = puVar9 + 0x1b;
          uVar14 = local_168[0];
        } while (uVar15 != 0x11);
        uVar12 = 0x3fffffffffffffe0 - local_168[9];
        uVar14 = uVar12;
        puVar9 = local_308;
        uVar15 = local_168[9];
        while( true ) {
          puVar6 = puVar9 + 1;
          *puVar9 = (uVar14 ^ uVar15) & -(ulong)local_24a ^ uVar15;
          if (local_168 + 0x12 == puVar6) break;
          uVar14 = puVar9[0x13];
          uVar15 = *puVar6;
          puVar9 = puVar6;
        }
        local_90 = uVar12;
        local_88 = 0x3ffffffffffffff0 - local_168[10];
        local_80 = 0x3ffffffffffffff0 - local_168[0xb];
        local_78 = 0x3ffffffffffffff0 - local_168[0xc];
        local_70 = 0x3ffffffffffffff0 - local_168[0xd];
        local_68 = 0x3ffffffffffffff0 - local_168[0xe];
        local_60 = 0x3ffffffffffffff0 - local_168[0xf];
        local_58 = 0x3ffffffffffffff0 - local_168[0x10];
        local_50 = 0x3ffffffffffffff0 - local_168[0x11];
        if (bVar3) {
          local_248[0] = local_168[0];
          local_248[1] = local_168[1];
          local_248[2] = local_168[2];
          local_248[3] = local_168[3];
          local_228 = local_168[4];
          uStack_220 = local_168[5];
          local_218 = local_168[6];
          uStack_210 = local_168[7];
          local_208 = local_168[8];
          uStack_200 = local_168[9];
          local_178 = local_168[0x1a];
          local_1f8 = local_168[10];
          uStack_1f0 = local_168[0xb];
          local_1e8 = local_168[0xc];
          uStack_1e0 = local_168[0xd];
          local_1d8 = local_168[0xe];
          uStack_1d0 = local_168[0xf];
          local_1c8 = local_168[0x10];
          uStack_1c0 = local_168[0x11];
          local_1b8 = local_168[0x12];
          uStack_1b0 = local_168[0x13];
          local_1a8 = local_168[0x14];
          uStack_1a0 = local_168[0x15];
          local_198 = local_168[0x16];
          uStack_190 = local_168[0x17];
          local_188 = local_168[0x18];
          uStack_180 = local_168[0x19];
        }
        else {
          FUN_005076a0();
        }
        uVar13 = uVar13 + 1;
        pbVar17 = pbVar17 + 0x42;
        lVar18 = lVar18 + 0xe58;
        bVar3 = false;
      } while (uVar13 < param_5);
      goto joined_r0x00508b9c;
    }
    if (iVar1 != -1) goto code_r0x00508421;
    goto LAB_005085fc;
  }
  uVar13 = ((int)(uint)*(byte *)(param_6 + (iVar16 + 0x186 >> 3)) >> ((byte)(iVar16 + 0x186) & 7) &
           1U) << 3;
  if (iVar1 == 0x81) {
    uVar14 = (ulong)(int)uVar13;
  }
  else {
    uVar14 = (ulong)((int)(uint)*(byte *)(param_6 + (iVar16 >> 3)) >> ((byte)iVar16 & 7) & 1) |
             (long)(int)(((int)(uint)*(byte *)(param_6 + (iVar16 + 0x104 >> 3)) >>
                          ((byte)(iVar16 + 0x104) & 7) & 1U) << 2 | uVar13 |
                        ((int)(uint)*(byte *)(param_6 + (iVar16 + 0x82 >> 3)) >>
                         ((byte)(iVar16 + 0x82) & 7) & 1U) * 2);
  }
  uVar15 = 0;
  puVar9 = local_168;
  for (lVar4 = 0x1b; uVar12 = 0, puVar6 = param_9, lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + (ulong)bVar19 * -2 + 1;
  }
  do {
    uVar11 = uVar14 ^ uVar15 | (uVar14 ^ uVar15) >> 2;
    puVar9 = local_168;
    puVar10 = puVar6;
    while( true ) {
      uVar2 = *puVar10;
      puVar8 = puVar9 + 1;
      puVar10 = puVar10 + 1;
      *puVar9 = uVar2 & (ulong)(((uint)uVar11 | (uint)(uVar11 >> 1)) & 1) - 1 | uVar12;
      if (&local_90 == puVar8) break;
      uVar12 = *puVar8;
      puVar9 = puVar8;
    }
    uVar15 = uVar15 + 1;
    puVar6 = puVar6 + 0x1b;
    uVar12 = local_168[0];
  } while (uVar15 != 0x10);
  if (bVar3) {
    local_248[0] = local_168[0];
    local_248[1] = local_168[1];
    local_248[2] = local_168[2];
    local_248[3] = local_168[3];
    local_228 = local_168[4];
    uStack_220 = local_168[5];
    local_218 = local_168[6];
    uStack_210 = local_168[7];
    local_208 = local_168[8];
    uStack_200 = local_168[9];
    local_1f8 = local_168[10];
    uStack_1f0 = local_168[0xb];
    local_178 = local_168[0x1a];
    local_1e8 = local_168[0xc];
    uStack_1e0 = local_168[0xd];
    local_1d8 = local_168[0xe];
    uStack_1d0 = local_168[0xf];
    local_1c8 = local_168[0x10];
    uStack_1c0 = local_168[0x11];
    local_1b8 = local_168[0x12];
    uStack_1b0 = local_168[0x13];
    local_1a8 = local_168[0x14];
    uStack_1a0 = local_168[0x15];
    local_198 = local_168[0x16];
    uStack_190 = local_168[0x17];
    local_188 = local_168[0x18];
    uStack_180 = local_168[0x19];
    if ((param_5 != 0) && (iVar16 * -0x33333333 + 0x19999999U < 0x33333333)) {
LAB_0050878b:
      bVar3 = false;
      goto LAB_0050878e;
    }
joined_r0x00508b9c:
    if (iVar1 != -1) goto LAB_00508561;
LAB_005085fc:
    *param_1 = local_248[0];
    param_1[1] = local_248[1];
    param_1[2] = local_248[2];
    param_1[3] = local_248[3];
    param_1[4] = local_228;
    param_1[5] = uStack_220;
    param_1[6] = local_218;
    param_1[7] = uStack_210;
    param_1[8] = local_208;
    *param_2 = uStack_200;
    param_2[1] = local_1f8;
    param_2[2] = uStack_1f0;
    param_2[3] = local_1e8;
    param_2[4] = uStack_1e0;
    param_2[5] = local_1d8;
    param_2[6] = uStack_1d0;
    param_2[7] = local_1c8;
    param_2[8] = uStack_1c0;
    *param_3 = local_1b8;
    param_3[1] = uStack_1b0;
    param_3[2] = local_1a8;
    param_3[3] = uStack_1a0;
    param_3[4] = local_198;
    param_3[5] = uStack_190;
    param_3[6] = local_188;
    param_3[7] = uStack_180;
    param_3[8] = local_178;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    return;
  }
  FUN_005076a0(local_248,&uStack_200,&local_1b8,local_248,&uStack_200,&local_1b8,1,local_168,
               local_168 + 9,local_168 + 0x12);
  if ((param_5 != 0) && (iVar16 * -0x33333333 + 0x19999999U < 0x33333333)) goto LAB_0050878b;
  if (iVar1 == -1) goto LAB_005085fc;
LAB_00508561:
  FUN_00506f50(local_248,&uStack_200,&local_1b8,local_248);
  bVar3 = false;
  iVar16 = iVar1;
  goto LAB_005082a6;
code_r0x00508421:
  iVar16 = iVar1;
  if (bVar3) goto LAB_005082a6;
  goto LAB_00508561;
}

