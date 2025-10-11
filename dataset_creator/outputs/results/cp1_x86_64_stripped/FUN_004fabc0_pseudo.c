
void FUN_004fabc0(ulong *param_1,ulong *param_2,undefined8 *param_3,long param_4,uint param_5,
                 long param_6,undefined8 param_7,long param_8,ulong *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  byte bVar14;
  long lVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  byte bVar26;
  ulong *local_2b0;
  long local_270;
  ulong local_210;
  byte local_19a;
  byte local_199;
  ulong local_198 [4];
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulong local_c8 [12];
  ulong local_68 [5];
  long local_40;
  
  bVar26 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar21 = 1;
  puVar24 = local_198;
  for (lVar15 = 0xc; uVar19 = (-(uint)(param_5 == 0) & 0xffffff3f) + 0xdc, lVar15 != 0;
      lVar15 = lVar15 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + 1;
  }
LAB_004fac6c:
  uVar1 = uVar19 - 1;
  if ((0x1b < (int)uVar19) || (param_6 == 0)) {
    if ((param_5 != 0) && (uVar19 * -0x33333333 + 0x19999999 < 0x33333333)) {
      local_210 = (ulong)(uVar19 >> 3);
      goto LAB_004fb01b;
    }
    if (-1 < (int)uVar1) goto code_r0x004fadc4;
    goto LAB_004fb47a;
  }
  uVar23 = 0;
  bVar7 = *(byte *)(param_6 + (ulong)(uVar19 + 0xc4 >> 3));
  bVar8 = *(byte *)(param_6 + (ulong)(uVar19 + 0x8c >> 3));
  bVar9 = *(byte *)(param_6 + (ulong)(uVar19 + 0x54 >> 3));
  bVar14 = (byte)(uVar19 + 0x1c) & 7;
  bVar10 = *(byte *)(param_6 + (ulong)(uVar19 + 0x1c >> 3));
  puVar24 = local_c8;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
  }
  puVar24 = param_9 + 0xc0;
  uVar12 = (ulong)(uint)(0 >> bVar14);
  do {
    uVar22 = ((ulong)((int)(uint)bVar10 >> bVar14 & 1) |
             (long)(int)(((int)(uint)bVar8 >> ((byte)(uVar19 + 0x8c) & 7) & 1U) << 2 |
                         ((int)(uint)bVar7 >> ((byte)(uVar19 + 0xc4) & 7) & 1U) << 3 |
                        ((int)(uint)bVar9 >> ((byte)(uVar19 + 0x54) & 7) & 1U) * 2)) ^ uVar23;
    uVar22 = uVar22 | uVar22 >> 2;
    puVar13 = local_c8;
    puVar16 = puVar24;
    while( true ) {
      uVar20 = *puVar16;
      puVar11 = puVar13 + 1;
      puVar16 = puVar16 + 1;
      *puVar13 = uVar20 & (ulong)(((uint)uVar22 | (uint)(uVar22 >> 1)) & 1) - 1 | uVar12;
      if (local_68 == puVar11) break;
      uVar12 = *puVar11;
      puVar13 = puVar11;
    }
    uVar23 = uVar23 + 1;
    puVar24 = puVar24 + 0xc;
    uVar12 = local_c8[0];
  } while (uVar23 != 0x10);
  if (iVar21 == 0) {
    FUN_004fa160(local_198,&local_178,&local_158,local_198,&local_178,&local_158,1,local_c8,
                 local_c8 + 4,local_c8 + 8);
  }
  else {
    local_198[0] = local_c8[0];
    local_198[1] = local_c8[1];
    local_198[2] = local_c8[2];
    local_198[3] = local_c8[3];
    local_178 = local_c8[4];
    uStack_170 = local_c8[5];
    local_168 = local_c8[6];
    uStack_160 = local_c8[7];
    local_158 = local_c8[8];
    uStack_150 = local_c8[9];
    local_148 = local_c8[10];
    uStack_140 = local_c8[0xb];
  }
  local_2b0 = local_c8 + 4;
  uVar23 = 0;
  bVar7 = *(byte *)(param_6 + (ulong)(uVar19 + 0xa8 >> 3));
  bVar8 = *(byte *)(param_6 + (ulong)(uVar19 + 0x70 >> 3));
  bVar9 = *(byte *)(param_6 + (ulong)(uVar19 + 0x38 >> 3));
  bVar14 = (byte)uVar19 & 7;
  local_210 = (ulong)(uVar19 >> 3);
  bVar10 = *(byte *)(param_6 + local_210);
  puVar24 = local_c8;
  for (lVar15 = 0xc; uVar12 = (ulong)(uint)(0 >> bVar14), puVar13 = param_9, lVar15 != 0;
      lVar15 = lVar15 + -1) {
    *puVar24 = 0;
    puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
  }
  do {
    uVar22 = ((ulong)((int)(uint)bVar10 >> bVar14 & 1) |
             (long)(int)(((int)(uint)bVar7 >> ((byte)(uVar19 + 0xa8) & 7) & 1U) << 3 |
                         ((int)(uint)bVar8 >> ((byte)(uVar19 + 0x70) & 7) & 1U) << 2 |
                        ((int)(uint)bVar9 >> ((byte)(uVar19 + 0x38) & 7) & 1U) * 2)) ^ uVar23;
    uVar22 = uVar22 | uVar22 >> 2;
    puVar24 = local_c8;
    puVar16 = puVar13;
    while( true ) {
      uVar20 = *puVar16;
      puVar11 = puVar24 + 1;
      puVar16 = puVar16 + 1;
      *puVar24 = uVar20 & (ulong)(((uint)uVar22 | (uint)(uVar22 >> 1)) & 1) - 1 | uVar12;
      if (local_68 == puVar11) break;
      uVar12 = *puVar11;
      puVar24 = puVar11;
    }
    uVar23 = uVar23 + 1;
    puVar13 = puVar13 + 0xc;
    uVar12 = local_c8[0];
  } while (uVar23 != 0x10);
  FUN_004fa160(local_198,&local_178,&local_158,local_198,&local_178,&local_158,1,local_c8,local_2b0,
               local_c8 + 8);
  if ((param_5 != 0) && (iVar21 = (int)uVar19 % 5, iVar21 == 0)) {
LAB_004fb01b:
    uVar2 = uVar19 + 4;
    local_270 = 0;
    uVar23 = (ulong)(uVar1 >> 3);
    uVar3 = uVar19 + 3;
    uVar4 = uVar19 + 2;
    uVar5 = uVar19 + 1;
    uVar6 = 0;
    pbVar25 = (byte *)(param_4 + uVar23);
    do {
      uVar17 = 0;
      if (uVar2 < 0xe0) {
        uVar17 = ((int)(uint)pbVar25[(uVar2 >> 3) - uVar23] >> ((byte)uVar2 & 7) & 1U) << 5;
      }
      if (uVar3 < 0xe0) {
        uVar17 = uVar17 | ((int)(uint)pbVar25[(uVar3 >> 3) - uVar23] >> ((byte)uVar3 & 7) & 1U) << 4
        ;
      }
      if (uVar4 < 0xe0) {
        uVar17 = uVar17 | ((int)(uint)pbVar25[(uVar4 >> 3) - uVar23] >> ((byte)uVar4 & 7) & 1U) << 3
        ;
      }
      if (uVar5 < 0xe0) {
        uVar17 = uVar17 | ((int)(uint)pbVar25[(uVar5 >> 3) - uVar23] >> ((byte)uVar5 & 7) & 1U) << 2
        ;
      }
      if (uVar19 < 0xe0) {
        uVar17 = uVar17 | ((int)(uint)pbVar25[local_210 - uVar23] >> ((byte)uVar19 & 7) & 1U) * 2;
      }
      if (uVar1 < 0xe0) {
        uVar17 = uVar17 | (int)(uint)*pbVar25 >> ((byte)uVar1 & 7) & 1U;
      }
      FUN_0050a120(&local_19a,&local_199,uVar17);
      puVar24 = local_c8;
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar24 = 0;
        puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
      }
      uVar22 = 0;
      puVar24 = (ulong *)(param_8 + local_270);
      uVar12 = 0;
      do {
        uVar20 = local_199 ^ uVar22 | (local_199 ^ uVar22) >> 4;
        uVar20 = uVar20 | uVar20 >> 2;
        puVar13 = local_c8;
        puVar16 = puVar24;
        while( true ) {
          uVar18 = *puVar16;
          puVar11 = puVar13 + 1;
          puVar16 = puVar16 + 1;
          *puVar13 = uVar18 & (ulong)(((uint)uVar20 | (uint)(uVar20 >> 1)) & 1) - 1 | uVar12;
          uVar18 = local_c8[4];
          if (local_68 == puVar11) break;
          uVar12 = *puVar11;
          puVar13 = puVar11;
        }
        uVar22 = uVar22 + 1;
        puVar24 = puVar24 + 0xc;
        uVar12 = local_c8[0];
      } while (uVar22 != 0x11);
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_138 = 0x100 - local_c8[4];
      local_130 = (ulong)(local_c8[4] < 0x101);
      local_128 = -0x1000000000100 - local_c8[5];
      local_120 = -(ulong)(0xfffeffffffffff00 < local_c8[5]);
      local_118 = -0x100 - local_c8[6];
      local_110 = -(ulong)(0xffffffffffffff00 < local_c8[6]);
      local_108 = -0x100 - local_c8[7];
      local_100 = -(ulong)(0xffffffffffffff00 < local_c8[7]);
      FUN_004f8d60(local_68,&local_138);
      puVar24 = local_c8;
      while( true ) {
        puVar24[4] = (puVar24[0xc] ^ uVar18) & -(ulong)local_19a ^ uVar18;
        if (local_c8 + 4 == puVar24 + 1) break;
        uVar18 = puVar24[5];
        puVar24 = puVar24 + 1;
      }
      if (iVar21 == 0) {
        FUN_004fa160();
      }
      else {
        local_198[0] = local_c8[0];
        local_198[1] = local_c8[1];
        local_198[2] = local_c8[2];
        local_198[3] = local_c8[3];
        local_178 = local_c8[4];
        uStack_170 = local_c8[5];
        local_168 = local_c8[6];
        uStack_160 = local_c8[7];
        local_158 = local_c8[8];
        uStack_150 = local_c8[9];
        local_148 = local_c8[10];
        uStack_140 = local_c8[0xb];
      }
      uVar6 = uVar6 + 1;
      pbVar25 = pbVar25 + 0x1c;
      local_270 = local_270 + 0x660;
      iVar21 = 0;
    } while (uVar6 < param_5);
    if (-1 < (int)uVar1) goto LAB_004fafd5;
LAB_004fb47a:
    *param_1 = local_198[0];
    param_1[1] = local_198[1];
    param_1[2] = local_198[2];
    param_1[3] = local_198[3];
    *param_2 = local_178;
    param_2[1] = uStack_170;
    param_2[2] = local_168;
    param_2[3] = uStack_160;
    *param_3 = local_158;
    param_3[1] = uStack_150;
    param_3[2] = local_148;
    param_3[3] = uStack_140;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    return;
  }
  if ((int)uVar1 < 0) goto LAB_004fb47a;
LAB_004fafd5:
  FUN_004f9a30(local_198,&local_178,&local_158,local_198,&local_178);
  iVar21 = 0;
  uVar19 = uVar1;
  goto LAB_004fac6c;
code_r0x004fadc4:
  uVar19 = uVar1;
  if (iVar21 != 0) goto LAB_004fac6c;
  goto LAB_004fafd5;
}

