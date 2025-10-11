
/* WARNING: Removing unreachable block (ram,0x00577348) */
/* WARNING: Removing unreachable block (ram,0x0057754e) */
/* WARNING: Removing unreachable block (ram,0x0057713a) */
/* WARNING: Removing unreachable block (ram,0x00576f35) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_ssse3(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auVar19 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar60;
  uint uVar61;
  uint uVar62;
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
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  
  pauVar2 = param_2 + param_3 * 4;
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar15 = param_1[4];
  uVar14 = param_1[5];
  uVar13 = param_1[6];
  uVar12 = param_1[7];
  do {
    auVar16 = pshufb(*param_2,_DAT_00576880);
    auVar17 = pshufb(param_2[1],_DAT_00576880);
    auVar18 = pshufb(param_2[2],_DAT_00576880);
    local_c0 = K256 + auVar16._0_4_;
    iStack_bc = DAT_00576684 + auVar16._4_4_;
    iStack_b8 = DAT_00576688 + auVar16._8_4_;
    iStack_b4 = DAT_0057668c + auVar16._12_4_;
    auVar19 = pshufb(param_2[3],_DAT_00576880);
    local_b0 = DAT_005766a0 + auVar17._0_4_;
    iStack_ac = DAT_005766a4 + auVar17._4_4_;
    iStack_a8 = DAT_005766a8 + auVar17._8_4_;
    iStack_a4 = DAT_005766ac + auVar17._12_4_;
    local_a0 = DAT_005766c0 + auVar18._0_4_;
    iStack_9c = DAT_005766c4 + auVar18._4_4_;
    iStack_98 = DAT_005766c8 + auVar18._8_4_;
    iStack_94 = DAT_005766cc + auVar18._12_4_;
    local_90 = DAT_005766e0 + auVar19._0_4_;
    iStack_8c = DAT_005766e4 + auVar19._4_4_;
    iStack_88 = DAT_005766e8 + auVar19._8_4_;
    iStack_84 = DAT_005766ec + auVar19._12_4_;
    uVar8 = uVar6 ^ uVar4;
    piVar7 = &K256;
    do {
      uVar10 = (uVar15 >> 0xe | uVar15 << 0x12) ^ uVar15;
      uVar11 = (uVar3 >> 9 | uVar3 << 0x17) ^ uVar3;
      uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
      uVar23 = auVar16._4_4_;
      uVar24 = auVar16._8_4_;
      uVar25 = auVar16._12_4_;
      uVar26 = auVar17._0_4_;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      uVar35 = auVar18._4_4_;
      uVar60 = auVar18._8_4_;
      uVar61 = auVar18._12_4_;
      uVar62 = auVar19._0_4_;
      uVar5 = uVar5 + iVar9;
      uVar20 = auVar19._4_4_;
      uVar21 = auVar19._8_4_;
      uVar22 = auVar19._12_4_;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21);
      auVar36._8_4_ = uVar22;
      auVar36._12_4_ = uVar22;
      uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar37._0_4_ = uVar21 >> 10;
      auVar37._4_4_ = 0;
      auVar37._8_4_ = uVar22 >> 10;
      auVar37._12_4_ = uVar22 >> 10;
      iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar27._0_8_ = auVar36._0_8_ >> 0x11;
      auVar27._8_8_ = auVar36._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar38._0_8_ = auVar36._0_8_ >> 0x13;
      auVar38._8_8_ = auVar36._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar38 = auVar37 ^ auVar27 ^ auVar38;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar16._0_4_ =
           auVar16._0_4_ + uVar35 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar38._0_4_;
      auVar16._4_4_ =
           uVar23 + uVar60 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar38._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar39._0_8_ = CONCAT44(auVar16._0_4_,auVar16._0_4_);
      auVar39._8_4_ = auVar16._4_4_;
      auVar39._12_4_ = auVar16._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar40._0_4_ = auVar16._0_4_ >> 10;
      auVar40._4_4_ = 0;
      auVar40._8_4_ = auVar16._4_4_ >> 10;
      auVar40._12_4_ = auVar16._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar28._0_8_ = auVar39._0_8_ >> 0x11;
      auVar28._8_8_ = auVar39._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar41._0_8_ = auVar39._0_8_ >> 0x13;
      auVar41._8_8_ = auVar39._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar41 = auVar40 ^ auVar28 ^ auVar41;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar16._8_4_ =
           uVar24 + uVar61 +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar41._0_4_;
      auVar16._12_4_ =
           uVar25 + uVar62 +
           (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19) +
           auVar41._8_4_;
      uVar3 = uVar3 + iVar9;
      local_c0 = piVar7[0x20] + auVar16._0_4_;
      iStack_bc = piVar7[0x21] + auVar16._4_4_;
      iStack_b8 = piVar7[0x22] + auVar16._8_4_;
      iStack_b4 = piVar7[0x23] + auVar16._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar11 = auVar17._4_4_;
      uVar23 = auVar17._8_4_;
      uVar24 = auVar17._12_4_;
      uVar25 = auVar18._0_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar42._0_8_ = CONCAT44(auVar16._8_4_,auVar16._8_4_);
      auVar42._8_4_ = auVar16._12_4_;
      auVar42._12_4_ = auVar16._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar43._0_4_ = auVar16._8_4_ >> 10;
      auVar43._4_4_ = 0;
      auVar43._8_4_ = auVar16._12_4_ >> 10;
      auVar43._12_4_ = auVar16._12_4_ >> 10;
      iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar29._0_8_ = auVar42._0_8_ >> 0x11;
      auVar29._8_8_ = auVar42._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar44._0_8_ = auVar42._0_8_ >> 0x13;
      auVar44._8_8_ = auVar42._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar44 = auVar43 ^ auVar29 ^ auVar44;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar17._0_4_ =
           uVar26 + uVar20 +
           (uVar11 >> 3 ^ uVar11 >> 7 ^ uVar11 << 0xe ^ uVar11 >> 0x12 ^ uVar11 << 0x19) +
           auVar44._0_4_;
      auVar17._4_4_ =
           uVar11 + uVar21 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar44._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar45._0_8_ = CONCAT44(auVar17._0_4_,auVar17._0_4_);
      auVar45._8_4_ = auVar17._4_4_;
      auVar45._12_4_ = auVar17._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar46._0_4_ = auVar17._0_4_ >> 10;
      auVar46._4_4_ = 0;
      auVar46._8_4_ = auVar17._4_4_ >> 10;
      auVar46._12_4_ = auVar17._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar30._0_8_ = auVar45._0_8_ >> 0x11;
      auVar30._8_8_ = auVar45._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar47._0_8_ = auVar45._0_8_ >> 0x13;
      auVar47._8_8_ = auVar45._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar47 = auVar46 ^ auVar30 ^ auVar47;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar17._8_4_ =
           uVar23 + uVar22 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar47._0_4_;
      auVar17._12_4_ =
           uVar24 + auVar16._0_4_ +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar47._8_4_;
      uVar15 = uVar15 + iVar9;
      local_b0 = piVar7[0x28] + auVar17._0_4_;
      iStack_ac = piVar7[0x29] + auVar17._4_4_;
      iStack_a8 = piVar7[0x2a] + auVar17._8_4_;
      iStack_a4 = piVar7[0x2b] + auVar17._12_4_;
      uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
      uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar5 = uVar5 + iVar9;
      auVar48._0_8_ = CONCAT44(auVar17._8_4_,auVar17._8_4_);
      auVar48._8_4_ = auVar17._12_4_;
      auVar48._12_4_ = auVar17._12_4_;
      uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar49._0_4_ = auVar17._8_4_ >> 10;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar17._12_4_ >> 10;
      auVar49._12_4_ = auVar17._12_4_ >> 10;
      iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar31._0_8_ = auVar48._0_8_ >> 0x11;
      auVar31._8_8_ = auVar48._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar50._0_8_ = auVar48._0_8_ >> 0x13;
      auVar50._8_8_ = auVar48._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar50 = auVar49 ^ auVar31 ^ auVar50;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar18._0_4_ =
           uVar25 + auVar16._4_4_ +
           (uVar35 >> 3 ^ uVar35 >> 7 ^ uVar35 << 0xe ^ uVar35 >> 0x12 ^ uVar35 << 0x19) +
           auVar50._0_4_;
      auVar18._4_4_ =
           uVar35 + auVar16._8_4_ +
           (uVar60 >> 3 ^ uVar60 >> 7 ^ uVar60 << 0xe ^ uVar60 >> 0x12 ^ uVar60 << 0x19) +
           auVar50._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar51._0_8_ = CONCAT44(auVar18._0_4_,auVar18._0_4_);
      auVar51._8_4_ = auVar18._4_4_;
      auVar51._12_4_ = auVar18._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar52._0_4_ = auVar18._0_4_ >> 10;
      auVar52._4_4_ = 0;
      auVar52._8_4_ = auVar18._4_4_ >> 10;
      auVar52._12_4_ = auVar18._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar32._0_8_ = auVar51._0_8_ >> 0x11;
      auVar32._8_8_ = auVar51._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar53._0_8_ = auVar51._0_8_ >> 0x13;
      auVar53._8_8_ = auVar51._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar53 = auVar52 ^ auVar32 ^ auVar53;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar18._8_4_ =
           uVar60 + auVar16._12_4_ +
           (uVar61 >> 3 ^ uVar61 >> 7 ^ uVar61 << 0xe ^ uVar61 >> 0x12 ^ uVar61 << 0x19) +
           auVar53._0_4_;
      auVar18._12_4_ =
           uVar61 + auVar17._0_4_ +
           (uVar62 >> 3 ^ uVar62 >> 7 ^ uVar62 << 0xe ^ uVar62 >> 0x12 ^ uVar62 << 0x19) +
           auVar53._8_4_;
      uVar3 = uVar3 + iVar9;
      local_a0 = piVar7[0x30] + auVar18._0_4_;
      iStack_9c = piVar7[0x31] + auVar18._4_4_;
      iStack_98 = piVar7[0x32] + auVar18._8_4_;
      iStack_94 = piVar7[0x33] + auVar18._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar54._0_8_ = CONCAT44(auVar18._8_4_,auVar18._8_4_);
      auVar54._8_4_ = auVar18._12_4_;
      auVar54._12_4_ = auVar18._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar55._0_4_ = auVar18._8_4_ >> 10;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = auVar18._12_4_ >> 10;
      auVar55._12_4_ = auVar18._12_4_ >> 10;
      iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar33._0_8_ = auVar54._0_8_ >> 0x11;
      auVar33._8_8_ = auVar54._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar56._0_8_ = auVar54._0_8_ >> 0x13;
      auVar56._8_8_ = auVar54._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar56 = auVar55 ^ auVar33 ^ auVar56;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar19._0_4_ =
           uVar62 + auVar17._4_4_ +
           (uVar20 >> 3 ^ uVar20 >> 7 ^ uVar20 << 0xe ^ uVar20 >> 0x12 ^ uVar20 << 0x19) +
           auVar56._0_4_;
      auVar19._4_4_ =
           uVar20 + auVar17._8_4_ +
           (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 << 0xe ^ uVar21 >> 0x12 ^ uVar21 << 0x19) +
           auVar56._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar57._0_8_ = CONCAT44(auVar19._0_4_,auVar19._0_4_);
      auVar57._8_4_ = auVar19._4_4_;
      auVar57._12_4_ = auVar19._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar58._0_4_ = auVar19._0_4_ >> 10;
      auVar58._4_4_ = 0;
      auVar58._8_4_ = auVar19._4_4_ >> 10;
      auVar58._12_4_ = auVar19._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar34._0_8_ = auVar57._0_8_ >> 0x11;
      auVar34._8_8_ = auVar57._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar59._0_8_ = auVar57._0_8_ >> 0x13;
      auVar59._8_8_ = auVar57._8_8_ >> 0x13;
      uVar10 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar59 = auVar58 ^ auVar34 ^ auVar59;
      uVar8 = uVar6 ^ uVar4;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      auVar19._8_4_ =
           uVar21 + auVar17._12_4_ +
           (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19) +
           auVar59._0_4_;
      auVar19._12_4_ =
           uVar22 + auVar18._0_4_ +
           (auVar16._0_4_ >> 3 ^ auVar16._0_4_ >> 7 ^ auVar16._0_4_ * 0x4000 ^ auVar16._0_4_ >> 0x12
           ^ auVar16._0_4_ * 0x2000000) + auVar59._8_4_;
      uVar15 = uVar15 + iVar9;
      local_90 = piVar7[0x38] + auVar19._0_4_;
      iStack_8c = piVar7[0x39] + auVar19._4_4_;
      iStack_88 = piVar7[0x3a] + auVar19._8_4_;
      iStack_84 = piVar7[0x3b] + auVar19._12_4_;
      uVar3 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & uVar8 ^ uVar4);
      pcVar1 = (char *)((long)piVar7 + 0x103);
      piVar7 = piVar7 + 0x20;
    } while (*pcVar1 != '\0');
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_c0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar10 >> 6 | uVar10 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_bc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_b8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_b4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
    iVar9 = uVar5 + local_b0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
    uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_ac + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15)
    ;
    uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_a8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
    uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_a4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar15 = uVar15 + iVar9;
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
    uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_a0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_9c + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_98 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_94 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar8 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar8;
    iVar9 = uVar5 + local_90 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar14 ^ uVar13) & (uVar8 ^ uVar14) ^ uVar14)
    ;
    uVar15 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_8c + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar8 ^ uVar14) & (uVar5 ^ uVar8) ^ uVar8);
    uVar15 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_88 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar15 >> 6 | uVar15 << 0x1a)
    ;
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar8) & (uVar4 ^ uVar5) ^ uVar5);
    uVar15 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_84 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
            (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4) +
            *param_1;
    param_2 = param_2 + 4;
    uVar6 = uVar6 + param_1[1];
    uVar4 = uVar4 + param_1[2];
    uVar5 = uVar5 + param_1[3];
    uVar15 = uVar8 + iVar9 + param_1[4];
    uVar14 = uVar14 + param_1[5];
    uVar13 = uVar13 + param_1[6];
    uVar12 = uVar12 + param_1[7];
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar15;
    param_1[5] = uVar14;
    param_1[6] = uVar13;
    param_1[7] = uVar12;
  } while (param_2 < pauVar2);
  return;
}

