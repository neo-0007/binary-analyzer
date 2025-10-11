
void aesni_multi_cbc_encrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
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
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar30 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  undefined1 auStack_100 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 local_80 [16];
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if ((1 < param_3) && ((DAT_0093e59c & 0x10000000) != 0)) {
    auVar29 = *param_2;
    auStack_e0._0_4_ = *(undefined4 *)(param_1 + 2);
    iVar40 = 0;
    if (0 < (int)auStack_e0._0_4_) {
      iVar40 = auStack_e0._0_4_;
    }
    pauVar13 = (undefined1 (*) [16])*param_1;
    if ((int)auStack_e0._0_4_ < 1) {
      pauVar13 = &auStack_100;
    }
    lVar10 = param_1[1] - (long)pauVar13;
    auStack_e0._4_4_ = *(undefined4 *)(param_1 + 7);
    if (iVar40 < (int)auStack_e0._4_4_) {
      iVar40 = auStack_e0._4_4_;
    }
    pauVar12 = (undefined1 (*) [16])param_1[5];
    if ((int)auStack_e0._4_4_ < 1) {
      pauVar12 = &auStack_100;
    }
    lStack_b8 = param_1[6] - (long)pauVar12;
    auStack_e0._8_4_ = *(undefined4 *)(param_1 + 0xc);
    if (iVar40 < (int)auStack_e0._8_4_) {
      iVar40 = auStack_e0._8_4_;
    }
    pauVar18 = (undefined1 (*) [16])param_1[10];
    if ((int)auStack_e0._8_4_ < 1) {
      pauVar18 = &auStack_100;
    }
    lStack_b0 = param_1[0xb] - (long)pauVar18;
    auStack_e0._12_4_ = *(undefined4 *)(param_1 + 0x11);
    if (iVar40 < (int)auStack_e0._12_4_) {
      iVar40 = auStack_e0._12_4_;
    }
    pauVar15 = (undefined1 (*) [16])param_1[0xf];
    if ((int)auStack_e0._12_4_ < 1) {
      pauVar15 = &auStack_100;
    }
    lStack_a8 = param_1[0x10] - (long)pauVar15;
    auStack_d0._0_4_ = *(undefined4 *)(param_1 + 0x16);
    if (iVar40 < (int)auStack_d0._0_4_) {
      iVar40 = auStack_d0._0_4_;
    }
    pauVar22 = (undefined1 (*) [16])param_1[0x14];
    if ((int)auStack_d0._0_4_ < 1) {
      pauVar22 = &auStack_100;
    }
    lStack_a0 = param_1[0x15] - (long)pauVar22;
    auStack_d0._4_4_ = *(undefined4 *)(param_1 + 0x1b);
    if (iVar40 < (int)auStack_d0._4_4_) {
      iVar40 = auStack_d0._4_4_;
    }
    pauVar17 = (undefined1 (*) [16])param_1[0x19];
    if ((int)auStack_d0._4_4_ < 1) {
      pauVar17 = &auStack_100;
    }
    lStack_98 = param_1[0x1a] - (long)pauVar17;
    auStack_d0._8_4_ = *(undefined4 *)(param_1 + 0x20);
    if (iVar40 < (int)auStack_d0._8_4_) {
      iVar40 = auStack_d0._8_4_;
    }
    pauVar25 = (undefined1 (*) [16])param_1[0x1e];
    if ((int)auStack_d0._8_4_ < 1) {
      pauVar25 = &auStack_100;
    }
    lStack_90 = param_1[0x1f] - (long)pauVar25;
    auStack_d0._12_4_ = *(undefined4 *)(param_1 + 0x25);
    if (iVar40 < (int)auStack_d0._12_4_) {
      iVar40 = auStack_d0._12_4_;
    }
    pauVar20 = (undefined1 (*) [16])param_1[0x23];
    if ((int)auStack_d0._12_4_ < 1) {
      pauVar20 = &auStack_100;
    }
    lStack_88 = param_1[0x24] - (long)pauVar20;
    if (iVar40 != 0) {
      auVar37 = param_2[1];
      auVar28 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      auVar31 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar13;
      auVar30 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar12;
      auVar34 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar29 ^ *pauVar18;
      auVar32 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar29 ^ *pauVar15;
      auVar35 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar29 ^ *pauVar22;
      auVar33 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar29 ^ *pauVar17;
      auVar36 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar29 ^ *pauVar25;
      auVar38 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar29 ^ *pauVar20;
      do {
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar14 = pauVar13;
        if ((int)auStack_e0._0_4_ < 2) {
          pauVar14 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar13 + lVar10;
        if ((int)auStack_e0._0_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lVar10 = (long)puVar11 - (long)pauVar14;
        auVar36 = aesenc(auVar36,auVar37);
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[3];
        local_80 = auVar29 ^ pauVar14[1];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar16 = pauVar12;
        if ((int)auStack_e0._4_4_ < 2) {
          pauVar16 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar12 + lStack_b8;
        if ((int)auStack_e0._4_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_b8 = (long)puVar11 - (long)pauVar16;
        auVar36 = aesenc(auVar36,auVar28);
        auVar2 = auVar29 ^ pauVar16[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[4];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar19 = pauVar18;
        if ((int)auStack_e0._8_4_ < 2) {
          pauVar19 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar18 + lStack_b0;
        if ((int)auStack_e0._8_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_b0 = (long)puVar11 - (long)pauVar19;
        auVar36 = aesenc(auVar36,auVar37);
        auVar3 = auVar29 ^ pauVar19[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[5];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar21 = pauVar15;
        if ((int)auStack_e0._12_4_ < 2) {
          pauVar21 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar15 + lStack_a8;
        if ((int)auStack_e0._12_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_a8 = (long)puVar11 - (long)pauVar21;
        auVar36 = aesenc(auVar36,auVar28);
        auVar4 = auVar29 ^ pauVar21[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[6];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar23 = pauVar22;
        if ((int)auStack_d0._0_4_ < 2) {
          pauVar23 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar22 + lStack_a0;
        if ((int)auStack_d0._0_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_a0 = (long)puVar11 - (long)pauVar23;
        auVar36 = aesenc(auVar36,auVar37);
        auVar5 = auVar29 ^ pauVar23[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[7];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar24 = pauVar17;
        if ((int)auStack_d0._4_4_ < 2) {
          pauVar24 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar17 + lStack_98;
        if ((int)auStack_d0._4_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_98 = (long)puVar11 - (long)pauVar24;
        auVar36 = aesenc(auVar36,auVar28);
        auVar6 = auVar29 ^ pauVar24[1];
        auVar38 = aesenc(auVar38,auVar28);
        auVar28 = param_2[8];
        auVar31 = aesenc(auVar31,auVar37);
        auVar30 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        pauVar26 = pauVar25;
        if ((int)auStack_d0._8_4_ < 2) {
          pauVar26 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar37);
        puVar11 = *pauVar25 + lStack_90;
        if ((int)auStack_d0._8_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar37);
        lStack_90 = (long)puVar11 - (long)pauVar26;
        auVar36 = aesenc(auVar36,auVar37);
        auVar7 = auVar29 ^ pauVar26[1];
        auVar38 = aesenc(auVar38,auVar37);
        auVar37 = param_2[9];
        auVar31 = aesenc(auVar31,auVar28);
        auVar30 = aesenc(auVar30,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        pauVar27 = pauVar20;
        if ((int)auStack_d0._12_4_ < 2) {
          pauVar27 = &auStack_100;
        }
        auVar35 = aesenc(auVar35,auVar28);
        puVar11 = *pauVar20 + lStack_88;
        if ((int)auStack_d0._12_4_ < 1) {
          puVar11 = auStack_100;
        }
        auVar33 = aesenc(auVar33,auVar28);
        lStack_88 = (long)puVar11 - (long)pauVar27;
        auVar36 = aesenc(auVar36,auVar28);
        auVar8 = auVar29 ^ pauVar27[1];
        auVar29 = aesenc(auVar38,auVar28);
        auVar28 = param_2[10];
        if (10 < uVar1) {
          auVar31 = aesenc(auVar31,auVar37);
          auVar30 = aesenc(auVar30,auVar37);
          auVar34 = aesenc(auVar34,auVar37);
          auVar32 = aesenc(auVar32,auVar37);
          auVar35 = aesenc(auVar35,auVar37);
          auVar33 = aesenc(auVar33,auVar37);
          auVar36 = aesenc(auVar36,auVar37);
          auVar29 = aesenc(auVar29,auVar37);
          auVar37 = param_2[0xb];
          auVar31 = aesenc(auVar31,auVar28);
          auVar30 = aesenc(auVar30,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar35 = aesenc(auVar35,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar36 = aesenc(auVar36,auVar28);
          auVar29 = aesenc(auVar29,auVar28);
          auVar28 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar31 = aesenc(auVar31,auVar37);
            auVar30 = aesenc(auVar30,auVar37);
            auVar34 = aesenc(auVar34,auVar37);
            auVar32 = aesenc(auVar32,auVar37);
            auVar35 = aesenc(auVar35,auVar37);
            auVar33 = aesenc(auVar33,auVar37);
            auVar36 = aesenc(auVar36,auVar37);
            auVar29 = aesenc(auVar29,auVar37);
            auVar37 = param_2[0xd];
            auVar31 = aesenc(auVar31,auVar28);
            auVar30 = aesenc(auVar30,auVar28);
            auVar34 = aesenc(auVar34,auVar28);
            auVar32 = aesenc(auVar32,auVar28);
            auVar35 = aesenc(auVar35,auVar28);
            auVar33 = aesenc(auVar33,auVar28);
            auVar36 = aesenc(auVar36,auVar28);
            auVar29 = aesenc(auVar29,auVar28);
            auVar28 = param_2[0xe];
          }
        }
        auVar31 = aesenc(auVar31,auVar37);
        auVar38 = aesenc(auVar30,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar30 = vpcmpgtd_avx(auStack_e0,(undefined1  [16])0x0);
        auVar32 = aesenc(auVar32,auVar37);
        auVar35 = aesenc(auVar35,auVar37);
        auStack_e0 = vpaddd_avx(auVar30,auStack_e0);
        auVar33 = aesenc(auVar33,auVar37);
        auVar36 = aesenc(auVar36,auVar37);
        auVar39 = aesenc(auVar29,auVar37);
        auVar37 = param_2[1];
        auVar31 = aesenclast(auVar31,auVar28);
        auVar30 = aesenclast(auVar38,auVar28);
        auVar34 = aesenclast(auVar34,auVar28);
        auVar29 = vpcmpgtd_avx(auStack_d0,(undefined1  [16])0x0);
        auVar32 = aesenclast(auVar32,auVar28);
        auVar35 = aesenclast(auVar35,auVar28);
        auStack_d0 = vpaddd_avx(auStack_d0,auVar29);
        auVar29 = *param_2;
        auVar33 = aesenclast(auVar33,auVar28);
        auVar36 = aesenclast(auVar36,auVar28);
        auVar38 = aesenclast(auVar39,auVar28);
        auVar28 = param_2[2];
        *(undefined1 (*) [16])((long)pauVar14 + lVar10) = auVar31;
        pauVar13 = pauVar14 + 1;
        auVar31 = auVar31 ^ local_80;
        *(undefined1 (*) [16])((long)pauVar16 + lStack_b8) = auVar30;
        pauVar12 = pauVar16 + 1;
        auVar30 = auVar30 ^ auVar2;
        *(undefined1 (*) [16])((long)pauVar19 + lStack_b0) = auVar34;
        pauVar18 = pauVar19 + 1;
        auVar34 = auVar34 ^ auVar3;
        *(undefined1 (*) [16])((long)pauVar21 + lStack_a8) = auVar32;
        pauVar15 = pauVar21 + 1;
        auVar32 = auVar32 ^ auVar4;
        *(undefined1 (*) [16])((long)pauVar23 + lStack_a0) = auVar35;
        pauVar22 = pauVar23 + 1;
        auVar35 = auVar35 ^ auVar5;
        *(undefined1 (*) [16])((long)pauVar24 + lStack_98) = auVar33;
        pauVar17 = pauVar24 + 1;
        auVar33 = auVar33 ^ auVar6;
        *(undefined1 (*) [16])((long)pauVar26 + lStack_90) = auVar36;
        pauVar25 = pauVar26 + 1;
        auVar36 = auVar36 ^ auVar7;
        *(undefined1 (*) [16])((long)pauVar27 + lStack_88) = auVar38;
        pauVar20 = pauVar27 + 1;
        auVar38 = auVar38 ^ auVar8;
        iVar40 = iVar40 + -1;
      } while (iVar40 != 0);
    }
    return;
  }
  auVar29 = *param_2;
  param_1 = param_1 + 10;
  do {
    iVar40 = *(int *)(param_1 + -8);
    pauVar13 = (undefined1 (*) [16])param_1[-9];
    iVar9 = 0;
    if (0 < iVar40) {
      iVar9 = iVar40;
    }
    pauVar12 = (undefined1 (*) [16])param_1[-10];
    if (iVar40 < 1) {
      pauVar12 = &local_80;
    }
    iVar41 = *(int *)(param_1 + -3);
    pauVar18 = (undefined1 (*) [16])param_1[-4];
    if (iVar9 < iVar41) {
      iVar9 = iVar41;
    }
    iStack_5c = iVar41;
    local_60 = iVar40;
    pauVar15 = (undefined1 (*) [16])param_1[-5];
    if (iVar41 < 1) {
      pauVar15 = &local_80;
    }
    iVar42 = *(int *)(param_1 + 2);
    pauVar22 = (undefined1 (*) [16])param_1[1];
    if (iVar9 < iVar42) {
      iVar9 = iVar42;
    }
    iStack_58 = iVar42;
    pauVar17 = (undefined1 (*) [16])*param_1;
    if (iVar42 < 1) {
      pauVar17 = &local_80;
    }
    iVar43 = *(int *)(param_1 + 7);
    pauVar25 = (undefined1 (*) [16])param_1[6];
    if (iVar9 < iVar43) {
      iVar9 = iVar43;
    }
    iStack_54 = iVar43;
    pauVar20 = (undefined1 (*) [16])param_1[5];
    if (iVar43 < 1) {
      pauVar20 = &local_80;
    }
    if (iVar9 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *(undefined1 (*) [16])(param_1 + -7) ^ auVar29 ^ *pauVar12;
    in_ZMM3._0_16_ = *(undefined1 (*) [16])(param_1 + -2) ^ auVar29 ^ *pauVar15;
    in_ZMM4._0_16_ = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar17;
    in_ZMM5._0_16_ = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar20;
    lVar10 = 0;
    do {
      pauVar14 = (undefined1 (*) [16])(&stack0xffffffffffffff90 + -(lVar10 + 0x10));
      auVar29 = in_ZMM1._0_16_;
      auVar28 = aesenc(in_ZMM2._0_16_,auVar29);
      auVar30 = aesenc(in_ZMM3._0_16_,auVar29);
      auVar31 = aesenc(in_ZMM4._0_16_,auVar29);
      auVar34 = aesenc(in_ZMM5._0_16_,auVar29);
      auVar29 = param_2[3];
      auVar37 = in_ZMM0._0_16_;
      auVar28 = aesenc(auVar28,auVar37);
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      if (local_60 < 2) {
        pauVar12 = pauVar14;
      }
      if (local_60 < 1) {
        pauVar13 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar37);
      auVar37 = param_2[4];
      auVar28 = aesenc(auVar28,auVar29);
      auVar30 = aesenc(auVar30,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      if (iStack_5c < 2) {
        pauVar15 = pauVar14;
      }
      if (iStack_5c < 1) {
        pauVar18 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar29);
      auVar29 = param_2[5];
      auVar28 = aesenc(auVar28,auVar37);
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      if (iStack_58 < 2) {
        pauVar17 = pauVar14;
      }
      if (iStack_58 < 1) {
        pauVar22 = pauVar14;
      }
      auVar34 = aesenc(auVar34,auVar37);
      auVar37 = param_2[6];
      auVar28 = aesenc(auVar28,auVar29);
      auVar30 = aesenc(auVar30,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      if (iStack_54 < 2) {
        pauVar20 = pauVar14;
      }
      if (iStack_54 < 1) {
        pauVar25 = pauVar14;
      }
      auVar35 = aesenc(auVar34,auVar29);
      auVar34 = param_2[7];
      auVar29 = aesenc(auVar28,auVar37);
      auVar28 = aesenc(auVar30,auVar37);
      auVar32 = aesenc(auVar31,auVar37);
      auVar35 = aesenc(auVar35,auVar37);
      auVar37 = param_2[8];
      auVar30 = aesenc(auVar29,auVar34);
      auVar29 = *param_2;
      auVar31 = aesenc(auVar28,auVar34);
      iVar40 = iVar40 - (uint)(0 < iVar40);
      iVar41 = iVar41 - (uint)(0 < iVar41);
      iVar42 = iVar42 - (uint)(0 < iVar42);
      iVar43 = iVar43 - (uint)(0 < iVar43);
      iStack_5c = iVar41;
      local_60 = iVar40;
      iStack_58 = iVar42;
      iStack_54 = iVar43;
      auVar32 = aesenc(auVar32,auVar34);
      auVar35 = aesenc(auVar35,auVar34);
      auVar28 = param_2[9];
      auVar30 = aesenc(auVar30,auVar37);
      auVar31 = aesenc(auVar31,auVar37);
      auVar34 = aesenc(auVar32,auVar37);
      auVar32 = aesenc(auVar35,auVar37);
      auVar37 = param_2[10];
      if (10 < uVar1) {
        auVar30 = aesenc(auVar30,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        auVar28 = param_2[0xb];
        auVar30 = aesenc(auVar30,auVar37);
        auVar31 = aesenc(auVar31,auVar37);
        auVar34 = aesenc(auVar34,auVar37);
        auVar32 = aesenc(auVar32,auVar37);
        auVar37 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar30 = aesenc(auVar30,auVar28);
          auVar31 = aesenc(auVar31,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar28 = param_2[0xd];
          auVar30 = aesenc(auVar30,auVar37);
          auVar31 = aesenc(auVar31,auVar37);
          auVar34 = aesenc(auVar34,auVar37);
          auVar32 = aesenc(auVar32,auVar37);
          auVar37 = param_2[0xe];
        }
      }
      auVar30 = aesenc(auVar30,auVar28);
      auVar31 = aesenc(auVar31,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar36 = aesenc(auVar32,auVar28);
      auVar28 = *(undefined1 (*) [16])(pauVar12[1] + lVar10);
      in_ZMM1._0_16_ = param_2[1];
      auVar32 = aesenclast(auVar30,auVar37);
      auVar30 = *(undefined1 (*) [16])(pauVar15[1] + lVar10);
      auVar35 = aesenclast(auVar31,auVar37);
      auVar31 = *(undefined1 (*) [16])(pauVar17[1] + lVar10);
      auVar33 = aesenclast(auVar34,auVar37);
      auVar34 = *(undefined1 (*) [16])(pauVar20[1] + lVar10);
      auVar37 = aesenclast(auVar36,auVar37);
      in_ZMM0._0_16_ = param_2[2];
      *(undefined1 (*) [16])(*pauVar13 + lVar10) = auVar32;
      in_ZMM2._0_16_ = auVar32 ^ auVar28 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar18 + lVar10) = auVar35;
      in_ZMM3._0_16_ = auVar35 ^ auVar30 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar22 + lVar10) = auVar33;
      in_ZMM4._0_16_ = auVar33 ^ auVar31 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar25 + lVar10) = auVar37;
      in_ZMM5._0_16_ = auVar37 ^ auVar34 ^ auVar29;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

