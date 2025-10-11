
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order(ulong *param_1,undefined1 (*param_2) [16],long param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  ulong *puVar3;
  undefined1 (*pauVar4) [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 (*pauVar20) [16];
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 (*pauVar29) [32];
  undefined1 (*pauVar30) [32];
  long *plVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [32];
  undefined1 (*pauVar34) [32];
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined1 auVar46 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auStack_550 [1104];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  if ((DAT_0093e59c & 0x800) != 0) {
    auVar5 = vpshufb_avx(*param_2,_DAT_005fda40);
    auVar6 = vpshufb_avx(param_2[1],_DAT_005fda40);
    auVar7 = vpshufb_avx(param_2[2],_DAT_005fda40);
    auVar8 = vpshufb_avx(param_2[3],_DAT_005fda40);
    auVar9 = vpshufb_avx(param_2[4],_DAT_005fda40);
    auVar10 = vpshufb_avx(param_2[5],_DAT_005fda40);
    auVar11._8_8_ = DAT_005fd548;
    auVar11._0_8_ = K512;
    vpaddq_avx(auVar5,auVar11);
    auVar11 = vpshufb_avx(param_2[6],_DAT_005fda40);
    auVar12._8_8_ = DAT_005fd568;
    auVar12._0_8_ = DAT_005fd560;
    vpaddq_avx(auVar6,auVar12);
    auVar12 = vpshufb_avx(param_2[7],_DAT_005fda40);
    auVar47._8_8_ = DAT_005fd588;
    auVar47._0_8_ = DAT_005fd580;
    vpaddq_avx(auVar7,auVar47);
    auVar7._8_8_ = DAT_005fd5a8;
    auVar7._0_8_ = DAT_005fd5a0;
    vpaddq_avx(auVar8,auVar7);
    auVar8._8_8_ = DAT_005fd5c8;
    auVar8._0_8_ = DAT_005fd5c0;
    vpaddq_avx(auVar9,auVar8);
    auVar48._8_8_ = DAT_005fd5e8;
    auVar48._0_8_ = DAT_005fd5e0;
    vpaddq_avx(auVar10,auVar48);
    auVar51._8_8_ = DAT_005fd608;
    auVar51._0_8_ = DAT_005fd600;
    vpaddq_avx(auVar11,auVar51);
    auVar52._8_8_ = DAT_005fd628;
    auVar52._0_8_ = DAT_005fd620;
    vpaddq_avx(auVar12,auVar52);
    vpalignr_avx(auVar6,auVar5,8);
    vpalignr_avx(auVar10,auVar9,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_0093e5a0 & 0x128) == 0x128) {
    uVar28 = (ulong)auStack_550 & 0xfffffffffffff800;
    pauVar29 = (undefined1 (*) [32])(uVar28 + 0x480);
    *(ulong **)(uVar28 + 0x500) = param_1;
    *(undefined1 (**) [16])(uVar28 + 0x508) = param_2;
    *(undefined1 (**) [32])(uVar28 + 0x510) = (undefined1 (*) [32])(param_2 + param_3 * 8);
    *(BADSPACEBASE **)(uVar28 + 0x518) = register0x00000020;
    pauVar34 = (undefined1 (*) [32])(param_2 + 8);
    uVar23 = *param_1;
    uVar26 = param_1[1];
    uVar21 = param_1[2];
    pauVar33 = pauVar34;
    if (pauVar34 == (undefined1 (*) [32])(param_2 + param_3 * 8)) {
      pauVar33 = (undefined1 (*) [32])(uVar28 + 0x480);
    }
    uVar41 = param_1[3];
    uVar42 = param_1[4];
    uVar43 = param_1[5];
    uVar44 = param_1[6];
    uVar24 = param_1[7];
    do {
      auVar63._16_16_ = _UNK_005fda50;
      auVar63._0_16_ = _DAT_005fda40;
      auVar55._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])*pauVar33 +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar34[-4];
      auVar55._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])*pauVar33;
      auVar57._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(*pauVar33 + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar34[-4] + 0x10);
      auVar57._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(*pauVar33 + 0x10);
      auVar55 = vpshufb_avx2(auVar55,auVar63);
      auVar58._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])pauVar33[1] +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar34[-3];
      auVar58._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar33[1];
      auVar57 = vpshufb_avx2(auVar57,auVar63);
      auVar59._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(pauVar33[1] + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar34[-3] + 0x10);
      auVar59._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar33[1] + 0x10);
      auVar58 = vpshufb_avx2(auVar58,auVar63);
      auVar60._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])pauVar33[2] +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar34[-2];
      auVar60._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar33[2];
      auVar59 = vpshufb_avx2(auVar59,auVar63);
      auVar61._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(pauVar33[2] + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar34[-2] + 0x10);
      auVar61._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar33[2] + 0x10);
      auVar60 = vpshufb_avx2(auVar60,auVar63);
      auVar62._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])pauVar33[3] +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar34[-1];
      auVar62._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])pauVar33[3];
      auVar61 = vpshufb_avx2(auVar61,auVar63);
      auVar46._0_16_ =
           ZEXT116(0) * *(undefined1 (*) [16])(pauVar33[3] + 0x10) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar34[-1] + 0x10);
      auVar46._16_16_ =
           ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) +
           ZEXT116(1) * *(undefined1 (*) [16])(pauVar33[3] + 0x10);
      auVar13._8_8_ = DAT_005fd548;
      auVar13._0_8_ = K512;
      auVar13._16_16_ = _UNK_005fd550;
      auVar13 = vpaddq_avx2(auVar55,auVar13);
      auVar62 = vpshufb_avx2(auVar62,auVar63);
      auVar49._8_8_ = DAT_005fd568;
      auVar49._0_8_ = DAT_005fd560;
      auVar49._16_16_ = _UNK_005fd570;
      auVar49 = vpaddq_avx2(auVar57,auVar49);
      auVar63 = vpshufb_avx2(auVar46,auVar63);
      auVar50._8_8_ = DAT_005fd588;
      auVar50._0_8_ = DAT_005fd580;
      auVar50._16_16_ = _UNK_005fd590;
      auVar50 = vpaddq_avx2(auVar58,auVar50);
      auVar54._8_8_ = DAT_005fd5a8;
      auVar54._0_8_ = DAT_005fd5a0;
      auVar54._16_16_ = _UNK_005fd5b0;
      auVar54 = vpaddq_avx2(auVar59,auVar54);
      *pauVar29 = auVar13;
      auVar56._8_8_ = DAT_005fd5c8;
      auVar56._0_8_ = DAT_005fd5c0;
      auVar56._16_16_ = _UNK_005fd5d0;
      auVar13 = vpaddq_avx2(auVar60,auVar56);
      pauVar29[1] = auVar49;
      auVar66._8_8_ = DAT_005fd5e8;
      auVar66._0_8_ = DAT_005fd5e0;
      auVar66._16_16_ = _UNK_005fd5f0;
      auVar49 = vpaddq_avx2(auVar61,auVar66);
      pauVar29[2] = auVar50;
      auVar67._8_8_ = DAT_005fd608;
      auVar67._0_8_ = DAT_005fd600;
      auVar67._16_16_ = _UNK_005fd610;
      auVar50 = vpaddq_avx2(auVar62,auVar67);
      pauVar29[3] = auVar54;
      *(undefined8 *)(pauVar29[-5] + 0x18) = *(undefined8 *)(pauVar29[4] + 0x18);
      auVar19._8_8_ = DAT_005fd628;
      auVar19._0_8_ = DAT_005fd620;
      auVar19._16_16_ = _UNK_005fd630;
      auVar54 = vpaddq_avx2(auVar63,auVar19);
      pauVar29[-4] = auVar13;
      uVar45 = 0;
      pauVar29[-3] = auVar49;
      pauVar29[-2] = auVar50;
      uVar40 = uVar26 ^ uVar21;
      pauVar29[-1] = auVar54;
      pauVar29 = pauVar29 + -4;
      pauVar33 = (undefined1 (*) [32])&DAT_005fd6c0;
      do {
        pauVar30 = pauVar29;
        *(undefined8 *)(pauVar30[-5] + 0x18) = *(undefined8 *)(pauVar30[-1] + 0x18);
        auVar49 = vpalignr_avx2(auVar57,auVar55,8);
        auVar13 = vpalignr_avx2(auVar61,auVar60,8);
        uVar23 = uVar23 + uVar45;
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar55,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar24 + *(long *)pauVar30[4] + (uVar43 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 << 0x17) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        auVar55 = vpsrlq_avx2(auVar54,7);
        uVar41 = uVar41 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar63,6);
        auVar56 = vpsllq_avx2(auVar63,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar55 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar63,0x13);
        uVar24 = lVar39 + (uVar40 & (uVar23 ^ uVar26) ^ uVar26) +
                 ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x27 | uVar23 * 0x2000000) ^
                 (uVar23 >> 0x1c | uVar23 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar44 + *(long *)(pauVar30[4] + 8) + (uVar42 & uVar41) + (~uVar41 & uVar43) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar55 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar21 = uVar21 + lVar39;
        auVar13 = vpaddq_avx2(auVar55,pauVar33[-4]);
        pauVar30[-4] = auVar13;
        auVar49 = vpalignr_avx2(auVar58,auVar57,8);
        auVar13 = vpalignr_avx2(auVar62,auVar61,8);
        uVar44 = lVar39 + ((uVar23 ^ uVar26) & (uVar24 ^ uVar23) ^ uVar23) +
                 ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x27 | uVar24 * 0x2000000) ^
                 (uVar24 >> 0x1c | uVar24 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar57,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar43 + *(long *)pauVar30[5] + (uVar41 & uVar21) + (~uVar21 & uVar42) +
                 ((uVar21 >> 0x29 | uVar21 * 0x800000) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
                 (uVar21 >> 0xe | uVar21 << 0x32));
        auVar57 = vpsrlq_avx2(auVar54,7);
        uVar26 = uVar26 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar55,6);
        auVar56 = vpsllq_avx2(auVar55,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar57 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar55,0x13);
        uVar43 = lVar39 + ((uVar24 ^ uVar23) & (uVar44 ^ uVar24) ^ uVar24) +
                 ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar42 + *(long *)(pauVar30[5] + 8) + (uVar21 & uVar26) + (~uVar26 & uVar41) +
                 ((uVar26 >> 0x29 | uVar26 * 0x800000) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
                 (uVar26 >> 0xe | uVar26 << 0x32));
        auVar57 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar23 = uVar23 + lVar39;
        auVar13 = vpaddq_avx2(auVar57,pauVar33[-3]);
        pauVar30[-3] = auVar13;
        auVar49 = vpalignr_avx2(auVar59,auVar58,8);
        auVar13 = vpalignr_avx2(auVar63,auVar62,8);
        uVar42 = lVar39 + ((uVar44 ^ uVar24) & (uVar43 ^ uVar44) ^ uVar44) +
                 ((uVar43 >> 0x22 | uVar43 * 0x40000000) ^ (uVar43 >> 0x27 | uVar43 * 0x2000000) ^
                 (uVar43 >> 0x1c | uVar43 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar58,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar41 + *(long *)pauVar30[6] + (uVar26 & uVar23) + (~uVar23 & uVar21) +
                 ((uVar23 >> 0x29 | uVar23 * 0x800000) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
                 (uVar23 >> 0xe | uVar23 << 0x32));
        auVar58 = vpsrlq_avx2(auVar54,7);
        uVar24 = uVar24 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar57,6);
        auVar56 = vpsllq_avx2(auVar57,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar58 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar57,0x13);
        uVar41 = lVar39 + ((uVar43 ^ uVar44) & (uVar42 ^ uVar43) ^ uVar43) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar21 + *(long *)(pauVar30[6] + 8) + (uVar23 & uVar24) + (~uVar24 & uVar26) +
                 ((uVar24 >> 0x29 | uVar24 * 0x800000) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
                 (uVar24 >> 0xe | uVar24 << 0x32));
        auVar58 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar44 = uVar44 + lVar39;
        auVar13 = vpaddq_avx2(auVar58,pauVar33[-2]);
        pauVar30[-2] = auVar13;
        auVar49 = vpalignr_avx2(auVar60,auVar59,8);
        auVar13 = vpalignr_avx2(auVar55,auVar63,8);
        uVar21 = lVar39 + ((uVar42 ^ uVar43) & (uVar41 ^ uVar42) ^ uVar42) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar59,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar26 + *(long *)pauVar30[7] + (uVar24 & uVar44) + (~uVar44 & uVar23) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar59 = vpsrlq_avx2(auVar54,7);
        uVar43 = uVar43 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar58,6);
        auVar56 = vpsllq_avx2(auVar58,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar59 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar58,0x13);
        uVar26 = lVar39 + ((uVar41 ^ uVar42) & (uVar21 ^ uVar41) ^ uVar41) +
                 ((uVar21 >> 0x22 | uVar21 * 0x40000000) ^ (uVar21 >> 0x27 | uVar21 * 0x2000000) ^
                 (uVar21 >> 0x1c | uVar21 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar23 + *(long *)(pauVar30[7] + 8) + (uVar44 & uVar43) + (~uVar43 & uVar24) +
                 ((uVar43 >> 0x29 | uVar43 * 0x800000) ^ (uVar43 >> 0x12 | uVar43 << 0x2e) ^
                 (uVar43 >> 0xe | uVar43 << 0x32));
        auVar59 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar42 = uVar42 + lVar39;
        auVar13 = vpaddq_avx2(auVar59,pauVar33[-1]);
        pauVar30[-1] = auVar13;
        pauVar29 = pauVar30 + -8;
        *(undefined8 *)(pauVar30[-9] + 0x18) = *(undefined8 *)(pauVar30[-5] + 0x18);
        auVar49 = vpalignr_avx2(auVar61,auVar60,8);
        auVar13 = vpalignr_avx2(auVar57,auVar55,8);
        uVar23 = lVar39 + ((uVar21 ^ uVar41) & (uVar26 ^ uVar21) ^ uVar21) +
                 ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ (uVar26 >> 0x27 | uVar26 * 0x2000000) ^
                 (uVar26 >> 0x1c | uVar26 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar60,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar24 + *(long *)*pauVar30 + (uVar43 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        auVar60 = vpsrlq_avx2(auVar54,7);
        uVar41 = uVar41 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar59,6);
        auVar56 = vpsllq_avx2(auVar59,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar60 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar59,0x13);
        uVar24 = lVar39 + ((uVar26 ^ uVar21) & (uVar23 ^ uVar26) ^ uVar26) +
                 ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x27 | uVar23 * 0x2000000) ^
                 (uVar23 >> 0x1c | uVar23 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar44 + *(long *)(*pauVar30 + 8) + (uVar42 & uVar41) + (~uVar41 & uVar43) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar60 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar21 = uVar21 + lVar39;
        auVar13 = vpaddq_avx2(auVar60,*pauVar33);
        *pauVar29 = auVar13;
        auVar49 = vpalignr_avx2(auVar62,auVar61,8);
        auVar13 = vpalignr_avx2(auVar58,auVar57,8);
        uVar44 = lVar39 + ((uVar23 ^ uVar26) & (uVar24 ^ uVar23) ^ uVar23) +
                 ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x27 | uVar24 * 0x2000000) ^
                 (uVar24 >> 0x1c | uVar24 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar61,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar43 + *(long *)pauVar30[1] + (uVar41 & uVar21) + (~uVar21 & uVar42) +
                 ((uVar21 >> 0x29 | uVar21 * 0x800000) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
                 (uVar21 >> 0xe | uVar21 << 0x32));
        auVar61 = vpsrlq_avx2(auVar54,7);
        uVar26 = uVar26 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar60,6);
        auVar56 = vpsllq_avx2(auVar60,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar61 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar60,0x13);
        uVar43 = lVar39 + ((uVar24 ^ uVar23) & (uVar44 ^ uVar24) ^ uVar24) +
                 ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar42 + *(long *)(pauVar30[1] + 8) + (uVar21 & uVar26) + (~uVar26 & uVar41) +
                 ((uVar26 >> 0x29 | uVar26 * 0x800000) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
                 (uVar26 >> 0xe | uVar26 << 0x32));
        auVar61 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar23 = uVar23 + lVar39;
        auVar13 = vpaddq_avx2(auVar61,pauVar33[1]);
        pauVar30[-7] = auVar13;
        auVar49 = vpalignr_avx2(auVar63,auVar62,8);
        auVar13 = vpalignr_avx2(auVar59,auVar58,8);
        uVar42 = lVar39 + ((uVar44 ^ uVar24) & (uVar43 ^ uVar44) ^ uVar44) +
                 ((uVar43 >> 0x22 | uVar43 * 0x40000000) ^ (uVar43 >> 0x27 | uVar43 * 0x2000000) ^
                 (uVar43 >> 0x1c | uVar43 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar62,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar41 + *(long *)pauVar30[2] + (uVar26 & uVar23) + (~uVar23 & uVar21) +
                 ((uVar23 >> 0x29 | uVar23 * 0x800000) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
                 (uVar23 >> 0xe | uVar23 << 0x32));
        auVar62 = vpsrlq_avx2(auVar54,7);
        uVar24 = uVar24 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar61,6);
        auVar56 = vpsllq_avx2(auVar61,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar62 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar61,0x13);
        uVar41 = lVar39 + ((uVar43 ^ uVar44) & (uVar42 ^ uVar43) ^ uVar43) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar21 + *(long *)(pauVar30[2] + 8) + (uVar23 & uVar24) + (~uVar24 & uVar26) +
                 ((uVar24 >> 0x29 | uVar24 * 0x800000) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
                 (uVar24 >> 0xe | uVar24 << 0x32));
        auVar62 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar44 = uVar44 + lVar39;
        auVar13 = vpaddq_avx2(auVar62,pauVar33[2]);
        pauVar30[-6] = auVar13;
        auVar49 = vpalignr_avx2(auVar55,auVar63,8);
        auVar13 = vpalignr_avx2(auVar60,auVar59,8);
        uVar21 = lVar39 + ((uVar42 ^ uVar43) & (uVar41 ^ uVar42) ^ uVar42) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar54 = vpsrlq_avx2(auVar49,1);
        auVar13 = vpaddq_avx2(auVar63,auVar13);
        auVar66 = vpsrlq_avx2(auVar49,7);
        auVar49 = vpsllq_avx2(auVar49,0x38);
        lVar39 = uVar26 + *(long *)pauVar30[3] + (uVar24 & uVar44) + (~uVar44 & uVar23) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar63 = vpsrlq_avx2(auVar54,7);
        uVar43 = uVar43 + lVar39;
        auVar50 = vpsllq_avx2(auVar49,7);
        auVar67 = vpsrlq_avx2(auVar62,6);
        auVar56 = vpsllq_avx2(auVar62,3);
        auVar13 = vpaddq_avx2(auVar13,auVar66 ^ auVar54 ^ auVar49 ^ auVar63 ^ auVar50);
        auVar49 = vpsrlq_avx2(auVar62,0x13);
        uVar26 = lVar39 + ((uVar41 ^ uVar42) & (uVar21 ^ uVar41) ^ uVar41) +
                 ((uVar21 >> 0x22 | uVar21 * 0x40000000) ^ (uVar21 >> 0x27 | uVar21 * 0x2000000) ^
                 (uVar21 >> 0x1c | uVar21 << 0x24));
        auVar54 = vpsllq_avx2(auVar56,0x2a);
        auVar50 = vpsrlq_avx2(auVar49,0x2a);
        lVar39 = uVar23 + *(long *)(pauVar30[3] + 8) + (uVar44 & uVar43) + (~uVar43 & uVar24) +
                 ((uVar43 >> 0x29 | uVar43 * 0x800000) ^ (uVar43 >> 0x12 | uVar43 << 0x2e) ^
                 (uVar43 >> 0xe | uVar43 << 0x32));
        uVar40 = uVar26 ^ uVar21;
        auVar63 = vpaddq_avx2(auVar13,auVar67 ^ auVar56 ^ auVar49 ^ auVar54 ^ auVar50);
        uVar42 = uVar42 + lVar39;
        auVar13 = vpaddq_avx2(auVar63,pauVar33[3]);
        uVar45 = (uVar26 >> 0x22 | uVar26 * 0x40000000) ^ (uVar26 >> 0x27 | uVar26 * 0x2000000) ^
                 (uVar26 >> 0x1c | uVar26 << 0x24);
        uVar23 = lVar39 + ((uVar21 ^ uVar41) & uVar40 ^ uVar21);
        pauVar30[-5] = auVar13;
        pauVar4 = pauVar33 + 4;
        pauVar33 = pauVar33 + 8;
      } while (*(char *)((long)*pauVar4 + 7) != '\0');
      uVar23 = uVar23 + uVar45;
      lVar39 = uVar24 + *(long *)pauVar30[-4] + (uVar43 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar41 = uVar41 + lVar39;
      uVar24 = lVar39 + (uVar40 & (uVar23 ^ uVar26) ^ uVar26) +
               ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x27 | uVar23 * 0x2000000) ^
               (uVar23 >> 0x1c | uVar23 << 0x24));
      lVar39 = uVar44 + *(long *)(pauVar30[-4] + 8) + (uVar42 & uVar41) + (~uVar41 & uVar43) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar21 = uVar21 + lVar39;
      uVar44 = lVar39 + ((uVar23 ^ uVar26) & (uVar24 ^ uVar23) ^ uVar23) +
               ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x27 | uVar24 * 0x2000000) ^
               (uVar24 >> 0x1c | uVar24 << 0x24));
      lVar39 = uVar43 + *(long *)pauVar30[-3] + (uVar41 & uVar21) + (~uVar21 & uVar42) +
               ((uVar21 >> 0x29 | uVar21 * 0x800000) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
               (uVar21 >> 0xe | uVar21 << 0x32));
      uVar26 = uVar26 + lVar39;
      uVar43 = lVar39 + ((uVar24 ^ uVar23) & (uVar44 ^ uVar24) ^ uVar24) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24));
      lVar39 = uVar42 + *(long *)(pauVar30[-3] + 8) + (uVar21 & uVar26) + (~uVar26 & uVar41) +
               ((uVar26 >> 0x29 | uVar26 * 0x800000) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
               (uVar26 >> 0xe | uVar26 << 0x32));
      uVar23 = uVar23 + lVar39;
      uVar42 = lVar39 + ((uVar44 ^ uVar24) & (uVar43 ^ uVar44) ^ uVar44) +
               ((uVar43 >> 0x22 | uVar43 * 0x40000000) ^ (uVar43 >> 0x27 | uVar43 * 0x2000000) ^
               (uVar43 >> 0x1c | uVar43 << 0x24));
      lVar39 = uVar41 + *(long *)pauVar30[-2] + (uVar26 & uVar23) + (~uVar23 & uVar21) +
               ((uVar23 >> 0x29 | uVar23 * 0x800000) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
               (uVar23 >> 0xe | uVar23 << 0x32));
      uVar24 = uVar24 + lVar39;
      uVar41 = lVar39 + ((uVar43 ^ uVar44) & (uVar42 ^ uVar43) ^ uVar43) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar39 = uVar21 + *(long *)(pauVar30[-2] + 8) + (uVar23 & uVar24) + (~uVar24 & uVar26) +
               ((uVar24 >> 0x29 | uVar24 * 0x800000) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
               (uVar24 >> 0xe | uVar24 << 0x32));
      uVar44 = uVar44 + lVar39;
      uVar21 = lVar39 + ((uVar42 ^ uVar43) & (uVar41 ^ uVar42) ^ uVar42) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar39 = uVar26 + *(long *)pauVar30[-1] + (uVar24 & uVar44) + (~uVar44 & uVar23) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar43 = uVar43 + lVar39;
      uVar26 = lVar39 + ((uVar41 ^ uVar42) & (uVar21 ^ uVar41) ^ uVar41) +
               ((uVar21 >> 0x22 | uVar21 * 0x40000000) ^ (uVar21 >> 0x27 | uVar21 * 0x2000000) ^
               (uVar21 >> 0x1c | uVar21 << 0x24));
      lVar39 = uVar23 + *(long *)(pauVar30[-1] + 8) + (uVar44 & uVar43) + (~uVar43 & uVar24) +
               ((uVar43 >> 0x29 | uVar43 * 0x800000) ^ (uVar43 >> 0x12 | uVar43 << 0x2e) ^
               (uVar43 >> 0xe | uVar43 << 0x32));
      uVar42 = uVar42 + lVar39;
      uVar23 = lVar39 + ((uVar21 ^ uVar41) & (uVar26 ^ uVar21) ^ uVar21) +
               ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ (uVar26 >> 0x27 | uVar26 * 0x2000000) ^
               (uVar26 >> 0x1c | uVar26 << 0x24));
      lVar39 = uVar24 + *(long *)*pauVar29 + (uVar43 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar41 = uVar41 + lVar39;
      uVar24 = lVar39 + ((uVar26 ^ uVar21) & (uVar23 ^ uVar26) ^ uVar26) +
               ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x27 | uVar23 * 0x2000000) ^
               (uVar23 >> 0x1c | uVar23 << 0x24));
      lVar39 = uVar44 + *(long *)(pauVar30[-8] + 8) + (uVar42 & uVar41) + (~uVar41 & uVar43) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar21 = uVar21 + lVar39;
      uVar44 = lVar39 + ((uVar23 ^ uVar26) & (uVar24 ^ uVar23) ^ uVar23) +
               ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x27 | uVar24 * 0x2000000) ^
               (uVar24 >> 0x1c | uVar24 << 0x24));
      lVar39 = uVar43 + *(long *)pauVar30[-7] + (uVar41 & uVar21) + (~uVar21 & uVar42) +
               ((uVar21 >> 0x29 | uVar21 * 0x800000) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
               (uVar21 >> 0xe | uVar21 << 0x32));
      uVar26 = uVar26 + lVar39;
      uVar43 = lVar39 + ((uVar24 ^ uVar23) & (uVar44 ^ uVar24) ^ uVar24) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24));
      lVar39 = uVar42 + *(long *)(pauVar30[-7] + 8) + (uVar21 & uVar26) + (~uVar26 & uVar41) +
               ((uVar26 >> 0x29 | uVar26 * 0x800000) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
               (uVar26 >> 0xe | uVar26 << 0x32));
      uVar23 = uVar23 + lVar39;
      uVar42 = lVar39 + ((uVar44 ^ uVar24) & (uVar43 ^ uVar44) ^ uVar44) +
               ((uVar43 >> 0x22 | uVar43 * 0x40000000) ^ (uVar43 >> 0x27 | uVar43 * 0x2000000) ^
               (uVar43 >> 0x1c | uVar43 << 0x24));
      lVar39 = uVar41 + *(long *)pauVar30[-6] + (uVar26 & uVar23) + (~uVar23 & uVar21) +
               ((uVar23 >> 0x29 | uVar23 * 0x800000) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
               (uVar23 >> 0xe | uVar23 << 0x32));
      uVar24 = uVar24 + lVar39;
      uVar41 = lVar39 + ((uVar43 ^ uVar44) & (uVar42 ^ uVar43) ^ uVar43) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar39 = uVar21 + *(long *)(pauVar30[-6] + 8) + (uVar23 & uVar24) + (~uVar24 & uVar26) +
               ((uVar24 >> 0x29 | uVar24 * 0x800000) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
               (uVar24 >> 0xe | uVar24 << 0x32));
      uVar44 = uVar44 + lVar39;
      uVar21 = lVar39 + ((uVar42 ^ uVar43) & (uVar41 ^ uVar42) ^ uVar42) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar39 = uVar26 + *(long *)pauVar30[-5] + (uVar24 & uVar44) + (~uVar44 & uVar23) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar43 = uVar43 + lVar39;
      uVar26 = lVar39 + ((uVar41 ^ uVar42) & (uVar21 ^ uVar41) ^ uVar41) +
               ((uVar21 >> 0x22 | uVar21 * 0x40000000) ^ (uVar21 >> 0x27 | uVar21 * 0x2000000) ^
               (uVar21 >> 0x1c | uVar21 << 0x24));
      lVar39 = uVar23 + *(long *)(pauVar30[-5] + 8) + (uVar44 & uVar43) + (~uVar43 & uVar24) +
               ((uVar43 >> 0x29 | uVar43 * 0x800000) ^ (uVar43 >> 0x12 | uVar43 << 0x2e) ^
               (uVar43 >> 0xe | uVar43 << 0x32));
      plVar31 = *(long **)pauVar30[0x20];
      pauVar33 = pauVar30 + 0x1c;
      lVar22 = lVar39 + ((uVar21 ^ uVar41) & (uVar26 ^ uVar21) ^ uVar21) +
               ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ (uVar26 >> 0x27 | uVar26 * 0x2000000) ^
               (uVar26 >> 0x1c | uVar26 << 0x24)) + *plVar31;
      uVar26 = uVar26 + plVar31[1];
      uVar21 = uVar21 + plVar31[2];
      uVar41 = uVar41 + plVar31[3];
      uVar42 = uVar42 + lVar39 + plVar31[4];
      uVar43 = uVar43 + plVar31[5];
      uVar44 = uVar44 + plVar31[6];
      uVar24 = uVar24 + plVar31[7];
      *plVar31 = lVar22;
      plVar31[1] = uVar26;
      plVar31[2] = uVar21;
      plVar31[3] = uVar41;
      plVar31[4] = uVar42;
      plVar31[5] = uVar43;
      plVar31[6] = uVar44;
      plVar31[7] = uVar24;
      if (pauVar34 == *(undefined1 (**) [32])(pauVar30[0x20] + 0x10)) {
        return;
      }
      uVar23 = 0;
      uVar40 = uVar26 ^ uVar21;
      do {
        uVar23 = lVar22 + uVar23;
        lVar39 = uVar24 + *(long *)(*pauVar33 + 0x10) + (uVar43 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 << 0x17) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        uVar41 = uVar41 + lVar39;
        uVar24 = lVar39 + (uVar40 & (uVar23 ^ uVar26) ^ uVar26) +
                 ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ (uVar23 >> 0x27 | uVar23 * 0x2000000) ^
                 (uVar23 >> 0x1c | uVar23 << 0x24));
        lVar39 = uVar44 + *(long *)(*pauVar33 + 0x18) + (uVar42 & uVar41) + (~uVar41 & uVar43) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        uVar21 = uVar21 + lVar39;
        uVar44 = lVar39 + ((uVar23 ^ uVar26) & (uVar24 ^ uVar23) ^ uVar23) +
                 ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ (uVar24 >> 0x27 | uVar24 * 0x2000000) ^
                 (uVar24 >> 0x1c | uVar24 << 0x24));
        lVar39 = uVar43 + *(long *)(pauVar33[1] + 0x10) + (uVar41 & uVar21) + (~uVar21 & uVar42) +
                 ((uVar21 >> 0x29 | uVar21 * 0x800000) ^ (uVar21 >> 0x12 | uVar21 << 0x2e) ^
                 (uVar21 >> 0xe | uVar21 << 0x32));
        uVar26 = uVar26 + lVar39;
        uVar43 = lVar39 + ((uVar24 ^ uVar23) & (uVar44 ^ uVar24) ^ uVar24) +
                 ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24));
        lVar39 = uVar42 + *(long *)(pauVar33[1] + 0x18) + (uVar21 & uVar26) + (~uVar26 & uVar41) +
                 ((uVar26 >> 0x29 | uVar26 * 0x800000) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
                 (uVar26 >> 0xe | uVar26 << 0x32));
        uVar23 = uVar23 + lVar39;
        uVar42 = lVar39 + ((uVar44 ^ uVar24) & (uVar43 ^ uVar44) ^ uVar44) +
                 ((uVar43 >> 0x22 | uVar43 * 0x40000000) ^ (uVar43 >> 0x27 | uVar43 * 0x2000000) ^
                 (uVar43 >> 0x1c | uVar43 << 0x24));
        lVar39 = uVar41 + *(long *)(pauVar33[2] + 0x10) + (uVar26 & uVar23) + (~uVar23 & uVar21) +
                 ((uVar23 >> 0x29 | uVar23 * 0x800000) ^ (uVar23 >> 0x12 | uVar23 << 0x2e) ^
                 (uVar23 >> 0xe | uVar23 << 0x32));
        uVar24 = uVar24 + lVar39;
        uVar41 = lVar39 + ((uVar43 ^ uVar44) & (uVar42 ^ uVar43) ^ uVar43) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        lVar39 = uVar21 + *(long *)(pauVar33[2] + 0x18) + (uVar23 & uVar24) + (~uVar24 & uVar26) +
                 ((uVar24 >> 0x29 | uVar24 * 0x800000) ^ (uVar24 >> 0x12 | uVar24 << 0x2e) ^
                 (uVar24 >> 0xe | uVar24 << 0x32));
        uVar44 = uVar44 + lVar39;
        uVar21 = lVar39 + ((uVar42 ^ uVar43) & (uVar41 ^ uVar42) ^ uVar42) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        lVar39 = uVar26 + *(long *)(pauVar33[3] + 0x10) + (uVar24 & uVar44) + (~uVar44 & uVar23) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        uVar43 = uVar43 + lVar39;
        uVar26 = lVar39 + ((uVar41 ^ uVar42) & (uVar21 ^ uVar41) ^ uVar41) +
                 ((uVar21 >> 0x22 | uVar21 * 0x40000000) ^ (uVar21 >> 0x27 | uVar21 * 0x2000000) ^
                 (uVar21 >> 0x1c | uVar21 << 0x24));
        lVar22 = uVar23 + *(long *)(pauVar33[3] + 0x18) + (uVar44 & uVar43) + (~uVar43 & uVar24) +
                 ((uVar43 >> 0x29 | uVar43 * 0x800000) ^ (uVar43 >> 0x12 | uVar43 << 0x2e) ^
                 (uVar43 >> 0xe | uVar43 << 0x32));
        uVar40 = uVar26 ^ uVar21;
        uVar42 = uVar42 + lVar22;
        uVar23 = (uVar26 >> 0x22 | uVar26 * 0x40000000) ^ (uVar26 >> 0x27 | uVar26 * 0x2000000) ^
                 (uVar26 >> 0x1c | uVar26 << 0x24);
        lVar22 = lVar22 + ((uVar21 ^ uVar41) & uVar40 ^ uVar21);
        pauVar33 = pauVar33 + -4;
      } while (pauVar29 <= pauVar33);
      puVar3 = *(ulong **)pauVar30[0x20];
      pauVar29 = pauVar30 + 0x1c;
      uVar23 = lVar22 + uVar23 + *puVar3;
      uVar26 = uVar26 + puVar3[1];
      uVar21 = uVar21 + puVar3[2];
      uVar41 = uVar41 + puVar3[3];
      uVar42 = uVar42 + puVar3[4];
      uVar43 = uVar43 + puVar3[5];
      pauVar34 = pauVar34 + 8;
      uVar44 = uVar44 + puVar3[6];
      uVar24 = uVar24 + puVar3[7];
      pauVar4 = *(undefined1 (**) [32])(pauVar30[0x20] + 0x10);
      *puVar3 = uVar23;
      pauVar33 = pauVar34;
      if (pauVar34 == pauVar4) {
        pauVar33 = pauVar29;
      }
      puVar3[1] = uVar26;
      puVar3[2] = uVar21;
      puVar3[3] = uVar41;
      puVar3[4] = uVar42;
      puVar3[5] = uVar43;
      puVar3[6] = uVar44;
      puVar3[7] = uVar24;
    } while (pauVar34 <= pauVar4);
    return;
  }
  if ((DAT_0093e59c & 0x10000200 | OPENSSL_ia32cap_P & 0x40000000) != 0x50000200) {
    pauVar2 = param_2 + param_3 * 8;
    uVar21 = *param_1;
    uVar26 = param_1[1];
    uVar23 = param_1[2];
    uVar24 = param_1[3];
    uVar44 = param_1[4];
    uVar43 = param_1[5];
    uVar42 = param_1[6];
    uVar41 = param_1[7];
    do {
      uVar40 = *(ulong *)*param_2;
      local_100._0_8_ =
           uVar40 >> 0x38 | (uVar40 & 0xff000000000000) >> 0x28 | (uVar40 & 0xff0000000000) >> 0x18
           | (uVar40 & 0xff00000000) >> 8 | (uVar40 & 0xff000000) << 8 | (uVar40 & 0xff0000) << 0x18
           | (uVar40 & 0xff00) << 0x28 | uVar40 << 0x38;
      uVar40 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar45 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar44;
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar21;
      lVar39 = local_100._0_8_ + uVar41 + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) + K512 +
               (uVar40 >> 0xe | uVar40 << 0x32);
      uVar24 = uVar24 + lVar39;
      uVar38 = (uVar26 ^ (uVar26 ^ uVar23) & (uVar21 ^ uVar26)) + lVar39 +
               (uVar45 >> 0x1c | uVar45 << 0x24);
      uVar41 = *(ulong *)(*param_2 + 8);
      local_100._8_8_ =
           uVar41 >> 0x38 | (uVar41 & 0xff000000000000) >> 0x28 | (uVar41 & 0xff0000000000) >> 0x18
           | (uVar41 & 0xff00000000) >> 8 | (uVar41 & 0xff000000) << 8 | (uVar41 & 0xff0000) << 0x18
           | (uVar41 & 0xff00) << 0x28 | uVar41 << 0x38;
      uVar41 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
      uVar40 = (uVar38 >> 5 | uVar38 << 0x3b) ^ uVar38;
      uVar41 = (uVar41 >> 4 | uVar41 << 0x3c) ^ uVar24;
      uVar40 = (uVar40 >> 6 | uVar40 << 0x3a) ^ uVar38;
      lVar39 = local_100._8_8_ + uVar42 + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) + DAT_005fd548 +
               (uVar41 >> 0xe | uVar41 << 0x32);
      uVar23 = uVar23 + lVar39;
      uVar37 = (uVar21 ^ (uVar21 ^ uVar26) & (uVar38 ^ uVar21)) + lVar39 +
               (uVar40 >> 0x1c | uVar40 << 0x24);
      uVar42 = *(ulong *)param_2[1];
      local_f0._0_8_ =
           uVar42 >> 0x38 | (uVar42 & 0xff000000000000) >> 0x28 | (uVar42 & 0xff0000000000) >> 0x18
           | (uVar42 & 0xff00000000) >> 8 | (uVar42 & 0xff000000) << 8 | (uVar42 & 0xff0000) << 0x18
           | (uVar42 & 0xff00) << 0x28 | uVar42 << 0x38;
      uVar42 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      uVar41 = (uVar37 >> 5 | uVar37 << 0x3b) ^ uVar37;
      uVar42 = (uVar42 >> 4 | uVar42 << 0x3c) ^ uVar23;
      uVar41 = (uVar41 >> 6 | uVar41 << 0x3a) ^ uVar37;
      lVar39 = local_f0._0_8_ + uVar43 + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) + DAT_005fd560 +
               (uVar42 >> 0xe | uVar42 << 0x32);
      uVar26 = uVar26 + lVar39;
      uVar36 = (uVar38 ^ (uVar38 ^ uVar21) & (uVar37 ^ uVar38)) + lVar39 +
               (uVar41 >> 0x1c | uVar41 << 0x24);
      uVar43 = *(ulong *)(param_2[1] + 8);
      local_f0._8_8_ =
           uVar43 >> 0x38 | (uVar43 & 0xff000000000000) >> 0x28 | (uVar43 & 0xff0000000000) >> 0x18
           | (uVar43 & 0xff00000000) >> 8 | (uVar43 & 0xff000000) << 8 | (uVar43 & 0xff0000) << 0x18
           | (uVar43 & 0xff00) << 0x28 | uVar43 << 0x38;
      uVar43 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
      uVar42 = (uVar36 >> 5 | uVar36 << 0x3b) ^ uVar36;
      uVar43 = (uVar43 >> 4 | uVar43 << 0x3c) ^ uVar26;
      uVar42 = (uVar42 >> 6 | uVar42 << 0x3a) ^ uVar36;
      lVar39 = local_f0._8_8_ + uVar44 + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) + DAT_005fd568 +
               (uVar43 >> 0xe | uVar43 << 0x32);
      uVar21 = uVar21 + lVar39;
      uVar35 = (uVar37 ^ (uVar37 ^ uVar38) & (uVar36 ^ uVar37)) + lVar39 +
               (uVar42 >> 0x1c | uVar42 << 0x24);
      uVar44 = *(ulong *)param_2[2];
      local_e0._0_8_ =
           uVar44 >> 0x38 | (uVar44 & 0xff000000000000) >> 0x28 | (uVar44 & 0xff0000000000) >> 0x18
           | (uVar44 & 0xff00000000) >> 8 | (uVar44 & 0xff000000) << 8 | (uVar44 & 0xff0000) << 0x18
           | (uVar44 & 0xff00) << 0x28 | uVar44 << 0x38;
      uVar44 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      uVar43 = (uVar35 >> 5 | uVar35 << 0x3b) ^ uVar35;
      uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar21;
      uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar35;
      lVar39 = local_e0._0_8_ + uVar24 + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) + DAT_005fd580 +
               (uVar44 >> 0xe | uVar44 << 0x32);
      uVar38 = uVar38 + lVar39;
      uVar25 = (uVar36 ^ (uVar36 ^ uVar37) & (uVar35 ^ uVar36)) + lVar39 +
               (uVar43 >> 0x1c | uVar43 << 0x24);
      uVar24 = *(ulong *)(param_2[2] + 8);
      local_e0._8_8_ =
           uVar24 >> 0x38 | (uVar24 & 0xff000000000000) >> 0x28 | (uVar24 & 0xff0000000000) >> 0x18
           | (uVar24 & 0xff00000000) >> 8 | (uVar24 & 0xff000000) << 8 | (uVar24 & 0xff0000) << 0x18
           | (uVar24 & 0xff00) << 0x28 | uVar24 << 0x38;
      uVar24 = (uVar38 >> 0x17 | uVar38 << 0x29) ^ uVar38;
      uVar44 = (uVar25 >> 5 | uVar25 << 0x3b) ^ uVar25;
      uVar24 = (uVar24 >> 4 | uVar24 << 0x3c) ^ uVar38;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar25;
      lVar39 = local_e0._8_8_ + uVar23 + ((uVar21 ^ uVar26) & uVar38 ^ uVar26) + DAT_005fd588 +
               (uVar24 >> 0xe | uVar24 << 0x32);
      uVar37 = uVar37 + lVar39;
      uVar45 = (uVar35 ^ (uVar35 ^ uVar36) & (uVar25 ^ uVar35)) + lVar39 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar23 = *(ulong *)param_2[3];
      local_d0._0_8_ =
           uVar23 >> 0x38 | (uVar23 & 0xff000000000000) >> 0x28 | (uVar23 & 0xff0000000000) >> 0x18
           | (uVar23 & 0xff00000000) >> 8 | (uVar23 & 0xff000000) << 8 | (uVar23 & 0xff0000) << 0x18
           | (uVar23 & 0xff00) << 0x28 | uVar23 << 0x38;
      uVar23 = (uVar37 >> 0x17 | uVar37 << 0x29) ^ uVar37;
      uVar24 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
      uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar37;
      uVar24 = (uVar24 >> 6 | uVar24 << 0x3a) ^ uVar45;
      lVar39 = local_d0._0_8_ + uVar26 + ((uVar38 ^ uVar21) & uVar37 ^ uVar21) + DAT_005fd5a0 +
               (uVar23 >> 0xe | uVar23 << 0x32);
      uVar36 = uVar36 + lVar39;
      uVar27 = (uVar25 ^ (uVar25 ^ uVar35) & (uVar45 ^ uVar25)) + lVar39 +
               (uVar24 >> 0x1c | uVar24 << 0x24);
      uVar26 = *(ulong *)(param_2[3] + 8);
      local_d0._8_8_ =
           uVar26 >> 0x38 | (uVar26 & 0xff000000000000) >> 0x28 | (uVar26 & 0xff0000000000) >> 0x18
           | (uVar26 & 0xff00000000) >> 8 | (uVar26 & 0xff000000) << 8 | (uVar26 & 0xff0000) << 0x18
           | (uVar26 & 0xff00) << 0x28 | uVar26 << 0x38;
      uVar26 = (uVar36 >> 0x17 | uVar36 << 0x29) ^ uVar36;
      uVar23 = (uVar27 >> 5 | uVar27 << 0x3b) ^ uVar27;
      uVar26 = (uVar26 >> 4 | uVar26 << 0x3c) ^ uVar36;
      uVar23 = (uVar23 >> 6 | uVar23 << 0x3a) ^ uVar27;
      lVar39 = local_d0._8_8_ + uVar21 + ((uVar37 ^ uVar38) & uVar36 ^ uVar38) + DAT_005fd5a8 +
               (uVar26 >> 0xe | uVar26 << 0x32);
      uVar35 = uVar35 + lVar39;
      uVar40 = (uVar45 ^ (uVar45 ^ uVar25) & (uVar27 ^ uVar45)) + lVar39 +
               (uVar23 >> 0x1c | uVar23 << 0x24);
      uVar21 = *(ulong *)param_2[4];
      local_c0._0_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar35 >> 0x17 | uVar35 << 0x29) ^ uVar35;
      uVar26 = (uVar40 >> 5 | uVar40 << 0x3b) ^ uVar40;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar35;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar40;
      lVar39 = local_c0._0_8_ + uVar38 + ((uVar36 ^ uVar37) & uVar35 ^ uVar37) + DAT_005fd5c0 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar25 = uVar25 + lVar39;
      uVar41 = (uVar27 ^ (uVar27 ^ uVar45) & (uVar40 ^ uVar27)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)(param_2[4] + 8);
      local_c0._8_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar25 >> 0x17 | uVar25 << 0x29) ^ uVar25;
      uVar26 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar25;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar41;
      lVar39 = local_c0._8_8_ + uVar37 + ((uVar35 ^ uVar36) & uVar25 ^ uVar36) + DAT_005fd5c8 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar45 = uVar45 + lVar39;
      uVar42 = (uVar40 ^ (uVar40 ^ uVar27) & (uVar41 ^ uVar40)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)param_2[5];
      local_b0._0_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
      uVar26 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar45;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar42;
      lVar39 = local_b0._0_8_ + uVar36 + ((uVar25 ^ uVar35) & uVar45 ^ uVar35) + DAT_005fd5e0 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar27 = uVar27 + lVar39;
      uVar43 = (uVar41 ^ (uVar41 ^ uVar40) & (uVar42 ^ uVar41)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)(param_2[5] + 8);
      local_b0._8_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar27 >> 0x17 | uVar27 << 0x29) ^ uVar27;
      uVar26 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar27;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar43;
      lVar39 = local_b0._8_8_ + uVar35 + ((uVar45 ^ uVar25) & uVar27 ^ uVar25) + DAT_005fd5e8 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar40 = uVar40 + lVar39;
      uVar44 = (uVar42 ^ (uVar42 ^ uVar41) & (uVar43 ^ uVar42)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)param_2[6];
      local_a0._0_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar40 >> 0x17 | uVar40 << 0x29) ^ uVar40;
      uVar26 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar40;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar44;
      lVar39 = local_a0._0_8_ + uVar25 + ((uVar27 ^ uVar45) & uVar40 ^ uVar45) + DAT_005fd600 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar41 = uVar41 + lVar39;
      uVar24 = (uVar43 ^ (uVar43 ^ uVar42) & (uVar44 ^ uVar43)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)(param_2[6] + 8);
      local_a0._8_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      uVar26 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar41;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar24;
      lVar39 = local_a0._8_8_ + uVar45 + ((uVar40 ^ uVar27) & uVar41 ^ uVar27) + DAT_005fd608 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar42 = uVar42 + lVar39;
      uVar23 = (uVar44 ^ (uVar44 ^ uVar43) & (uVar24 ^ uVar44)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)param_2[7];
      local_90._0_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar26 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar42;
      uVar26 = (uVar26 >> 6 | uVar26 << 0x3a) ^ uVar23;
      lVar39 = local_90._0_8_ + uVar27 + ((uVar41 ^ uVar40) & uVar42 ^ uVar40) + DAT_005fd620 +
               (uVar21 >> 0xe | uVar21 << 0x32);
      uVar43 = uVar43 + lVar39;
      uVar26 = (uVar24 ^ (uVar24 ^ uVar44) & (uVar23 ^ uVar24)) + lVar39 +
               (uVar26 >> 0x1c | uVar26 << 0x24);
      uVar21 = *(ulong *)(param_2[7] + 8);
      local_90._8_8_ =
           uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 | (uVar21 & 0xff0000000000) >> 0x18
           | (uVar21 & 0xff00000000) >> 8 | (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18
           | (uVar21 & 0xff00) << 0x28 | uVar21 << 0x38;
      uVar21 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
      uVar45 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
      uVar25 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar43;
      uVar21 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar26;
      uVar45 = uVar26 ^ uVar23;
      uVar21 = uVar21 >> 0x1c | uVar21 << 0x24;
      lVar39 = local_90._8_8_ + uVar40 + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) + DAT_005fd628 +
               (uVar25 >> 0xe | uVar25 << 0x32);
      uVar44 = uVar44 + lVar39;
      lVar39 = (uVar23 ^ (uVar23 ^ uVar24) & uVar45) + lVar39;
      plVar31 = &DAT_005fd640;
      do {
        uVar21 = lVar39 + uVar21;
        uVar40 = ((ulong)local_100._8_8_ >> 7 | local_100._8_8_ << 0x39) ^ local_100._8_8_;
        uVar25 = ((ulong)local_90._0_8_ >> 0x2a | local_90._0_8_ << 0x16) ^ local_90._0_8_;
        local_100._0_8_ =
             ((ulong)local_100._8_8_ >> 7 ^ (uVar40 >> 1 | (ulong)((uVar40 & 1) != 0) << 0x3f)) +
             local_c0._8_8_ + local_100._0_8_ +
             ((uVar25 >> 0x13 | uVar25 << 0x2d) ^ (ulong)local_90._0_8_ >> 6);
        uVar40 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
        uVar25 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
        uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar44;
        uVar25 = (uVar25 >> 6 | uVar25 << 0x3a) ^ uVar21;
        lVar39 = local_100._0_8_ + uVar41 + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) + *plVar31 +
                 (uVar40 >> 0xe | uVar40 << 0x32);
        uVar24 = uVar24 + lVar39;
        uVar27 = (uVar26 ^ uVar45 & (uVar21 ^ uVar26)) + lVar39 + (uVar25 >> 0x1c | uVar25 << 0x24);
        uVar40 = ((ulong)local_f0._0_8_ >> 7 | local_f0._0_8_ << 0x39) ^ local_f0._0_8_;
        uVar41 = ((ulong)local_90._8_8_ >> 0x2a | local_90._8_8_ << 0x16) ^ local_90._8_8_;
        local_100._8_8_ =
             ((ulong)local_f0._0_8_ >> 7 ^ (uVar40 >> 1 | (ulong)((uVar40 & 1) != 0) << 0x3f)) +
             local_b0._0_8_ + local_100._8_8_ +
             ((uVar41 >> 0x13 | uVar41 << 0x2d) ^ (ulong)local_90._8_8_ >> 6);
        uVar41 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
        uVar40 = (uVar27 >> 5 | uVar27 << 0x3b) ^ uVar27;
        uVar41 = (uVar41 >> 4 | uVar41 << 0x3c) ^ uVar24;
        uVar40 = (uVar40 >> 6 | uVar40 << 0x3a) ^ uVar27;
        lVar39 = local_100._8_8_ + uVar42 + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) + plVar31[1] +
                 (uVar41 >> 0xe | uVar41 << 0x32);
        uVar23 = uVar23 + lVar39;
        uVar42 = (uVar21 ^ (uVar21 ^ uVar26) & (uVar27 ^ uVar21)) + lVar39 +
                 (uVar40 >> 0x1c | uVar40 << 0x24);
        uVar41 = ((ulong)local_f0._8_8_ >> 7 | local_f0._8_8_ << 0x39) ^ local_f0._8_8_;
        uVar40 = ((ulong)local_100._0_8_ >> 0x2a | local_100._0_8_ * 0x400000) ^ local_100._0_8_;
        local_f0._0_8_ =
             ((ulong)local_f0._8_8_ >> 7 ^ (uVar41 >> 1 | (ulong)((uVar41 & 1) != 0) << 0x3f)) +
             local_b0._8_8_ + local_f0._0_8_ +
             ((uVar40 >> 0x13 | uVar40 << 0x2d) ^ (ulong)local_100._0_8_ >> 6);
        uVar41 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
        uVar40 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar41 = (uVar41 >> 4 | uVar41 << 0x3c) ^ uVar23;
        uVar40 = (uVar40 >> 6 | uVar40 << 0x3a) ^ uVar42;
        lVar39 = local_f0._0_8_ + uVar43 + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) + plVar31[4] +
                 (uVar41 >> 0xe | uVar41 << 0x32);
        uVar26 = uVar26 + lVar39;
        uVar25 = (uVar27 ^ (uVar27 ^ uVar21) & (uVar42 ^ uVar27)) + lVar39 +
                 (uVar40 >> 0x1c | uVar40 << 0x24);
        uVar41 = ((ulong)local_e0._0_8_ >> 7 | local_e0._0_8_ << 0x39) ^ local_e0._0_8_;
        uVar43 = ((ulong)local_100._8_8_ >> 0x2a | local_100._8_8_ * 0x400000) ^ local_100._8_8_;
        local_f0._8_8_ =
             ((ulong)local_e0._0_8_ >> 7 ^ (uVar41 >> 1 | (ulong)((uVar41 & 1) != 0) << 0x3f)) +
             local_a0._0_8_ + local_f0._8_8_ +
             ((uVar43 >> 0x13 | uVar43 << 0x2d) ^ (ulong)local_100._8_8_ >> 6);
        uVar43 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
        uVar41 = (uVar25 >> 5 | uVar25 << 0x3b) ^ uVar25;
        uVar43 = (uVar43 >> 4 | uVar43 << 0x3c) ^ uVar26;
        uVar41 = (uVar41 >> 6 | uVar41 << 0x3a) ^ uVar25;
        lVar39 = local_f0._8_8_ + uVar44 + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) + plVar31[5] +
                 (uVar43 >> 0xe | uVar43 << 0x32);
        uVar21 = uVar21 + lVar39;
        uVar45 = (uVar42 ^ (uVar42 ^ uVar27) & (uVar25 ^ uVar42)) + lVar39 +
                 (uVar41 >> 0x1c | uVar41 << 0x24);
        uVar44 = ((ulong)local_e0._8_8_ >> 7 | local_e0._8_8_ << 0x39) ^ local_e0._8_8_;
        uVar43 = ((ulong)local_f0._0_8_ >> 0x2a | local_f0._0_8_ * 0x400000) ^ local_f0._0_8_;
        local_e0._0_8_ =
             ((ulong)local_e0._8_8_ >> 7 ^ (uVar44 >> 1 | (ulong)((uVar44 & 1) != 0) << 0x3f)) +
             local_a0._8_8_ + local_e0._0_8_ +
             ((uVar43 >> 0x13 | uVar43 << 0x2d) ^ (ulong)local_f0._0_8_ >> 6);
        uVar44 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
        uVar43 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
        uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar21;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar45;
        lVar39 = local_e0._0_8_ + uVar24 + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) + plVar31[8] +
                 (uVar44 >> 0xe | uVar44 << 0x32);
        uVar27 = uVar27 + lVar39;
        uVar24 = (uVar25 ^ (uVar25 ^ uVar42) & (uVar45 ^ uVar25)) + lVar39 +
                 (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar43 = ((ulong)local_d0._0_8_ >> 7 | local_d0._0_8_ << 0x39) ^ local_d0._0_8_;
        uVar44 = ((ulong)local_f0._8_8_ >> 0x2a | local_f0._8_8_ * 0x400000) ^ local_f0._8_8_;
        local_e0._8_8_ =
             ((ulong)local_d0._0_8_ >> 7 ^ (uVar43 >> 1 | (ulong)((uVar43 & 1) != 0) << 0x3f)) +
             local_90._0_8_ + local_e0._8_8_ +
             ((uVar44 >> 0x13 | uVar44 << 0x2d) ^ (ulong)local_f0._8_8_ >> 6);
        uVar44 = (uVar27 >> 0x17 | uVar27 << 0x29) ^ uVar27;
        uVar43 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
        uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar27;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar24;
        lVar39 = local_e0._8_8_ + uVar23 + ((uVar21 ^ uVar26) & uVar27 ^ uVar26) + plVar31[9] +
                 (uVar44 >> 0xe | uVar44 << 0x32);
        uVar42 = uVar42 + lVar39;
        uVar23 = (uVar45 ^ (uVar45 ^ uVar25) & (uVar24 ^ uVar45)) + lVar39 +
                 (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar44 = ((ulong)local_d0._8_8_ >> 7 | local_d0._8_8_ << 0x39) ^ local_d0._8_8_;
        uVar43 = ((ulong)local_e0._0_8_ >> 0x2a | local_e0._0_8_ * 0x400000) ^ local_e0._0_8_;
        local_d0._0_8_ =
             ((ulong)local_d0._8_8_ >> 7 ^ (uVar44 >> 1 | (ulong)((uVar44 & 1) != 0) << 0x3f)) +
             local_90._8_8_ + local_d0._0_8_ +
             ((uVar43 >> 0x13 | uVar43 << 0x2d) ^ (ulong)local_e0._0_8_ >> 6);
        uVar44 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar43 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
        uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar42;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar23;
        lVar39 = local_d0._0_8_ + uVar26 + ((uVar27 ^ uVar21) & uVar42 ^ uVar21) + plVar31[0xc] +
                 (uVar44 >> 0xe | uVar44 << 0x32);
        uVar25 = uVar25 + lVar39;
        uVar26 = (uVar24 ^ (uVar24 ^ uVar45) & (uVar23 ^ uVar24)) + lVar39 +
                 (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar43 = ((ulong)local_c0._0_8_ >> 7 | local_c0._0_8_ << 0x39) ^ local_c0._0_8_;
        uVar44 = ((ulong)local_e0._8_8_ >> 0x2a | local_e0._8_8_ * 0x400000) ^ local_e0._8_8_;
        local_d0._8_8_ =
             ((ulong)local_c0._0_8_ >> 7 ^ (uVar43 >> 1 | (ulong)((uVar43 & 1) != 0) << 0x3f)) +
             local_100._0_8_ + local_d0._8_8_ +
             ((uVar44 >> 0x13 | uVar44 << 0x2d) ^ (ulong)local_e0._8_8_ >> 6);
        uVar44 = (uVar25 >> 0x17 | uVar25 << 0x29) ^ uVar25;
        uVar43 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
        uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar25;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar26;
        lVar39 = local_d0._8_8_ + uVar21 + ((uVar42 ^ uVar27) & uVar25 ^ uVar27) + plVar31[0xd] +
                 (uVar44 >> 0xe | uVar44 << 0x32);
        uVar45 = uVar45 + lVar39;
        uVar40 = (uVar23 ^ (uVar23 ^ uVar24) & (uVar26 ^ uVar23)) + lVar39 +
                 (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar21 = ((ulong)local_c0._8_8_ >> 7 | local_c0._8_8_ << 0x39) ^ local_c0._8_8_;
        uVar44 = ((ulong)local_d0._0_8_ >> 0x2a | local_d0._0_8_ * 0x400000) ^ local_d0._0_8_;
        local_c0._0_8_ =
             ((ulong)local_c0._8_8_ >> 7 ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f)) +
             local_100._8_8_ + local_c0._0_8_ +
             ((uVar44 >> 0x13 | uVar44 << 0x2d) ^ (ulong)local_d0._0_8_ >> 6);
        uVar21 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
        uVar44 = (uVar40 >> 5 | uVar40 << 0x3b) ^ uVar40;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar45;
        uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar40;
        lVar39 = local_c0._0_8_ + uVar27 + ((uVar25 ^ uVar42) & uVar45 ^ uVar42) + plVar31[0x10] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar24 = uVar24 + lVar39;
        uVar41 = (uVar26 ^ (uVar26 ^ uVar23) & (uVar40 ^ uVar26)) + lVar39 +
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar44 = ((ulong)local_b0._0_8_ >> 7 | local_b0._0_8_ << 0x39) ^ local_b0._0_8_;
        uVar21 = ((ulong)local_d0._8_8_ >> 0x2a | local_d0._8_8_ * 0x400000) ^ local_d0._8_8_;
        local_c0._8_8_ =
             ((ulong)local_b0._0_8_ >> 7 ^ (uVar44 >> 1 | (ulong)((uVar44 & 1) != 0) << 0x3f)) +
             local_f0._0_8_ + local_c0._8_8_ +
             ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (ulong)local_d0._8_8_ >> 6);
        uVar21 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
        uVar44 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar24;
        uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar41;
        lVar39 = local_c0._8_8_ + uVar42 + ((uVar45 ^ uVar25) & uVar24 ^ uVar25) + plVar31[0x11] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar23 = uVar23 + lVar39;
        uVar42 = (uVar40 ^ (uVar40 ^ uVar26) & (uVar41 ^ uVar40)) + lVar39 +
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar21 = ((ulong)local_b0._8_8_ >> 7 | local_b0._8_8_ << 0x39) ^ local_b0._8_8_;
        uVar44 = ((ulong)local_c0._0_8_ >> 0x2a | local_c0._0_8_ * 0x400000) ^ local_c0._0_8_;
        local_b0._0_8_ =
             ((ulong)local_b0._8_8_ >> 7 ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f)) +
             local_f0._8_8_ + local_b0._0_8_ +
             ((uVar44 >> 0x13 | uVar44 << 0x2d) ^ (ulong)local_c0._0_8_ >> 6);
        uVar21 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
        uVar44 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar23;
        uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar42;
        lVar39 = local_b0._0_8_ + uVar25 + ((uVar24 ^ uVar45) & uVar23 ^ uVar45) + plVar31[0x14] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar26 = uVar26 + lVar39;
        uVar43 = (uVar41 ^ (uVar41 ^ uVar40) & (uVar42 ^ uVar41)) + lVar39 +
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar44 = ((ulong)local_a0._0_8_ >> 7 | local_a0._0_8_ << 0x39) ^ local_a0._0_8_;
        uVar21 = ((ulong)local_c0._8_8_ >> 0x2a | local_c0._8_8_ * 0x400000) ^ local_c0._8_8_;
        local_b0._8_8_ =
             ((ulong)local_a0._0_8_ >> 7 ^ (uVar44 >> 1 | (ulong)((uVar44 & 1) != 0) << 0x3f)) +
             local_e0._0_8_ + local_b0._8_8_ +
             ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (ulong)local_c0._8_8_ >> 6);
        uVar21 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
        uVar44 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar26;
        uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar43;
        lVar39 = local_b0._8_8_ + uVar45 + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) + plVar31[0x15] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar40 = uVar40 + lVar39;
        uVar44 = (uVar42 ^ (uVar42 ^ uVar41) & (uVar43 ^ uVar42)) + lVar39 +
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar21 = ((ulong)local_a0._8_8_ >> 7 | local_a0._8_8_ << 0x39) ^ local_a0._8_8_;
        uVar45 = ((ulong)local_b0._0_8_ >> 0x2a | local_b0._0_8_ * 0x400000) ^ local_b0._0_8_;
        local_a0._0_8_ =
             ((ulong)local_a0._8_8_ >> 7 ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f)) +
             local_e0._8_8_ + local_a0._0_8_ +
             ((uVar45 >> 0x13 | uVar45 << 0x2d) ^ (ulong)local_b0._0_8_ >> 6);
        uVar21 = (uVar40 >> 0x17 | uVar40 << 0x29) ^ uVar40;
        uVar45 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar40;
        uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar44;
        lVar39 = local_a0._0_8_ + uVar24 + ((uVar26 ^ uVar23) & uVar40 ^ uVar23) + plVar31[0x18] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar41 = uVar41 + lVar39;
        uVar24 = (uVar43 ^ (uVar43 ^ uVar42) & (uVar44 ^ uVar43)) + lVar39 +
                 (uVar45 >> 0x1c | uVar45 << 0x24);
        uVar45 = ((ulong)local_90._0_8_ >> 7 | local_90._0_8_ << 0x39) ^ local_90._0_8_;
        uVar21 = ((ulong)local_b0._8_8_ >> 0x2a | local_b0._8_8_ * 0x400000) ^ local_b0._8_8_;
        local_a0._8_8_ =
             ((ulong)local_90._0_8_ >> 7 ^ (uVar45 >> 1 | (ulong)((uVar45 & 1) != 0) << 0x3f)) +
             local_d0._0_8_ + local_a0._8_8_ +
             ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (ulong)local_b0._8_8_ >> 6);
        uVar21 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
        uVar45 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar41;
        uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar24;
        lVar39 = local_a0._8_8_ + uVar23 + ((uVar40 ^ uVar26) & uVar41 ^ uVar26) + plVar31[0x19] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar42 = uVar42 + lVar39;
        uVar23 = (uVar44 ^ (uVar44 ^ uVar43) & (uVar24 ^ uVar44)) + lVar39 +
                 (uVar45 >> 0x1c | uVar45 << 0x24);
        uVar21 = ((ulong)local_90._8_8_ >> 7 | local_90._8_8_ << 0x39) ^ local_90._8_8_;
        uVar45 = ((ulong)local_a0._0_8_ >> 0x2a | local_a0._0_8_ * 0x400000) ^ local_a0._0_8_;
        local_90._0_8_ =
             ((ulong)local_90._8_8_ >> 7 ^ (uVar21 >> 1 | (ulong)((uVar21 & 1) != 0) << 0x3f)) +
             local_d0._8_8_ + local_90._0_8_ +
             ((uVar45 >> 0x13 | uVar45 << 0x2d) ^ (ulong)local_a0._0_8_ >> 6);
        uVar21 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar45 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
        uVar21 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar42;
        uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar23;
        lVar39 = local_90._0_8_ + uVar26 + ((uVar41 ^ uVar40) & uVar42 ^ uVar40) + plVar31[0x1c] +
                 (uVar21 >> 0xe | uVar21 << 0x32);
        uVar43 = uVar43 + lVar39;
        uVar26 = (uVar24 ^ (uVar24 ^ uVar44) & (uVar23 ^ uVar24)) + lVar39 +
                 (uVar45 >> 0x1c | uVar45 << 0x24);
        uVar45 = ((ulong)local_100._0_8_ >> 7 | local_100._0_8_ << 0x39) ^ local_100._0_8_;
        uVar21 = ((ulong)local_a0._8_8_ >> 0x2a | local_a0._8_8_ * 0x400000) ^ local_a0._8_8_;
        local_90._8_8_ =
             ((ulong)local_100._0_8_ >> 7 ^ (uVar45 >> 1 | (ulong)((uVar45 & 1) != 0) << 0x3f)) +
             local_c0._0_8_ + local_90._8_8_ +
             ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (ulong)local_a0._8_8_ >> 6);
        uVar21 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
        uVar45 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
        uVar25 = (uVar21 >> 4 | uVar21 << 0x3c) ^ uVar43;
        uVar21 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar26;
        uVar45 = uVar26 ^ uVar23;
        uVar21 = uVar21 >> 0x1c | uVar21 << 0x24;
        lVar39 = local_90._8_8_ + uVar40 + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) + plVar31[0x1d] +
                 (uVar25 >> 0xe | uVar25 << 0x32);
        uVar44 = uVar44 + lVar39;
        lVar39 = (uVar23 ^ (uVar23 ^ uVar24) & uVar45) + lVar39;
        pcVar1 = (char *)((long)plVar31 + 0x107);
        plVar31 = plVar31 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 8;
      uVar21 = lVar39 + uVar21 + *param_1;
      uVar26 = uVar26 + param_1[1];
      uVar23 = uVar23 + param_1[2];
      uVar24 = uVar24 + param_1[3];
      uVar44 = uVar44 + param_1[4];
      uVar43 = uVar43 + param_1[5];
      uVar42 = uVar42 + param_1[6];
      uVar41 = uVar41 + param_1[7];
      *param_1 = uVar21;
      param_1[1] = uVar26;
      param_1[2] = uVar23;
      param_1[3] = uVar24;
      param_1[4] = uVar44;
      param_1[5] = uVar43;
      param_1[6] = uVar42;
      param_1[7] = uVar41;
    } while (param_2 < pauVar2);
    return;
  }
  pauVar2 = param_2 + param_3 * 8;
  uVar21 = *param_1;
  uVar26 = param_1[1];
  uVar23 = param_1[2];
  uVar24 = param_1[3];
  uVar44 = param_1[4];
  uVar43 = param_1[5];
  uVar42 = param_1[6];
  uVar41 = param_1[7];
  do {
    auVar5 = vpshufb_avx(*param_2,_DAT_005fda40);
    auVar6 = vpshufb_avx(param_2[1],_DAT_005fda40);
    auVar7 = vpshufb_avx(param_2[2],_DAT_005fda40);
    auVar8 = vpshufb_avx(param_2[3],_DAT_005fda40);
    auVar9 = vpshufb_avx(param_2[4],_DAT_005fda40);
    auVar10 = vpshufb_avx(param_2[5],_DAT_005fda40);
    auVar53._8_8_ = DAT_005fd548;
    auVar53._0_8_ = K512;
    local_100 = vpaddq_avx(auVar5,auVar53);
    auVar11 = vpshufb_avx(param_2[6],_DAT_005fda40);
    auVar64._8_8_ = DAT_005fd568;
    auVar64._0_8_ = DAT_005fd560;
    local_f0 = vpaddq_avx(auVar6,auVar64);
    auVar12 = vpshufb_avx(param_2[7],_DAT_005fda40);
    auVar65._8_8_ = DAT_005fd588;
    auVar65._0_8_ = DAT_005fd580;
    local_e0 = vpaddq_avx(auVar7,auVar65);
    auVar14._8_8_ = DAT_005fd5a8;
    auVar14._0_8_ = DAT_005fd5a0;
    local_d0 = vpaddq_avx(auVar8,auVar14);
    auVar15._8_8_ = DAT_005fd5c8;
    auVar15._0_8_ = DAT_005fd5c0;
    local_c0 = vpaddq_avx(auVar9,auVar15);
    auVar16._8_8_ = DAT_005fd5e8;
    auVar16._0_8_ = DAT_005fd5e0;
    local_b0 = vpaddq_avx(auVar10,auVar16);
    auVar17._8_8_ = DAT_005fd608;
    auVar17._0_8_ = DAT_005fd600;
    local_a0 = vpaddq_avx(auVar11,auVar17);
    auVar18._8_8_ = DAT_005fd628;
    auVar18._0_8_ = DAT_005fd620;
    local_90 = vpaddq_avx(auVar12,auVar18);
    uVar40 = uVar26 ^ uVar23;
    pauVar32 = (undefined1 (*) [16])&DAT_005fd5c0;
    do {
      auVar47 = vpalignr_avx(auVar6,auVar5,8);
      auVar48 = vpalignr_avx(auVar10,auVar9,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar45 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      auVar5 = vpaddq_avx(auVar5,auVar48);
      uVar25 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar45 = (uVar45 >> 4 | uVar45 << 0x3c) ^ uVar44;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar25 = (uVar25 >> 6 | uVar25 << 0x3a) ^ uVar21;
      lVar39 = uVar41 + local_100._0_8_ + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar45 >> 0xe | uVar45 << 0x32);
      auVar65 = vpsrlq_avx(auVar12,6);
      uVar24 = uVar24 + lVar39;
      uVar41 = (uVar25 >> 0x1c | uVar25 << 0x24) + lVar39 + (uVar40 & (uVar21 ^ uVar26) ^ uVar26);
      auVar53 = vpsllq_avx(auVar12,3);
      auVar5 = vpaddq_avx(auVar5,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar12,0x13);
      uVar40 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
      uVar45 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar24;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar41;
      lVar39 = uVar42 + local_100._8_8_ + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_100 = vpaddq_avx(auVar5,pauVar32[8]);
      uVar23 = uVar23 + lVar39;
      uVar42 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar21 ^ uVar26) & (uVar41 ^ uVar21) ^ uVar21);
      auVar47 = vpalignr_avx(auVar7,auVar6,8);
      auVar48 = vpalignr_avx(auVar11,auVar10,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar6 = vpaddq_avx(auVar6,auVar48);
      uVar45 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar23;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar42;
      lVar39 = uVar43 + local_f0._0_8_ + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar5,6);
      uVar26 = uVar26 + lVar39;
      uVar43 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar41 ^ uVar21) & (uVar42 ^ uVar41) ^ uVar41);
      auVar53 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar5,0x13);
      uVar40 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
      uVar45 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar26;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar43;
      lVar39 = uVar44 + local_f0._8_8_ + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_f0 = vpaddq_avx(auVar6,pauVar32[10]);
      uVar21 = uVar21 + lVar39;
      uVar44 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar42 ^ uVar41) & (uVar43 ^ uVar42) ^ uVar42);
      auVar47 = vpalignr_avx(auVar8,auVar7,8);
      auVar48 = vpalignr_avx(auVar12,auVar11,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar7 = vpaddq_avx(auVar7,auVar48);
      uVar45 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar21;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar44;
      lVar39 = uVar24 + local_e0._0_8_ + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar6,6);
      uVar41 = uVar41 + lVar39;
      uVar24 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar43 ^ uVar42) & (uVar44 ^ uVar43) ^ uVar43);
      auVar53 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar6,0x13);
      uVar40 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      uVar45 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar41;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar24;
      lVar39 = uVar23 + local_e0._8_8_ + ((uVar21 ^ uVar26) & uVar41 ^ uVar26) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_e0 = vpaddq_avx(auVar7,pauVar32[0xc]);
      uVar42 = uVar42 + lVar39;
      uVar23 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar44 ^ uVar43) & (uVar24 ^ uVar44) ^ uVar44);
      auVar47 = vpalignr_avx(auVar9,auVar8,8);
      auVar48 = vpalignr_avx(auVar5,auVar12,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      auVar8 = vpaddq_avx(auVar8,auVar48);
      uVar45 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar42;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar23;
      lVar39 = uVar26 + local_d0._0_8_ + ((uVar41 ^ uVar21) & uVar42 ^ uVar21) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar7,6);
      uVar43 = uVar43 + lVar39;
      uVar26 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar24 ^ uVar44) & (uVar23 ^ uVar24) ^ uVar24);
      auVar53 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar7,0x13);
      uVar40 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
      uVar45 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar43;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar26;
      lVar39 = uVar21 + local_d0._8_8_ + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_d0 = vpaddq_avx(auVar8,pauVar32[0xe]);
      uVar44 = uVar44 + lVar39;
      uVar21 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar23 ^ uVar24) & (uVar26 ^ uVar23) ^ uVar23);
      auVar47 = vpalignr_avx(auVar10,auVar9,8);
      auVar48 = vpalignr_avx(auVar6,auVar5,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      auVar9 = vpaddq_avx(auVar9,auVar48);
      uVar45 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar44;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar21;
      lVar39 = uVar41 + local_c0._0_8_ + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar8,6);
      uVar24 = uVar24 + lVar39;
      uVar41 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar26 ^ uVar23) & (uVar21 ^ uVar26) ^ uVar26);
      auVar53 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar8,0x13);
      uVar40 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
      uVar45 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar24;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar9 = vpaddq_avx(auVar9,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar41;
      lVar39 = uVar42 + local_c0._8_8_ + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_c0 = vpaddq_avx(auVar9,pauVar32[0x10]);
      uVar23 = uVar23 + lVar39;
      uVar42 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar21 ^ uVar26) & (uVar41 ^ uVar21) ^ uVar21);
      auVar47 = vpalignr_avx(auVar11,auVar10,8);
      auVar48 = vpalignr_avx(auVar7,auVar6,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar10 = vpaddq_avx(auVar10,auVar48);
      uVar45 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar23;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar42;
      lVar39 = uVar43 + local_b0._0_8_ + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar9,6);
      uVar26 = uVar26 + lVar39;
      uVar43 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar41 ^ uVar21) & (uVar42 ^ uVar41) ^ uVar41);
      auVar53 = vpsllq_avx(auVar9,3);
      auVar10 = vpaddq_avx(auVar10,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar9,0x13);
      uVar40 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
      uVar45 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar26;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar10 = vpaddq_avx(auVar10,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar43;
      lVar39 = uVar44 + local_b0._8_8_ + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_b0 = vpaddq_avx(auVar10,pauVar32[0x12]);
      uVar21 = uVar21 + lVar39;
      uVar44 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar42 ^ uVar41) & (uVar43 ^ uVar42) ^ uVar42);
      auVar47 = vpalignr_avx(auVar12,auVar11,8);
      auVar48 = vpalignr_avx(auVar8,auVar7,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar11 = vpaddq_avx(auVar11,auVar48);
      uVar45 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar21;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar44;
      lVar39 = uVar24 + local_a0._0_8_ + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar10,6);
      uVar41 = uVar41 + lVar39;
      uVar24 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar43 ^ uVar42) & (uVar44 ^ uVar43) ^ uVar43);
      auVar53 = vpsllq_avx(auVar10,3);
      auVar11 = vpaddq_avx(auVar11,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar10,0x13);
      uVar40 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      uVar45 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar41;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      auVar11 = vpaddq_avx(auVar11,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar24;
      lVar39 = uVar23 + local_a0._8_8_ + ((uVar21 ^ uVar26) & uVar41 ^ uVar26) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      local_a0 = vpaddq_avx(auVar11,pauVar32[0x14]);
      uVar42 = uVar42 + lVar39;
      uVar23 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar44 ^ uVar43) & (uVar24 ^ uVar44) ^ uVar44);
      auVar47 = vpalignr_avx(auVar5,auVar12,8);
      auVar48 = vpalignr_avx(auVar9,auVar8,8);
      auVar51 = vpsrlq_avx(auVar47,1);
      uVar40 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      auVar12 = vpaddq_avx(auVar12,auVar48);
      uVar45 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar64 = vpsrlq_avx(auVar47,7);
      uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar42;
      auVar47 = vpsllq_avx(auVar47,0x38);
      auVar52 = vpsrlq_avx(auVar51,7);
      auVar48 = vpsllq_avx(auVar47,7);
      uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar23;
      lVar39 = uVar26 + local_90._0_8_ + ((uVar41 ^ uVar21) & uVar42 ^ uVar21) +
               (uVar40 >> 0xe | uVar40 << 0x32);
      auVar65 = vpsrlq_avx(auVar11,6);
      uVar43 = uVar43 + lVar39;
      uVar26 = (uVar45 >> 0x1c | uVar45 << 0x24) +
               lVar39 + ((uVar24 ^ uVar44) & (uVar23 ^ uVar24) ^ uVar24);
      auVar53 = vpsllq_avx(auVar11,3);
      auVar12 = vpaddq_avx(auVar12,auVar64 ^ auVar51 ^ auVar47 ^ auVar52 ^ auVar48);
      auVar47 = vpsrlq_avx(auVar11,0x13);
      uVar40 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
      uVar25 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
      auVar51 = vpsllq_avx(auVar53,0x2a);
      uVar45 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar43;
      auVar48 = vpsrlq_avx(auVar47,0x2a);
      uVar40 = uVar26 ^ uVar23;
      auVar12 = vpaddq_avx(auVar12,auVar65 ^ auVar53 ^ auVar47 ^ auVar51 ^ auVar48);
      uVar25 = (uVar25 >> 6 | uVar25 << 0x3a) ^ uVar26;
      lVar39 = uVar21 + local_90._8_8_ + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) +
               (uVar45 >> 0xe | uVar45 << 0x32);
      local_90 = vpaddq_avx(auVar12,pauVar32[0x16]);
      uVar44 = uVar44 + lVar39;
      uVar21 = (uVar25 >> 0x1c | uVar25 << 0x24) + lVar39 + ((uVar23 ^ uVar24) & uVar40 ^ uVar23);
      pauVar20 = pauVar32 + 0x18;
      pauVar32 = pauVar32 + 0x10;
    } while (*(char *)((long)*pauVar20 + 7) != '\0');
    uVar45 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar25 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar45 = (uVar45 >> 4 | uVar45 << 0x3c) ^ uVar44;
    uVar25 = (uVar25 >> 6 | uVar25 << 0x3a) ^ uVar21;
    lVar39 = uVar41 + local_100._0_8_ + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar45 >> 0xe | uVar45 << 0x32);
    uVar24 = uVar24 + lVar39;
    uVar41 = (uVar25 >> 0x1c | uVar25 << 0x24) + lVar39 + (uVar40 & (uVar21 ^ uVar26) ^ uVar26);
    uVar40 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
    uVar45 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar24;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar41;
    lVar39 = uVar42 + local_100._8_8_ + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar23 = uVar23 + lVar39;
    uVar42 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar21 ^ uVar26) & (uVar41 ^ uVar21) ^ uVar21);
    uVar40 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar45 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar23;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar42;
    lVar39 = uVar43 + local_f0._0_8_ + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar26 = uVar26 + lVar39;
    uVar43 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar41 ^ uVar21) & (uVar42 ^ uVar41) ^ uVar41);
    uVar40 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
    uVar45 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar26;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar43;
    lVar39 = uVar44 + local_f0._8_8_ + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar21 = uVar21 + lVar39;
    uVar44 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar42 ^ uVar41) & (uVar43 ^ uVar42) ^ uVar42);
    uVar40 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar45 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar21;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar44;
    lVar39 = uVar24 + local_e0._0_8_ + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar41 = uVar41 + lVar39;
    uVar24 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar43 ^ uVar42) & (uVar44 ^ uVar43) ^ uVar43);
    uVar40 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar45 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar41;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar24;
    lVar39 = uVar23 + local_e0._8_8_ + ((uVar21 ^ uVar26) & uVar41 ^ uVar26) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar42 = uVar42 + lVar39;
    uVar23 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar44 ^ uVar43) & (uVar24 ^ uVar44) ^ uVar44);
    uVar40 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar45 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar42;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar23;
    lVar39 = uVar26 + local_d0._0_8_ + ((uVar41 ^ uVar21) & uVar42 ^ uVar21) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar43 = uVar43 + lVar39;
    uVar26 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar24 ^ uVar44) & (uVar23 ^ uVar24) ^ uVar24);
    uVar40 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
    uVar45 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar43;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar26;
    lVar39 = uVar21 + local_d0._8_8_ + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar44 = uVar44 + lVar39;
    uVar21 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar23 ^ uVar24) & (uVar26 ^ uVar23) ^ uVar23);
    uVar40 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar45 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar44;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar21;
    lVar39 = uVar41 + local_c0._0_8_ + ((uVar43 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar24 = uVar24 + lVar39;
    uVar41 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar26 ^ uVar23) & (uVar21 ^ uVar26) ^ uVar26);
    uVar40 = (uVar24 >> 0x17 | uVar24 << 0x29) ^ uVar24;
    uVar45 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar24;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar41;
    lVar39 = uVar42 + local_c0._8_8_ + ((uVar44 ^ uVar43) & uVar24 ^ uVar43) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar23 = uVar23 + lVar39;
    uVar42 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar21 ^ uVar26) & (uVar41 ^ uVar21) ^ uVar21);
    uVar40 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar45 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar23;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar42;
    lVar39 = uVar43 + local_b0._0_8_ + ((uVar24 ^ uVar44) & uVar23 ^ uVar44) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar26 = uVar26 + lVar39;
    uVar43 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar41 ^ uVar21) & (uVar42 ^ uVar41) ^ uVar41);
    uVar40 = (uVar26 >> 0x17 | uVar26 << 0x29) ^ uVar26;
    uVar45 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
    uVar40 = (uVar40 >> 4 | uVar40 << 0x3c) ^ uVar26;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar43;
    lVar39 = uVar44 + local_b0._8_8_ + ((uVar23 ^ uVar24) & uVar26 ^ uVar24) +
             (uVar40 >> 0xe | uVar40 << 0x32);
    uVar21 = uVar21 + lVar39;
    uVar40 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar42 ^ uVar41) & (uVar43 ^ uVar42) ^ uVar42);
    uVar44 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar45 = (uVar40 >> 5 | uVar40 << 0x3b) ^ uVar40;
    uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar21;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar40;
    lVar39 = uVar24 + local_a0._0_8_ + ((uVar26 ^ uVar23) & uVar21 ^ uVar23) +
             (uVar44 >> 0xe | uVar44 << 0x32);
    uVar41 = uVar41 + lVar39;
    uVar24 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar43 ^ uVar42) & (uVar40 ^ uVar43) ^ uVar43);
    uVar44 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar45 = (uVar24 >> 5 | uVar24 << 0x3b) ^ uVar24;
    uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar41;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar24;
    lVar39 = uVar23 + local_a0._8_8_ + ((uVar21 ^ uVar26) & uVar41 ^ uVar26) +
             (uVar44 >> 0xe | uVar44 << 0x32);
    uVar42 = uVar42 + lVar39;
    uVar23 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar40 ^ uVar43) & (uVar24 ^ uVar40) ^ uVar40);
    uVar44 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar45 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
    uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar42;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar23;
    lVar39 = uVar26 + local_90._0_8_ + ((uVar41 ^ uVar21) & uVar42 ^ uVar21) +
             (uVar44 >> 0xe | uVar44 << 0x32);
    uVar43 = uVar43 + lVar39;
    uVar26 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar24 ^ uVar40) & (uVar23 ^ uVar24) ^ uVar24);
    uVar44 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
    uVar45 = (uVar26 >> 5 | uVar26 << 0x3b) ^ uVar26;
    uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar43;
    uVar45 = (uVar45 >> 6 | uVar45 << 0x3a) ^ uVar26;
    lVar39 = uVar21 + local_90._8_8_ + ((uVar42 ^ uVar41) & uVar43 ^ uVar41) +
             (uVar44 >> 0xe | uVar44 << 0x32);
    uVar21 = (uVar45 >> 0x1c | uVar45 << 0x24) +
             lVar39 + ((uVar23 ^ uVar24) & (uVar26 ^ uVar23) ^ uVar23) + *param_1;
    param_2 = param_2 + 8;
    uVar26 = uVar26 + param_1[1];
    uVar23 = uVar23 + param_1[2];
    uVar24 = uVar24 + param_1[3];
    uVar44 = uVar40 + lVar39 + param_1[4];
    uVar43 = uVar43 + param_1[5];
    uVar42 = uVar42 + param_1[6];
    uVar41 = uVar41 + param_1[7];
    *param_1 = uVar21;
    param_1[1] = uVar26;
    param_1[2] = uVar23;
    param_1[3] = uVar24;
    param_1[4] = uVar44;
    param_1[5] = uVar43;
    param_1[6] = uVar42;
    param_1[7] = uVar41;
  } while (param_2 < pauVar2);
  return;
}

