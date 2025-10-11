
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00578400(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 in_ZMM0 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  if ((DAT_0094b59c & 0x200) == 0) {
    uVar12 = *param_1;
    uVar11 = param_1[1];
    uVar13 = param_1[2];
    uVar14 = param_1[3];
    uVar17 = param_1[4];
    do {
      uVar19 = *(uint *)*param_2;
      uVar15 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      uVar19 = *(uint *)(*param_2 + 4);
      uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      uVar16 = uVar11 << 0x1e | uVar11 >> 2;
      uVar18 = uVar15 + 0x5a827999 + uVar17 + (uVar12 << 5 | uVar12 >> 0x1b) +
               ((uVar14 ^ uVar13) & uVar11 ^ uVar14);
      uVar11 = *(uint *)(*param_2 + 8);
      uVar31 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      uVar17 = uVar12 << 0x1e | uVar12 >> 2;
      uVar14 = uVar19 + 0x5a827999 + uVar14 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
               ((uVar13 ^ uVar16) & uVar12 ^ uVar13);
      uVar12 = *(uint *)(*param_2 + 0xc);
      uVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar28 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar13 = uVar31 + 0x5a827999 + uVar13 + (uVar14 * 0x20 | uVar14 >> 0x1b) +
               ((uVar16 ^ uVar17) & uVar18 ^ uVar16);
      uVar12 = *(uint *)param_2[1];
      uVar18 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar26 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar16 = uVar11 + 0x5a827999 + uVar16 + (uVar13 * 0x20 | uVar13 >> 0x1b) +
               ((uVar17 ^ uVar28) & uVar14 ^ uVar17);
      uVar12 = *(uint *)(param_2[1] + 4);
      uVar32 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar24 = uVar13 * 0x40000000 | uVar13 >> 2;
      uVar14 = uVar18 + 0x5a827999 + uVar17 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
               ((uVar28 ^ uVar26) & uVar13 ^ uVar28);
      uVar12 = *(uint *)(param_2[1] + 8);
      uVar13 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar20 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar28 = uVar32 + 0x5a827999 + uVar28 + (uVar14 * 0x20 | uVar14 >> 0x1b) +
               ((uVar26 ^ uVar24) & uVar16 ^ uVar26);
      uVar12 = *(uint *)(param_2[1] + 0xc);
      uVar16 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar17 = uVar14 * 0x40000000 | uVar14 >> 2;
      uVar26 = uVar13 + 0x5a827999 + uVar26 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar24 ^ uVar20) & uVar14 ^ uVar24);
      uVar12 = *(uint *)param_2[2];
      uVar33 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar29 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar24 = uVar16 + 0x5a827999 + uVar24 + (uVar26 * 0x20 | uVar26 >> 0x1b) +
               ((uVar20 ^ uVar17) & uVar28 ^ uVar20);
      uVar12 = *(uint *)(param_2[2] + 4);
      uVar14 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar27 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar26 = uVar33 + 0x5a827999 + uVar20 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
               ((uVar17 ^ uVar29) & uVar26 ^ uVar17);
      uVar12 = *(uint *)(param_2[2] + 8);
      uVar20 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar25 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar24 = uVar14 + 0x5a827999 + uVar17 + (uVar26 * 0x20 | uVar26 >> 0x1b) +
               ((uVar29 ^ uVar27) & uVar24 ^ uVar29);
      uVar12 = *(uint *)(param_2[2] + 0xc);
      uVar34 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar28 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar29 = uVar20 + 0x5a827999 + uVar29 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
               ((uVar27 ^ uVar25) & uVar26 ^ uVar27);
      uVar12 = *(uint *)param_2[3];
      uVar17 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar26 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar27 = uVar34 + 0x5a827999 + uVar27 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               ((uVar25 ^ uVar28) & uVar24 ^ uVar25);
      uVar12 = *(uint *)(param_2[3] + 4);
      uVar24 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar30 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar25 = uVar17 + 0x5a827999 + uVar25 + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar28 ^ uVar26) & uVar29 ^ uVar28);
      uVar12 = *(uint *)(param_2[3] + 8);
      uVar35 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar28 = uVar24 + 0x5a827999 + uVar28 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               ((uVar26 ^ uVar30) & uVar27 ^ uVar26);
      uVar12 = *(uint *)(param_2[3] + 0xc);
      uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
      uVar27 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar26 = uVar35 + 0x5a827999 + uVar26 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar30 ^ uVar29) & uVar25 ^ uVar30);
      uVar15 = uVar24 ^ uVar15 ^ uVar31 ^ uVar33;
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar30 = uVar12 + 0x5a827999 + uVar30 + (uVar26 * 0x20 | uVar26 >> 0x1b) +
               ((uVar29 ^ uVar27) & uVar28 ^ uVar29);
      uVar19 = uVar35 ^ uVar19 ^ uVar11 ^ uVar14;
      uVar28 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar36 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar29 = uVar15 + 0x5a827999 + uVar29 + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               ((uVar27 ^ uVar25) & uVar26 ^ uVar27);
      uVar19 = uVar12 ^ uVar31 ^ uVar18 ^ uVar20;
      uVar31 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar27 = uVar36 + 0x5a827999 + uVar27 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               ((uVar25 ^ uVar28) & uVar30 ^ uVar25);
      uVar11 = uVar15 ^ uVar11 ^ uVar32 ^ uVar34;
      uVar30 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar26 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar25 = uVar19 + 0x5a827999 + uVar25 + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar28 ^ uVar31) & uVar29 ^ uVar28);
      uVar11 = uVar36 ^ uVar18 ^ uVar13 ^ uVar17;
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar37 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar18 = uVar26 + 0x5a827999 + uVar28 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               ((uVar31 ^ uVar30) & uVar27 ^ uVar31);
      uVar11 = uVar19 ^ uVar32 ^ uVar16 ^ uVar24;
      uVar27 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar31 = uVar37 + 0x6ed9eba1 + uVar31 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
               (uVar25 ^ uVar30 ^ uVar29);
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar13 = uVar26 ^ uVar13 ^ uVar33 ^ uVar35;
      uVar28 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar25 = uVar11 + 0x6ed9eba1 + uVar30 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar18 ^ uVar29 ^ uVar27);
      uVar18 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar13 = uVar37 ^ uVar16 ^ uVar14 ^ uVar12;
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar16 = uVar18 + 0x6ed9eba1 + uVar29 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar31 ^ uVar27 ^ uVar28);
      uVar38 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar13 = uVar11 ^ uVar33 ^ uVar20 ^ uVar15;
      uVar30 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar25 = uVar38 + 0x6ed9eba1 + uVar27 + (uVar16 * 0x20 | uVar16 >> 0x1b) +
               (uVar25 ^ uVar28 ^ uVar32);
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar14 = uVar18 ^ uVar14 ^ uVar34 ^ uVar36;
      uVar29 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar28 = uVar13 + 0x6ed9eba1 + uVar28 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar16 ^ uVar32 ^ uVar30);
      uVar16 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar38 ^ uVar20 ^ uVar17 ^ uVar19;
      uVar27 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar20 = uVar16 + 0x6ed9eba1 + uVar32 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               (uVar25 ^ uVar30 ^ uVar29);
      uVar33 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar13 ^ uVar34 ^ uVar24 ^ uVar26;
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar30 = uVar33 + 0x6ed9eba1 + uVar30 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
               (uVar28 ^ uVar29 ^ uVar27);
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar16 ^ uVar17 ^ uVar35 ^ uVar37;
      uVar32 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar28 = uVar14 + 0x6ed9eba1 + uVar29 + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               (uVar20 ^ uVar27 ^ uVar25);
      uVar20 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar17 = uVar33 ^ uVar24 ^ uVar12 ^ uVar11;
      uVar31 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar24 = uVar20 + 0x6ed9eba1 + uVar27 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               (uVar30 ^ uVar25 ^ uVar32);
      uVar34 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar17 = uVar14 ^ uVar35 ^ uVar15 ^ uVar18;
      uVar29 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar34 + 0x6ed9eba1 + uVar25 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
               (uVar28 ^ uVar32 ^ uVar31);
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar12 = uVar20 ^ uVar12 ^ uVar36 ^ uVar38;
      uVar27 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar30 = uVar17 + 0x6ed9eba1 + uVar32 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               (uVar24 ^ uVar31 ^ uVar29);
      uVar24 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar34 ^ uVar15 ^ uVar19 ^ uVar13;
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar15 = uVar24 + 0x6ed9eba1 + uVar31 + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               (uVar28 ^ uVar29 ^ uVar27);
      uVar35 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar17 ^ uVar36 ^ uVar26 ^ uVar16;
      uVar31 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar29 = uVar35 + 0x6ed9eba1 + uVar29 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               (uVar30 ^ uVar27 ^ uVar25);
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar19 = uVar24 ^ uVar19 ^ uVar37 ^ uVar33;
      uVar30 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar28 = uVar12 + 0x6ed9eba1 + uVar27 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               (uVar15 ^ uVar25 ^ uVar31);
      uVar15 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar19 = uVar35 ^ uVar26 ^ uVar11 ^ uVar14;
      uVar27 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar26 = uVar15 + 0x6ed9eba1 + uVar25 + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               (uVar29 ^ uVar31 ^ uVar30);
      uVar36 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar19 = uVar12 ^ uVar37 ^ uVar18 ^ uVar20;
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar31 = uVar36 + 0x6ed9eba1 + uVar31 + (uVar26 * 0x20 | uVar26 >> 0x1b) +
               (uVar28 ^ uVar30 ^ uVar27);
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar11 = uVar15 ^ uVar11 ^ uVar38 ^ uVar34;
      uVar28 = uVar26 * 0x40000000 | uVar26 >> 2;
      uVar29 = uVar19 + 0x6ed9eba1 + uVar30 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar26 ^ uVar27 ^ uVar25);
      uVar26 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar11 = uVar36 ^ uVar18 ^ uVar13 ^ uVar17;
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar18 = uVar26 + 0x6ed9eba1 + uVar27 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               (uVar31 ^ uVar25 ^ uVar28);
      uVar37 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar11 = uVar19 ^ uVar38 ^ uVar16 ^ uVar24;
      uVar30 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar25 = uVar37 + 0x6ed9eba1 + uVar25 + (uVar18 * 0x20 | uVar18 >> 0x1b) +
               (uVar29 ^ uVar28 ^ uVar32);
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar13 = uVar26 ^ uVar13 ^ uVar33 ^ uVar35;
      uVar29 = uVar18 * 0x40000000 | uVar18 >> 2;
      uVar28 = uVar11 + 0x6ed9eba1 + uVar28 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar18 ^ uVar32 ^ uVar30);
      uVar18 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar13 = uVar37 ^ uVar16 ^ uVar14 ^ uVar12;
      uVar38 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar27 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar31 = uVar18 + 0x8f1bbcdc + uVar32 + (uVar30 & uVar29) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar30 ^ uVar29) & uVar25);
      uVar13 = uVar11 ^ uVar33 ^ uVar20 ^ uVar15;
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar30 = uVar38 + 0x8f1bbcdc + uVar30 + (uVar29 & uVar27) + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               ((uVar29 ^ uVar27) & uVar28);
      uVar14 = uVar18 ^ uVar14 ^ uVar34 ^ uVar36;
      uVar16 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar28 = uVar13 + 0x8f1bbcdc + uVar29 + (uVar27 & uVar25) + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               ((uVar27 ^ uVar25) & uVar31);
      uVar14 = uVar38 ^ uVar20 ^ uVar17 ^ uVar19;
      uVar33 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar31 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar27 = uVar16 + 0x8f1bbcdc + uVar27 + (uVar25 & uVar32) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar25 ^ uVar32) & uVar30);
      uVar14 = uVar13 ^ uVar34 ^ uVar24 ^ uVar26;
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar30 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar33 + 0x8f1bbcdc + uVar25 + (uVar32 & uVar31) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar32 ^ uVar31) & uVar28);
      uVar17 = uVar16 ^ uVar17 ^ uVar35 ^ uVar37;
      uVar20 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar27 = uVar14 + 0x8f1bbcdc + uVar32 + (uVar31 & uVar30) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar31 ^ uVar30) & uVar27);
      uVar17 = uVar33 ^ uVar24 ^ uVar12 ^ uVar11;
      uVar34 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar25 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar20 + 0x8f1bbcdc + uVar31 + (uVar30 & uVar29) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar30 ^ uVar29) & uVar28);
      uVar17 = uVar14 ^ uVar35 ^ uVar15 ^ uVar18;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar31 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar27 = uVar34 + 0x8f1bbcdc + uVar30 + (uVar29 & uVar25) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar29 ^ uVar25) & uVar27);
      uVar12 = uVar20 ^ uVar12 ^ uVar36 ^ uVar38;
      uVar24 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar30 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar28 = uVar17 + 0x8f1bbcdc + uVar29 + (uVar25 & uVar31) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar25 ^ uVar31) & uVar28);
      uVar12 = uVar34 ^ uVar15 ^ uVar19 ^ uVar13;
      uVar35 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar15 = uVar24 + 0x8f1bbcdc + uVar25 + (uVar31 & uVar30) + (uVar28 * 0x20 | uVar28 >> 0x1b) +
               ((uVar31 ^ uVar30) & uVar27);
      uVar12 = uVar17 ^ uVar36 ^ uVar26 ^ uVar16;
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar27 = uVar28 * 0x40000000 | uVar28 >> 2;
      uVar31 = uVar35 + 0x8f1bbcdc + uVar31 + (uVar30 & uVar29) + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               ((uVar30 ^ uVar29) & uVar28);
      uVar19 = uVar24 ^ uVar19 ^ uVar37 ^ uVar33;
      uVar28 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar25 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar30 = uVar12 + 0x8f1bbcdc + uVar30 + (uVar29 & uVar27) + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               ((uVar29 ^ uVar27) & uVar15);
      uVar19 = uVar35 ^ uVar26 ^ uVar11 ^ uVar14;
      uVar36 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar15 = uVar28 + 0x8f1bbcdc + uVar29 + (uVar27 & uVar25) + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               ((uVar27 ^ uVar25) & uVar31);
      uVar19 = uVar12 ^ uVar37 ^ uVar18 ^ uVar20;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar31 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar27 = uVar36 + 0x8f1bbcdc + uVar27 + (uVar25 & uVar32) + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               ((uVar25 ^ uVar32) & uVar30);
      uVar11 = uVar28 ^ uVar11 ^ uVar38 ^ uVar34;
      uVar26 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar30 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar15 = uVar19 + 0x8f1bbcdc + uVar25 + (uVar32 & uVar31) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar32 ^ uVar31) & uVar15);
      uVar11 = uVar36 ^ uVar18 ^ uVar13 ^ uVar17;
      uVar37 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar32 = uVar26 + 0x8f1bbcdc + uVar32 + (uVar31 & uVar30) + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               ((uVar31 ^ uVar30) & uVar27);
      uVar11 = uVar19 ^ uVar38 ^ uVar16 ^ uVar24;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar18 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar27 = uVar37 + 0x8f1bbcdc + uVar31 + (uVar30 & uVar29) + (uVar32 * 0x20 | uVar32 >> 0x1b) +
               ((uVar30 ^ uVar29) & uVar15);
      uVar13 = uVar26 ^ uVar13 ^ uVar33 ^ uVar35;
      uVar25 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar31 = uVar32 * 0x40000000 | uVar32 >> 2;
      uVar15 = uVar11 + 0x8f1bbcdc + uVar30 + (uVar29 & uVar18) + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               ((uVar29 ^ uVar18) & uVar32);
      uVar13 = uVar37 ^ uVar16 ^ uVar14 ^ uVar12;
      uVar38 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar30 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar16 = uVar25 + 0x8f1bbcdc + uVar29 + (uVar18 & uVar31) + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               ((uVar18 ^ uVar31) & uVar27);
      uVar13 = uVar11 ^ uVar33 ^ uVar20 ^ uVar28;
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar29 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar15 = uVar38 + 0x8f1bbcdc + uVar18 + (uVar31 & uVar30) + (uVar16 * 0x20 | uVar16 >> 0x1b) +
               ((uVar31 ^ uVar30) & uVar15);
      uVar14 = uVar25 ^ uVar14 ^ uVar34 ^ uVar36;
      uVar27 = uVar16 * 0x40000000 | uVar16 >> 2;
      uVar31 = uVar13 + 0xca62c1d6 + uVar31 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               (uVar16 ^ uVar30 ^ uVar29);
      uVar16 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar38 ^ uVar20 ^ uVar17 ^ uVar19;
      uVar18 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar20 = uVar16 + 0xca62c1d6 + uVar30 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar15 ^ uVar29 ^ uVar27);
      uVar39 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar14 = uVar13 ^ uVar34 ^ uVar24 ^ uVar26;
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar15 = uVar39 + 0xca62c1d6 + uVar29 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
               (uVar31 ^ uVar27 ^ uVar18);
      uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
      uVar17 = uVar16 ^ uVar17 ^ uVar35 ^ uVar37;
      uVar30 = uVar20 * 0x40000000 | uVar20 >> 2;
      uVar27 = uVar14 + 0xca62c1d6 + uVar27 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               (uVar20 ^ uVar18 ^ uVar32);
      uVar20 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar17 = uVar39 ^ uVar24 ^ uVar12 ^ uVar11;
      uVar29 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar15 = uVar20 + 0xca62c1d6 + uVar18 + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               (uVar15 ^ uVar32 ^ uVar30);
      uVar34 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar17 = uVar14 ^ uVar35 ^ uVar28 ^ uVar25;
      uVar24 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar31 = uVar34 + 0xca62c1d6 + uVar32 + (uVar15 * 0x20 | uVar15 >> 0x1b) +
               (uVar27 ^ uVar30 ^ uVar29);
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar12 = uVar20 ^ uVar12 ^ uVar36 ^ uVar38;
      uVar18 = uVar15 * 0x40000000 | uVar15 >> 2;
      uVar27 = uVar17 + 0xca62c1d6 + uVar30 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar15 ^ uVar29 ^ uVar24);
      uVar15 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar34 ^ uVar28 ^ uVar19 ^ uVar13;
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar29 = uVar15 + 0xca62c1d6 + uVar29 + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               (uVar31 ^ uVar24 ^ uVar18);
      uVar28 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar12 = uVar17 ^ uVar36 ^ uVar26 ^ uVar16;
      uVar31 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar27 = uVar28 + 0xca62c1d6 + uVar24 + (uVar29 * 0x20 | uVar29 >> 0x1b) +
               (uVar27 ^ uVar18 ^ uVar32);
      uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
      uVar19 = uVar15 ^ uVar19 ^ uVar37 ^ uVar39;
      uVar30 = uVar29 * 0x40000000 | uVar29 >> 2;
      uVar24 = uVar12 + 0xca62c1d6 + uVar18 + (uVar27 * 0x20 | uVar27 >> 0x1b) +
               (uVar29 ^ uVar32 ^ uVar31);
      uVar18 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar19 = uVar28 ^ uVar26 ^ uVar11 ^ uVar14;
      uVar29 = uVar27 * 0x40000000 | uVar27 >> 2;
      uVar32 = uVar18 + 0xca62c1d6 + uVar32 + (uVar24 * 0x20 | uVar24 >> 0x1b) +
               (uVar27 ^ uVar31 ^ uVar30);
      uVar26 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar19 = uVar12 ^ uVar37 ^ uVar25 ^ uVar20;
      uVar27 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar31 = uVar26 + 0xca62c1d6 + uVar31 + (uVar32 * 0x20 | uVar32 >> 0x1b) +
               (uVar24 ^ uVar30 ^ uVar29);
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      uVar11 = uVar18 ^ uVar11 ^ uVar38 ^ uVar34;
      uVar33 = uVar32 * 0x40000000 | uVar32 >> 2;
      uVar30 = uVar19 + 0xca62c1d6 + uVar30 + (uVar31 * 0x20 | uVar31 >> 0x1b) +
               (uVar32 ^ uVar29 ^ uVar27);
      uVar24 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      uVar17 = uVar26 ^ uVar25 ^ uVar13 ^ uVar17;
      uVar32 = uVar31 * 0x40000000 | uVar31 >> 2;
      uVar25 = uVar24 + 0xca62c1d6 + uVar29 + (uVar30 * 0x20 | uVar30 >> 0x1b) +
               (uVar31 ^ uVar27 ^ uVar33);
      uVar31 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      uVar15 = uVar19 ^ uVar38 ^ uVar16 ^ uVar15;
      uVar29 = uVar30 * 0x40000000 | uVar30 >> 2;
      uVar17 = uVar31 + 0xca62c1d6 + uVar27 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar30 ^ uVar33 ^ uVar32);
      uVar11 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      uVar28 = uVar24 ^ uVar13 ^ uVar39 ^ uVar28;
      uVar15 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar25 = uVar11 + 0xca62c1d6 + uVar33 + (uVar17 * 0x20 | uVar17 >> 0x1b) +
               (uVar25 ^ uVar32 ^ uVar29);
      uVar13 = uVar28 << 1 | (uint)((int)uVar28 < 0);
      uVar12 = uVar31 ^ uVar16 ^ uVar14 ^ uVar12;
      uVar19 = uVar17 * 0x40000000 | uVar17 >> 2;
      uVar24 = uVar13 + 0xca62c1d6 + uVar32 + (uVar25 * 0x20 | uVar25 >> 0x1b) +
               (uVar17 ^ uVar29 ^ uVar15);
      uVar18 = uVar11 ^ uVar39 ^ uVar20 ^ uVar18;
      uVar17 = uVar25 * 0x40000000 | uVar25 >> 2;
      uVar16 = (uVar12 << 1 | (uint)((int)uVar12 < 0)) + 0xca62c1d6 + uVar29 +
               (uVar24 * 0x20 | uVar24 >> 0x1b) + (uVar25 ^ uVar15 ^ uVar19);
      uVar26 = uVar13 ^ uVar14 ^ uVar34 ^ uVar26;
      uVar14 = uVar24 * 0x40000000 | uVar24 >> 2;
      uVar11 = (uVar18 << 1 | (uint)((int)uVar18 < 0)) + 0xca62c1d6 + uVar15 +
               (uVar16 * 0x20 | uVar16 >> 0x1b) + (uVar24 ^ uVar19 ^ uVar17);
      uVar12 = (uVar26 << 1 | (uint)((int)uVar26 < 0)) + 0xca62c1d6 + uVar19 +
               (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar16 ^ uVar17 ^ uVar14) + *param_1;
      uVar11 = uVar11 + param_1[1];
      uVar13 = (uVar16 * 0x40000000 | uVar16 >> 2) + param_1[2];
      uVar14 = uVar14 + param_1[3];
      uVar17 = uVar17 + param_1[4];
      *param_1 = uVar12;
      param_1[1] = uVar11;
      param_1[2] = uVar13;
      param_1[3] = uVar14;
      param_1[4] = uVar17;
      param_3 = param_3 + -1;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
    return;
  }
  if ((DAT_0094b5a0 & 0x20000000) == 0) {
    if ((DAT_0094b5a0 & 0x128) != 0x128) {
      if ((DAT_0094b59c & 0x10000000 | DAT_0094b598 & 0x40000000) == 0x50000000) {
        uVar12 = *param_1;
        uVar11 = param_1[1];
        uVar13 = param_1[2];
        uVar14 = param_1[3];
        uVar17 = param_1[4];
        uVar19 = uVar11 & (uVar13 ^ uVar14);
        auVar40 = vpshufb_avx(*param_2,_DAT_0057ccc0);
        pauVar21 = param_2 + 4;
        auVar44 = vpshufb_avx(param_2[1],_DAT_0057ccc0);
        auVar48 = vpshufb_avx(param_2[2],_DAT_0057ccc0);
        auVar51 = vpshufb_avx(param_2[3],_DAT_0057ccc0);
        local_80 = vpaddd_avx(auVar40,_DAT_0057cc40);
        local_70 = vpaddd_avx(auVar44,_DAT_0057cc40);
        local_60 = vpaddd_avx(auVar48,_DAT_0057cc40);
        auVar54 = _DAT_0057cc40;
        while( true ) {
          auVar10 = _DAT_0057cc40;
          uVar15 = uVar11 >> 2 | uVar11 << 0x1e;
          auVar57 = vpalignr_avx(auVar44,auVar40,8);
          auVar58 = vpaddd_avx(auVar54,auVar51);
          uVar11 = uVar12 << 5 | uVar12 >> 0x1b;
          auVar56 = vpsrldq_avx(auVar51,4);
          uVar19 = uVar17 + local_80._0_4_ + (uVar19 ^ uVar14) + uVar11;
          uVar11 = (uVar12 << 5) >> 7 | uVar11 << 0x19;
          auVar57 = auVar57 ^ auVar40 ^ auVar56 ^ auVar48;
          uVar17 = uVar19 * 0x20 | uVar19 >> 0x1b;
          auVar56 = vpsrld_avx(auVar57,0x1f);
          uVar14 = uVar14 + local_80._4_4_ + (uVar12 & (uVar15 ^ uVar13) ^ uVar13) + uVar17;
          uVar18 = uVar19 * 0x20 >> 7 | uVar17 << 0x19;
          auVar67 = vpslldq_avx(auVar57,0xc);
          auVar57 = vpaddd_avx(auVar57,auVar57);
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar63 = vpsrld_avx(auVar67,0x1e);
          auVar57 = vpor_avx(auVar57,auVar56);
          uVar12 = uVar13 + local_80._8_4_ + (uVar19 & (uVar11 ^ uVar15) ^ uVar15) + uVar17;
          auVar68 = vpslld_avx(auVar67,2);
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          auVar68 = auVar57 ^ auVar63 ^ auVar68;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar14 = uVar15 + local_80._12_4_ + (uVar14 & (uVar18 ^ uVar11) ^ uVar11) + uVar13;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          auVar57 = vpalignr_avx(auVar48,auVar44,8);
          auVar54 = vpaddd_avx(auVar54,auVar68);
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar56 = vpsrldq_avx(auVar68,4);
          uVar12 = uVar11 + local_70._0_4_ + (uVar12 & (uVar17 ^ uVar18) ^ uVar18) + uVar19;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          auVar57 = auVar57 ^ auVar44 ^ auVar56 ^ auVar51;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar56 = vpsrld_avx(auVar57,0x1f);
          uVar15 = uVar18 + local_70._4_4_ + (uVar14 & (uVar13 ^ uVar17) ^ uVar17) + uVar11;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          auVar67 = vpslldq_avx(auVar57,0xc);
          auVar57 = vpaddd_avx(auVar57,auVar57);
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar63 = vpsrld_avx(auVar67,0x1e);
          auVar57 = vpor_avx(auVar57,auVar56);
          uVar14 = uVar17 + local_70._8_4_ + (uVar12 & (uVar19 ^ uVar13) ^ uVar13) + uVar18;
          auVar69 = vpslld_avx(auVar67,2);
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          auVar69 = auVar57 ^ auVar63 ^ auVar69;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar13 + local_70._12_4_ + (uVar15 & (uVar11 ^ uVar19) ^ uVar19) + uVar17;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          auVar56 = vpalignr_avx(auVar51,auVar48,8);
          auVar57 = vpaddd_avx(_DAT_0057cc60,auVar69);
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar63 = vpsrldq_avx(auVar69,4);
          uVar14 = uVar19 + local_60._0_4_ + (uVar14 & (uVar18 ^ uVar11) ^ uVar11) + uVar13;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          auVar56 = auVar56 ^ auVar48 ^ auVar63 ^ auVar68;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar63 = vpsrld_avx(auVar56,0x1f);
          uVar12 = uVar11 + local_60._4_4_ + (uVar12 & (uVar17 ^ uVar18) ^ uVar18) + uVar19;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          auVar70 = vpslldq_avx(auVar56,0xc);
          auVar56 = vpaddd_avx(auVar56,auVar56);
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar67 = vpsrld_avx(auVar70,0x1e);
          auVar56 = vpor_avx(auVar56,auVar63);
          uVar15 = uVar18 + local_60._8_4_ + (uVar14 & (uVar13 ^ uVar17) ^ uVar17) + uVar11;
          auVar70 = vpslld_avx(auVar70,2);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          auVar70 = auVar56 ^ auVar67 ^ auVar70;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar14 = uVar17 + local_60._12_4_ + (uVar12 & (uVar19 ^ uVar13) ^ uVar13) + uVar18;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          auVar63 = vpalignr_avx(auVar68,auVar51,8);
          local_50 = auVar58._0_4_;
          auVar56 = vpaddd_avx(_DAT_0057cc60,auVar70);
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar67 = vpsrldq_avx(auVar70,4);
          uVar12 = uVar13 + local_50 + (uVar15 & (uVar11 ^ uVar19) ^ uVar19) + uVar17;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          local_4c = auVar58._4_4_;
          auVar63 = auVar63 ^ auVar51 ^ auVar67 ^ auVar69;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar67 = vpsrld_avx(auVar63,0x1f);
          uVar14 = uVar19 + local_4c + (uVar14 & (uVar18 ^ uVar11) ^ uVar11) + uVar13;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          auVar71 = vpslldq_avx(auVar63,0xc);
          auVar63 = vpaddd_avx(auVar63,auVar63);
          local_48 = auVar58._8_4_;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar64 = vpsrld_avx(auVar71,0x1e);
          auVar63 = vpor_avx(auVar63,auVar67);
          uVar12 = uVar11 + local_48 + (uVar12 & (uVar17 ^ uVar18) ^ uVar18) + uVar19;
          auVar71 = vpslld_avx(auVar71,2);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          local_44 = auVar58._12_4_;
          auVar71 = auVar63 ^ auVar64 ^ auVar71;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar15 = uVar18 + local_44 + (uVar14 & (uVar13 ^ uVar17) ^ uVar17) + uVar11;
          auVar63 = vpalignr_avx(auVar71,auVar70,8);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          local_80._0_4_ = auVar54._0_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar58 = vpaddd_avx(_DAT_0057cc60,auVar71);
          auVar63 = auVar40 ^ auVar68 ^ auVar44 ^ auVar63;
          uVar14 = uVar17 + local_80._0_4_ + (uVar12 & (uVar19 ^ uVar13) ^ uVar13) + uVar18;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          auVar67 = vpsrld_avx(auVar63,0x1e);
          local_80._4_4_ = auVar54._4_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar40 = vpslld_avx(auVar63,2);
          uVar12 = uVar13 + local_80._4_4_ + (uVar15 & (uVar11 ^ uVar19) ^ uVar19) + uVar17;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          local_80._8_4_ = auVar54._8_4_;
          auVar63 = vpor_avx(auVar40,auVar67);
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar14 = uVar19 + local_80._8_4_ + (uVar14 & (uVar18 ^ uVar11) ^ uVar11) + uVar13;
          local_80._12_4_ = auVar54._12_4_;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_80._12_4_ + (uVar12 & (uVar17 ^ uVar18) ^ uVar18) + uVar19;
          auVar54 = vpalignr_avx(auVar63,auVar71,8);
          local_70._0_4_ = auVar57._0_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar40 = vpaddd_avx(_DAT_0057cc60,auVar63);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_70._0_4_ + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          auVar54 = auVar44 ^ auVar69 ^ auVar48 ^ auVar54;
          local_70._4_4_ = auVar57._4_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar67 = vpsrld_avx(auVar54,0x1e);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_70._4_4_ + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          auVar44 = vpslld_avx(auVar54,2);
          local_70._8_4_ = auVar57._8_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar13 + local_70._8_4_ + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          auVar67 = vpor_avx(auVar44,auVar67);
          local_70._12_4_ = auVar57._12_4_;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar14 = uVar19 + local_70._12_4_ + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
          auVar54 = vpalignr_avx(auVar67,auVar63,8);
          local_60._0_4_ = auVar56._0_4_;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar44 = vpaddd_avx(_DAT_0057cc60,auVar67);
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_60._0_4_ + (uVar12 ^ uVar18 ^ uVar17) + uVar19;
          auVar54 = auVar48 ^ auVar70 ^ auVar51 ^ auVar54;
          local_60._4_4_ = auVar56._4_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar57 = vpsrld_avx(auVar54,0x1e);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_60._4_4_ + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          auVar48 = vpslld_avx(auVar54,2);
          local_60._8_4_ = auVar56._8_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_60._8_4_ + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          auVar57 = vpor_avx(auVar48,auVar57);
          local_60._12_4_ = auVar56._12_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar13 + local_60._12_4_ + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          auVar54 = vpalignr_avx(auVar57,auVar67,8);
          local_50 = auVar58._0_4_;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar48 = vpaddd_avx(_DAT_0057cc80,auVar57);
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar14 = uVar19 + local_50 + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
          auVar54 = auVar51 ^ auVar71 ^ auVar68 ^ auVar54;
          local_4c = auVar58._4_4_;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar56 = vpsrld_avx(auVar54,0x1e);
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_4c + (uVar12 ^ uVar18 ^ uVar17) + uVar19;
          auVar51 = vpslld_avx(auVar54,2);
          local_48 = auVar58._8_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_48 + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          auVar56 = vpor_avx(auVar51,auVar56);
          local_44 = auVar58._12_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_44 + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          auVar54 = vpalignr_avx(auVar56,auVar57,8);
          local_80._0_4_ = auVar40._0_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar51 = vpaddd_avx(_DAT_0057cc80,auVar56);
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar13 + local_80._0_4_ + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          auVar54 = auVar68 ^ auVar63 ^ auVar69 ^ auVar54;
          local_80._4_4_ = auVar40._4_4_;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar58 = vpsrld_avx(auVar54,0x1e);
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar14 = uVar19 + local_80._4_4_ + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
          auVar54 = vpslld_avx(auVar54,2);
          local_80._8_4_ = auVar40._8_4_;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_80._8_4_ + (uVar12 ^ uVar18 ^ uVar17) + uVar19;
          auVar58 = vpor_avx(auVar54,auVar58);
          local_80._12_4_ = auVar40._12_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_80._12_4_ + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          auVar54 = vpalignr_avx(auVar58,auVar56,8);
          local_70._0_4_ = auVar44._0_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar40 = vpaddd_avx(_DAT_0057cc80,auVar58);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_70._0_4_ + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          auVar54 = auVar69 ^ auVar67 ^ auVar70 ^ auVar54;
          local_70._4_4_ = auVar44._4_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar68 = vpsrld_avx(auVar54,0x1e);
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar13 + local_70._4_4_ + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          auVar54 = vpslld_avx(auVar54,2);
          local_70._8_4_ = auVar44._8_4_;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar14 = uVar19 + local_70._8_4_ + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
          auVar68 = vpor_avx(auVar54,auVar68);
          local_70._12_4_ = auVar44._12_4_;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar11 + local_70._12_4_ + (uVar12 ^ uVar18 ^ uVar17) + uVar19;
          auVar54 = vpalignr_avx(auVar68,auVar58,8);
          local_60._0_4_ = auVar48._0_4_;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          auVar44 = vpaddd_avx(_DAT_0057cc80,auVar68);
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar54 = auVar70 ^ auVar57 ^ auVar71 ^ auVar54;
          uVar15 = uVar18 + local_60._0_4_ + ((uVar14 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
                   uVar11;
          local_60._4_4_ = auVar48._4_4_;
          auVar69 = vpsrld_avx(auVar54,0x1e);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          auVar54 = vpslld_avx(auVar54,2);
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar14 = uVar17 + local_60._4_4_ + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
                   uVar18;
          local_60._8_4_ = auVar48._8_4_;
          auVar69 = vpor_avx(auVar54,auVar69);
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar13 + local_60._8_4_ + ((uVar15 ^ uVar11) & (uVar11 ^ uVar19) ^ uVar11) +
                   uVar17;
          local_60._12_4_ = auVar48._12_4_;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar14 = uVar19 + local_60._12_4_ + ((uVar14 ^ uVar18) & (uVar18 ^ uVar11) ^ uVar18) +
                   uVar13;
          auVar54 = vpalignr_avx(auVar69,auVar68,8);
          local_50 = auVar51._0_4_;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          auVar48 = vpaddd_avx(_DAT_0057cc80,auVar69);
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar54 = auVar71 ^ auVar56 ^ auVar63 ^ auVar54;
          uVar12 = uVar11 + local_50 + ((uVar12 ^ uVar17) & (uVar17 ^ uVar18) ^ uVar17) + uVar19;
          local_4c = auVar51._4_4_;
          auVar70 = vpsrld_avx(auVar54,0x1e);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          auVar54 = vpslld_avx(auVar54,2);
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar15 = uVar18 + local_4c + ((uVar14 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) + uVar11;
          local_48 = auVar51._8_4_;
          auVar70 = vpor_avx(auVar54,auVar70);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar14 = uVar17 + local_48 + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) + uVar18;
          local_44 = auVar51._12_4_;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar13 + local_44 + ((uVar15 ^ uVar11) & (uVar11 ^ uVar19) ^ uVar11) + uVar17;
          auVar54 = vpalignr_avx(auVar70,auVar69,8);
          local_80._0_4_ = auVar40._0_4_;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          auVar51 = vpaddd_avx(_DAT_0057cca0,auVar70);
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar54 = auVar63 ^ auVar58 ^ auVar67 ^ auVar54;
          uVar14 = uVar19 + local_80._0_4_ + ((uVar14 ^ uVar18) & (uVar18 ^ uVar11) ^ uVar18) +
                   uVar13;
          local_80._4_4_ = auVar40._4_4_;
          auVar63 = vpsrld_avx(auVar54,0x1e);
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          auVar54 = vpslld_avx(auVar54,2);
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar11 + local_80._4_4_ + ((uVar12 ^ uVar17) & (uVar17 ^ uVar18) ^ uVar17) +
                   uVar19;
          local_80._8_4_ = auVar40._8_4_;
          auVar63 = vpor_avx(auVar54,auVar63);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar15 = uVar18 + local_80._8_4_ + ((uVar14 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
                   uVar11;
          local_80._12_4_ = auVar40._12_4_;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar14 = uVar17 + local_80._12_4_ + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
                   uVar18;
          auVar54 = vpalignr_avx(auVar63,auVar70,8);
          local_70._0_4_ = auVar44._0_4_;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          auVar40 = vpaddd_avx(_DAT_0057cca0,auVar63);
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          auVar54 = auVar67 ^ auVar68 ^ auVar57 ^ auVar54;
          uVar12 = uVar13 + local_70._0_4_ + ((uVar15 ^ uVar11) & (uVar11 ^ uVar19) ^ uVar11) +
                   uVar17;
          local_70._4_4_ = auVar44._4_4_;
          auVar67 = vpsrld_avx(auVar54,0x1e);
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          auVar54 = vpslld_avx(auVar54,2);
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar14 = uVar19 + local_70._4_4_ + ((uVar14 ^ uVar18) & (uVar18 ^ uVar11) ^ uVar18) +
                   uVar13;
          local_70._8_4_ = auVar44._8_4_;
          auVar67 = vpor_avx(auVar54,auVar67);
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar11 + local_70._8_4_ + ((uVar12 ^ uVar17) & (uVar17 ^ uVar18) ^ uVar17) +
                   uVar19;
          local_70._12_4_ = auVar44._12_4_;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar15 = uVar18 + local_70._12_4_ + ((uVar14 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
                   uVar11;
          auVar54 = vpalignr_avx(auVar67,auVar63,8);
          local_60._0_4_ = auVar48._0_4_;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          auVar44 = vpaddd_avx(_DAT_0057cca0,auVar67);
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar54 = auVar57 ^ auVar69 ^ auVar56 ^ auVar54;
          uVar14 = uVar17 + local_60._0_4_ + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
                   uVar18;
          local_60._4_4_ = auVar48._4_4_;
          auVar57 = vpsrld_avx(auVar54,0x1e);
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          auVar54 = vpslld_avx(auVar54,2);
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar13 + local_60._4_4_ + ((uVar15 ^ uVar11) & (uVar11 ^ uVar19) ^ uVar11) +
                   uVar17;
          local_60._8_4_ = auVar48._8_4_;
          auVar57 = vpor_avx(auVar54,auVar57);
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar14 = uVar19 + local_60._8_4_ + ((uVar14 ^ uVar18) & (uVar18 ^ uVar11) ^ uVar18) +
                   uVar13;
          local_60._12_4_ = auVar48._12_4_;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar12 = uVar11 + local_60._12_4_ + ((uVar12 ^ uVar17) & (uVar17 ^ uVar18) ^ uVar17) +
                   uVar19;
          auVar54 = vpalignr_avx(auVar57,auVar67,8);
          local_50 = auVar51._0_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          auVar48 = vpaddd_avx(_DAT_0057cca0,auVar57);
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_50 + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          auVar54 = auVar56 ^ auVar70 ^ auVar58 ^ auVar54;
          local_4c = auVar51._4_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          auVar58 = vpsrld_avx(auVar54,0x1e);
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_4c + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          auVar54 = vpslld_avx(auVar54,2);
          local_48 = auVar51._8_4_;
          uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar13 + local_48 + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          auVar54 = vpor_avx(auVar54,auVar58);
          local_44 = auVar51._12_4_;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
          uVar14 = uVar19 + local_44 + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
          local_80._0_4_ = auVar40._0_4_;
          auVar51 = vpaddd_avx(_DAT_0057cca0,auVar54);
          uVar19 = uVar14 * 0x20 | uVar14 >> 0x1b;
          uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_80._0_4_ + (uVar12 ^ uVar18 ^ uVar17) + uVar19;
          local_80._4_4_ = auVar40._4_4_;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar19 = uVar14 * 0x20 >> 7 | uVar19 << 0x19;
          uVar15 = uVar18 + local_80._4_4_ + (uVar14 ^ uVar17 ^ uVar13) + uVar11;
          local_80._8_4_ = auVar40._8_4_;
          uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar14 = uVar17 + local_80._8_4_ + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
          local_80._12_4_ = auVar40._12_4_;
          uVar12 = uVar14 * 0x20;
          uVar17 = uVar12 | uVar14 >> 0x1b;
          uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
          uVar13 = uVar13 + local_80._12_4_ + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
          local_70._0_4_ = auVar44._0_4_;
          local_70._4_4_ = auVar44._4_4_;
          local_70._8_4_ = auVar44._8_4_;
          local_70._12_4_ = auVar44._12_4_;
          local_60._0_4_ = auVar48._0_4_;
          local_60._4_4_ = auVar48._4_4_;
          local_60._8_4_ = auVar48._8_4_;
          local_60._12_4_ = auVar48._12_4_;
          local_50 = auVar51._0_4_;
          local_4c = auVar51._4_4_;
          local_48 = auVar51._8_4_;
          local_44 = auVar51._12_4_;
          if (pauVar21 == param_2 + param_3 * 4) break;
          pauVar23 = pauVar21 + 1;
          pauVar22 = pauVar21 + 2;
          pauVar1 = pauVar21 + 3;
          auVar40 = vpshufb_avx(*pauVar21,_DAT_0057ccc0);
          pauVar21 = pauVar21 + 4;
          auVar44 = vpshufb_avx(*pauVar23,_DAT_0057ccc0);
          uVar15 = uVar13 * 0x20 | uVar13 >> 0x1b;
          local_80 = vpaddd_avx(auVar40,_DAT_0057cc40);
          uVar17 = uVar12 >> 7 | uVar17 << 0x19;
          uVar19 = uVar19 + local_70._0_4_ + (uVar14 ^ uVar11 ^ uVar18) + uVar15;
          uVar16 = uVar19 * 0x20 | uVar19 >> 0x1b;
          uVar14 = uVar13 * 0x20 >> 7 | uVar15 << 0x19;
          uVar12 = uVar11 + local_70._4_4_ + (uVar13 ^ uVar18 ^ uVar17) + uVar16;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar15 = uVar19 * 0x20 >> 7 | uVar16 << 0x19;
          uVar13 = uVar18 + local_70._8_4_ + (uVar19 ^ uVar17 ^ uVar14) + uVar11;
          uVar18 = uVar13 * 0x20 | uVar13 >> 0x1b;
          uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar17 = uVar17 + local_70._12_4_ + (uVar12 ^ uVar14 ^ uVar15) + uVar18;
          auVar48 = vpshufb_avx(*pauVar22,_DAT_0057ccc0);
          uVar19 = uVar17 * 0x20 | uVar17 >> 0x1b;
          local_70 = vpaddd_avx(auVar44,_DAT_0057cc40);
          uVar16 = uVar13 * 0x20 >> 7 | uVar18 << 0x19;
          uVar12 = uVar14 + local_60._0_4_ + (uVar13 ^ uVar15 ^ uVar11) + uVar19;
          uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar19 = uVar17 * 0x20 >> 7 | uVar19 << 0x19;
          uVar17 = uVar15 + local_60._4_4_ + (uVar17 ^ uVar11 ^ uVar16) + uVar13;
          uVar15 = uVar17 * 0x20 | uVar17 >> 0x1b;
          uVar14 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
          uVar12 = uVar11 + local_60._8_4_ + (uVar12 ^ uVar16 ^ uVar19) + uVar15;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar18 = uVar17 * 0x20 >> 7 | uVar15 << 0x19;
          uVar15 = uVar16 + local_60._12_4_ + (uVar17 ^ uVar19 ^ uVar14) + uVar11;
          auVar51 = vpshufb_avx(*pauVar1,_DAT_0057ccc0);
          uVar17 = uVar15 * 0x20 | uVar15 >> 0x1b;
          local_60 = vpaddd_avx(auVar48,_DAT_0057cc40);
          uVar13 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar12 = uVar19 + local_50 + (uVar12 ^ uVar14 ^ uVar18) + uVar17;
          uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
          uVar17 = uVar15 * 0x20 >> 7 | uVar17 << 0x19;
          uVar19 = uVar14 + local_4c + (uVar15 ^ uVar18 ^ uVar13) + uVar11;
          uVar15 = uVar19 * 0x20 | uVar19 >> 0x1b;
          uVar14 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
          uVar11 = uVar18 + local_48 + (uVar12 ^ uVar13 ^ uVar17) + uVar15;
          uVar12 = uVar13 + local_44 + (uVar19 ^ uVar17 ^ uVar14) + (uVar11 * 0x20 | uVar11 >> 0x1b)
                   + *param_1;
          uVar11 = uVar11 + param_1[1];
          uVar13 = (uVar19 * 0x20 >> 7 | uVar15 << 0x19) + param_1[2];
          uVar14 = uVar14 + param_1[3];
          *param_1 = uVar12;
          uVar17 = uVar17 + param_1[4];
          param_1[1] = uVar11;
          param_1[2] = uVar13;
          param_1[3] = uVar14;
          param_1[4] = uVar17;
          uVar19 = uVar11 & (uVar13 ^ uVar14);
          auVar54 = auVar10;
        }
        uVar15 = uVar13 * 0x20 | uVar13 >> 0x1b;
        uVar17 = uVar12 >> 7 | uVar17 << 0x19;
        uVar19 = uVar19 + local_70._0_4_ + (uVar14 ^ uVar11 ^ uVar18) + uVar15;
        uVar16 = uVar19 * 0x20 | uVar19 >> 0x1b;
        uVar14 = uVar13 * 0x20 >> 7 | uVar15 << 0x19;
        uVar12 = uVar11 + local_70._4_4_ + (uVar13 ^ uVar18 ^ uVar17) + uVar16;
        uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
        uVar15 = uVar19 * 0x20 >> 7 | uVar16 << 0x19;
        uVar13 = uVar18 + local_70._8_4_ + (uVar19 ^ uVar17 ^ uVar14) + uVar11;
        uVar18 = uVar13 * 0x20 | uVar13 >> 0x1b;
        uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
        uVar17 = uVar17 + local_70._12_4_ + (uVar12 ^ uVar14 ^ uVar15) + uVar18;
        uVar19 = uVar17 * 0x20 | uVar17 >> 0x1b;
        uVar18 = uVar13 * 0x20 >> 7 | uVar18 << 0x19;
        uVar12 = uVar14 + local_60._0_4_ + (uVar13 ^ uVar15 ^ uVar11) + uVar19;
        uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
        uVar14 = uVar17 * 0x20 >> 7 | uVar19 << 0x19;
        uVar17 = uVar15 + local_60._4_4_ + (uVar17 ^ uVar11 ^ uVar18) + uVar13;
        uVar19 = uVar17 * 0x20 | uVar17 >> 0x1b;
        uVar13 = uVar12 * 0x20 >> 7 | uVar13 << 0x19;
        uVar12 = uVar11 + local_60._8_4_ + (uVar12 ^ uVar18 ^ uVar14) + uVar19;
        uVar11 = uVar12 * 0x20 | uVar12 >> 0x1b;
        uVar19 = uVar17 * 0x20 >> 7 | uVar19 << 0x19;
        uVar15 = uVar18 + local_60._12_4_ + (uVar17 ^ uVar14 ^ uVar13) + uVar11;
        uVar18 = uVar15 * 0x20 | uVar15 >> 0x1b;
        uVar11 = uVar12 * 0x20 >> 7 | uVar11 << 0x19;
        uVar14 = uVar14 + local_50 + (uVar12 ^ uVar13 ^ uVar19) + uVar18;
        uVar17 = uVar14 * 0x20 | uVar14 >> 0x1b;
        uVar18 = uVar15 * 0x20 >> 7 | uVar18 << 0x19;
        uVar12 = uVar13 + local_4c + (uVar15 ^ uVar19 ^ uVar11) + uVar17;
        uVar13 = uVar12 * 0x20 | uVar12 >> 0x1b;
        uVar17 = uVar14 * 0x20 >> 7 | uVar17 << 0x19;
        uVar14 = uVar19 + local_48 + (uVar14 ^ uVar11 ^ uVar18) + uVar13;
        *param_1 = uVar11 + local_44 + (uVar12 ^ uVar18 ^ uVar17) + (uVar14 * 0x20 | uVar14 >> 0x1b)
                   + *param_1;
        param_1[1] = uVar14 + param_1[1];
        param_1[2] = (uVar12 * 0x20 >> 7 | uVar13 << 0x19) + param_1[2];
        param_1[3] = uVar17 + param_1[3];
        param_1[4] = uVar18 + param_1[4];
        return;
      }
      FUN_00579720();
      return;
    }
    pauVar23 = param_2 + param_3 * 4;
    uVar12 = *param_1;
    pauVar21 = param_2 + 4;
    if (pauVar23 <= param_2 + 4) {
      pauVar21 = param_2;
    }
    uVar11 = param_1[1];
    uVar13 = param_1[2];
    uVar14 = param_1[3];
    uVar17 = param_1[4];
    auVar52._16_16_ = _UNK_0057ccd0;
    auVar52._0_16_ = _DAT_0057ccc0;
    pauVar22 = param_2 + 4;
    auVar49._0_16_ = ZEXT116(0) * *pauVar21 + ZEXT116(1) * *param_2;
    auVar49._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * *pauVar21;
    auVar45._0_16_ = ZEXT116(0) * pauVar21[1] + ZEXT116(1) * param_2[1];
    auVar45._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[1];
    auVar61 = vpshufb_avx2(auVar49,auVar52);
    auVar59._0_16_ = ZEXT116(0) * pauVar21[2] + ZEXT116(1) * param_2[2];
    auVar59._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[2];
    auVar45 = vpshufb_avx2(auVar45,auVar52);
    auVar65._0_16_ = ZEXT116(0) * pauVar21[3] + ZEXT116(1) * param_2[3];
    auVar65._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[3];
    auVar49 = vpshufb_avx2(auVar59,auVar52);
    auVar60._16_16_ = _UNK_0057cc50;
    auVar60._0_16_ = _DAT_0057cc40;
    auVar52 = vpshufb_avx2(auVar65,auVar52);
    auStack_300 = vpaddd_avx2(auVar61,auVar60);
    auStack_2e0 = vpaddd_avx2(auVar45,auVar60);
    auStack_2c0 = vpaddd_avx2(auVar49,auVar60);
    auStack_2a0 = vpaddd_avx2(auVar52,auVar60);
    auVar2 = vpalignr_avx2(auVar45,auVar61,8);
    auVar59 = vpsrldq_avx2(auVar52,4);
    auVar2 = auVar2 ^ auVar61 ^ auVar59 ^ auVar49;
    auVar59 = vpsrld_avx2(auVar2,0x1f);
    auVar72 = vpslldq_avx2(auVar2,0xc);
    auVar2 = vpaddd_avx2(auVar2,auVar2);
    auVar65 = vpsrld_avx2(auVar72,0x1e);
    auVar2 = vpor_avx2(auVar2,auVar59);
    auVar59 = vpslld_avx2(auVar72,2);
    auVar59 = auVar2 ^ auVar65 ^ auVar59;
    auStack_280 = vpaddd_avx2(auVar59,auVar60);
    auVar2 = vpalignr_avx2(auVar49,auVar45,8);
    auVar60 = vpsrldq_avx2(auVar59,4);
    auVar60 = auVar2 ^ auVar45 ^ auVar60 ^ auVar52;
    auVar65 = vpsrld_avx2(auVar60,0x1f);
    auVar2._16_16_ = _UNK_0057cc70;
    auVar2._0_16_ = _DAT_0057cc60;
    auVar73 = vpslldq_avx2(auVar60,0xc);
    auVar60 = vpaddd_avx2(auVar60,auVar60);
    auVar72 = vpsrld_avx2(auVar73,0x1e);
    auVar60 = vpor_avx2(auVar60,auVar65);
    auVar73 = vpslld_avx2(auVar73,2);
    auVar73 = auVar60 ^ auVar72 ^ auVar73;
    auStack_260 = vpaddd_avx2(auVar73,auVar2);
    auVar60 = vpalignr_avx2(auVar52,auVar49,8);
    auVar65 = vpsrldq_avx2(auVar73,4);
    auVar60 = auVar60 ^ auVar49 ^ auVar65 ^ auVar59;
    auVar65 = vpsrld_avx2(auVar60,0x1f);
    auVar72 = vpslldq_avx2(auVar60,0xc);
    auVar60 = vpaddd_avx2(auVar60,auVar60);
    auVar66 = vpsrld_avx2(auVar72,0x1e);
    auVar60 = vpor_avx2(auVar60,auVar65);
    auVar72 = vpslld_avx2(auVar72,2);
    auVar72 = auVar60 ^ auVar66 ^ auVar72;
    auStack_240 = vpaddd_avx2(auVar72,auVar2);
    auVar60 = vpalignr_avx2(auVar59,auVar52,8);
    auVar65 = vpsrldq_avx2(auVar72,4);
    auVar60 = auVar60 ^ auVar52 ^ auVar65 ^ auVar73;
    auVar65 = vpsrld_avx2(auVar60,0x1f);
    auVar74 = vpslldq_avx2(auVar60,0xc);
    auVar60 = vpaddd_avx2(auVar60,auVar60);
    auVar66 = vpsrld_avx2(auVar74,0x1e);
    auVar60 = vpor_avx2(auVar60,auVar65);
    auVar65 = vpslld_avx2(auVar74,2);
    auVar65 = auVar60 ^ auVar66 ^ auVar65;
    auStack_220 = vpaddd_avx2(auVar65,auVar2);
    do {
      uVar19 = uVar11 >> 2 | uVar11 << 0x1e;
      auVar60 = vpalignr_avx2(auVar65,auVar72,8);
      uVar15 = uVar12 >> 2 | uVar12 << 0x1e;
      auVar60 = auVar61 ^ auVar59 ^ auVar45 ^ auVar60;
      uVar17 = uVar17 + auStack_300._0_4_ + (uVar11 & uVar13 ^ ~uVar11 & uVar14) +
               (uVar12 >> 0x1b | uVar12 << 5);
      auVar61 = vpsrld_avx2(auVar60,0x1e);
      auVar60 = vpslld_avx2(auVar60,2);
      uVar11 = uVar17 >> 2 | uVar17 * 0x40000000;
      auVar62 = vpor_avx2(auVar60,auVar61);
      uVar14 = uVar14 + auStack_300._4_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      auVar60 = vpaddd_avx2(auVar62,auVar2);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_300._8_4_ + (uVar17 & uVar15 ^ ~uVar17 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_300._12_4_ + (uVar14 & uVar11 ^ ~uVar14 & uVar15) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = uVar15 + auStack_2e0._0_4_ + (uVar12 & uVar16 ^ ~uVar12 & uVar11) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar61 = vpalignr_avx2(auVar62,auVar65,8);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar61 = auVar45 ^ auVar73 ^ auVar49 ^ auVar61;
      uVar12 = uVar11 + auStack_2e0._4_4_ + (uVar14 & uVar17 ^ ~uVar14 & uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar66 = vpsrld_avx2(auVar61,0x1e);
      auVar45 = vpslld_avx2(auVar61,2);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar61 = vpor_avx2(auVar45,auVar66);
      uVar15 = uVar16 + auStack_2e0._8_4_ + (uVar15 & uVar13 ^ ~uVar15 & uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar2 = vpaddd_avx2(auVar61,auVar2);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_2e0._12_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_2c0._0_4_ + (uVar15 & uVar18 ^ ~uVar15 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_2c0._4_4_ + (uVar14 & uVar11 ^ ~uVar14 & uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar45 = vpalignr_avx2(auVar61,auVar62,8);
      auVar7._16_16_ = _UNK_0057cc90;
      auVar7._0_16_ = _DAT_0057cc80;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar45 = auVar49 ^ auVar72 ^ auVar52 ^ auVar45;
      uVar15 = uVar18 + auStack_2c0._8_4_ + (uVar12 & uVar16 ^ ~uVar12 & uVar11) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar66 = vpsrld_avx2(auVar45,0x1e);
      auVar49 = vpslld_avx2(auVar45,2);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar45 = vpor_avx2(auVar49,auVar66);
      uVar12 = uVar11 + auStack_2c0._12_4_ + (uVar14 & uVar17 ^ ~uVar14 & uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar66 = vpaddd_avx2(auVar45,auVar7);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_2a0._0_4_ + (uVar15 & uVar13 ^ ~uVar15 & uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_2a0._4_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_2a0._8_4_ + (uVar15 & uVar18 ^ ~uVar15 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar49 = vpalignr_avx2(auVar45,auVar61,8);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar49 = auVar52 ^ auVar65 ^ auVar59 ^ auVar49;
      uVar14 = uVar19 + auStack_2a0._12_4_ + (uVar14 & uVar11 ^ ~uVar14 & uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar74 = vpsrld_avx2(auVar49,0x1e);
      auVar52 = vpslld_avx2(auVar49,2);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar49 = vpor_avx2(auVar52,auVar74);
      uVar15 = uVar18 + auStack_280._0_4_ + (uVar12 & uVar16 ^ ~uVar12 & uVar11) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar74 = vpaddd_avx2(auVar49,auVar7);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_280._4_4_ + (uVar14 & uVar17 ^ ~uVar14 & uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_280._8_4_ + (uVar15 & uVar13 ^ ~uVar15 & uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_280._12_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar52 = vpalignr_avx2(auVar49,auVar45,8);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar52 = auVar59 ^ auVar62 ^ auVar73 ^ auVar52;
      uVar12 = uVar13 + auStack_260._0_4_ + (uVar15 ^ uVar18 ^ uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar59 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_260._4_4_ + (uVar14 ^ uVar11 ^ uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar3 = vpor_avx2(auVar52,auVar59);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar59 = vpaddd_avx2(auVar3,auVar7);
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + auStack_260._8_4_ +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_260._12_4_ + (uVar14 ^ uVar17 ^ uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_240._0_4_ + (uVar15 ^ uVar13 ^ uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar52 = vpalignr_avx2(auVar3,auVar49,8);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar52 = auVar73 ^ auVar61 ^ auVar72 ^ auVar52;
      uVar14 = uVar17 + auStack_240._4_4_ + (uVar12 ^ uVar19 ^ uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar73 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_240._8_4_ + (uVar15 ^ uVar18 ^ uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar4 = vpor_avx2(auVar52,auVar73);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar73 = vpaddd_avx2(auVar4,auVar7);
      uVar14 = uVar19 + auStack_240._12_4_ + (uVar14 ^ uVar11 ^ uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + auStack_220._0_4_ +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_220._4_4_ + (uVar14 ^ uVar17 ^ uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar52 = vpalignr_avx2(auVar4,auVar3,8);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar52 = auVar72 ^ auVar45 ^ auVar65 ^ auVar52;
      uVar15 = uVar16 + auStack_220._8_4_ + (uVar15 ^ uVar13 ^ uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar72 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_220._12_4_ + (uVar12 ^ uVar19 ^ uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar5 = vpor_avx2(auVar52,auVar72);
      iStack_200 = auVar60._0_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar72 = vpaddd_avx2(auVar5,auVar7);
      uVar12 = uVar13 + iStack_200 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1fc = auVar60._4_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_1fc + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_1f8 = auVar60._8_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_1f8 + (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar52 = vpalignr_avx2(auVar5,auVar4,8);
      iStack_1f4 = auVar60._12_4_;
      auVar8._16_16_ = _UNK_0057ccb0;
      auVar8._0_16_ = _DAT_0057cca0;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar52 = auVar65 ^ auVar49 ^ auVar62 ^ auVar52;
      uVar12 = uVar11 + iStack_1f4 + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1e0 = auVar2._0_4_;
      auVar65 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_1e0 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar53 = vpor_avx2(auVar52,auVar65);
      iStack_1dc = auVar2._4_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar65 = vpaddd_avx2(auVar53,auVar8);
      uVar14 = uVar17 + iStack_1dc + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1d8 = auVar2._8_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_1d8 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1d4 = auVar2._12_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_1d4 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar52 = vpalignr_avx2(auVar53,auVar5,8);
      iStack_1c0 = auVar66._0_4_;
      auVar52 = auVar62 ^ auVar3 ^ auVar61 ^ auVar52;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar62 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_1c0 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1bc = auVar66._4_4_;
      auVar41 = vpor_avx2(auVar52,auVar62);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar62 = vpaddd_avx2(auVar41,auVar8);
      uVar12 = uVar11 + iStack_1bc + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1b8 = auVar66._8_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_1b8 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_1b4 = auVar66._12_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_1b4 + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1a0 = auVar74._0_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_1a0 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar52 = vpalignr_avx2(auVar41,auVar53,8);
      iStack_19c = auVar74._4_4_;
      auVar52 = auVar61 ^ auVar4 ^ auVar45 ^ auVar52;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar61 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar14 = uVar19 + iStack_19c + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_198 = auVar74._8_4_;
      auVar46 = vpor_avx2(auVar52,auVar61);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar4 = vpaddd_avx2(auVar46,auVar8);
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_198 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_194 = auVar74._12_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_194 + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_180 = auVar59._0_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_180 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_17c = auVar59._4_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_17c + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar52 = vpalignr_avx2(auVar46,auVar41,8);
      iStack_178 = auVar59._8_4_;
      auVar52 = auVar45 ^ auVar5 ^ auVar49 ^ auVar52;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar45 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar12 = uVar13 + iStack_178 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_174 = auVar59._12_4_;
      auVar50 = vpor_avx2(auVar52,auVar45);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar5 = vpaddd_avx2(auVar50,auVar8);
      uVar14 = uVar19 + iStack_174 + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_160 = auVar73._0_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_160 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_15c = auVar73._4_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_15c + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_158 = auVar73._8_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_158 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar52 = vpalignr_avx2(auVar50,auVar46,8);
      iStack_154 = auVar73._12_4_;
      auVar52 = auVar49 ^ auVar53 ^ auVar3 ^ auVar52;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar49 = vpsrld_avx2(auVar52,0x1e);
      auVar52 = vpslld_avx2(auVar52,2);
      uVar14 = uVar17 + iStack_154 + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_140 = auVar72._0_4_;
      auVar53 = vpor_avx2(auVar52,auVar49);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar3 = vpaddd_avx2(auVar53,auVar8);
      uVar12 = uVar13 + iStack_140 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_13c = auVar72._4_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_13c + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_138 = auVar72._8_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_138 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_134 = auVar72._12_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_134 + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_120 = auVar65._0_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_120 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_11c = auVar65._4_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_11c + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_118 = auVar65._8_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_118 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_114 = auVar65._12_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_114 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_100 = auVar62._0_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_100 + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_fc = auVar62._4_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_fc + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_f8 = auVar62._8_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_f8 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_f4 = auVar62._12_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_f4 + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_e0 = auVar4._0_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_e0 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_dc = auVar4._4_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_dc + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_d8 = auVar4._8_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_d8 + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_d4 = auVar4._12_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_d4 + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_c0 = auVar5._0_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_c0 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_bc = auVar5._4_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_bc + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_b8 = auVar5._8_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_b8 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_b4 = auVar5._12_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_b4 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_a0 = auVar3._0_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_a0 + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_9c = auVar3._4_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_9c + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_98 = auVar3._8_4_;
      uVar11 = uVar16 + iStack_98 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_94 = auVar3._12_4_;
      pauVar21 = pauVar22 + 8;
      if (pauVar23 <= pauVar22 + 8) {
        pauVar21 = pauVar22;
      }
      uVar14 = uVar17 + iStack_94 + (uVar12 ^ uVar19 ^ uVar13) + (uVar11 >> 0x1b | uVar11 * 0x20) +
               *param_1;
      uVar11 = uVar11 + param_1[1];
      uVar17 = (uVar12 >> 2 | uVar12 * 0x40000000) + param_1[2];
      *param_1 = uVar14;
      uVar19 = uVar19 + param_1[3];
      param_1[1] = uVar11;
      uVar12 = param_1[4];
      param_1[2] = uVar17;
      param_1[3] = uVar19;
      param_1[4] = uVar13 + uVar12;
      if (pauVar22 == pauVar23) {
        return;
      }
      auVar9._16_16_ = _UNK_0057ccd0;
      auVar9._0_16_ = _DAT_0057ccc0;
      if (pauVar22 + 8 <= pauVar23) {
        auVar41._0_16_ = ZEXT116(0) * *pauVar21 + ZEXT116(1) * pauVar22[4];
        auVar41._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * *pauVar21;
        auVar46._0_16_ = ZEXT116(0) * pauVar21[1] + ZEXT116(1) * pauVar22[5];
        auVar46._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[1];
        auVar50._0_16_ = ZEXT116(0) * pauVar21[2] + ZEXT116(1) * pauVar22[6];
        auVar50._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[2];
        auVar53._0_16_ = ZEXT116(0) * pauVar21[3] + ZEXT116(1) * pauVar22[7];
        auVar53._16_16_ = ZEXT116(0) * SUB4816((undefined1  [48])0x0,0) + ZEXT116(1) * pauVar21[3];
      }
      uVar15 = uVar11 >> 2 | uVar11 * 0x40000000;
      pauVar22 = pauVar22 + 8;
      uVar18 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar11 = uVar13 + uVar12 + auStack_300._16_4_ + (uVar11 & uVar17 ^ ~uVar11 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar13 = uVar19 + auStack_300._20_4_ + (uVar14 & uVar15 ^ ~uVar14 & uVar17) +
               (uVar11 >> 0x1b | uVar11 * 0x20);
      uVar16 = uVar13 >> 2 | uVar13 * 0x40000000;
      uVar11 = uVar17 + auStack_300._24_4_ + (uVar11 & uVar18 ^ ~uVar11 & uVar15) +
               (uVar13 >> 0x1b | uVar13 * 0x20);
      uVar14 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar17 = uVar15 + auStack_300._28_4_ + (uVar13 & uVar12 ^ ~uVar13 & uVar18) +
               (uVar11 >> 0x1b | uVar11 * 0x20);
      uVar13 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar11 = uVar18 + auStack_2e0._16_4_ + (uVar11 & uVar16 ^ ~uVar11 & uVar12) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar19 = uVar11 >> 2 | uVar11 * 0x40000000;
      uVar12 = uVar12 + auStack_2e0._20_4_ + (uVar17 & uVar14 ^ ~uVar17 & uVar16) +
               (uVar11 >> 0x1b | uVar11 * 0x20);
      uVar15 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar17 = uVar16 + auStack_2e0._24_4_ + (uVar11 & uVar13 ^ ~uVar11 & uVar14) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar17 >> 2 | uVar17 * 0x40000000;
      uVar14 = uVar14 + auStack_2e0._28_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar17 >> 0x1b | uVar17 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_2c0._16_4_ + (uVar17 & uVar15 ^ ~uVar17 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_2c0._20_4_ + (uVar14 & uVar11 ^ ~uVar14 & uVar15) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = uVar15 + auStack_2c0._24_4_ + (uVar12 & uVar16 ^ ~uVar12 & uVar11) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_2c0._28_4_ + (uVar14 & uVar17 ^ ~uVar14 & uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_2a0._16_4_ + (uVar15 & uVar13 ^ ~uVar15 & uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_2a0._20_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_2a0._24_4_ + (uVar15 & uVar18 ^ ~uVar15 & uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_2a0._28_4_ + (uVar14 & uVar11 ^ ~uVar14 & uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = uVar18 + auStack_280._16_4_ + (uVar12 & uVar16 ^ ~uVar12 & uVar11) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_280._20_4_ + (uVar14 & uVar17 ^ ~uVar14 & uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_280._24_4_ + (uVar15 & uVar13 ^ ~uVar15 & uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_280._28_4_ + (uVar12 & uVar19 ^ ~uVar12 & uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_260._16_4_ + (uVar15 ^ uVar18 ^ uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_260._20_4_ + (uVar14 ^ uVar11 ^ uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + auStack_260._24_4_ +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_260._28_4_ + (uVar14 ^ uVar17 ^ uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_240._16_4_ + (uVar15 ^ uVar13 ^ uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar6._16_16_ = _UNK_0057cc50;
      auVar6._0_16_ = _DAT_0057cc40;
      auVar61 = vpshufb_avx2(auVar41,auVar9);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_240._20_4_ + (uVar12 ^ uVar19 ^ uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + auStack_240._24_4_ + (uVar15 ^ uVar18 ^ uVar19) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + auStack_240._28_4_ + (uVar14 ^ uVar11 ^ uVar18) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + auStack_220._16_4_ +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + auStack_220._20_4_ + (uVar14 ^ uVar17 ^ uVar16) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar45 = vpshufb_avx2(auVar46,auVar9);
      auStack_300 = vpaddd_avx2(auVar61,auVar6);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + auStack_220._24_4_ + (uVar15 ^ uVar13 ^ uVar17) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + auStack_220._28_4_ + (uVar12 ^ uVar19 ^ uVar13) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1f0 = auVar60._16_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_1f0 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1ec = auVar60._20_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_1ec + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_1e8 = auVar60._24_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_1e8 + (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar49 = vpshufb_avx2(auVar50,auVar9);
      auStack_2e0 = vpaddd_avx2(auVar45,auVar6);
      iStack_1e4 = auVar60._28_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_1e4 + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1d0 = auVar2._16_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_1d0 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_1cc = auVar2._20_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_1cc + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1c8 = auVar2._24_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_1c8 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1c4 = auVar2._28_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_1c4 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar52 = vpshufb_avx2(auVar53,auVar9);
      auStack_2c0 = vpaddd_avx2(auVar49,auVar6);
      iStack_1b0 = auVar66._16_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_1b0 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_1ac = auVar66._20_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_1ac + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_1a8 = auVar66._24_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_1a8 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_1a4 = auVar66._28_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_1a4 + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_190 = auVar74._16_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_190 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auStack_2a0 = vpaddd_avx2(auVar52,auVar6);
      iStack_18c = auVar74._20_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_18c + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_188 = auVar74._24_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_188 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_184 = auVar74._28_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_184 + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_170 = auVar59._16_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_170 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_16c = auVar59._20_4_;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_16c + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_168 = auVar59._24_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_168 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_164 = auVar59._28_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_164 + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_150 = auVar73._16_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_150 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_14c = auVar73._20_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_14c + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_148 = auVar73._24_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_148 + ((uVar15 ^ uVar13) & (uVar13 ^ uVar17) ^ uVar13) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar2 = vpalignr_avx2(auVar45,auVar61,8);
      iStack_144 = auVar73._28_4_;
      auVar60 = vpsrldq_avx2(auVar52,4);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_144 + ((uVar12 ^ uVar19) & (uVar19 ^ uVar13) ^ uVar19) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar2 = auVar2 ^ auVar61 ^ auVar60 ^ auVar49;
      iStack_130 = auVar72._16_4_;
      auVar60 = vpsrld_avx2(auVar2,0x1f);
      auVar59 = vpslldq_avx2(auVar2,0xc);
      auVar2 = vpaddd_avx2(auVar2,auVar2);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar73 = vpsrld_avx2(auVar59,0x1e);
      auVar2 = vpor_avx2(auVar2,auVar60);
      uVar12 = uVar13 + iStack_130 + ((uVar15 ^ uVar18) & (uVar18 ^ uVar19) ^ uVar18) +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar59 = vpslld_avx2(auVar59,2);
      iStack_12c = auVar72._20_4_;
      auVar59 = auVar2 ^ auVar73 ^ auVar59;
      auStack_280 = vpaddd_avx2(auVar59,auVar6);
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_12c + ((uVar14 ^ uVar11) & (uVar11 ^ uVar18) ^ uVar11) +
               (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_128 = auVar72._24_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = ((uVar12 ^ uVar16) & (uVar16 ^ uVar11) ^ uVar16) + uVar18 + iStack_128 +
               (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_124 = auVar72._28_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar12 = uVar11 + iStack_124 + ((uVar14 ^ uVar17) & (uVar17 ^ uVar16) ^ uVar17) +
               (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar2 = vpalignr_avx2(auVar49,auVar45,8);
      iStack_110 = auVar65._16_4_;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar60 = vpsrldq_avx2(auVar59,4);
      uVar15 = uVar16 + iStack_110 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_10c = auVar65._20_4_;
      auVar60 = auVar2 ^ auVar45 ^ auVar60 ^ auVar52;
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      uVar14 = uVar17 + iStack_10c + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar72 = vpsrld_avx2(auVar60,0x1f);
      auVar2._16_16_ = _UNK_0057cc70;
      auVar2._0_16_ = _DAT_0057cc60;
      iStack_108 = auVar65._24_4_;
      auVar73 = vpslldq_avx2(auVar60,0xc);
      auVar60 = vpaddd_avx2(auVar60,auVar60);
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar66 = vpsrld_avx2(auVar73,0x1e);
      auVar60 = vpor_avx2(auVar60,auVar72);
      uVar12 = uVar13 + iStack_108 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar73 = vpslld_avx2(auVar73,2);
      iStack_104 = auVar65._28_4_;
      auVar73 = auVar60 ^ auVar66 ^ auVar73;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      auStack_260 = vpaddd_avx2(auVar73,auVar2);
      uVar14 = uVar19 + iStack_104 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_f0 = auVar62._16_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar15 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_f0 + (uVar14 >> 0x1b | uVar14 * 0x20);
      auVar60 = vpalignr_avx2(auVar52,auVar49,8);
      iStack_ec = auVar62._20_4_;
      uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar65 = vpsrldq_avx2(auVar73,4);
      uVar12 = uVar11 + iStack_ec + (uVar14 ^ uVar17 ^ uVar16) + (uVar15 >> 0x1b | uVar15 * 0x20);
      iStack_e8 = auVar62._24_4_;
      auVar60 = auVar60 ^ auVar49 ^ auVar65 ^ auVar59;
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar15 = uVar16 + iStack_e8 + (uVar15 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar65 = vpsrld_avx2(auVar60,0x1f);
      iStack_e4 = auVar62._28_4_;
      auVar72 = vpslldq_avx2(auVar60,0xc);
      auVar60 = vpaddd_avx2(auVar60,auVar60);
      uVar11 = uVar15 >> 2 | uVar15 * 0x40000000;
      auVar66 = vpsrld_avx2(auVar72,0x1e);
      auVar60 = vpor_avx2(auVar60,auVar65);
      uVar14 = uVar17 + iStack_e4 + (uVar12 ^ uVar19 ^ uVar13) + (uVar15 >> 0x1b | uVar15 * 0x20);
      auVar72 = vpslld_avx2(auVar72,2);
      iStack_d0 = auVar4._16_4_;
      auVar72 = auVar60 ^ auVar66 ^ auVar72;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      auStack_240 = vpaddd_avx2(auVar72,auVar2);
      uVar12 = uVar13 + iStack_d0 + (uVar15 ^ uVar18 ^ uVar19) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_cc = auVar4._20_4_;
      uVar17 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar14 = uVar19 + iStack_cc + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar60 = vpalignr_avx2(auVar59,auVar52,8);
      iStack_c8 = auVar4._24_4_;
      uVar13 = uVar14 >> 2 | uVar14 * 0x40000000;
      auVar65 = vpsrldq_avx2(auVar72,4);
      uVar19 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_c8 + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_c4 = auVar4._28_4_;
      auVar60 = auVar60 ^ auVar52 ^ auVar65 ^ auVar73;
      uVar15 = uVar19 >> 2 | uVar19 * 0x40000000;
      uVar12 = uVar11 + iStack_c4 + (uVar14 ^ uVar17 ^ uVar16) + (uVar19 >> 0x1b | uVar19 * 0x20);
      auVar65 = vpsrld_avx2(auVar60,0x1f);
      iStack_b0 = auVar5._16_4_;
      auVar74 = vpslldq_avx2(auVar60,0xc);
      auVar60 = vpaddd_avx2(auVar60,auVar60);
      uVar18 = uVar12 >> 2 | uVar12 * 0x40000000;
      auVar66 = vpsrld_avx2(auVar74,0x1e);
      auVar60 = vpor_avx2(auVar60,auVar65);
      uVar19 = uVar16 + iStack_b0 + (uVar19 ^ uVar13 ^ uVar17) + (uVar12 >> 0x1b | uVar12 * 0x20);
      auVar65 = vpslld_avx2(auVar74,2);
      iStack_ac = auVar5._20_4_;
      auVar65 = auVar60 ^ auVar66 ^ auVar65;
      uVar11 = uVar19 >> 2 | uVar19 * 0x40000000;
      auStack_220 = vpaddd_avx2(auVar65,auVar2);
      uVar14 = uVar17 + iStack_ac + (uVar12 ^ uVar15 ^ uVar13) + (uVar19 >> 0x1b | uVar19 * 0x20);
      iStack_a8 = auVar5._24_4_;
      uVar16 = uVar14 >> 2 | uVar14 * 0x40000000;
      uVar12 = uVar13 + iStack_a8 + (uVar19 ^ uVar18 ^ uVar15) + (uVar14 >> 0x1b | uVar14 * 0x20);
      iStack_a4 = auVar5._28_4_;
      uVar19 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar13 = uVar15 + iStack_a4 + (uVar14 ^ uVar11 ^ uVar18) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_90 = auVar3._16_4_;
      uVar17 = uVar13 >> 2 | uVar13 * 0x40000000;
      uVar12 = (uVar12 ^ uVar16 ^ uVar11) + uVar18 + iStack_90 + (uVar13 >> 0x1b | uVar13 * 0x20);
      iStack_8c = auVar3._20_4_;
      uVar14 = uVar12 >> 2 | uVar12 * 0x40000000;
      uVar13 = uVar11 + iStack_8c + (uVar13 ^ uVar19 ^ uVar16) + (uVar12 >> 0x1b | uVar12 * 0x20);
      iStack_88 = auVar3._24_4_;
      uVar11 = uVar16 + iStack_88 + (uVar12 ^ uVar17 ^ uVar19) + (uVar13 >> 0x1b | uVar13 * 0x20);
      iStack_84 = auVar3._28_4_;
      uVar12 = uVar19 + iStack_84 + (uVar13 ^ uVar14 ^ uVar17) + (uVar11 >> 0x1b | uVar11 * 0x20) +
               *param_1;
      uVar11 = uVar11 + param_1[1];
      uVar13 = (uVar13 >> 2 | uVar13 * 0x40000000) + param_1[2];
      *param_1 = uVar12;
      uVar14 = uVar14 + param_1[3];
      param_1[1] = uVar11;
      uVar17 = uVar17 + param_1[4];
      param_1[2] = uVar13;
      param_1[3] = uVar14;
      param_1[4] = uVar17;
    } while (pauVar22 <= pauVar23);
    return;
  }
  auVar42._16_48_ = in_ZMM0._16_48_;
  auVar47._16_48_ = in_ZMM1._16_48_;
  auVar55._16_48_ = in_ZMM4._16_48_;
  auVar42._4_4_ = param_1[2];
  auVar42._0_4_ = param_1[3];
  auVar42._8_4_ = param_1[1];
  auVar42._12_4_ = *param_1;
  auVar51._0_12_ = ZEXT812(0);
  auVar51._12_4_ = param_1[4];
  auVar47._0_16_ = auVar51;
  auVar55._0_16_ = pshufb(*param_2,_DAT_0057cce0);
  auVar48 = pshufb(param_2[1],_DAT_0057cce0);
  auVar44 = pshufb(param_2[2],_DAT_0057cce0);
  auVar40 = pshufb(param_2[3],_DAT_0057cce0);
  do {
    param_3 = param_3 + -1;
    auVar54._0_4_ = auVar47._0_4_ + auVar55._0_4_;
    auVar54._4_4_ = auVar47._4_4_ + auVar55._4_4_;
    auVar54._8_4_ = auVar47._8_4_ + auVar55._8_4_;
    auVar54._12_4_ = auVar47._12_4_ + auVar55._12_4_;
    if (param_3 != 0) {
      param_2 = param_2 + 4;
    }
    auVar57 = sha1msg1_sha(auVar55._0_16_,auVar48);
    auVar43._16_48_ = auVar42._16_48_;
    auVar54 = sha1rnds4_sha(auVar42._0_16_,auVar54,0);
    auVar58 = sha1nexte_sha(auVar42._0_16_,auVar48);
    auVar56 = sha1msg1_sha(auVar48,auVar44);
    auVar57 = sha1msg2_sha(auVar57 ^ auVar44,auVar40);
    auVar48 = sha1rnds4_sha(auVar54,auVar58,0);
    auVar54 = sha1nexte_sha(auVar54,auVar44);
    auVar58 = sha1msg2_sha(auVar56 ^ auVar40,auVar57);
    auVar56 = sha1msg1_sha(auVar44,auVar40);
    auVar44 = sha1rnds4_sha(auVar48,auVar54,0);
    auVar48 = sha1nexte_sha(auVar48,auVar40);
    auVar40 = sha1msg1_sha(auVar40,auVar57);
    auVar56 = sha1msg2_sha(auVar56 ^ auVar57,auVar58);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,0);
    auVar44 = sha1nexte_sha(auVar44,auVar57);
    auVar63 = sha1msg2_sha(auVar40 ^ auVar58,auVar56);
    auVar40 = sha1msg1_sha(auVar57,auVar58);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,0);
    auVar48 = sha1nexte_sha(auVar48,auVar58);
    auVar54 = sha1msg1_sha(auVar58,auVar56);
    auVar40 = sha1msg2_sha(auVar40 ^ auVar56,auVar63);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,1);
    auVar44 = sha1nexte_sha(auVar44,auVar56);
    auVar54 = sha1msg2_sha(auVar54 ^ auVar63,auVar40);
    auVar58 = sha1msg1_sha(auVar56,auVar63);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,1);
    auVar48 = sha1nexte_sha(auVar48,auVar63);
    auVar57 = sha1msg1_sha(auVar63,auVar40);
    auVar58 = sha1msg2_sha(auVar58 ^ auVar40,auVar54);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,1);
    auVar44 = sha1nexte_sha(auVar44,auVar40);
    auVar57 = sha1msg2_sha(auVar57 ^ auVar54,auVar58);
    auVar40 = sha1msg1_sha(auVar40,auVar54);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,1);
    auVar48 = sha1nexte_sha(auVar48,auVar54);
    auVar54 = sha1msg1_sha(auVar54,auVar58);
    auVar40 = sha1msg2_sha(auVar40 ^ auVar58,auVar57);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,1);
    auVar44 = sha1nexte_sha(auVar44,auVar58);
    auVar54 = sha1msg2_sha(auVar54 ^ auVar57,auVar40);
    auVar58 = sha1msg1_sha(auVar58,auVar57);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,2);
    auVar48 = sha1nexte_sha(auVar48,auVar57);
    auVar57 = sha1msg1_sha(auVar57,auVar40);
    auVar58 = sha1msg2_sha(auVar58 ^ auVar40,auVar54);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,2);
    auVar44 = sha1nexte_sha(auVar44,auVar40);
    auVar57 = sha1msg2_sha(auVar57 ^ auVar54,auVar58);
    auVar40 = sha1msg1_sha(auVar40,auVar54);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,2);
    auVar48 = sha1nexte_sha(auVar48,auVar54);
    auVar54 = sha1msg1_sha(auVar54,auVar58);
    auVar40 = sha1msg2_sha(auVar40 ^ auVar58,auVar57);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,2);
    auVar44 = sha1nexte_sha(auVar44,auVar58);
    auVar54 = sha1msg2_sha(auVar54 ^ auVar57,auVar40);
    auVar58 = sha1msg1_sha(auVar58,auVar57);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,2);
    auVar48 = sha1nexte_sha(auVar48,auVar57);
    auVar57 = sha1msg1_sha(auVar57,auVar40);
    auVar58 = sha1msg2_sha(auVar58 ^ auVar40,auVar54);
    auVar48 = sha1rnds4_sha(auVar44,auVar48,3);
    auVar44 = sha1nexte_sha(auVar44,auVar40);
    auVar57 = sha1msg2_sha(auVar57 ^ auVar54,auVar58);
    auVar44 = sha1rnds4_sha(auVar48,auVar44,3);
    auVar48 = sha1nexte_sha(auVar48,auVar54);
    auVar55._0_16_ = pshufb(*param_2,_DAT_0057cce0);
    auVar40 = sha1rnds4_sha(auVar44,auVar48,3);
    auVar44 = sha1nexte_sha(auVar44,auVar58);
    auVar48 = pshufb(param_2[1],_DAT_0057cce0);
    auVar54 = sha1rnds4_sha(auVar40,auVar44,3);
    auVar40 = sha1nexte_sha(auVar40,auVar57);
    auVar44 = pshufb(param_2[2],_DAT_0057cce0);
    auVar58 = sha1rnds4_sha(auVar54,auVar40,3);
    auVar47._0_16_ = sha1nexte_sha(auVar54,auVar51);
    auVar40 = pshufb(param_2[3],_DAT_0057cce0);
    auVar43._0_4_ = auVar58._0_4_ + auVar42._0_4_;
    auVar43._4_4_ = auVar58._4_4_ + auVar42._4_4_;
    auVar43._8_4_ = auVar58._8_4_ + auVar42._8_4_;
    auVar43._12_4_ = auVar58._12_4_ + auVar42._12_4_;
    auVar42 = auVar43;
    auVar51 = auVar47._0_16_;
  } while (param_3 != 0);
  *param_1 = auVar43._12_4_;
  param_1[1] = auVar43._8_4_;
  param_1[2] = auVar43._4_4_;
  param_1[3] = auVar43._0_4_;
  param_1[4] = auVar47._12_4_;
  return;
}

