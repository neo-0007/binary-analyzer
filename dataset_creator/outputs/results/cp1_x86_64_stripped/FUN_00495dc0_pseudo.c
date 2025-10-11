
void FUN_00495dc0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,
                 undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong uVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  ulong uVar11;
  
  if (param_3 == 1) {
    uVar4 = *(uint *)(*param_1 + 4);
    uVar9 = *(uint *)(*param_1 + 8);
    uVar8 = *(uint *)(*param_1 + 0xc);
    iVar7 = *(int *)param_4[0xf];
    auVar15 = param_4[1];
    pauVar5 = param_4 + 2;
    auVar14._0_4_ = *(uint *)*param_5 ^ *(uint *)*param_4;
    auVar14._4_4_ = *(uint *)(*param_5 + 4) ^ *(uint *)(*param_4 + 4);
    auVar14._8_4_ = *(uint *)(*param_5 + 8) ^ *(uint *)(*param_4 + 8);
    auVar14._12_4_ = *(uint *)(*param_5 + 0xc) ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar14 = aesenc(auVar14,auVar15);
      iVar7 = iVar7 + -1;
      auVar15 = *pauVar5;
      pauVar5 = pauVar5 + 1;
    } while (iVar7 != 0);
    auVar15 = aesenclast(auVar14,auVar15);
    *(uint *)*param_2 = auVar15._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar15._4_4_ ^ uVar4;
    *(uint *)(*param_2 + 8) = auVar15._8_4_ ^ uVar9;
    *(uint *)(*param_2 + 0xc) = auVar15._12_4_ ^ uVar8;
    return;
  }
  uVar4 = *(uint *)(*param_5 + 0xc);
  local_90 = *param_5 ^ *param_4;
  uVar9 = *(uint *)(*param_4 + 0xc);
  uVar10 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar11 = (ulong)uVar10;
  uVar4 = uVar10 + 1;
  uVar8 = uVar10 + 2;
  local_80._0_8_ = local_90._0_8_;
  uVar18 = local_90._8_8_;
  local_80._8_8_ =
       uVar18 & 0xffffffff |
       (ulong)((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000)
              ^ uVar9) << 0x20;
  uVar4 = uVar10 + 3;
  local_70._8_8_ =
       uVar18 & 0xffffffff |
       (ulong)((uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000)
              ^ uVar9) << 0x20;
  local_70._0_8_ = local_80._0_8_;
  uVar12 = uVar10 + 4;
  local_60._8_8_ =
       uVar18 & 0xffffffff |
       (ulong)((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000)
              ^ uVar9) << 0x20;
  local_60._0_8_ = local_80._0_8_;
  uVar8 = uVar10 + 5;
  local_50._0_12_ = local_90._0_12_;
  local_50._12_4_ =
       (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 * 0x1000000) ^
       uVar9;
  uVar12 = uVar10 + 6;
  uVar4 = *(uint *)param_4[0xf];
  local_40._12_4_ =
       (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^ uVar9
  ;
  local_40._0_12_ = local_50._0_12_;
  uVar10 = uVar10 + 7;
  local_30._12_4_ =
       (uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 * 0x1000000) ^
       uVar9;
  local_30._0_12_ = local_50._0_12_;
  local_20._12_4_ =
       (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 * 0x1000000) ^
       uVar9;
  local_20._0_12_ = local_50._0_12_;
  auVar15 = param_4[1];
  if (7 < param_3) {
    if ((DAT_0094b59c & 0x4400000) == 0x400000) {
      uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      puVar6 = param_4[2] + (uVar4 << 4);
      lVar13 = 0x30 - (ulong)(uVar4 << 4);
      do {
        iVar7 = (int)uVar11;
        uVar11 = (ulong)(iVar7 + 6U);
        auVar14 = *(undefined1 (*) [16])(puVar6 + lVar13 + -0x30);
        auVar16 = aesenc(local_90,auVar15);
        auVar17 = aesenc(local_80,auVar15);
        uVar1 = swap_bytes(iVar7 + 6U ^ uVar9);
        local_90._12_4_ = uVar1;
        auVar19 = aesenc(local_70,auVar15);
        uVar1 = swap_bytes(iVar7 + 7U ^ uVar9);
        local_80._12_4_ = uVar1;
        auVar20 = aesenc(local_60,auVar15);
        auVar21 = aesenc(local_50,auVar15);
        uVar1 = swap_bytes(iVar7 + 8U ^ uVar9);
        local_70._12_4_ = uVar1;
        auVar15 = aesenc(local_40,auVar15);
        auVar23 = aesenc(auVar16,auVar14);
        uVar1 = swap_bytes(iVar7 + 9U ^ uVar9);
        local_60._12_4_ = uVar1;
        auVar25 = aesenc(auVar17,auVar14);
        uVar1 = swap_bytes(iVar7 + 10U ^ uVar9);
        local_50._12_4_ = uVar1;
        auVar27 = aesenc(auVar19,auVar14);
        auVar24 = aesenc(auVar20,auVar14);
        uVar1 = swap_bytes(iVar7 + 0xbU ^ uVar9);
        local_40._12_4_ = uVar1;
        auVar26 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar15,auVar14);
        FUN_00495270();
        auVar14 = *param_1;
        auVar16 = param_1[1];
        auVar17 = param_1[2];
        auVar19 = param_1[3];
        auVar20 = param_1[4];
        auVar21 = param_1[5];
        param_1 = param_1 + 6;
        auVar15 = *(undefined1 (*) [16])(puVar6 + lVar13 + -0x40);
        *param_2 = auVar14 ^ auVar23;
        param_2[1] = auVar16 ^ auVar25;
        param_2[2] = auVar17 ^ auVar27;
        param_2[3] = auVar19 ^ auVar24;
        param_2[4] = auVar20 ^ auVar26;
        param_2[5] = auVar21 ^ auVar22;
        param_2 = param_2 + 6;
      } while (5 < extraout_RDX);
      if (extraout_RDX == 0) {
        return;
      }
      param_4 = (undefined1 (*) [16])(puVar6 + lVar13 + -0x50);
      uVar4 = (uint)-((int)lVar13 + -0x30) >> 4;
      param_3 = extraout_RDX;
    }
    else {
      uVar18 = param_3 - 8;
      pauVar5 = param_1;
      do {
        param_3 = uVar18;
        iVar7 = (int)uVar11;
        uVar8 = iVar7 + 8;
        uVar11 = (ulong)uVar8;
        auVar16 = aesenc(local_90,auVar15);
        auVar17 = aesenc(local_80,auVar15);
        auVar14 = param_4[2];
        auVar19 = aesenc(local_70,auVar15);
        auVar20 = aesenc(local_60,auVar15);
        local_90._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 9;
        auVar21 = aesenc(local_50,auVar15);
        auVar23 = aesenc(local_40,auVar15);
        auVar25 = aesenc(local_30,auVar15);
        auVar27 = aesenc(local_20,auVar15);
        auVar15 = param_4[3];
        auVar16 = aesenc(auVar16,auVar14);
        auVar17 = aesenc(auVar17,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar20 = aesenc(auVar20,auVar14);
        local_80._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 10;
        auVar21 = aesenc(auVar21,auVar14);
        auVar23 = aesenc(auVar23,auVar14);
        auVar25 = aesenc(auVar25,auVar14);
        auVar27 = aesenc(auVar27,auVar14);
        auVar14 = param_4[4];
        auVar16 = aesenc(auVar16,auVar15);
        auVar17 = aesenc(auVar17,auVar15);
        auVar19 = aesenc(auVar19,auVar15);
        auVar20 = aesenc(auVar20,auVar15);
        local_70._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 0xb;
        auVar21 = aesenc(auVar21,auVar15);
        auVar23 = aesenc(auVar23,auVar15);
        auVar25 = aesenc(auVar25,auVar15);
        auVar27 = aesenc(auVar27,auVar15);
        auVar15 = param_4[5];
        auVar16 = aesenc(auVar16,auVar14);
        auVar17 = aesenc(auVar17,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar20 = aesenc(auVar20,auVar14);
        local_60._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 0xc;
        auVar21 = aesenc(auVar21,auVar14);
        auVar23 = aesenc(auVar23,auVar14);
        auVar25 = aesenc(auVar25,auVar14);
        auVar27 = aesenc(auVar27,auVar14);
        auVar14 = param_4[6];
        auVar16 = aesenc(auVar16,auVar15);
        auVar17 = aesenc(auVar17,auVar15);
        auVar19 = aesenc(auVar19,auVar15);
        auVar20 = aesenc(auVar20,auVar15);
        local_50._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 0xd;
        auVar21 = aesenc(auVar21,auVar15);
        auVar23 = aesenc(auVar23,auVar15);
        auVar25 = aesenc(auVar25,auVar15);
        auVar27 = aesenc(auVar27,auVar15);
        auVar15 = param_4[7];
        auVar16 = aesenc(auVar16,auVar14);
        auVar17 = aesenc(auVar17,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar20 = aesenc(auVar20,auVar14);
        local_40._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 0xe;
        auVar21 = aesenc(auVar21,auVar14);
        auVar23 = aesenc(auVar23,auVar14);
        auVar25 = aesenc(auVar25,auVar14);
        auVar27 = aesenc(auVar27,auVar14);
        auVar14 = param_4[8];
        auVar16 = aesenc(auVar16,auVar15);
        auVar17 = aesenc(auVar17,auVar15);
        auVar19 = aesenc(auVar19,auVar15);
        auVar20 = aesenc(auVar20,auVar15);
        local_30._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        uVar8 = iVar7 + 0xf;
        auVar21 = aesenc(auVar21,auVar15);
        auVar23 = aesenc(auVar23,auVar15);
        auVar25 = aesenc(auVar25,auVar15);
        auVar27 = aesenc(auVar27,auVar15);
        auVar15 = param_4[9];
        auVar16 = aesenc(auVar16,auVar14);
        auVar17 = aesenc(auVar17,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar20 = aesenc(auVar20,auVar14);
        local_20._12_4_ =
             (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000) ^
             uVar9;
        auVar21 = aesenc(auVar21,auVar14);
        auVar23 = aesenc(auVar23,auVar14);
        auVar25 = aesenc(auVar25,auVar14);
        auVar27 = aesenc(auVar27,auVar14);
        auVar14 = param_4[10];
        if (10 < uVar4) {
          auVar16 = aesenc(auVar16,auVar15);
          auVar17 = aesenc(auVar17,auVar15);
          auVar19 = aesenc(auVar19,auVar15);
          auVar20 = aesenc(auVar20,auVar15);
          auVar21 = aesenc(auVar21,auVar15);
          auVar23 = aesenc(auVar23,auVar15);
          auVar25 = aesenc(auVar25,auVar15);
          auVar27 = aesenc(auVar27,auVar15);
          auVar15 = param_4[0xb];
          auVar16 = aesenc(auVar16,auVar14);
          auVar17 = aesenc(auVar17,auVar14);
          auVar19 = aesenc(auVar19,auVar14);
          auVar20 = aesenc(auVar20,auVar14);
          auVar21 = aesenc(auVar21,auVar14);
          auVar23 = aesenc(auVar23,auVar14);
          auVar25 = aesenc(auVar25,auVar14);
          auVar27 = aesenc(auVar27,auVar14);
          auVar14 = param_4[0xc];
          if (uVar4 != 0xb) {
            auVar16 = aesenc(auVar16,auVar15);
            auVar17 = aesenc(auVar17,auVar15);
            auVar19 = aesenc(auVar19,auVar15);
            auVar20 = aesenc(auVar20,auVar15);
            auVar21 = aesenc(auVar21,auVar15);
            auVar23 = aesenc(auVar23,auVar15);
            auVar25 = aesenc(auVar25,auVar15);
            auVar27 = aesenc(auVar27,auVar15);
            auVar15 = param_4[0xd];
            auVar16 = aesenc(auVar16,auVar14);
            auVar17 = aesenc(auVar17,auVar14);
            auVar19 = aesenc(auVar19,auVar14);
            auVar20 = aesenc(auVar20,auVar14);
            auVar21 = aesenc(auVar21,auVar14);
            auVar23 = aesenc(auVar23,auVar14);
            auVar25 = aesenc(auVar25,auVar14);
            auVar27 = aesenc(auVar27,auVar14);
            auVar14 = param_4[0xe];
          }
        }
        auVar16 = aesenc(auVar16,auVar15);
        auVar17 = aesenc(auVar17,auVar15);
        auVar19 = aesenc(auVar19,auVar15);
        auVar20 = aesenc(auVar20,auVar15);
        auVar21 = aesenc(auVar21,auVar15);
        auVar23 = aesenc(auVar23,auVar15);
        auVar25 = aesenc(auVar25,auVar15);
        auVar27 = aesenc(auVar27,auVar15);
        param_1 = pauVar5 + 8;
        auVar16 = aesenclast(auVar16,*pauVar5 ^ auVar14);
        auVar17 = aesenclast(auVar17,pauVar5[1] ^ auVar14);
        auVar19 = aesenclast(auVar19,pauVar5[2] ^ auVar14);
        auVar20 = aesenclast(auVar20,pauVar5[3] ^ auVar14);
        auVar21 = aesenclast(auVar21,pauVar5[4] ^ auVar14);
        auVar23 = aesenclast(auVar23,pauVar5[5] ^ auVar14);
        auVar25 = aesenclast(auVar25,pauVar5[6] ^ auVar14);
        auVar15 = param_4[1];
        auVar14 = aesenclast(auVar27,pauVar5[7] ^ auVar14);
        *param_2 = auVar16;
        param_2[1] = auVar17;
        param_2[2] = auVar19;
        param_2[3] = auVar20;
        param_2[4] = auVar21;
        param_2[5] = auVar23;
        param_2[6] = auVar25;
        param_2[7] = auVar14;
        param_2 = param_2 + 8;
        uVar18 = param_3 - 8;
        pauVar5 = param_1;
      } while (7 < param_3);
      if (param_3 == 0) {
        return;
      }
    }
  }
  param_4 = param_4 + 1;
  if (param_3 < 4) {
    do {
      local_90 = aesenc(local_90,auVar15);
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      local_80 = aesenc(local_80,auVar15);
      local_70 = aesenc(local_70,auVar15);
      auVar15 = *param_4;
    } while (uVar4 != 0);
    auVar14 = aesenclast(local_90,auVar15);
    auVar16 = aesenclast(local_80,auVar15);
    auVar15 = aesenclast(local_70,auVar15);
    uVar4 = *(uint *)(*param_1 + 4);
    uVar9 = *(uint *)(*param_1 + 8);
    uVar8 = *(uint *)(*param_1 + 0xc);
    *(uint *)*param_2 = auVar14._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar14._4_4_ ^ uVar4;
    *(uint *)(*param_2 + 8) = auVar14._8_4_ ^ uVar9;
    *(uint *)(*param_2 + 0xc) = auVar14._12_4_ ^ uVar8;
    if (1 < param_3) {
      uVar4 = *(uint *)(param_1[1] + 4);
      uVar9 = *(uint *)(param_1[1] + 8);
      uVar8 = *(uint *)(param_1[1] + 0xc);
      *(uint *)param_2[1] = auVar16._0_4_ ^ *(uint *)param_1[1];
      *(uint *)(param_2[1] + 4) = auVar16._4_4_ ^ uVar4;
      *(uint *)(param_2[1] + 8) = auVar16._8_4_ ^ uVar9;
      *(uint *)(param_2[1] + 0xc) = auVar16._12_4_ ^ uVar8;
      if (param_3 != 2) {
        uVar4 = *(uint *)(param_1[2] + 4);
        uVar9 = *(uint *)(param_1[2] + 8);
        uVar8 = *(uint *)(param_1[2] + 0xc);
        *(uint *)param_2[2] = auVar15._0_4_ ^ *(uint *)param_1[2];
        *(uint *)(param_2[2] + 4) = auVar15._4_4_ ^ uVar4;
        *(uint *)(param_2[2] + 8) = auVar15._8_4_ ^ uVar9;
        *(uint *)(param_2[2] + 0xc) = auVar15._12_4_ ^ uVar8;
      }
    }
  }
  else if (param_3 == 4) {
    do {
      local_90 = aesenc(local_90,auVar15);
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      local_80 = aesenc(local_80,auVar15);
      local_70 = aesenc(local_70,auVar15);
      local_60 = aesenc(local_60,auVar15);
      auVar15 = *param_4;
    } while (uVar4 != 0);
    auVar16 = aesenclast(local_90,auVar15);
    auVar17 = aesenclast(local_80,auVar15);
    uVar4 = *(uint *)(*param_1 + 4);
    uVar9 = *(uint *)(*param_1 + 8);
    uVar8 = *(uint *)(*param_1 + 0xc);
    uVar10 = *(uint *)param_1[1];
    uVar12 = *(uint *)(param_1[1] + 4);
    uVar2 = *(uint *)(param_1[1] + 8);
    uVar3 = *(uint *)(param_1[1] + 0xc);
    auVar19 = aesenclast(local_70,auVar15);
    auVar20 = aesenclast(local_60,auVar15);
    auVar15 = param_1[2];
    auVar14 = param_1[3];
    *(uint *)*param_2 = auVar16._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar16._4_4_ ^ uVar4;
    *(uint *)(*param_2 + 8) = auVar16._8_4_ ^ uVar9;
    *(uint *)(*param_2 + 0xc) = auVar16._12_4_ ^ uVar8;
    *(uint *)param_2[1] = auVar17._0_4_ ^ uVar10;
    *(uint *)(param_2[1] + 4) = auVar17._4_4_ ^ uVar12;
    *(uint *)(param_2[1] + 8) = auVar17._8_4_ ^ uVar2;
    *(uint *)(param_2[1] + 0xc) = auVar17._12_4_ ^ uVar3;
    param_2[2] = auVar19 ^ auVar15;
    param_2[3] = auVar20 ^ auVar14;
  }
  else {
    auVar20 = aesenc(local_90,auVar15);
    auVar21 = aesenc(local_80,auVar15);
    auVar23 = aesenc(local_70,auVar15);
    auVar14 = *param_1;
    auVar25 = aesenc(local_60,auVar15);
    auVar27 = aesenc(local_50,auVar15);
    auVar16 = param_1[1];
    auVar17 = param_1[2];
    auVar24 = aesenc(local_40,auVar15);
    auVar26 = aesenc(local_30,auVar15);
    FUN_0049545a();
    auVar15 = param_1[3];
    auVar19 = param_1[4];
    *param_2 = auVar20 ^ auVar14;
    param_2[1] = auVar21 ^ auVar16;
    param_2[2] = auVar23 ^ auVar17;
    param_2[3] = auVar25 ^ auVar15;
    param_2[4] = auVar27 ^ auVar19;
    if (5 < extraout_RDX_00) {
      uVar4 = *(uint *)(param_1[5] + 4);
      uVar9 = *(uint *)(param_1[5] + 8);
      uVar8 = *(uint *)(param_1[5] + 0xc);
      *(uint *)param_2[5] = auVar24._0_4_ ^ *(uint *)param_1[5];
      *(uint *)(param_2[5] + 4) = auVar24._4_4_ ^ uVar4;
      *(uint *)(param_2[5] + 8) = auVar24._8_4_ ^ uVar9;
      *(uint *)(param_2[5] + 0xc) = auVar24._12_4_ ^ uVar8;
      if (extraout_RDX_00 != 6) {
        uVar4 = *(uint *)(param_1[6] + 4);
        uVar9 = *(uint *)(param_1[6] + 8);
        uVar8 = *(uint *)(param_1[6] + 0xc);
        *(uint *)param_2[6] = auVar26._0_4_ ^ *(uint *)param_1[6];
        *(uint *)(param_2[6] + 4) = auVar26._4_4_ ^ uVar4;
        *(uint *)(param_2[6] + 8) = auVar26._8_4_ ^ uVar9;
        *(uint *)(param_2[6] + 0xc) = auVar26._12_4_ ^ uVar8;
      }
    }
  }
  return;
}

