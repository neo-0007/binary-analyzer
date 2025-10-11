
void _aesni_ctr32_ghash_6x
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16],long param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  ulong uVar33;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined1 (*in_R11) [16];
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  ulong in_XMM7_Qa;
  ulong in_XMM7_Qb;
  ulong uVar38;
  ulong uVar39;
  undefined1 in_ZMM8 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStack0000000000000018 [16];
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  auVar62 = in_R11[2];
  uVar33 = param_3 - 6;
  auVar36 = ZEXT1664((undefined1  [16])0x0);
  auVar67 = param_4[-8];
  auVar59 = vpaddb_avx(in_ZMM1._0_16_,auVar62);
  auVar66 = vpaddb_avx(auVar59,auVar62);
  auVar37 = vpaddb_avx(auVar66,auVar62);
  auVar51 = vpaddb_avx(auVar37,auVar62);
  auVar35 = vpaddb_avx(auVar51,auVar62);
  auVar5 = in_ZMM1._0_16_ ^ auVar67;
  auStack0000000000000018 = (undefined1  [16])0x0;
  while( true ) {
    bVar34 = unaff_EBX < 0xfa000000;
    unaff_EBX = unaff_EBX + 0x6000000;
    if (bVar34) {
      uVar38 = *(ulong *)(param_6 + -0x20);
      uVar39 = *(ulong *)(param_6 + -0x18);
      auVar62 = vpaddb_avx(auVar35,auVar62);
    }
    else {
      auVar62 = *in_R11;
      auVar66 = vpshufb_avx(in_ZMM1._0_16_,auVar62);
      auVar51 = in_R11[3];
      auVar59 = vpaddd_avx(auVar66,in_R11[4]);
      auVar66 = vpaddd_avx(auVar66,auVar51);
      uVar38 = *(ulong *)(param_6 + -0x20);
      uVar39 = *(ulong *)(param_6 + -0x18);
      auVar37 = vpaddd_avx(auVar59,auVar51);
      auVar59 = vpshufb_avx(auVar59,auVar62);
      auVar35 = vpaddd_avx(auVar66,auVar51);
      auVar66 = vpshufb_avx(auVar66,auVar62);
      auVar63 = vpaddd_avx(auVar37,auVar51);
      auVar37 = vpshufb_avx(auVar37,auVar62);
      auVar45 = vpaddd_avx(auVar35,auVar51);
      auVar51 = vpshufb_avx(auVar35,auVar62);
      auVar35 = vpshufb_avx(auVar63,auVar62);
      auVar62 = vpshufb_avx(auVar45,auVar62);
    }
    *param_5 = auVar62;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = in_XMM7_Qa;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar39;
    auVar62 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar63 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar62 = auVar62 ^ auVar45 << uVar7;
      }
    }
    auVar63 = param_4[-7];
    auVar40._8_8_ = 0;
    auVar40._0_8_ = in_XMM7_Qb;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar38;
    auVar45 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar40 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar45 = auVar45 ^ auVar46 << uVar7;
      }
    }
    auVar40 = aesenc(auVar5,auVar63);
    auVar52._8_8_ = 0;
    auVar52._0_8_ = in_XMM7_Qa;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar38;
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar52 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar57 << uVar7;
      }
    }
    auVar46 = aesenc(auVar59 ^ auVar67,auVar63);
    auVar60._8_8_ = 0;
    auVar60._0_8_ = in_XMM7_Qb;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar39;
    auVar59 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar60 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar59 = auVar59 ^ auVar64 << uVar7;
      }
    }
    auVar52 = aesenc(auVar66 ^ auVar67,auVar63);
    auVar57 = aesenc(auVar37 ^ auVar67,auVar63);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = in_stack_00000038;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = *(ulong *)(param_6 + -0x10);
    auVar66 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar37 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar66 = auVar66 ^ auVar41 << uVar7;
      }
    }
    auVar60 = aesenc(auVar51 ^ auVar67,auVar63);
    auVar37 = param_4[-6];
    auVar47._8_8_ = 0;
    auVar47._0_8_ = in_stack_00000038;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *(ulong *)(param_6 + -8);
    auVar51 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar47 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar51 = auVar51 ^ auVar53 << uVar7;
      }
    }
    auVar63 = aesenc(auVar35 ^ auVar67,auVar63);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = in_stack_00000040;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = *(ulong *)(param_6 + -0x10);
    auVar67 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar35 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar67 = auVar67 ^ auVar58 << uVar7;
      }
    }
    unaff_R14 = (undefined8 *)((long)unaff_R14 + (-(ulong)(unaff_R14 <= unaff_R15) & 0x60));
    auVar40 = aesenc(auVar40,auVar37);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = in_stack_00000040;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = *(ulong *)(param_6 + -8);
    auVar35 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar42 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar35 = auVar35 ^ auVar48 << uVar7;
      }
    }
    auVar46 = aesenc(auVar46,auVar37);
    in_XMM7_Qa = swap_bytes(unaff_R14[0xb]);
    auVar52 = aesenc(auVar52,auVar37);
    in_XMM7_Qb = swap_bytes(unaff_R14[10]);
    auVar57 = aesenc(auVar57,auVar37);
    auVar60 = aesenc(auVar60,auVar37);
    auVar64 = aesenc(auVar63,auVar37);
    auVar37 = param_4[-5];
    auVar54._8_8_ = 0;
    auVar54._0_8_ = in_stack_00000048;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *(ulong *)(param_6 + 0x10);
    auVar63 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar54 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar63 = auVar63 ^ auVar61 << uVar7;
      }
    }
    auVar41 = aesenc(auVar40,auVar37);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = in_stack_00000048;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *(ulong *)(param_6 + 0x18);
    auVar40 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar43 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar40 = auVar40 ^ auVar49 << uVar7;
      }
    }
    auVar47 = aesenc(auVar46,auVar37);
    auVar55._8_8_ = 0;
    auVar55._0_8_ = in_stack_00000050;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *(ulong *)(param_6 + 0x10);
    auVar46 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar55 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar46 = auVar46 ^ auVar65 << uVar7;
      }
    }
    auVar53 = aesenc(auVar52,auVar37);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = in_stack_00000050;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulong *)(param_6 + 0x18);
    auVar52 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar44 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar52 = auVar52 ^ auVar50 << uVar7;
      }
    }
    auVar58 = aesenc(auVar57,auVar37);
    auVar60 = aesenc(auVar60,auVar37);
    auVar64 = aesenc(auVar64,auVar37);
    auVar37 = param_4[-4];
    auVar56._8_8_ = 0;
    auVar56._0_8_ = in_stack_00000058;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulong *)(param_6 + 0x20);
    auVar57 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar56 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar57 = auVar57 ^ auVar10 << uVar7;
      }
    }
    auVar42 = aesenc(auVar41,auVar37);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = in_stack_00000058;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulong *)(param_6 + 0x28);
    auVar41 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar41 = auVar41 ^ auVar23 << uVar7;
      }
    }
    auVar48 = aesenc(auVar47,auVar37);
    in_stack_00000038 = swap_bytes(unaff_R14[9]);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = in_stack_00000060;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulong *)(param_6 + 0x20);
    auVar47 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar47 = auVar47 ^ auVar16 << uVar7;
      }
    }
    auVar54 = aesenc(auVar53,auVar37);
    in_stack_00000040 = swap_bytes(unaff_R14[8]);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = in_stack_00000060;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulong *)(param_6 + 0x28);
    auVar53 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar27 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar53 = auVar53 ^ auVar30 << uVar7;
      }
    }
    auVar58 = aesenc(auVar58,auVar37);
    auVar61 = aesenc(auVar60,auVar37);
    auVar64 = aesenc(auVar64,auVar37);
    auVar37 = param_4[-3];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = in_stack_00000068;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulong *)(param_6 + 0x40);
    auVar60 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar60 = auVar60 ^ auVar11 << uVar7;
      }
    }
    auVar43 = aesenc(auVar42,auVar37);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = in_stack_00000068;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)(param_6 + 0x48);
    auVar42 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar42 = auVar42 ^ auVar24 << uVar7;
      }
    }
    auVar49 = aesenc(auVar48,auVar37);
    in_stack_00000048 = swap_bytes(unaff_R14[7]);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = in_stack_00000070;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulong *)(param_6 + 0x40);
    auVar48 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar48 = auVar48 ^ auVar17 << uVar7;
      }
    }
    auVar6._8_8_ = in_stack_00000080;
    auVar6._0_8_ = in_stack_00000078;
    auVar6 = in_ZMM8._0_16_ ^ auVar36._0_16_ ^ auStack0000000000000018 ^ auVar6;
    auVar55 = aesenc(auVar54,auVar37);
    in_stack_00000050 = swap_bytes(unaff_R14[6]);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = in_stack_00000070;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulong *)(param_6 + 0x48);
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar28 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar31 << uVar7;
      }
    }
    auVar58 = aesenc(auVar58,auVar37);
    auVar61 = aesenc(auVar61,auVar37);
    auVar65 = aesenc(auVar64,auVar37);
    auVar37 = param_4[-2];
    uVar38 = auVar6._0_8_;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulong *)(param_6 + 0x58);
    auVar64 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar64 = auVar64 ^ auVar25 << uVar7;
      }
    }
    auVar44 = aesenc(auVar43,auVar37);
    uVar39 = auVar6._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar39;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulong *)(param_6 + 0x50);
    auVar43 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar43 = auVar43 ^ auVar18 << uVar7;
      }
    }
    auVar50 = aesenc(auVar49,auVar37);
    in_stack_00000058 = swap_bytes(unaff_R14[5]);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar38;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(param_6 + 0x50);
    auVar49 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar49 = auVar49 ^ auVar12 << uVar7;
      }
    }
    auVar56 = aesenc(auVar55,auVar37);
    in_stack_00000060 = swap_bytes(unaff_R14[4]);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar39;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulong *)(param_6 + 0x58);
    auVar55 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar29 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar55 = auVar55 ^ auVar32 << uVar7;
      }
    }
    auVar58 = aesenc(auVar58,auVar37);
    auVar61 = aesenc(auVar61,auVar37);
    auVar65 = aesenc(auVar65,auVar37);
    auVar43 = auVar45 ^ auVar62 ^ auVar51 ^ auVar67 ^ auVar40 ^ auVar46 ^ auVar41 ^ auVar47 ^
              auVar42 ^ auVar48 ^ auVar64 ^ auVar43;
    auVar67 = param_4[-1];
    auVar37 = vpslldq_avx(auVar43,8);
    auVar45 = aesenc(auVar44,auVar67);
    auVar40 = aesenc(auVar50,auVar67);
    auVar37 = auVar5 ^ auVar66 ^ auVar63 ^ auVar57 ^ auVar60 ^ auVar49 ^ auVar37;
    in_stack_00000068 = swap_bytes(unaff_R14[3]);
    auVar63 = aesenc(auVar56,auVar67);
    in_stack_00000070 = swap_bytes(unaff_R14[2]);
    auVar62 = vpalignr_avx(auVar37,auVar37,8);
    auVar66._8_8_ = 0;
    auVar66._0_8_ = auVar37._0_8_;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulong *)(in_R11[1] + 8);
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar66 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar51 << uVar7;
      }
    }
    auVar46 = aesenc(auVar58,auVar67);
    auVar57 = aesenc(auVar61,auVar67);
    auVar66 = *param_4;
    auVar60 = aesenc(auVar65,auVar67);
    auVar37 = aesenc(auVar45,auVar66);
    auVar67 = param_4[1];
    auVar51 = aesenc(auVar40,auVar66);
    auStack0000000000000018 = vpsrldq_avx(auVar43,8);
    auVar63 = aesenc(auVar63,auVar66);
    auStack0000000000000018 =
         auVar59 ^ auVar35 ^ auVar52 ^ auVar53 ^ auVar54 ^ auVar55 ^ auStack0000000000000018;
    auVar59 = aesenc(auVar46,auVar66);
    auVar5 = auVar5 ^ auVar62;
    in_stack_00000078 = swap_bytes(unaff_R14[1]);
    auVar62 = aesenc(auVar57,auVar66);
    in_stack_00000080 = swap_bytes(*unaff_R14);
    auVar66 = aesenc(auVar60,auVar66);
    auVar35 = param_4[2];
    if (10 < unaff_EBP) {
      auVar37 = aesenc(auVar37,auVar67);
      auVar51 = aesenc(auVar51,auVar67);
      auVar63 = aesenc(auVar63,auVar67);
      auVar59 = aesenc(auVar59,auVar67);
      auVar62 = aesenc(auVar62,auVar67);
      auVar66 = aesenc(auVar66,auVar67);
      auVar37 = aesenc(auVar37,auVar35);
      auVar51 = aesenc(auVar51,auVar35);
      auVar63 = aesenc(auVar63,auVar35);
      auVar59 = aesenc(auVar59,auVar35);
      auVar62 = aesenc(auVar62,auVar35);
      auVar67 = param_4[3];
      auVar66 = aesenc(auVar66,auVar35);
      auVar35 = param_4[4];
      if (unaff_EBP != 0xb) {
        auVar37 = aesenc(auVar37,auVar67);
        auVar51 = aesenc(auVar51,auVar67);
        auVar63 = aesenc(auVar63,auVar67);
        auVar59 = aesenc(auVar59,auVar67);
        auVar62 = aesenc(auVar62,auVar67);
        auVar66 = aesenc(auVar66,auVar67);
        auVar37 = aesenc(auVar37,auVar35);
        auVar51 = aesenc(auVar51,auVar35);
        auVar63 = aesenc(auVar63,auVar35);
        auVar59 = aesenc(auVar59,auVar35);
        auVar62 = aesenc(auVar62,auVar35);
        auVar67 = param_4[5];
        auVar66 = aesenc(auVar66,auVar35);
        auVar35 = param_4[6];
      }
    }
    auVar45 = aesenc(auVar37,auVar67);
    auVar37 = vpalignr_avx(auVar5,auVar5,8);
    in_ZMM8 = ZEXT1664(auVar37);
    auVar37 = aesenc(auVar51,auVar67);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar5._0_8_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulong *)(in_R11[1] + 8);
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar26 << uVar7;
      }
    }
    auVar36 = ZEXT1664(auVar5);
    auVar51 = aesenc(auVar63,auVar67);
    auVar46 = aesenc(auVar59,auVar67);
    pauVar1 = param_1 + 2;
    auVar52 = aesenc(auVar62,auVar67);
    pauVar2 = param_1 + 3;
    auVar57 = aesenc(auVar66,auVar67);
    pauVar3 = param_1 + 4;
    pauVar4 = param_1 + 5;
    auVar5 = *param_5;
    in_ZMM1 = ZEXT1664(auVar5);
    auVar63 = aesenclast(auVar45,auVar35 ^ *param_1);
    auVar62 = in_R11[2];
    auVar45 = aesenclast(auVar37,auVar35 ^ param_1[1]);
    auVar59 = vpaddb_avx(auVar5,auVar62);
    param_1 = param_1 + 6;
    auVar40 = aesenclast(auVar51,auVar35 ^ *pauVar1);
    auVar66 = vpaddb_avx(auVar59,auVar62);
    auVar67 = param_4[-8];
    auVar46 = aesenclast(auVar46,auVar35 ^ *pauVar2);
    auVar37 = vpaddb_avx(auVar66,auVar62);
    auVar52 = aesenclast(auVar52,auVar35 ^ *pauVar3);
    auVar51 = vpaddb_avx(auVar37,auVar62);
    auVar57 = aesenclast(auVar57,auVar35 ^ *pauVar4);
    auVar35 = vpaddb_avx(auVar51,auVar62);
    bVar34 = uVar33 < 6;
    uVar33 = uVar33 - 6;
    if (bVar34) break;
    *param_2 = auVar63;
    auVar5 = auVar5 ^ auVar67;
    param_2[1] = auVar45;
    param_2[2] = auVar40;
    param_2[3] = auVar46;
    param_2[4] = auVar52;
    param_2[5] = auVar57;
    param_2 = param_2 + 6;
  }
  return;
}

