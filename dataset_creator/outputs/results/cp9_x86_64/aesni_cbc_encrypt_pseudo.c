
void aesni_cbc_encrypt(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,
                      undefined1 (*param_4) [16],undefined1 (*param_5) [16],int param_6)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  long extraout_RDX_02;
  ulong extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  undefined1 *puVar14;
  uint uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 local_20 [16];
  
  bVar16 = 0;
  if (param_3 == 0) {
    return;
  }
  uVar8 = *(uint *)param_4[0xf];
  uVar9 = (ulong)uVar8;
  if (param_6 != 0) {
    auVar18 = *param_5;
    uVar13 = param_3;
    if (param_3 < 0x10) goto code_r0x00495f95;
    uVar13 = param_3 - 0x10;
    pauVar12 = param_1;
    while( true ) {
      do {
        param_3 = uVar13;
        param_1 = pauVar12 + 1;
        auVar19 = param_4[1];
        pauVar10 = param_4 + 2;
        auVar17._0_4_ = auVar18._0_4_ ^ *(uint *)*pauVar12 ^ *(uint *)*param_4;
        auVar17._4_4_ = auVar18._4_4_ ^ *(uint *)(*pauVar12 + 4) ^ *(uint *)(*param_4 + 4);
        auVar17._8_4_ = auVar18._8_4_ ^ *(uint *)(*pauVar12 + 8) ^ *(uint *)(*param_4 + 8);
        auVar17._12_4_ = auVar18._12_4_ ^ *(uint *)(*pauVar12 + 0xc) ^ *(uint *)(*param_4 + 0xc);
        uVar13 = uVar9;
        do {
          auVar17 = aesenc(auVar17,auVar19);
          uVar8 = (int)uVar13 - 1;
          uVar13 = (ulong)uVar8;
          auVar19 = *pauVar10;
          pauVar10 = pauVar10 + 1;
        } while (uVar8 != 0);
        auVar18 = aesenclast(auVar17,auVar19);
        *param_2 = auVar18;
        param_2 = param_2 + 1;
        uVar13 = param_3 - 0x10;
        pauVar12 = param_1;
      } while (0xf < param_3);
      uVar13 = param_3;
      if (param_3 == 0) break;
code_r0x00495f95:
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*param_2)[0] = (*param_1)[0];
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      for (lVar11 = 0x10 - uVar13; lVar11 != 0; lVar11 = lVar11 + -1) {
        (*param_2)[0] = 0;
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      param_2 = param_2 + -1;
      uVar13 = 0;
      pauVar12 = param_2;
    }
    *param_5 = auVar18;
    return;
  }
  if (param_3 == 0x10) {
    uVar8 = *(uint *)(*param_1 + 4);
    uVar2 = *(uint *)(*param_1 + 8);
    uVar3 = *(uint *)(*param_1 + 0xc);
    uVar4 = *(uint *)*param_5;
    uVar5 = *(uint *)(*param_5 + 4);
    uVar6 = *(uint *)(*param_5 + 8);
    uVar7 = *(uint *)(*param_5 + 0xc);
    auVar18 = param_4[1];
    pauVar12 = param_4 + 2;
    auVar19._0_4_ = *(uint *)*param_1 ^ *(uint *)*param_4;
    auVar19._4_4_ = uVar8 ^ *(uint *)(*param_4 + 4);
    auVar19._8_4_ = uVar2 ^ *(uint *)(*param_4 + 8);
    auVar19._12_4_ = uVar3 ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar19 = aesdec(auVar19,auVar18);
      uVar15 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar15;
      auVar18 = *pauVar12;
      pauVar12 = pauVar12 + 1;
    } while (uVar15 != 0);
    auVar18 = aesdeclast(auVar19,auVar18);
    *(uint *)*param_5 = *(uint *)*param_1;
    *(uint *)(*param_5 + 4) = uVar8;
    *(uint *)(*param_5 + 8) = uVar2;
    *(uint *)(*param_5 + 0xc) = uVar3;
    *(uint *)*param_2 = auVar18._0_4_ ^ uVar4;
    *(uint *)(*param_2 + 4) = auVar18._4_4_ ^ uVar5;
    *(uint *)(*param_2 + 8) = auVar18._8_4_ ^ uVar6;
    *(uint *)(*param_2 + 0xc) = auVar18._12_4_ ^ uVar7;
    return;
  }
  auVar18 = *param_5;
  if (0x50 < param_3) {
    auVar19 = *param_4;
    auVar17 = *param_1;
    auVar22 = param_1[1];
    auVar26 = param_1[2];
    auVar28 = param_1[3];
    auVar30 = param_1[4];
    auVar31 = param_1[5];
    if (param_3 < 0x71) {
LAB_00496486:
      if (param_3 < 0x61) {
        auVar19 = auVar31;
        auVar21 = auVar17;
        auVar24 = auVar22;
        auVar20 = auVar26;
        auVar23 = auVar28;
        auVar25 = auVar30;
        _aesni_decrypt6();
        *param_2 = auVar17 ^ auVar18;
        param_2[1] = auVar22 ^ auVar21;
        param_2[2] = auVar26 ^ auVar24;
        param_2[3] = auVar28 ^ auVar20;
        local_20 = auVar31 ^ auVar25;
        param_2[4] = auVar30 ^ auVar23;
        param_3 = extraout_RDX;
        pauVar12 = param_2 + 5;
        auVar18 = auVar19;
      }
      else {
        auVar19 = param_1[6];
        auVar24 = auVar17;
        auVar20 = auVar22;
        auVar23 = auVar26;
        auVar25 = auVar28;
        auVar27 = auVar30;
        _aesni_decrypt8();
        local_20 = param_1[5];
        auVar21 = param_1[6];
        *param_2 = auVar17 ^ auVar18;
        param_2[1] = auVar22 ^ auVar24;
        param_2[2] = auVar26 ^ auVar20;
        param_2[3] = auVar28 ^ auVar23;
        param_2[4] = auVar30 ^ auVar25;
        local_20 = auVar19 ^ local_20;
        param_2[5] = auVar31 ^ auVar27;
        param_3 = extraout_RDX_00;
        pauVar12 = param_2 + 6;
        auVar18 = auVar21;
      }
      goto LAB_004967fe;
    }
    uVar13 = uVar9;
    auVar21 = auVar18;
    if ((DAT_0093e59c & 0x4400000) == 0x400000) {
      while( true ) {
        param_1 = param_1 + 6;
        auVar18 = auVar31;
        auVar19 = auVar17;
        auVar24 = auVar22;
        auVar20 = auVar26;
        auVar23 = auVar28;
        auVar25 = auVar30;
        _aesni_decrypt6();
        *param_2 = auVar17 ^ auVar21;
        param_2[1] = auVar22 ^ auVar19;
        param_2[2] = auVar26 ^ auVar24;
        param_2[3] = auVar28 ^ auVar20;
        local_20 = auVar31 ^ auVar25;
        uVar9 = uVar13 & 0xffffffff;
        param_2[4] = auVar30 ^ auVar23;
        pauVar12 = param_2 + 5;
        if (extraout_RDX_01 < 0x61) break;
        *pauVar12 = local_20;
        param_2 = param_2 + 6;
        auVar17 = *param_1;
        auVar22 = param_1[1];
        auVar26 = param_1[2];
        auVar28 = param_1[3];
        auVar30 = param_1[4];
        auVar31 = param_1[5];
        auVar21 = auVar18;
      }
      param_3 = extraout_RDX_01 - 0x10;
      if (param_3 == 0 || SCARRY8(extraout_RDX_01 - 0x60,0x50) != (long)param_3 < 0)
      goto LAB_004967fe;
      *pauVar12 = local_20;
      param_2 = param_2 + 6;
    }
    else {
      param_3 = param_3 - 0x70;
      while( true ) {
        auVar21 = param_4[1];
        auVar20 = aesdec(auVar17 ^ auVar19,auVar21);
        auVar24 = param_4[2];
        auVar23 = aesdec(auVar22 ^ auVar19,auVar21);
        auVar25 = aesdec(auVar26 ^ auVar19,auVar21);
        auVar27 = aesdec(auVar28 ^ auVar19,auVar21);
        auVar29 = aesdec(auVar30 ^ auVar19,auVar21);
        auVar31 = aesdec(auVar31 ^ auVar19,auVar21);
        auVar32 = aesdec(param_1[6] ^ auVar19,auVar21);
        auVar33 = aesdec(param_1[7] ^ auVar19,auVar21);
        pauVar12 = (undefined1 (*) [16])(*param_1 + ((ulong)(param_3 < 0x70) - 1 & 0x80));
        auVar19 = param_4[3];
        auVar21 = aesdec(auVar20,auVar24);
        auVar20 = aesdec(auVar23,auVar24);
        auVar23 = aesdec(auVar25,auVar24);
        auVar25 = aesdec(auVar27,auVar24);
        auVar27 = aesdec(auVar29,auVar24);
        auVar29 = aesdec(auVar31,auVar24);
        auVar32 = aesdec(auVar32,auVar24);
        auVar33 = aesdec(auVar33,auVar24);
        auVar31 = param_4[4];
        auVar21 = aesdec(auVar21,auVar19);
        auVar24 = aesdec(auVar20,auVar19);
        auVar20 = aesdec(auVar23,auVar19);
        auVar23 = aesdec(auVar25,auVar19);
        auVar25 = aesdec(auVar27,auVar19);
        auVar27 = aesdec(auVar29,auVar19);
        auVar29 = aesdec(auVar32,auVar19);
        auVar32 = aesdec(auVar33,auVar19);
        auVar19 = param_4[5];
        auVar21 = aesdec(auVar21,auVar31);
        auVar24 = aesdec(auVar24,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar23 = aesdec(auVar23,auVar31);
        auVar25 = aesdec(auVar25,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[6];
        auVar21 = aesdec(auVar21,auVar19);
        auVar24 = aesdec(auVar24,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar23 = aesdec(auVar23,auVar19);
        auVar25 = aesdec(auVar25,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[7];
        auVar21 = aesdec(auVar21,auVar31);
        auVar24 = aesdec(auVar24,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar23 = aesdec(auVar23,auVar31);
        auVar25 = aesdec(auVar25,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[8];
        auVar21 = aesdec(auVar21,auVar19);
        auVar24 = aesdec(auVar24,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar23 = aesdec(auVar23,auVar19);
        auVar25 = aesdec(auVar25,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[9];
        auVar21 = aesdec(auVar21,auVar31);
        auVar24 = aesdec(auVar24,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar23 = aesdec(auVar23,auVar31);
        auVar25 = aesdec(auVar25,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[10];
        if (10 < uVar8) {
          auVar21 = aesdec(auVar21,auVar19);
          auVar24 = aesdec(auVar24,auVar19);
          auVar20 = aesdec(auVar20,auVar19);
          auVar23 = aesdec(auVar23,auVar19);
          auVar25 = aesdec(auVar25,auVar19);
          auVar27 = aesdec(auVar27,auVar19);
          auVar29 = aesdec(auVar29,auVar19);
          auVar32 = aesdec(auVar32,auVar19);
          auVar19 = param_4[0xb];
          auVar21 = aesdec(auVar21,auVar31);
          auVar24 = aesdec(auVar24,auVar31);
          auVar20 = aesdec(auVar20,auVar31);
          auVar23 = aesdec(auVar23,auVar31);
          auVar25 = aesdec(auVar25,auVar31);
          auVar27 = aesdec(auVar27,auVar31);
          auVar29 = aesdec(auVar29,auVar31);
          auVar32 = aesdec(auVar32,auVar31);
          auVar31 = param_4[0xc];
          if (uVar8 != 0xb) {
            auVar21 = aesdec(auVar21,auVar19);
            auVar24 = aesdec(auVar24,auVar19);
            auVar20 = aesdec(auVar20,auVar19);
            auVar23 = aesdec(auVar23,auVar19);
            auVar25 = aesdec(auVar25,auVar19);
            auVar27 = aesdec(auVar27,auVar19);
            auVar29 = aesdec(auVar29,auVar19);
            auVar32 = aesdec(auVar32,auVar19);
            auVar19 = param_4[0xd];
            auVar21 = aesdec(auVar21,auVar31);
            auVar24 = aesdec(auVar24,auVar31);
            auVar20 = aesdec(auVar20,auVar31);
            auVar23 = aesdec(auVar23,auVar31);
            auVar25 = aesdec(auVar25,auVar31);
            auVar27 = aesdec(auVar27,auVar31);
            auVar29 = aesdec(auVar29,auVar31);
            auVar32 = aesdec(auVar32,auVar31);
            auVar31 = param_4[0xe];
          }
        }
        auVar21 = aesdec(auVar21,auVar19);
        auVar24 = aesdec(auVar24,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar23 = aesdec(auVar23,auVar19);
        auVar25 = aesdec(auVar25,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar19 = aesdec(auVar32,auVar19);
        pauVar10 = param_1 + 5;
        auVar21 = aesdeclast(auVar21,auVar18 ^ auVar31);
        pauVar1 = param_1 + 6;
        auVar24 = aesdeclast(auVar24,auVar17 ^ auVar31);
        auVar18 = param_1[7];
        auVar20 = aesdeclast(auVar20,auVar22 ^ auVar31);
        param_1 = param_1 + 8;
        auVar17 = *pauVar12;
        auVar23 = aesdeclast(auVar23,auVar26 ^ auVar31);
        auVar25 = aesdeclast(auVar25,auVar28 ^ auVar31);
        auVar22 = pauVar12[1];
        auVar26 = pauVar12[2];
        auVar27 = aesdeclast(auVar27,auVar30 ^ auVar31);
        auVar29 = aesdeclast(auVar29,*pauVar10 ^ auVar31);
        auVar28 = pauVar12[3];
        auVar30 = pauVar12[4];
        local_20 = aesdeclast(auVar19,*pauVar1 ^ auVar31);
        auVar31 = pauVar12[5];
        auVar19 = *param_4;
        *param_2 = auVar21;
        param_2[1] = auVar24;
        param_2[2] = auVar20;
        param_2[3] = auVar23;
        param_2[4] = auVar25;
        param_2[5] = auVar27;
        param_2[6] = auVar29;
        pauVar12 = param_2 + 7;
        uVar13 = param_3 - 0x80;
        if (param_3 < 0x80 || uVar13 == 0) break;
        *pauVar12 = local_20;
        param_2 = param_2 + 8;
        param_3 = uVar13;
      }
      param_3 = param_3 - 0x10;
      if (param_3 == 0 || SCARRY8(uVar13,0x70) != (long)param_3 < 0) goto LAB_004967fe;
      *pauVar12 = local_20;
      param_2 = param_2 + 8;
      if (0x50 < param_3) goto LAB_00496486;
    }
  }
  auVar19 = *param_1;
  uVar13 = param_3 - 0x10;
  if (param_3 < 0x10 || uVar13 == 0) {
    auVar17 = param_4[1];
    pauVar12 = param_4 + 2;
    auVar22._0_4_ = auVar19._0_4_ ^ *(uint *)*param_4;
    auVar22._4_4_ = auVar19._4_4_ ^ *(uint *)(*param_4 + 4);
    auVar22._8_4_ = auVar19._8_4_ ^ *(uint *)(*param_4 + 8);
    auVar22._12_4_ = auVar19._12_4_ ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar22 = aesdec(auVar22,auVar17);
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
      auVar17 = *pauVar12;
      pauVar12 = pauVar12 + 1;
    } while (uVar8 != 0);
    auVar17 = aesdeclast(auVar22,auVar17);
    local_20._0_4_ = auVar17._0_4_ ^ auVar18._0_4_;
    local_20._4_4_ = auVar17._4_4_ ^ auVar18._4_4_;
    local_20._8_4_ = auVar17._8_4_ ^ auVar18._8_4_;
    local_20._12_4_ = auVar17._12_4_ ^ auVar18._12_4_;
    param_3 = uVar13;
    pauVar12 = param_2;
    auVar18 = auVar19;
  }
  else {
    auVar17 = param_1[1];
    if (uVar13 < 0x10 || param_3 == 0x20) {
      auVar22 = auVar19;
      auVar26 = auVar17;
      _aesni_decrypt2();
      local_20 = auVar17 ^ auVar22;
      *param_2 = auVar19 ^ auVar18;
      param_3 = extraout_RDX_03;
      pauVar12 = param_2 + 1;
      auVar18 = auVar26;
    }
    else {
      auVar22 = param_1[2];
      if (param_3 - 0x20 < 0x10 || param_3 == 0x30) {
        auVar26 = auVar19;
        auVar28 = auVar17;
        auVar30 = auVar22;
        _aesni_decrypt3();
        *param_2 = auVar19 ^ auVar18;
        local_20 = auVar22 ^ auVar28;
        param_2[1] = auVar17 ^ auVar26;
        param_3 = extraout_RDX_04;
        pauVar12 = param_2 + 2;
        auVar18 = auVar30;
      }
      else {
        auVar26 = param_1[3];
        if (param_3 - 0x30 < 0x10 || param_3 == 0x40) {
          auVar28 = auVar19;
          auVar30 = auVar17;
          auVar31 = auVar22;
          auVar21 = auVar26;
          _aesni_decrypt4();
          *param_2 = auVar19 ^ auVar18;
          param_2[1] = auVar17 ^ auVar28;
          local_20 = auVar26 ^ auVar31;
          param_2[2] = auVar22 ^ auVar30;
          param_3 = extraout_RDX_05;
          pauVar12 = param_2 + 3;
          auVar18 = auVar21;
        }
        else {
          auVar28 = param_1[4];
          auVar30 = auVar19;
          auVar31 = auVar17;
          auVar21 = auVar22;
          auVar24 = auVar26;
          auVar20 = auVar28;
          _aesni_decrypt6();
          *param_2 = auVar19 ^ auVar18;
          param_2[1] = auVar17 ^ auVar30;
          param_2[2] = auVar22 ^ auVar31;
          local_20 = auVar28 ^ auVar24;
          param_2[3] = auVar26 ^ auVar21;
          param_3 = extraout_RDX_02 - 0x10;
          pauVar12 = param_2 + 4;
          auVar18 = auVar20;
        }
      }
    }
  }
LAB_004967fe:
  *param_5 = auVar18;
  if ((param_3 & 0xf) == 0) {
    *pauVar12 = local_20;
  }
  else {
    puVar14 = local_20;
    for (lVar11 = 0x10 - (param_3 & 0xf); lVar11 != 0; lVar11 = lVar11 + -1) {
      (*pauVar12)[0] = *puVar14;
      puVar14 = puVar14 + (ulong)bVar16 * -2 + 1;
      pauVar12 = (undefined1 (*) [16])((long)pauVar12 + (ulong)bVar16 * -2 + 1);
    }
  }
  return;
}

