
void aesni_multi_cbc_decrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar27 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auStack_2c0 [16];
  undefined1 auStack_2a0 [16];
  undefined1 auStack_290 [16];
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_80 [16];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((1 < param_3) && ((DAT_0093e59c & 0x10000000) != 0)) {
    auVar23 = *param_2;
    auStack_2a0._0_4_ = *(undefined4 *)(param_1 + 2);
    pauVar7 = (undefined1 (*) [16])*param_1;
    iVar2 = auStack_2a0._0_4_;
    if ((int)auStack_2a0._0_4_ < 1) {
      pauVar7 = &auStack_2c0;
      iVar2 = 0;
    }
    lVar3 = param_1[1] - (long)pauVar7;
    auStack_2a0._4_4_ = *(undefined4 *)(param_1 + 7);
    if (iVar2 < (int)auStack_2a0._4_4_) {
      iVar2 = auStack_2a0._4_4_;
    }
    pauVar6 = (undefined1 (*) [16])param_1[5];
    if ((int)auStack_2a0._4_4_ < 1) {
      pauVar6 = &auStack_2c0;
    }
    lStack_278 = param_1[6] - (long)pauVar6;
    auStack_2a0._8_4_ = *(undefined4 *)(param_1 + 0xc);
    if (iVar2 < (int)auStack_2a0._8_4_) {
      iVar2 = auStack_2a0._8_4_;
    }
    pauVar12 = (undefined1 (*) [16])param_1[10];
    if ((int)auStack_2a0._8_4_ < 1) {
      pauVar12 = &auStack_2c0;
    }
    lStack_270 = param_1[0xb] - (long)pauVar12;
    auStack_2a0._12_4_ = *(undefined4 *)(param_1 + 0x11);
    if (iVar2 < (int)auStack_2a0._12_4_) {
      iVar2 = auStack_2a0._12_4_;
    }
    pauVar9 = (undefined1 (*) [16])param_1[0xf];
    if ((int)auStack_2a0._12_4_ < 1) {
      pauVar9 = &auStack_2c0;
    }
    lStack_268 = param_1[0x10] - (long)pauVar9;
    auStack_290._0_4_ = *(undefined4 *)(param_1 + 0x16);
    if (iVar2 < (int)auStack_290._0_4_) {
      iVar2 = auStack_290._0_4_;
    }
    pauVar16 = (undefined1 (*) [16])param_1[0x14];
    if ((int)auStack_290._0_4_ < 1) {
      pauVar16 = &auStack_2c0;
    }
    lStack_260 = param_1[0x15] - (long)pauVar16;
    auStack_290._4_4_ = *(undefined4 *)(param_1 + 0x1b);
    if (iVar2 < (int)auStack_290._4_4_) {
      iVar2 = auStack_290._4_4_;
    }
    pauVar11 = (undefined1 (*) [16])param_1[0x19];
    if ((int)auStack_290._4_4_ < 1) {
      pauVar11 = &auStack_2c0;
    }
    lStack_258 = param_1[0x1a] - (long)pauVar11;
    auStack_290._8_4_ = *(undefined4 *)(param_1 + 0x20);
    if (iVar2 < (int)auStack_290._8_4_) {
      iVar2 = auStack_290._8_4_;
    }
    pauVar19 = (undefined1 (*) [16])param_1[0x1e];
    if ((int)auStack_290._8_4_ < 1) {
      pauVar19 = &auStack_2c0;
    }
    lStack_250 = param_1[0x1f] - (long)pauVar19;
    auStack_290._12_4_ = *(undefined4 *)(param_1 + 0x25);
    if (iVar2 < (int)auStack_290._12_4_) {
      iVar2 = auStack_290._12_4_;
    }
    pauVar14 = (undefined1 (*) [16])param_1[0x23];
    if ((int)auStack_290._12_4_ < 1) {
      pauVar14 = &auStack_2c0;
    }
    lStack_248 = param_1[0x24] - (long)pauVar14;
    if (iVar2 != 0) {
      auVar25 = param_2[1];
      auVar22 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      pauVar5 = &auStack_180;
      auStack_180 = *pauVar7;
      auVar33 = *pauVar7 ^ auVar23;
      auStack_170 = *pauVar6;
      auVar29 = *pauVar6 ^ auVar23;
      auStack_160 = *pauVar12;
      auVar30 = *pauVar12 ^ auVar23;
      auStack_150 = *pauVar9;
      auVar34 = *pauVar9 ^ auVar23;
      auStack_140 = *pauVar16;
      auVar27 = *pauVar16 ^ auVar23;
      auStack_130 = *pauVar11;
      auVar28 = *pauVar11 ^ auVar23;
      auStack_120 = *pauVar19;
      auVar32 = *pauVar19 ^ auVar23;
      auStack_110 = *pauVar14;
      auVar23 = *pauVar14 ^ auVar23;
      do {
        pauVar5 = (undefined1 (*) [16])((ulong)pauVar5 ^ 0x80);
        auVar24 = aesdec(auVar33,auVar25);
        auVar29 = aesdec(auVar29,auVar25);
        auVar30 = aesdec(auVar30,auVar25);
        auVar34 = aesdec(auVar34,auVar25);
        pauVar8 = pauVar7;
        if ((int)auStack_2a0._0_4_ < 2) {
          pauVar8 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar25);
        puVar4 = *pauVar7 + lVar3;
        if ((int)auStack_2a0._0_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar38 = aesdec(auVar28,auVar25);
        lVar3 = (long)puVar4 - (long)pauVar8;
        auVar41 = aesdec(auVar32,auVar25);
        auVar33 = pauVar8[1];
        auVar44 = aesdec(auVar23,auVar25);
        auVar23 = param_2[3];
        auVar25 = aesdec(auVar24,auVar22);
        auVar28 = aesdec(auVar29,auVar22);
        auVar32 = aesdec(auVar30,auVar22);
        auVar30 = aesdec(auVar34,auVar22);
        pauVar10 = pauVar6;
        if ((int)auStack_2a0._4_4_ < 2) {
          pauVar10 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar6 + lStack_278;
        if ((int)auStack_2a0._4_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar24 = aesdec(auVar38,auVar22);
        lStack_278 = (long)puVar4 - (long)pauVar10;
        auVar38 = aesdec(auVar41,auVar22);
        auVar29 = pauVar10[1];
        auVar41 = aesdec(auVar44,auVar22);
        auVar22 = param_2[4];
        auVar25 = aesdec(auVar25,auVar23);
        auVar28 = aesdec(auVar28,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar34 = aesdec(auVar30,auVar23);
        pauVar13 = pauVar12;
        if ((int)auStack_2a0._8_4_ < 2) {
          pauVar13 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar12 + lStack_270;
        if ((int)auStack_2a0._8_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar24,auVar23);
        lStack_270 = (long)puVar4 - (long)pauVar13;
        auVar38 = aesdec(auVar38,auVar23);
        auVar30 = pauVar13[1];
        auVar41 = aesdec(auVar41,auVar23);
        auVar23 = param_2[5];
        auVar25 = aesdec(auVar25,auVar22);
        auVar28 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar34,auVar22);
        pauVar15 = pauVar9;
        if ((int)auStack_2a0._12_4_ < 2) {
          pauVar15 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar9 + lStack_268;
        if ((int)auStack_2a0._12_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_268 = (long)puVar4 - (long)pauVar15;
        auVar38 = aesdec(auVar38,auVar22);
        auVar34 = pauVar15[1];
        auVar41 = aesdec(auVar41,auVar22);
        auVar22 = param_2[6];
        auVar25 = aesdec(auVar25,auVar23);
        auVar28 = aesdec(auVar28,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar17 = pauVar16;
        if ((int)auStack_290._0_4_ < 2) {
          pauVar17 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar16 + lStack_260;
        if ((int)auStack_290._0_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_260 = (long)puVar4 - (long)pauVar17;
        auVar42 = aesdec(auVar38,auVar23);
        auVar27 = pauVar17[1];
        auVar41 = aesdec(auVar41,auVar23);
        auVar23 = param_2[7];
        auVar25 = aesdec(auVar25,auVar22);
        auVar38 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar18 = pauVar11;
        if ((int)auStack_290._4_4_ < 2) {
          pauVar18 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar22);
        puVar4 = *pauVar11 + lStack_258;
        if ((int)auStack_290._4_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_258 = (long)puVar4 - (long)pauVar18;
        auVar42 = aesdec(auVar42,auVar22);
        auVar28 = pauVar18[1];
        auVar45 = aesdec(auVar41,auVar22);
        auVar22 = param_2[8];
        auVar25 = aesdec(auVar25,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar20 = pauVar19;
        if ((int)auStack_290._8_4_ < 2) {
          pauVar20 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar23);
        puVar4 = *pauVar19 + lStack_250;
        if ((int)auStack_290._8_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_250 = (long)puVar4 - (long)pauVar20;
        auVar42 = aesdec(auVar42,auVar23);
        auVar32 = pauVar20[1];
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[9];
        auVar25 = aesdec(auVar25,auVar22);
        auVar38 = aesdec(auVar38,auVar22);
        auVar41 = aesdec(auVar41,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar21 = pauVar14;
        if ((int)auStack_290._12_4_ < 2) {
          pauVar21 = &auStack_2c0;
        }
        auVar36 = aesdec(auVar36,auVar22);
        puVar4 = *pauVar14 + lStack_248;
        if ((int)auStack_290._12_4_ < 1) {
          puVar4 = auStack_2c0;
        }
        auVar39 = aesdec(auVar44,auVar22);
        lStack_248 = (long)puVar4 - (long)pauVar21;
        auVar42 = aesdec(auVar42,auVar22);
        auVar44 = pauVar21[1];
        auVar45 = aesdec(auVar45,auVar22);
        auVar22 = param_2[10];
        if (10 < uVar1) {
          auVar25 = aesdec(auVar25,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar24 = aesdec(auVar24,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xb];
          auVar25 = aesdec(auVar25,auVar22);
          auVar38 = aesdec(auVar38,auVar22);
          auVar41 = aesdec(auVar41,auVar22);
          auVar24 = aesdec(auVar24,auVar22);
          auVar36 = aesdec(auVar36,auVar22);
          auVar39 = aesdec(auVar39,auVar22);
          auVar42 = aesdec(auVar42,auVar22);
          auVar45 = aesdec(auVar45,auVar22);
          auVar22 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar25 = aesdec(auVar25,auVar23);
            auVar38 = aesdec(auVar38,auVar23);
            auVar41 = aesdec(auVar41,auVar23);
            auVar24 = aesdec(auVar24,auVar23);
            auVar36 = aesdec(auVar36,auVar23);
            auVar39 = aesdec(auVar39,auVar23);
            auVar42 = aesdec(auVar42,auVar23);
            auVar45 = aesdec(auVar45,auVar23);
            auVar23 = param_2[0xd];
            auVar25 = aesdec(auVar25,auVar22);
            auVar38 = aesdec(auVar38,auVar22);
            auVar41 = aesdec(auVar41,auVar22);
            auVar24 = aesdec(auVar24,auVar22);
            auVar36 = aesdec(auVar36,auVar22);
            auVar39 = aesdec(auVar39,auVar22);
            auVar42 = aesdec(auVar42,auVar22);
            auVar45 = aesdec(auVar45,auVar22);
            auVar22 = param_2[0xe];
          }
        }
        auVar26 = aesdec(auVar25,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = vpcmpgtd_avx(auStack_2a0,(undefined1  [16])0x0);
        auVar35 = aesdec(auVar24,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auStack_2a0 = vpaddd_avx(auVar25,auStack_2a0);
        auVar40 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar25 = param_2[1];
        auVar39 = aesdeclast(auVar26,auVar22);
        auVar26 = aesdeclast(auVar38,auVar22);
        auVar31 = aesdeclast(auVar41,auVar22);
        auVar24 = pauVar5[1];
        auVar23 = vpcmpgtd_avx(auStack_290,(undefined1  [16])0x0);
        auVar35 = aesdeclast(auVar35,auVar22);
        auVar38 = pauVar5[2];
        auVar37 = aesdeclast(auVar36,auVar22);
        auVar41 = pauVar5[3];
        auStack_290 = vpaddd_avx(auStack_290,auVar23);
        auVar23 = *param_2;
        auVar40 = aesdeclast(auVar40,auVar22);
        auVar36 = pauVar5[4];
        auVar43 = aesdeclast(auVar42,auVar22);
        auVar42 = pauVar5[5];
        auVar46 = aesdeclast(auVar45,auVar22);
        auVar45 = pauVar5[6];
        auVar22 = param_2[2];
        *(undefined1 (*) [16])((long)pauVar8 + lVar3) = auVar39 ^ *pauVar5;
        pauVar7 = pauVar8 + 1;
        auVar39 = pauVar5[7];
        *(undefined1 (*) [16])((long)pauVar10 + lStack_278) = auVar26 ^ auVar24;
        pauVar6 = pauVar10 + 1;
        *pauVar5 = auVar33;
        auVar33 = auVar33 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar13 + lStack_270) = auVar31 ^ auVar38;
        pauVar12 = pauVar13 + 1;
        pauVar5[1] = auVar29;
        auVar29 = auVar29 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar15 + lStack_268) = auVar35 ^ auVar41;
        pauVar9 = pauVar15 + 1;
        pauVar5[2] = auVar30;
        auVar30 = auVar30 ^ auVar23;
        *(undefined1 (*) [16])((long)pauVar17 + lStack_260) = auVar37 ^ auVar36;
        pauVar16 = pauVar17 + 1;
        pauVar5[3] = auVar34;
        auVar34 = auVar34 ^ auVar23;
        pauVar5[4] = auVar27;
        auVar27 = auVar23 ^ auVar27;
        *(undefined1 (*) [16])((long)pauVar18 + lStack_258) = auVar40 ^ auVar42;
        pauVar11 = pauVar18 + 1;
        pauVar5[5] = auVar28;
        auVar28 = auVar23 ^ auVar28;
        *(undefined1 (*) [16])((long)pauVar20 + lStack_250) = auVar43 ^ auVar45;
        pauVar19 = pauVar20 + 1;
        pauVar5[6] = auVar32;
        auVar32 = auVar23 ^ auVar32;
        *(undefined1 (*) [16])((long)pauVar21 + lStack_248) = auVar46 ^ auVar39;
        pauVar14 = pauVar21 + 1;
        pauVar5[7] = auVar44;
        auVar23 = auVar23 ^ auVar44;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return;
  }
  auVar23 = *param_2;
  param_1 = param_1 + 10;
  do {
    local_60 = *(int *)(param_1 + -8);
    pauVar7 = (undefined1 (*) [16])param_1[-9];
    iVar2 = 0;
    if (0 < local_60) {
      iVar2 = local_60;
    }
    in_ZMM6._0_16_ = *(undefined1 (*) [16])(param_1 + -7);
    pauVar6 = (undefined1 (*) [16])param_1[-10];
    if (local_60 < 1) {
      pauVar6 = &local_80;
    }
    iStack_5c = *(int *)(param_1 + -3);
    pauVar12 = (undefined1 (*) [16])param_1[-4];
    if (iVar2 < iStack_5c) {
      iVar2 = iStack_5c;
    }
    in_ZMM7._0_16_ = *(undefined1 (*) [16])(param_1 + -2);
    pauVar9 = (undefined1 (*) [16])param_1[-5];
    if (iStack_5c < 1) {
      pauVar9 = &local_80;
    }
    iStack_58 = *(int *)(param_1 + 2);
    pauVar16 = (undefined1 (*) [16])param_1[1];
    if (iVar2 < iStack_58) {
      iVar2 = iStack_58;
    }
    in_ZMM8._0_16_ = *(undefined1 (*) [16])(param_1 + 3);
    pauVar11 = (undefined1 (*) [16])*param_1;
    if (iStack_58 < 1) {
      pauVar11 = &local_80;
    }
    iStack_54 = *(int *)(param_1 + 7);
    pauVar19 = (undefined1 (*) [16])param_1[6];
    if (iVar2 < iStack_54) {
      iVar2 = iStack_54;
    }
    in_ZMM9._0_16_ = *(undefined1 (*) [16])(param_1 + 8);
    pauVar14 = (undefined1 (*) [16])param_1[5];
    if (iStack_54 < 1) {
      pauVar14 = &local_80;
    }
    if (iVar2 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *pauVar6 ^ auVar23;
    in_ZMM3._0_16_ = *pauVar9 ^ auVar23;
    in_ZMM4._0_16_ = *pauVar11 ^ auVar23;
    in_ZMM5._0_16_ = *pauVar14 ^ auVar23;
    lVar3 = 0;
    do {
      pauVar5 = (undefined1 (*) [16])(&stack0xffffffffffffff90 + -(lVar3 + 0x10));
      auVar23 = in_ZMM1._0_16_;
      auVar22 = aesdec(in_ZMM2._0_16_,auVar23);
      auVar27 = aesdec(in_ZMM3._0_16_,auVar23);
      auVar28 = aesdec(in_ZMM4._0_16_,auVar23);
      auVar32 = aesdec(in_ZMM5._0_16_,auVar23);
      auVar23 = param_2[3];
      auVar25 = in_ZMM0._0_16_;
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      if (local_60 < 2) {
        pauVar6 = pauVar5;
      }
      if (local_60 < 1) {
        pauVar7 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[4];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar28 = aesdec(auVar28,auVar23);
      if (iStack_5c < 2) {
        pauVar9 = pauVar5;
      }
      if (iStack_5c < 1) {
        pauVar12 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar23);
      auVar23 = param_2[5];
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      if (iStack_58 < 2) {
        pauVar11 = pauVar5;
      }
      if (iStack_58 < 1) {
        pauVar16 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[6];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar28 = aesdec(auVar28,auVar23);
      if (iStack_54 < 2) {
        pauVar14 = pauVar5;
      }
      if (iStack_54 < 1) {
        pauVar19 = pauVar5;
      }
      auVar33 = aesdec(auVar32,auVar23);
      auVar32 = param_2[7];
      auVar23 = aesdec(auVar22,auVar25);
      auVar22 = aesdec(auVar27,auVar25);
      auVar29 = aesdec(auVar28,auVar25);
      auVar33 = aesdec(auVar33,auVar25);
      auVar25 = param_2[8];
      auVar27 = aesdec(auVar23,auVar32);
      auVar23 = *param_2;
      auVar28 = aesdec(auVar22,auVar32);
      local_60 = local_60 - (uint)(0 < local_60);
      iStack_5c = iStack_5c - (uint)(0 < iStack_5c);
      iStack_58 = iStack_58 - (uint)(0 < iStack_58);
      iStack_54 = iStack_54 - (uint)(0 < iStack_54);
      auVar29 = aesdec(auVar29,auVar32);
      auVar33 = aesdec(auVar33,auVar32);
      auVar22 = param_2[9];
      auVar27 = aesdec(auVar27,auVar25);
      auVar28 = aesdec(auVar28,auVar25);
      auVar32 = aesdec(auVar29,auVar25);
      auVar29 = aesdec(auVar33,auVar25);
      auVar25 = param_2[10];
      if (10 < uVar1) {
        auVar27 = aesdec(auVar27,auVar22);
        auVar28 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar29 = aesdec(auVar29,auVar22);
        auVar22 = param_2[0xb];
        auVar27 = aesdec(auVar27,auVar25);
        auVar28 = aesdec(auVar28,auVar25);
        auVar32 = aesdec(auVar32,auVar25);
        auVar29 = aesdec(auVar29,auVar25);
        auVar25 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar27 = aesdec(auVar27,auVar22);
          auVar28 = aesdec(auVar28,auVar22);
          auVar32 = aesdec(auVar32,auVar22);
          auVar29 = aesdec(auVar29,auVar22);
          auVar22 = param_2[0xd];
          auVar27 = aesdec(auVar27,auVar25);
          auVar28 = aesdec(auVar28,auVar25);
          auVar32 = aesdec(auVar32,auVar25);
          auVar29 = aesdec(auVar29,auVar25);
          auVar25 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar27,auVar22);
      auVar28 = aesdec(auVar28,auVar22);
      auVar32 = aesdec(auVar32,auVar22);
      auVar29 = aesdec(auVar29,auVar22);
      in_ZMM1._0_16_ = param_2[1];
      in_ZMM0._0_16_ = param_2[2];
      auVar22 = aesdeclast(auVar27,in_ZMM6._0_16_ ^ auVar25);
      auVar27 = aesdeclast(auVar28,in_ZMM7._0_16_ ^ auVar25);
      in_ZMM6._0_16_ = *(undefined1 (*) [16])(*pauVar6 + lVar3);
      in_ZMM7._0_16_ = *(undefined1 (*) [16])(*pauVar9 + lVar3);
      auVar28 = aesdeclast(auVar32,in_ZMM8._0_16_ ^ auVar25);
      auVar32 = aesdeclast(auVar29,in_ZMM9._0_16_ ^ auVar25);
      in_ZMM8._0_16_ = *(undefined1 (*) [16])(*pauVar11 + lVar3);
      in_ZMM9._0_16_ = *(undefined1 (*) [16])(*pauVar14 + lVar3);
      *(undefined1 (*) [16])(*pauVar7 + lVar3) = auVar22;
      auVar25 = *(undefined1 (*) [16])(pauVar6[1] + lVar3);
      *(undefined1 (*) [16])(*pauVar12 + lVar3) = auVar27;
      auVar22 = *(undefined1 (*) [16])(pauVar9[1] + lVar3);
      in_ZMM2._0_16_ = auVar25 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar16 + lVar3) = auVar28;
      auVar25 = *(undefined1 (*) [16])(pauVar11[1] + lVar3);
      in_ZMM3._0_16_ = auVar22 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar19 + lVar3) = auVar32;
      in_ZMM4._0_16_ = auVar25 ^ auVar23;
      in_ZMM5._0_16_ = *(undefined1 (*) [16])(pauVar14[1] + lVar3) ^ auVar23;
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

