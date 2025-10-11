
void FUN_0048d860(undefined8 *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
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
  undefined1 (*pauVar22) [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  
  auVar24 = *param_2;
  local_2a0._0_4_ = *(undefined4 *)(param_1 + 2);
  pauVar7 = (undefined1 (*) [16])*param_1;
  iVar3 = local_2a0._0_4_;
  if ((int)local_2a0._0_4_ < 1) {
    pauVar7 = &local_2c0;
    iVar3 = 0;
  }
  lVar4 = param_1[1] - (long)pauVar7;
  local_2a0._4_4_ = *(undefined4 *)(param_1 + 7);
  if (iVar3 < (int)local_2a0._4_4_) {
    iVar3 = local_2a0._4_4_;
  }
  pauVar9 = (undefined1 (*) [16])param_1[5];
  if ((int)local_2a0._4_4_ < 1) {
    pauVar9 = &local_2c0;
  }
  local_278 = param_1[6] - (long)pauVar9;
  local_2a0._8_4_ = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 < (int)local_2a0._8_4_) {
    iVar3 = local_2a0._8_4_;
  }
  pauVar11 = (undefined1 (*) [16])param_1[10];
  if ((int)local_2a0._8_4_ < 1) {
    pauVar11 = &local_2c0;
  }
  local_270 = param_1[0xb] - (long)pauVar11;
  local_2a0._12_4_ = *(undefined4 *)(param_1 + 0x11);
  if (iVar3 < (int)local_2a0._12_4_) {
    iVar3 = local_2a0._12_4_;
  }
  pauVar13 = (undefined1 (*) [16])param_1[0xf];
  if ((int)local_2a0._12_4_ < 1) {
    pauVar13 = &local_2c0;
  }
  local_268 = param_1[0x10] - (long)pauVar13;
  local_290._0_4_ = *(undefined4 *)(param_1 + 0x16);
  if (iVar3 < (int)local_290._0_4_) {
    iVar3 = local_290._0_4_;
  }
  pauVar15 = (undefined1 (*) [16])param_1[0x14];
  if ((int)local_290._0_4_ < 1) {
    pauVar15 = &local_2c0;
  }
  local_260 = param_1[0x15] - (long)pauVar15;
  local_290._4_4_ = *(undefined4 *)(param_1 + 0x1b);
  if (iVar3 < (int)local_290._4_4_) {
    iVar3 = local_290._4_4_;
  }
  pauVar17 = (undefined1 (*) [16])param_1[0x19];
  if ((int)local_290._4_4_ < 1) {
    pauVar17 = &local_2c0;
  }
  local_258 = param_1[0x1a] - (long)pauVar17;
  local_290._8_4_ = *(undefined4 *)(param_1 + 0x20);
  if (iVar3 < (int)local_290._8_4_) {
    iVar3 = local_290._8_4_;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0x1e];
  if ((int)local_290._8_4_ < 1) {
    pauVar19 = &local_2c0;
  }
  local_250 = param_1[0x1f] - (long)pauVar19;
  local_290._12_4_ = *(undefined4 *)(param_1 + 0x25);
  if (iVar3 < (int)local_290._12_4_) {
    iVar3 = local_290._12_4_;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x23];
  if ((int)local_290._12_4_ < 1) {
    pauVar21 = &local_2c0;
  }
  local_248 = param_1[0x24] - (long)pauVar21;
  if (iVar3 != 0) {
    auVar26 = param_2[1];
    auVar23 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    pauVar6 = &local_180;
    local_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    local_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    local_160 = *pauVar11;
    auVar30 = *pauVar11 ^ auVar24;
    local_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    local_140 = *pauVar15;
    auVar35 = *pauVar15 ^ auVar24;
    local_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    local_120 = *pauVar19;
    auVar31 = *pauVar19 ^ auVar24;
    local_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (undefined1 (*) [16])((ulong)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar30 = aesdec(auVar30,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if ((int)local_2a0._0_4_ < 2) {
        pauVar8 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if ((int)local_2a0._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar29,auVar26);
      lVar4 = (long)puVar5 - (long)pauVar8;
      auVar41 = aesdec(auVar31,auVar26);
      auVar2 = pauVar8[1];
      auVar44 = aesdec(auVar24,auVar26);
      auVar24 = param_2[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar31 = aesdec(auVar30,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if ((int)local_2a0._4_4_ < 2) {
        pauVar10 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar9 + local_278;
      if ((int)local_2a0._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar30 = aesdec(auVar38,auVar23);
      local_278 = (long)puVar5 - (long)pauVar10;
      auVar25 = aesdec(auVar41,auVar23);
      auVar28 = pauVar10[1];
      auVar38 = aesdec(auVar44,auVar23);
      auVar23 = param_2[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if ((int)local_2a0._8_4_ < 2) {
        pauVar12 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar11 + local_270;
      if ((int)local_2a0._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar30,auVar24);
      local_270 = (long)puVar5 - (long)pauVar12;
      auVar44 = aesdec(auVar25,auVar24);
      auVar30 = pauVar12[1];
      auVar38 = aesdec(auVar38,auVar24);
      auVar24 = param_2[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if ((int)local_2a0._12_4_ < 2) {
        pauVar14 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar13 + local_268;
      if ((int)local_2a0._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar23);
      local_268 = (long)puVar5 - (long)pauVar14;
      auVar44 = aesdec(auVar44,auVar23);
      auVar33 = pauVar14[1];
      auVar38 = aesdec(auVar38,auVar23);
      auVar23 = param_2[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if ((int)local_290._0_4_ < 2) {
        pauVar16 = &local_2c0;
      }
      auVar36 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar15 + local_260;
      if ((int)local_290._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar24);
      local_260 = (long)puVar5 - (long)pauVar16;
      auVar44 = aesdec(auVar44,auVar24);
      auVar35 = pauVar16[1];
      auVar45 = aesdec(auVar38,auVar24);
      auVar24 = param_2[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if ((int)local_290._4_4_ < 2) {
        pauVar18 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar17 + local_258;
      if ((int)local_290._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar41,auVar23);
      local_258 = (long)puVar5 - (long)pauVar18;
      auVar44 = aesdec(auVar44,auVar23);
      auVar29 = pauVar18[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = param_2[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if ((int)local_290._8_4_ < 2) {
        pauVar20 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar24);
      puVar5 = *pauVar19 + local_250;
      if ((int)local_290._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar24);
      local_250 = (long)puVar5 - (long)pauVar20;
      auVar44 = aesdec(auVar44,auVar24);
      auVar31 = pauVar20[1];
      auVar45 = aesdec(auVar45,auVar24);
      auVar24 = param_2[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar38,auVar23);
      auVar41 = aesdec(auVar41,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if ((int)local_290._12_4_ < 2) {
        pauVar22 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar21 + local_248;
      if ((int)local_290._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar23);
      local_248 = (long)puVar5 - (long)pauVar22;
      auVar42 = aesdec(auVar44,auVar23);
      auVar44 = pauVar22[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = param_2[10];
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar36 = aesdec(auVar36,auVar24);
        auVar39 = aesdec(auVar39,auVar24);
        auVar42 = aesdec(auVar42,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = param_2[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auVar39 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar36 = aesdec(auVar36,auVar24);
          auVar39 = aesdec(auVar39,auVar24);
          auVar42 = aesdec(auVar42,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = param_2[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar41,auVar24);
      auVar26 = vpcmpgtd_avx(local_2a0,(undefined1  [16])0x0);
      auVar34 = aesdec(auVar25,auVar24);
      auVar36 = aesdec(auVar36,auVar24);
      local_2a0 = vpaddd_avx(auVar26,local_2a0);
      auVar39 = aesdec(auVar39,auVar24);
      auVar43 = aesdec(auVar42,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = param_2[1];
      auVar42 = aesdeclast(auVar27,auVar23);
      auVar27 = aesdeclast(auVar38,auVar23);
      auVar32 = aesdeclast(auVar41,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(local_290,(undefined1  [16])0x0);
      auVar34 = aesdeclast(auVar34,auVar23);
      auVar38 = pauVar6[2];
      auVar37 = aesdeclast(auVar36,auVar23);
      auVar41 = pauVar6[3];
      local_290 = vpaddd_avx(local_290,auVar24);
      auVar24 = *param_2;
      auVar40 = aesdeclast(auVar39,auVar23);
      auVar36 = pauVar6[4];
      auVar43 = aesdeclast(auVar43,auVar23);
      auVar45 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar39 = pauVar6[6];
      auVar23 = param_2[2];
      *(undefined1 (*) [16])((long)pauVar8 + lVar4) = auVar42 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar42 = pauVar6[7];
      *(undefined1 (*) [16])((long)pauVar10 + local_278) = auVar27 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar12 + local_270) = auVar32 ^ auVar38;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar14 + local_268) = auVar34 ^ auVar41;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar30;
      auVar30 = auVar30 ^ auVar24;
      *(undefined1 (*) [16])((long)pauVar16 + local_260) = auVar37 ^ auVar36;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar35;
      auVar35 = auVar24 ^ auVar35;
      *(undefined1 (*) [16])((long)pauVar18 + local_258) = auVar40 ^ auVar45;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(undefined1 (*) [16])((long)pauVar20 + local_250) = auVar43 ^ auVar39;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar31;
      auVar31 = auVar24 ^ auVar31;
      *(undefined1 (*) [16])((long)pauVar22 + local_248) = auVar46 ^ auVar42;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar44;
      auVar24 = auVar24 ^ auVar44;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

