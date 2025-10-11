
void aesni_multi_cbc_encrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  long lVar11;
  undefined1 *puVar12;
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
  undefined1 (*pauVar28) [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 local_100 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  
  auVar39 = *param_2;
  local_e0._0_4_ = *(undefined4 *)(param_1 + 2);
  iVar10 = 0;
  if (0 < (int)local_e0._0_4_) {
    iVar10 = local_e0._0_4_;
  }
  pauVar13 = (undefined1 (*) [16])*param_1;
  if ((int)local_e0._0_4_ < 1) {
    pauVar13 = &local_100;
  }
  lVar11 = param_1[1] - (long)pauVar13;
  local_e0._4_4_ = *(undefined4 *)(param_1 + 7);
  if (iVar10 < (int)local_e0._4_4_) {
    iVar10 = local_e0._4_4_;
  }
  pauVar15 = (undefined1 (*) [16])param_1[5];
  if ((int)local_e0._4_4_ < 1) {
    pauVar15 = &local_100;
  }
  local_b8 = param_1[6] - (long)pauVar15;
  local_e0._8_4_ = *(undefined4 *)(param_1 + 0xc);
  if (iVar10 < (int)local_e0._8_4_) {
    iVar10 = local_e0._8_4_;
  }
  pauVar17 = (undefined1 (*) [16])param_1[10];
  if ((int)local_e0._8_4_ < 1) {
    pauVar17 = &local_100;
  }
  local_b0 = param_1[0xb] - (long)pauVar17;
  local_e0._12_4_ = *(undefined4 *)(param_1 + 0x11);
  if (iVar10 < (int)local_e0._12_4_) {
    iVar10 = local_e0._12_4_;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0xf];
  if ((int)local_e0._12_4_ < 1) {
    pauVar19 = &local_100;
  }
  local_a8 = param_1[0x10] - (long)pauVar19;
  local_d0._0_4_ = *(undefined4 *)(param_1 + 0x16);
  if (iVar10 < (int)local_d0._0_4_) {
    iVar10 = local_d0._0_4_;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x14];
  if ((int)local_d0._0_4_ < 1) {
    pauVar21 = &local_100;
  }
  local_a0 = param_1[0x15] - (long)pauVar21;
  local_d0._4_4_ = *(undefined4 *)(param_1 + 0x1b);
  if (iVar10 < (int)local_d0._4_4_) {
    iVar10 = local_d0._4_4_;
  }
  pauVar23 = (undefined1 (*) [16])param_1[0x19];
  if ((int)local_d0._4_4_ < 1) {
    pauVar23 = &local_100;
  }
  local_98 = param_1[0x1a] - (long)pauVar23;
  local_d0._8_4_ = *(undefined4 *)(param_1 + 0x20);
  if (iVar10 < (int)local_d0._8_4_) {
    iVar10 = local_d0._8_4_;
  }
  pauVar25 = (undefined1 (*) [16])param_1[0x1e];
  if ((int)local_d0._8_4_ < 1) {
    pauVar25 = &local_100;
  }
  local_90 = param_1[0x1f] - (long)pauVar25;
  local_d0._12_4_ = *(undefined4 *)(param_1 + 0x25);
  if (iVar10 < (int)local_d0._12_4_) {
    iVar10 = local_d0._12_4_;
  }
  pauVar27 = (undefined1 (*) [16])param_1[0x23];
  if ((int)local_d0._12_4_ < 1) {
    pauVar27 = &local_100;
  }
  local_88 = param_1[0x24] - (long)pauVar27;
  if (iVar10 != 0) {
    auVar30 = param_2[1];
    auVar29 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    auVar31 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar39 ^ *pauVar13;
    auVar32 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar39 ^ *pauVar15;
    auVar33 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar39 ^ *pauVar17;
    auVar34 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar39 ^ *pauVar19;
    auVar35 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar39 ^ *pauVar21;
    auVar36 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar39 ^ *pauVar23;
    auVar37 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar39 ^ *pauVar25;
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar39 ^ *pauVar27;
    do {
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar14 = pauVar13;
      if ((int)local_e0._0_4_ < 2) {
        pauVar14 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar13 + lVar11;
      if ((int)local_e0._0_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      lVar11 = (long)puVar12 - (long)pauVar14;
      auVar37 = aesenc(auVar37,auVar30);
      auVar2 = auVar39 ^ pauVar14[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[3];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar16 = pauVar15;
      if ((int)local_e0._4_4_ < 2) {
        pauVar16 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar15 + local_b8;
      if ((int)local_e0._4_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_b8 = (long)puVar12 - (long)pauVar16;
      auVar37 = aesenc(auVar37,auVar29);
      auVar3 = auVar39 ^ pauVar16[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[4];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar18 = pauVar17;
      if ((int)local_e0._8_4_ < 2) {
        pauVar18 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar17 + local_b0;
      if ((int)local_e0._8_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_b0 = (long)puVar12 - (long)pauVar18;
      auVar37 = aesenc(auVar37,auVar30);
      auVar4 = auVar39 ^ pauVar18[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[5];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar20 = pauVar19;
      if ((int)local_e0._12_4_ < 2) {
        pauVar20 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar19 + local_a8;
      if ((int)local_e0._12_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_a8 = (long)puVar12 - (long)pauVar20;
      auVar37 = aesenc(auVar37,auVar29);
      auVar5 = auVar39 ^ pauVar20[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[6];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar22 = pauVar21;
      if ((int)local_d0._0_4_ < 2) {
        pauVar22 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar21 + local_a0;
      if ((int)local_d0._0_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_a0 = (long)puVar12 - (long)pauVar22;
      auVar37 = aesenc(auVar37,auVar30);
      auVar6 = auVar39 ^ pauVar22[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[7];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar24 = pauVar23;
      if ((int)local_d0._4_4_ < 2) {
        pauVar24 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar23 + local_98;
      if ((int)local_d0._4_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_98 = (long)puVar12 - (long)pauVar24;
      auVar37 = aesenc(auVar37,auVar29);
      auVar7 = auVar39 ^ pauVar24[1];
      auVar38 = aesenc(auVar38,auVar29);
      auVar29 = param_2[8];
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar33 = aesenc(auVar33,auVar30);
      auVar34 = aesenc(auVar34,auVar30);
      pauVar26 = pauVar25;
      if ((int)local_d0._8_4_ < 2) {
        pauVar26 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar30);
      puVar12 = *pauVar25 + local_90;
      if ((int)local_d0._8_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar30);
      local_90 = (long)puVar12 - (long)pauVar26;
      auVar37 = aesenc(auVar37,auVar30);
      auVar8 = auVar39 ^ pauVar26[1];
      auVar38 = aesenc(auVar38,auVar30);
      auVar30 = param_2[9];
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      auVar33 = aesenc(auVar33,auVar29);
      auVar34 = aesenc(auVar34,auVar29);
      pauVar28 = pauVar27;
      if ((int)local_d0._12_4_ < 2) {
        pauVar28 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar29);
      puVar12 = *pauVar27 + local_88;
      if ((int)local_d0._12_4_ < 1) {
        puVar12 = local_100;
      }
      auVar36 = aesenc(auVar36,auVar29);
      local_88 = (long)puVar12 - (long)pauVar28;
      auVar37 = aesenc(auVar37,auVar29);
      auVar9 = auVar39 ^ pauVar28[1];
      auVar39 = aesenc(auVar38,auVar29);
      auVar29 = param_2[10];
      if (10 < uVar1) {
        auVar31 = aesenc(auVar31,auVar30);
        auVar32 = aesenc(auVar32,auVar30);
        auVar33 = aesenc(auVar33,auVar30);
        auVar34 = aesenc(auVar34,auVar30);
        auVar35 = aesenc(auVar35,auVar30);
        auVar36 = aesenc(auVar36,auVar30);
        auVar37 = aesenc(auVar37,auVar30);
        auVar39 = aesenc(auVar39,auVar30);
        auVar30 = param_2[0xb];
        auVar31 = aesenc(auVar31,auVar29);
        auVar32 = aesenc(auVar32,auVar29);
        auVar33 = aesenc(auVar33,auVar29);
        auVar34 = aesenc(auVar34,auVar29);
        auVar35 = aesenc(auVar35,auVar29);
        auVar36 = aesenc(auVar36,auVar29);
        auVar37 = aesenc(auVar37,auVar29);
        auVar39 = aesenc(auVar39,auVar29);
        auVar29 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar31 = aesenc(auVar31,auVar30);
          auVar32 = aesenc(auVar32,auVar30);
          auVar33 = aesenc(auVar33,auVar30);
          auVar34 = aesenc(auVar34,auVar30);
          auVar35 = aesenc(auVar35,auVar30);
          auVar36 = aesenc(auVar36,auVar30);
          auVar37 = aesenc(auVar37,auVar30);
          auVar39 = aesenc(auVar39,auVar30);
          auVar30 = param_2[0xd];
          auVar31 = aesenc(auVar31,auVar29);
          auVar32 = aesenc(auVar32,auVar29);
          auVar33 = aesenc(auVar33,auVar29);
          auVar34 = aesenc(auVar34,auVar29);
          auVar35 = aesenc(auVar35,auVar29);
          auVar36 = aesenc(auVar36,auVar29);
          auVar37 = aesenc(auVar37,auVar29);
          auVar39 = aesenc(auVar39,auVar29);
          auVar29 = param_2[0xe];
        }
      }
      auVar31 = aesenc(auVar31,auVar30);
      auVar32 = aesenc(auVar32,auVar30);
      auVar38 = aesenc(auVar33,auVar30);
      auVar33 = vpcmpgtd_avx(local_e0,(undefined1  [16])0x0);
      auVar34 = aesenc(auVar34,auVar30);
      auVar35 = aesenc(auVar35,auVar30);
      local_e0 = vpaddd_avx(auVar33,local_e0);
      auVar36 = aesenc(auVar36,auVar30);
      auVar37 = aesenc(auVar37,auVar30);
      auVar40 = aesenc(auVar39,auVar30);
      auVar30 = param_2[1];
      auVar31 = aesenclast(auVar31,auVar29);
      auVar32 = aesenclast(auVar32,auVar29);
      auVar33 = aesenclast(auVar38,auVar29);
      auVar39 = vpcmpgtd_avx(local_d0,(undefined1  [16])0x0);
      auVar34 = aesenclast(auVar34,auVar29);
      auVar35 = aesenclast(auVar35,auVar29);
      local_d0 = vpaddd_avx(local_d0,auVar39);
      auVar39 = *param_2;
      auVar36 = aesenclast(auVar36,auVar29);
      auVar37 = aesenclast(auVar37,auVar29);
      auVar38 = aesenclast(auVar40,auVar29);
      auVar29 = param_2[2];
      *(undefined1 (*) [16])((long)pauVar14 + lVar11) = auVar31;
      pauVar13 = pauVar14 + 1;
      auVar31 = auVar31 ^ auVar2;
      *(undefined1 (*) [16])((long)pauVar16 + local_b8) = auVar32;
      pauVar15 = pauVar16 + 1;
      auVar32 = auVar32 ^ auVar3;
      *(undefined1 (*) [16])((long)pauVar18 + local_b0) = auVar33;
      pauVar17 = pauVar18 + 1;
      auVar33 = auVar33 ^ auVar4;
      *(undefined1 (*) [16])((long)pauVar20 + local_a8) = auVar34;
      pauVar19 = pauVar20 + 1;
      auVar34 = auVar34 ^ auVar5;
      *(undefined1 (*) [16])((long)pauVar22 + local_a0) = auVar35;
      pauVar21 = pauVar22 + 1;
      auVar35 = auVar35 ^ auVar6;
      *(undefined1 (*) [16])((long)pauVar24 + local_98) = auVar36;
      pauVar23 = pauVar24 + 1;
      auVar36 = auVar36 ^ auVar7;
      *(undefined1 (*) [16])((long)pauVar26 + local_90) = auVar37;
      pauVar25 = pauVar26 + 1;
      auVar37 = auVar37 ^ auVar8;
      *(undefined1 (*) [16])((long)pauVar28 + local_88) = auVar38;
      pauVar27 = pauVar28 + 1;
      auVar38 = auVar38 ^ auVar9;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}

