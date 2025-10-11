
/* WARNING: Removing unreachable block (ram,0x00731d0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong __strncasecmp_sse42(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar28;
  undefined1 auVar13 [16];
  undefined1 auVar29 [16];
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  char cVar50;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  if ((*(uint *)(**(long **)(in_FS_OFFSET + -0x78) + 0x278) & 1) != 0) {
    if ((param_1 == param_2) || (param_3 == 0)) {
      uVar2 = 0;
    }
    else {
      lVar5 = (*(long **)(in_FS_OFFSET + -0x78))[0xe];
      uVar7 = 0;
      do {
        uVar3 = *(int *)(lVar5 + (ulong)(byte)(*param_1)[uVar7] * 4) -
                *(int *)(lVar5 + (ulong)(byte)(*param_2)[uVar7] * 4);
        uVar2 = (ulong)uVar3;
        if (uVar3 != 0) {
          return uVar2;
        }
      } while (((*param_1)[uVar7] != 0) && (uVar7 = uVar7 + 1, param_3 != uVar7));
    }
    return uVar2;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[0] * 4 + 0x200) -
                        *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[0] * 4 + 0x200));
  }
  uVar3 = (uint)param_2;
  uVar1 = (uint)param_1;
  cVar30 = DAT_008219d0;
  cVar31 = DAT_008219d0._1_1_;
  cVar32 = DAT_008219d0._2_1_;
  cVar33 = DAT_008219d0._3_1_;
  cVar34 = DAT_008219d0._4_1_;
  cVar35 = DAT_008219d0._5_1_;
  cVar36 = DAT_008219d0._6_1_;
  cVar37 = DAT_008219d0._7_1_;
  cVar38 = DAT_008219d0._8_1_;
  cVar39 = DAT_008219d0._9_1_;
  cVar40 = DAT_008219d0._10_1_;
  cVar41 = DAT_008219d0._11_1_;
  cVar42 = DAT_008219d0._12_1_;
  cVar43 = DAT_008219d0._13_1_;
  cVar44 = DAT_008219d0._14_1_;
  cVar45 = DAT_008219d0._15_1_;
  cVar50 = DAT_008219e0;
  cVar69 = DAT_008219e0._15_1_;
  cVar55 = DAT_008219e0._1_1_;
  cVar56 = DAT_008219e0._2_1_;
  cVar57 = DAT_008219e0._3_1_;
  cVar58 = DAT_008219e0._4_1_;
  cVar59 = DAT_008219e0._5_1_;
  cVar60 = DAT_008219e0._6_1_;
  cVar61 = DAT_008219e0._7_1_;
  cVar62 = DAT_008219e0._8_1_;
  cVar63 = DAT_008219e0._9_1_;
  cVar64 = DAT_008219e0._10_1_;
  cVar65 = DAT_008219e0._11_1_;
  cVar66 = DAT_008219e0._12_1_;
  cVar67 = DAT_008219e0._13_1_;
  cVar68 = DAT_008219e0._14_1_;
  if (((uVar3 & 0x3f) < 0x31) && ((uVar1 & 0x3f) < 0x31)) {
    auVar11 = *param_1;
    auVar29 = *param_2;
    auVar46[0] = -(cVar30 < auVar11[0]);
    auVar46[1] = -(cVar31 < auVar11[1]);
    auVar46[2] = -(cVar32 < auVar11[2]);
    auVar46[3] = -(cVar33 < auVar11[3]);
    auVar46[4] = -(cVar34 < auVar11[4]);
    auVar46[5] = -(cVar35 < auVar11[5]);
    auVar46[6] = -(cVar36 < auVar11[6]);
    auVar46[7] = -(cVar37 < auVar11[7]);
    auVar46[8] = -(cVar38 < auVar11[8]);
    auVar46[9] = -(cVar39 < auVar11[9]);
    auVar46[10] = -(cVar40 < auVar11[10]);
    auVar46[0xb] = -(cVar41 < auVar11[0xb]);
    auVar46[0xc] = -(cVar42 < auVar11[0xc]);
    auVar46[0xd] = -(cVar43 < auVar11[0xd]);
    auVar46[0xe] = -(cVar44 < auVar11[0xe]);
    auVar46[0xf] = -(cVar45 < auVar11[0xf]);
    auVar51[0] = -(auVar11[0] < cVar50);
    auVar51[1] = -(auVar11[1] < cVar55);
    auVar51[2] = -(auVar11[2] < cVar56);
    auVar51[3] = -(auVar11[3] < cVar57);
    auVar51[4] = -(auVar11[4] < cVar58);
    auVar51[5] = -(auVar11[5] < cVar59);
    auVar51[6] = -(auVar11[6] < cVar60);
    auVar51[7] = -(auVar11[7] < cVar61);
    auVar51[8] = -(auVar11[8] < cVar62);
    auVar51[9] = -(auVar11[9] < cVar63);
    auVar51[10] = -(auVar11[10] < cVar64);
    auVar51[0xb] = -(auVar11[0xb] < cVar65);
    auVar51[0xc] = -(auVar11[0xc] < cVar66);
    auVar51[0xd] = -(auVar11[0xd] < cVar67);
    auVar51[0xe] = -(auVar11[0xe] < cVar68);
    auVar51[0xf] = -(auVar11[0xf] < cVar69);
    auVar70[0] = -(cVar30 < auVar29[0]);
    auVar70[1] = -(cVar31 < auVar29[1]);
    auVar70[2] = -(cVar32 < auVar29[2]);
    auVar70[3] = -(cVar33 < auVar29[3]);
    auVar70[4] = -(cVar34 < auVar29[4]);
    auVar70[5] = -(cVar35 < auVar29[5]);
    auVar70[6] = -(cVar36 < auVar29[6]);
    auVar70[7] = -(cVar37 < auVar29[7]);
    auVar70[8] = -(cVar38 < auVar29[8]);
    auVar70[9] = -(cVar39 < auVar29[9]);
    auVar70[10] = -(cVar40 < auVar29[10]);
    auVar70[0xb] = -(cVar41 < auVar29[0xb]);
    auVar70[0xc] = -(cVar42 < auVar29[0xc]);
    auVar70[0xd] = -(cVar43 < auVar29[0xd]);
    auVar70[0xe] = -(cVar44 < auVar29[0xe]);
    auVar70[0xf] = -(cVar45 < auVar29[0xf]);
    auVar74[0] = -(auVar29[0] < cVar50);
    auVar74[1] = -(auVar29[1] < cVar55);
    auVar74[2] = -(auVar29[2] < cVar56);
    auVar74[3] = -(auVar29[3] < cVar57);
    auVar74[4] = -(auVar29[4] < cVar58);
    auVar74[5] = -(auVar29[5] < cVar59);
    auVar74[6] = -(auVar29[6] < cVar60);
    auVar74[7] = -(auVar29[7] < cVar61);
    auVar74[8] = -(auVar29[8] < cVar62);
    auVar74[9] = -(auVar29[9] < cVar63);
    auVar74[10] = -(auVar29[10] < cVar64);
    auVar74[0xb] = -(auVar29[0xb] < cVar65);
    auVar74[0xc] = -(auVar29[0xc] < cVar66);
    auVar74[0xd] = -(auVar29[0xd] < cVar67);
    auVar74[0xe] = -(auVar29[0xe] < cVar68);
    auVar74[0xf] = -(auVar29[0xf] < cVar69);
    auVar11 = auVar11 | auVar46 & auVar51 & _DAT_008219f0;
    auVar29 = auVar29 | auVar70 & auVar74 & _DAT_008219f0;
    auVar12[0] = (auVar11[0] == '\0') - (auVar11[0] == auVar29[0]);
    auVar12[1] = (auVar11[1] == '\0') - (auVar11[1] == auVar29[1]);
    auVar12[2] = (auVar11[2] == '\0') - (auVar11[2] == auVar29[2]);
    auVar12[3] = (auVar11[3] == '\0') - (auVar11[3] == auVar29[3]);
    auVar12[4] = (auVar11[4] == '\0') - (auVar11[4] == auVar29[4]);
    auVar12[5] = (auVar11[5] == '\0') - (auVar11[5] == auVar29[5]);
    auVar12[6] = (auVar11[6] == '\0') - (auVar11[6] == auVar29[6]);
    auVar12[7] = (auVar11[7] == '\0') - (auVar11[7] == auVar29[7]);
    auVar12[8] = (auVar11[8] == '\0') - (auVar11[8] == auVar29[8]);
    auVar12[9] = (auVar11[9] == '\0') - (auVar11[9] == auVar29[9]);
    auVar12[10] = (auVar11[10] == '\0') - (auVar11[10] == auVar29[10]);
    auVar12[0xb] = (auVar11[0xb] == '\0') - (auVar11[0xb] == auVar29[0xb]);
    auVar12[0xc] = (auVar11[0xc] == '\0') - (auVar11[0xc] == auVar29[0xc]);
    auVar12[0xd] = (auVar11[0xd] == '\0') - (auVar11[0xd] == auVar29[0xd]);
    auVar12[0xe] = (auVar11[0xe] == '\0') - (auVar11[0xe] == auVar29[0xe]);
    auVar12[0xf] = (auVar11[0xf] == '\0') - (auVar11[0xf] == auVar29[0xf]);
    uVar4 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar12[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar4 != 0) goto LAB_00731d10;
    bVar8 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar8 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar3 = uVar3 & 0xf;
  uVar7 = (ulong)uVar3;
  uVar1 = uVar1 & 0xf;
  uVar2 = (ulong)uVar1;
  if (uVar3 != uVar1) {
    if (uVar3 <= uVar1) {
      uVar2 = (ulong)uVar3;
      uVar7 = (ulong)uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x0072fec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00821b90 + *(int *)(&DAT_00821b90 + ((uVar2 + 0xf) - uVar7) * 4)))();
    return uVar2;
  }
  auVar11 = *param_2;
  cVar10 = auVar11[0];
  cVar14 = auVar11[1];
  cVar15 = auVar11[2];
  cVar16 = auVar11[3];
  cVar17 = auVar11[4];
  cVar18 = auVar11[5];
  cVar19 = auVar11[6];
  cVar20 = auVar11[7];
  cVar21 = auVar11[8];
  cVar22 = auVar11[9];
  cVar23 = auVar11[10];
  cVar24 = auVar11[0xb];
  cVar25 = auVar11[0xc];
  cVar26 = auVar11[0xd];
  cVar27 = auVar11[0xe];
  cVar28 = auVar11[0xf];
  auVar29 = *param_1;
  auVar47[0] = -(cVar30 < cVar10);
  auVar47[1] = -(cVar31 < cVar14);
  auVar47[2] = -(cVar32 < cVar15);
  auVar47[3] = -(cVar33 < cVar16);
  auVar47[4] = -(cVar34 < cVar17);
  auVar47[5] = -(cVar35 < cVar18);
  auVar47[6] = -(cVar36 < cVar19);
  auVar47[7] = -(cVar37 < cVar20);
  auVar47[8] = -(cVar38 < cVar21);
  auVar47[9] = -(cVar39 < cVar22);
  auVar47[10] = -(cVar40 < cVar23);
  auVar47[0xb] = -(cVar41 < cVar24);
  auVar47[0xc] = -(cVar42 < cVar25);
  auVar47[0xd] = -(cVar43 < cVar26);
  auVar47[0xe] = -(cVar44 < cVar27);
  auVar47[0xf] = -(cVar45 < cVar28);
  auVar52[0] = -(cVar10 < cVar50);
  auVar52[1] = -(cVar14 < cVar55);
  auVar52[2] = -(cVar15 < cVar56);
  auVar52[3] = -(cVar16 < cVar57);
  auVar52[4] = -(cVar17 < cVar58);
  auVar52[5] = -(cVar18 < cVar59);
  auVar52[6] = -(cVar19 < cVar60);
  auVar52[7] = -(cVar20 < cVar61);
  auVar52[8] = -(cVar21 < cVar62);
  auVar52[9] = -(cVar22 < cVar63);
  auVar52[10] = -(cVar23 < cVar64);
  auVar52[0xb] = -(cVar24 < cVar65);
  auVar52[0xc] = -(cVar25 < cVar66);
  auVar52[0xd] = -(cVar26 < cVar67);
  auVar52[0xe] = -(cVar27 < cVar68);
  auVar52[0xf] = -(cVar28 < cVar69);
  auVar71[0] = -(cVar30 < auVar29[0]);
  auVar71[1] = -(cVar31 < auVar29[1]);
  auVar71[2] = -(cVar32 < auVar29[2]);
  auVar71[3] = -(cVar33 < auVar29[3]);
  auVar71[4] = -(cVar34 < auVar29[4]);
  auVar71[5] = -(cVar35 < auVar29[5]);
  auVar71[6] = -(cVar36 < auVar29[6]);
  auVar71[7] = -(cVar37 < auVar29[7]);
  auVar71[8] = -(cVar38 < auVar29[8]);
  auVar71[9] = -(cVar39 < auVar29[9]);
  auVar71[10] = -(cVar40 < auVar29[10]);
  auVar71[0xb] = -(cVar41 < auVar29[0xb]);
  auVar71[0xc] = -(cVar42 < auVar29[0xc]);
  auVar71[0xd] = -(cVar43 < auVar29[0xd]);
  auVar71[0xe] = -(cVar44 < auVar29[0xe]);
  auVar71[0xf] = -(cVar45 < auVar29[0xf]);
  auVar75[0] = -(auVar29[0] < cVar50);
  auVar75[1] = -(auVar29[1] < cVar55);
  auVar75[2] = -(auVar29[2] < cVar56);
  auVar75[3] = -(auVar29[3] < cVar57);
  auVar75[4] = -(auVar29[4] < cVar58);
  auVar75[5] = -(auVar29[5] < cVar59);
  auVar75[6] = -(auVar29[6] < cVar60);
  auVar75[7] = -(auVar29[7] < cVar61);
  auVar75[8] = -(auVar29[8] < cVar62);
  auVar75[9] = -(auVar29[9] < cVar63);
  auVar75[10] = -(auVar29[10] < cVar64);
  auVar75[0xb] = -(auVar29[0xb] < cVar65);
  auVar75[0xc] = -(auVar29[0xc] < cVar66);
  auVar75[0xd] = -(auVar29[0xd] < cVar67);
  auVar75[0xe] = -(auVar29[0xe] < cVar68);
  auVar75[0xf] = -(auVar29[0xf] < cVar69);
  auVar11 = auVar11 | auVar47 & auVar52 & _DAT_008219f0;
  auVar29 = auVar29 | auVar71 & auVar75 & _DAT_008219f0;
  auVar13[0] = (cVar10 == '\0') - (auVar11[0] == auVar29[0]);
  auVar13[1] = (cVar14 == '\0') - (auVar11[1] == auVar29[1]);
  auVar13[2] = (cVar15 == '\0') - (auVar11[2] == auVar29[2]);
  auVar13[3] = (cVar16 == '\0') - (auVar11[3] == auVar29[3]);
  auVar13[4] = (cVar17 == '\0') - (auVar11[4] == auVar29[4]);
  auVar13[5] = (cVar18 == '\0') - (auVar11[5] == auVar29[5]);
  auVar13[6] = (cVar19 == '\0') - (auVar11[6] == auVar29[6]);
  auVar13[7] = (cVar20 == '\0') - (auVar11[7] == auVar29[7]);
  auVar13[8] = (cVar21 == '\0') - (auVar11[8] == auVar29[8]);
  auVar13[9] = (cVar22 == '\0') - (auVar11[9] == auVar29[9]);
  auVar13[10] = (cVar23 == '\0') - (auVar11[10] == auVar29[10]);
  auVar13[0xb] = (cVar24 == '\0') - (auVar11[0xb] == auVar29[0xb]);
  auVar13[0xc] = (cVar25 == '\0') - (auVar11[0xc] == auVar29[0xc]);
  auVar13[0xd] = (cVar26 == '\0') - (auVar11[0xd] == auVar29[0xd]);
  auVar13[0xe] = (cVar27 == '\0') - (auVar11[0xe] == auVar29[0xe]);
  auVar13[0xf] = (cVar28 == '\0') - (auVar11[0xf] == auVar29[0xf]);
  uVar4 = (0xffffU >> (sbyte)uVar3) -
          (uint)((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar13[0xf] >> 7) << 0xf) >> (sbyte)uVar3);
  if (uVar4 == 0) {
    uVar2 = (uVar7 - 0x10) + param_3;
    if (param_3 < uVar2) {
      return 0;
    }
    bVar8 = false;
    bVar9 = uVar2 == 0;
    if (bVar9) {
      return 0;
    }
    lVar5 = 0x10;
    while( true ) {
      auVar11 = *(undefined1 (*) [16])(*param_1 + lVar5);
      auVar29 = *(undefined1 (*) [16])(*param_2 + lVar5);
      auVar48[0] = -(cVar30 < auVar11[0]);
      auVar48[1] = -(cVar31 < auVar11[1]);
      auVar48[2] = -(cVar32 < auVar11[2]);
      auVar48[3] = -(cVar33 < auVar11[3]);
      auVar48[4] = -(cVar34 < auVar11[4]);
      auVar48[5] = -(cVar35 < auVar11[5]);
      auVar48[6] = -(cVar36 < auVar11[6]);
      auVar48[7] = -(cVar37 < auVar11[7]);
      auVar48[8] = -(cVar38 < auVar11[8]);
      auVar48[9] = -(cVar39 < auVar11[9]);
      auVar48[10] = -(cVar40 < auVar11[10]);
      auVar48[0xb] = -(cVar41 < auVar11[0xb]);
      auVar48[0xc] = -(cVar42 < auVar11[0xc]);
      auVar48[0xd] = -(cVar43 < auVar11[0xd]);
      auVar48[0xe] = -(cVar44 < auVar11[0xe]);
      auVar48[0xf] = -(cVar45 < auVar11[0xf]);
      auVar53[0] = -(auVar11[0] < cVar50);
      auVar53[1] = -(auVar11[1] < cVar55);
      auVar53[2] = -(auVar11[2] < cVar56);
      auVar53[3] = -(auVar11[3] < cVar57);
      auVar53[4] = -(auVar11[4] < cVar58);
      auVar53[5] = -(auVar11[5] < cVar59);
      auVar53[6] = -(auVar11[6] < cVar60);
      auVar53[7] = -(auVar11[7] < cVar61);
      auVar53[8] = -(auVar11[8] < cVar62);
      auVar53[9] = -(auVar11[9] < cVar63);
      auVar53[10] = -(auVar11[10] < cVar64);
      auVar53[0xb] = -(auVar11[0xb] < cVar65);
      auVar53[0xc] = -(auVar11[0xc] < cVar66);
      auVar53[0xd] = -(auVar11[0xd] < cVar67);
      auVar53[0xe] = -(auVar11[0xe] < cVar68);
      auVar53[0xf] = -(auVar11[0xf] < cVar69);
      auVar72[0] = -(cVar30 < auVar29[0]);
      auVar72[1] = -(cVar31 < auVar29[1]);
      auVar72[2] = -(cVar32 < auVar29[2]);
      auVar72[3] = -(cVar33 < auVar29[3]);
      auVar72[4] = -(cVar34 < auVar29[4]);
      auVar72[5] = -(cVar35 < auVar29[5]);
      auVar72[6] = -(cVar36 < auVar29[6]);
      auVar72[7] = -(cVar37 < auVar29[7]);
      auVar72[8] = -(cVar38 < auVar29[8]);
      auVar72[9] = -(cVar39 < auVar29[9]);
      auVar72[10] = -(cVar40 < auVar29[10]);
      auVar72[0xb] = -(cVar41 < auVar29[0xb]);
      auVar72[0xc] = -(cVar42 < auVar29[0xc]);
      auVar72[0xd] = -(cVar43 < auVar29[0xd]);
      auVar72[0xe] = -(cVar44 < auVar29[0xe]);
      auVar72[0xf] = -(cVar45 < auVar29[0xf]);
      auVar76[0] = -(auVar29[0] < cVar50);
      auVar76[1] = -(auVar29[1] < cVar55);
      auVar76[2] = -(auVar29[2] < cVar56);
      auVar76[3] = -(auVar29[3] < cVar57);
      auVar76[4] = -(auVar29[4] < cVar58);
      auVar76[5] = -(auVar29[5] < cVar59);
      auVar76[6] = -(auVar29[6] < cVar60);
      auVar76[7] = -(auVar29[7] < cVar61);
      auVar76[8] = -(auVar29[8] < cVar62);
      auVar76[9] = -(auVar29[9] < cVar63);
      auVar76[10] = -(auVar29[10] < cVar64);
      auVar76[0xb] = -(auVar29[0xb] < cVar65);
      auVar76[0xc] = -(auVar29[0xc] < cVar66);
      auVar76[0xd] = -(auVar29[0xd] < cVar67);
      auVar76[0xe] = -(auVar29[0xe] < cVar68);
      auVar76[0xf] = -(auVar29[0xf] < cVar69);
      uVar3 = pcmpistri(auVar11 | auVar48 & auVar53 & _DAT_008219f0,
                        auVar29 | auVar72 & auVar76 & _DAT_008219f0,0x1a);
      lVar6 = lVar5 + 0x10;
      uVar7 = uVar2;
      if (bVar8 || bVar9) break;
      bVar8 = uVar2 < 0x10;
      uVar7 = uVar2 - 0x10;
      if (bVar8 || uVar7 == 0) {
        return 0;
      }
      auVar11 = *(undefined1 (*) [16])(param_1[1] + lVar5);
      auVar29 = *(undefined1 (*) [16])(param_2[1] + lVar5);
      auVar49[0] = -(cVar30 < auVar11[0]);
      auVar49[1] = -(cVar31 < auVar11[1]);
      auVar49[2] = -(cVar32 < auVar11[2]);
      auVar49[3] = -(cVar33 < auVar11[3]);
      auVar49[4] = -(cVar34 < auVar11[4]);
      auVar49[5] = -(cVar35 < auVar11[5]);
      auVar49[6] = -(cVar36 < auVar11[6]);
      auVar49[7] = -(cVar37 < auVar11[7]);
      auVar49[8] = -(cVar38 < auVar11[8]);
      auVar49[9] = -(cVar39 < auVar11[9]);
      auVar49[10] = -(cVar40 < auVar11[10]);
      auVar49[0xb] = -(cVar41 < auVar11[0xb]);
      auVar49[0xc] = -(cVar42 < auVar11[0xc]);
      auVar49[0xd] = -(cVar43 < auVar11[0xd]);
      auVar49[0xe] = -(cVar44 < auVar11[0xe]);
      auVar49[0xf] = -(cVar45 < auVar11[0xf]);
      auVar54[0] = -(auVar11[0] < cVar50);
      auVar54[1] = -(auVar11[1] < cVar55);
      auVar54[2] = -(auVar11[2] < cVar56);
      auVar54[3] = -(auVar11[3] < cVar57);
      auVar54[4] = -(auVar11[4] < cVar58);
      auVar54[5] = -(auVar11[5] < cVar59);
      auVar54[6] = -(auVar11[6] < cVar60);
      auVar54[7] = -(auVar11[7] < cVar61);
      auVar54[8] = -(auVar11[8] < cVar62);
      auVar54[9] = -(auVar11[9] < cVar63);
      auVar54[10] = -(auVar11[10] < cVar64);
      auVar54[0xb] = -(auVar11[0xb] < cVar65);
      auVar54[0xc] = -(auVar11[0xc] < cVar66);
      auVar54[0xd] = -(auVar11[0xd] < cVar67);
      auVar54[0xe] = -(auVar11[0xe] < cVar68);
      auVar54[0xf] = -(auVar11[0xf] < cVar69);
      auVar73[0] = -(cVar30 < auVar29[0]);
      auVar73[1] = -(cVar31 < auVar29[1]);
      auVar73[2] = -(cVar32 < auVar29[2]);
      auVar73[3] = -(cVar33 < auVar29[3]);
      auVar73[4] = -(cVar34 < auVar29[4]);
      auVar73[5] = -(cVar35 < auVar29[5]);
      auVar73[6] = -(cVar36 < auVar29[6]);
      auVar73[7] = -(cVar37 < auVar29[7]);
      auVar73[8] = -(cVar38 < auVar29[8]);
      auVar73[9] = -(cVar39 < auVar29[9]);
      auVar73[10] = -(cVar40 < auVar29[10]);
      auVar73[0xb] = -(cVar41 < auVar29[0xb]);
      auVar73[0xc] = -(cVar42 < auVar29[0xc]);
      auVar73[0xd] = -(cVar43 < auVar29[0xd]);
      auVar73[0xe] = -(cVar44 < auVar29[0xe]);
      auVar73[0xf] = -(cVar45 < auVar29[0xf]);
      auVar77[0] = -(auVar29[0] < cVar50);
      auVar77[1] = -(auVar29[1] < cVar55);
      auVar77[2] = -(auVar29[2] < cVar56);
      auVar77[3] = -(auVar29[3] < cVar57);
      auVar77[4] = -(auVar29[4] < cVar58);
      auVar77[5] = -(auVar29[5] < cVar59);
      auVar77[6] = -(auVar29[6] < cVar60);
      auVar77[7] = -(auVar29[7] < cVar61);
      auVar77[8] = -(auVar29[8] < cVar62);
      auVar77[9] = -(auVar29[9] < cVar63);
      auVar77[10] = -(auVar29[10] < cVar64);
      auVar77[0xb] = -(auVar29[0xb] < cVar65);
      auVar77[0xc] = -(auVar29[0xc] < cVar66);
      auVar77[0xd] = -(auVar29[0xd] < cVar67);
      auVar77[0xe] = -(auVar29[0xe] < cVar68);
      auVar77[0xf] = -(auVar29[0xf] < cVar69);
      uVar3 = pcmpistri(auVar11 | auVar49 & auVar54 & _DAT_008219f0,
                        auVar29 | auVar73 & auVar77 & _DAT_008219f0,0x1a);
      lVar6 = lVar5 + 0x20;
      if (bVar8 || uVar7 == 0) break;
      bVar8 = uVar7 < 0x10;
      uVar2 = uVar2 - 0x20;
      bVar9 = uVar2 == 0;
      lVar5 = lVar6;
      if (bVar8 || bVar9) {
        return 0;
      }
    }
    uVar2 = (ulong)uVar3;
    if (!bVar8) {
      return 0;
    }
    if (uVar7 <= uVar2) {
      return 0;
    }
    return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower +
                                 (ulong)(byte)param_1[-1][uVar2 + lVar6] * 4 + 0x200) -
                        *(int *)(_nl_C_LC_CTYPE_tolower +
                                (ulong)(byte)param_2[-1][uVar2 + lVar6] * 4 + 0x200));
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar2);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar7);
LAB_00731d10:
  uVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (param_3 <= uVar2) {
    return 0;
  }
  return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[uVar2] * 4 + 0x200)
                      - *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[uVar2] * 4 + 0x200
                                ));
}

