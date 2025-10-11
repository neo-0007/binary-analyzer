
/* WARNING: Removing unreachable block (ram,0x007334f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_007319a4(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long *param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
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
  char cVar28;
  char cVar29;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar30;
  undefined1 auVar15 [16];
  undefined1 auVar31 [16];
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
  char cVar46;
  char cVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  char cVar52;
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
  char cVar70;
  char cVar71;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  
  if ((*(uint *)(*param_3 + 0x278) & 1) != 0) {
    if (param_1 == param_2) {
      uVar4 = 0;
    }
    else {
      lVar9 = 0;
      do {
        pbVar1 = *param_1 + lVar9;
        uVar5 = *(int *)(param_3[0xe] + (ulong)*pbVar1 * 4) -
                *(int *)(param_3[0xe] + (ulong)(byte)(*param_2)[lVar9] * 4);
        uVar4 = (ulong)uVar5;
        if (uVar5 != 0) {
          return uVar4;
        }
        lVar9 = lVar9 + 1;
      } while (*pbVar1 != 0);
    }
    return uVar4;
  }
  uVar5 = (uint)param_2;
  uVar2 = (uint)param_1;
  cVar32 = DAT_0082bbf0;
  cVar33 = DAT_0082bbf0._1_1_;
  cVar34 = DAT_0082bbf0._2_1_;
  cVar35 = DAT_0082bbf0._3_1_;
  cVar36 = DAT_0082bbf0._4_1_;
  cVar37 = DAT_0082bbf0._5_1_;
  cVar38 = DAT_0082bbf0._6_1_;
  cVar39 = DAT_0082bbf0._7_1_;
  cVar40 = DAT_0082bbf0._8_1_;
  cVar41 = DAT_0082bbf0._9_1_;
  cVar42 = DAT_0082bbf0._10_1_;
  cVar43 = DAT_0082bbf0._11_1_;
  cVar44 = DAT_0082bbf0._12_1_;
  cVar45 = DAT_0082bbf0._13_1_;
  cVar46 = DAT_0082bbf0._14_1_;
  cVar47 = DAT_0082bbf0._15_1_;
  cVar52 = DAT_0082bc00;
  cVar71 = DAT_0082bc00._15_1_;
  cVar57 = DAT_0082bc00._1_1_;
  cVar58 = DAT_0082bc00._2_1_;
  cVar59 = DAT_0082bc00._3_1_;
  cVar60 = DAT_0082bc00._4_1_;
  cVar61 = DAT_0082bc00._5_1_;
  cVar62 = DAT_0082bc00._6_1_;
  cVar63 = DAT_0082bc00._7_1_;
  cVar64 = DAT_0082bc00._8_1_;
  cVar65 = DAT_0082bc00._9_1_;
  cVar66 = DAT_0082bc00._10_1_;
  cVar67 = DAT_0082bc00._11_1_;
  cVar68 = DAT_0082bc00._12_1_;
  cVar69 = DAT_0082bc00._13_1_;
  cVar70 = DAT_0082bc00._14_1_;
  if (((uVar5 & 0x3f) < 0x31) && ((uVar2 & 0x3f) < 0x31)) {
    auVar13 = *param_1;
    auVar31 = *param_2;
    auVar48[0] = -(cVar32 < auVar13[0]);
    auVar48[1] = -(cVar33 < auVar13[1]);
    auVar48[2] = -(cVar34 < auVar13[2]);
    auVar48[3] = -(cVar35 < auVar13[3]);
    auVar48[4] = -(cVar36 < auVar13[4]);
    auVar48[5] = -(cVar37 < auVar13[5]);
    auVar48[6] = -(cVar38 < auVar13[6]);
    auVar48[7] = -(cVar39 < auVar13[7]);
    auVar48[8] = -(cVar40 < auVar13[8]);
    auVar48[9] = -(cVar41 < auVar13[9]);
    auVar48[10] = -(cVar42 < auVar13[10]);
    auVar48[0xb] = -(cVar43 < auVar13[0xb]);
    auVar48[0xc] = -(cVar44 < auVar13[0xc]);
    auVar48[0xd] = -(cVar45 < auVar13[0xd]);
    auVar48[0xe] = -(cVar46 < auVar13[0xe]);
    auVar48[0xf] = -(cVar47 < auVar13[0xf]);
    auVar53[0] = -(auVar13[0] < cVar52);
    auVar53[1] = -(auVar13[1] < cVar57);
    auVar53[2] = -(auVar13[2] < cVar58);
    auVar53[3] = -(auVar13[3] < cVar59);
    auVar53[4] = -(auVar13[4] < cVar60);
    auVar53[5] = -(auVar13[5] < cVar61);
    auVar53[6] = -(auVar13[6] < cVar62);
    auVar53[7] = -(auVar13[7] < cVar63);
    auVar53[8] = -(auVar13[8] < cVar64);
    auVar53[9] = -(auVar13[9] < cVar65);
    auVar53[10] = -(auVar13[10] < cVar66);
    auVar53[0xb] = -(auVar13[0xb] < cVar67);
    auVar53[0xc] = -(auVar13[0xc] < cVar68);
    auVar53[0xd] = -(auVar13[0xd] < cVar69);
    auVar53[0xe] = -(auVar13[0xe] < cVar70);
    auVar53[0xf] = -(auVar13[0xf] < cVar71);
    auVar72[0] = -(cVar32 < auVar31[0]);
    auVar72[1] = -(cVar33 < auVar31[1]);
    auVar72[2] = -(cVar34 < auVar31[2]);
    auVar72[3] = -(cVar35 < auVar31[3]);
    auVar72[4] = -(cVar36 < auVar31[4]);
    auVar72[5] = -(cVar37 < auVar31[5]);
    auVar72[6] = -(cVar38 < auVar31[6]);
    auVar72[7] = -(cVar39 < auVar31[7]);
    auVar72[8] = -(cVar40 < auVar31[8]);
    auVar72[9] = -(cVar41 < auVar31[9]);
    auVar72[10] = -(cVar42 < auVar31[10]);
    auVar72[0xb] = -(cVar43 < auVar31[0xb]);
    auVar72[0xc] = -(cVar44 < auVar31[0xc]);
    auVar72[0xd] = -(cVar45 < auVar31[0xd]);
    auVar72[0xe] = -(cVar46 < auVar31[0xe]);
    auVar72[0xf] = -(cVar47 < auVar31[0xf]);
    auVar76[0] = -(auVar31[0] < cVar52);
    auVar76[1] = -(auVar31[1] < cVar57);
    auVar76[2] = -(auVar31[2] < cVar58);
    auVar76[3] = -(auVar31[3] < cVar59);
    auVar76[4] = -(auVar31[4] < cVar60);
    auVar76[5] = -(auVar31[5] < cVar61);
    auVar76[6] = -(auVar31[6] < cVar62);
    auVar76[7] = -(auVar31[7] < cVar63);
    auVar76[8] = -(auVar31[8] < cVar64);
    auVar76[9] = -(auVar31[9] < cVar65);
    auVar76[10] = -(auVar31[10] < cVar66);
    auVar76[0xb] = -(auVar31[0xb] < cVar67);
    auVar76[0xc] = -(auVar31[0xc] < cVar68);
    auVar76[0xd] = -(auVar31[0xd] < cVar69);
    auVar76[0xe] = -(auVar31[0xe] < cVar70);
    auVar76[0xf] = -(auVar31[0xf] < cVar71);
    auVar13 = auVar13 | auVar48 & auVar53 & _DAT_0082bc10;
    auVar31 = auVar31 | auVar72 & auVar76 & _DAT_0082bc10;
    auVar14[0] = (auVar13[0] == '\0') - (auVar13[0] == auVar31[0]);
    auVar14[1] = (auVar13[1] == '\0') - (auVar13[1] == auVar31[1]);
    auVar14[2] = (auVar13[2] == '\0') - (auVar13[2] == auVar31[2]);
    auVar14[3] = (auVar13[3] == '\0') - (auVar13[3] == auVar31[3]);
    auVar14[4] = (auVar13[4] == '\0') - (auVar13[4] == auVar31[4]);
    auVar14[5] = (auVar13[5] == '\0') - (auVar13[5] == auVar31[5]);
    auVar14[6] = (auVar13[6] == '\0') - (auVar13[6] == auVar31[6]);
    auVar14[7] = (auVar13[7] == '\0') - (auVar13[7] == auVar31[7]);
    auVar14[8] = (auVar13[8] == '\0') - (auVar13[8] == auVar31[8]);
    auVar14[9] = (auVar13[9] == '\0') - (auVar13[9] == auVar31[9]);
    auVar14[10] = (auVar13[10] == '\0') - (auVar13[10] == auVar31[10]);
    auVar14[0xb] = (auVar13[0xb] == '\0') - (auVar13[0xb] == auVar31[0xb]);
    auVar14[0xc] = (auVar13[0xc] == '\0') - (auVar13[0xc] == auVar31[0xc]);
    auVar14[0xd] = (auVar13[0xd] == '\0') - (auVar13[0xd] == auVar31[0xd]);
    auVar14[0xe] = (auVar13[0xe] == '\0') - (auVar13[0xe] == auVar31[0xe]);
    auVar14[0xf] = (auVar13[0xf] == '\0') - (auVar13[0xf] == auVar31[0xf]);
    uVar7 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar7 != 0) goto LAB_00733500;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar5 = uVar5 & 0xf;
  uVar2 = uVar2 & 0xf;
  uVar4 = (ulong)uVar2;
  if (uVar5 != uVar2) {
    uVar3 = uVar4;
    uVar6 = (ulong)uVar5;
    if (uVar5 <= uVar2) {
      uVar3 = (ulong)uVar5;
      uVar6 = uVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00731aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&DAT_0082bca0 + *(int *)(&DAT_0082bca0 + ((uVar3 + 0xf) - uVar6) * 4)))();
    return uVar4;
  }
  auVar13 = *param_2;
  cVar12 = auVar13[0];
  cVar16 = auVar13[1];
  cVar17 = auVar13[2];
  cVar18 = auVar13[3];
  cVar19 = auVar13[4];
  cVar20 = auVar13[5];
  cVar21 = auVar13[6];
  cVar22 = auVar13[7];
  cVar23 = auVar13[8];
  cVar24 = auVar13[9];
  cVar25 = auVar13[10];
  cVar26 = auVar13[0xb];
  cVar27 = auVar13[0xc];
  cVar28 = auVar13[0xd];
  cVar29 = auVar13[0xe];
  cVar30 = auVar13[0xf];
  auVar31 = *param_1;
  auVar49[0] = -(cVar32 < cVar12);
  auVar49[1] = -(cVar33 < cVar16);
  auVar49[2] = -(cVar34 < cVar17);
  auVar49[3] = -(cVar35 < cVar18);
  auVar49[4] = -(cVar36 < cVar19);
  auVar49[5] = -(cVar37 < cVar20);
  auVar49[6] = -(cVar38 < cVar21);
  auVar49[7] = -(cVar39 < cVar22);
  auVar49[8] = -(cVar40 < cVar23);
  auVar49[9] = -(cVar41 < cVar24);
  auVar49[10] = -(cVar42 < cVar25);
  auVar49[0xb] = -(cVar43 < cVar26);
  auVar49[0xc] = -(cVar44 < cVar27);
  auVar49[0xd] = -(cVar45 < cVar28);
  auVar49[0xe] = -(cVar46 < cVar29);
  auVar49[0xf] = -(cVar47 < cVar30);
  auVar54[0] = -(cVar12 < cVar52);
  auVar54[1] = -(cVar16 < cVar57);
  auVar54[2] = -(cVar17 < cVar58);
  auVar54[3] = -(cVar18 < cVar59);
  auVar54[4] = -(cVar19 < cVar60);
  auVar54[5] = -(cVar20 < cVar61);
  auVar54[6] = -(cVar21 < cVar62);
  auVar54[7] = -(cVar22 < cVar63);
  auVar54[8] = -(cVar23 < cVar64);
  auVar54[9] = -(cVar24 < cVar65);
  auVar54[10] = -(cVar25 < cVar66);
  auVar54[0xb] = -(cVar26 < cVar67);
  auVar54[0xc] = -(cVar27 < cVar68);
  auVar54[0xd] = -(cVar28 < cVar69);
  auVar54[0xe] = -(cVar29 < cVar70);
  auVar54[0xf] = -(cVar30 < cVar71);
  auVar73[0] = -(cVar32 < auVar31[0]);
  auVar73[1] = -(cVar33 < auVar31[1]);
  auVar73[2] = -(cVar34 < auVar31[2]);
  auVar73[3] = -(cVar35 < auVar31[3]);
  auVar73[4] = -(cVar36 < auVar31[4]);
  auVar73[5] = -(cVar37 < auVar31[5]);
  auVar73[6] = -(cVar38 < auVar31[6]);
  auVar73[7] = -(cVar39 < auVar31[7]);
  auVar73[8] = -(cVar40 < auVar31[8]);
  auVar73[9] = -(cVar41 < auVar31[9]);
  auVar73[10] = -(cVar42 < auVar31[10]);
  auVar73[0xb] = -(cVar43 < auVar31[0xb]);
  auVar73[0xc] = -(cVar44 < auVar31[0xc]);
  auVar73[0xd] = -(cVar45 < auVar31[0xd]);
  auVar73[0xe] = -(cVar46 < auVar31[0xe]);
  auVar73[0xf] = -(cVar47 < auVar31[0xf]);
  auVar77[0] = -(auVar31[0] < cVar52);
  auVar77[1] = -(auVar31[1] < cVar57);
  auVar77[2] = -(auVar31[2] < cVar58);
  auVar77[3] = -(auVar31[3] < cVar59);
  auVar77[4] = -(auVar31[4] < cVar60);
  auVar77[5] = -(auVar31[5] < cVar61);
  auVar77[6] = -(auVar31[6] < cVar62);
  auVar77[7] = -(auVar31[7] < cVar63);
  auVar77[8] = -(auVar31[8] < cVar64);
  auVar77[9] = -(auVar31[9] < cVar65);
  auVar77[10] = -(auVar31[10] < cVar66);
  auVar77[0xb] = -(auVar31[0xb] < cVar67);
  auVar77[0xc] = -(auVar31[0xc] < cVar68);
  auVar77[0xd] = -(auVar31[0xd] < cVar69);
  auVar77[0xe] = -(auVar31[0xe] < cVar70);
  auVar77[0xf] = -(auVar31[0xf] < cVar71);
  auVar13 = auVar13 | auVar49 & auVar54 & _DAT_0082bc10;
  auVar31 = auVar31 | auVar73 & auVar77 & _DAT_0082bc10;
  auVar15[0] = (cVar12 == '\0') - (auVar13[0] == auVar31[0]);
  auVar15[1] = (cVar16 == '\0') - (auVar13[1] == auVar31[1]);
  auVar15[2] = (cVar17 == '\0') - (auVar13[2] == auVar31[2]);
  auVar15[3] = (cVar18 == '\0') - (auVar13[3] == auVar31[3]);
  auVar15[4] = (cVar19 == '\0') - (auVar13[4] == auVar31[4]);
  auVar15[5] = (cVar20 == '\0') - (auVar13[5] == auVar31[5]);
  auVar15[6] = (cVar21 == '\0') - (auVar13[6] == auVar31[6]);
  auVar15[7] = (cVar22 == '\0') - (auVar13[7] == auVar31[7]);
  auVar15[8] = (cVar23 == '\0') - (auVar13[8] == auVar31[8]);
  auVar15[9] = (cVar24 == '\0') - (auVar13[9] == auVar31[9]);
  auVar15[10] = (cVar25 == '\0') - (auVar13[10] == auVar31[10]);
  auVar15[0xb] = (cVar26 == '\0') - (auVar13[0xb] == auVar31[0xb]);
  auVar15[0xc] = (cVar27 == '\0') - (auVar13[0xc] == auVar31[0xc]);
  auVar15[0xd] = (cVar28 == '\0') - (auVar13[0xd] == auVar31[0xd]);
  auVar15[0xe] = (cVar29 == '\0') - (auVar13[0xe] == auVar31[0xe]);
  auVar15[0xf] = (cVar30 == '\0') - (auVar13[0xf] == auVar31[0xf]);
  uVar7 = 0xffff >> (sbyte)uVar5;
  uVar2 = (uint)((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar15[0xf] >> 7) << 0xf) >> (sbyte)uVar5);
  bVar10 = uVar7 < uVar2;
  uVar7 = uVar7 - uVar2;
  bVar11 = uVar7 == 0;
  if (bVar11) {
    lVar9 = 0x10;
    do {
      auVar13 = *(undefined1 (*) [16])(*param_1 + lVar9);
      auVar31 = *(undefined1 (*) [16])(*param_2 + lVar9);
      auVar50[0] = -(cVar32 < auVar13[0]);
      auVar50[1] = -(cVar33 < auVar13[1]);
      auVar50[2] = -(cVar34 < auVar13[2]);
      auVar50[3] = -(cVar35 < auVar13[3]);
      auVar50[4] = -(cVar36 < auVar13[4]);
      auVar50[5] = -(cVar37 < auVar13[5]);
      auVar50[6] = -(cVar38 < auVar13[6]);
      auVar50[7] = -(cVar39 < auVar13[7]);
      auVar50[8] = -(cVar40 < auVar13[8]);
      auVar50[9] = -(cVar41 < auVar13[9]);
      auVar50[10] = -(cVar42 < auVar13[10]);
      auVar50[0xb] = -(cVar43 < auVar13[0xb]);
      auVar50[0xc] = -(cVar44 < auVar13[0xc]);
      auVar50[0xd] = -(cVar45 < auVar13[0xd]);
      auVar50[0xe] = -(cVar46 < auVar13[0xe]);
      auVar50[0xf] = -(cVar47 < auVar13[0xf]);
      auVar55[0] = -(auVar13[0] < cVar52);
      auVar55[1] = -(auVar13[1] < cVar57);
      auVar55[2] = -(auVar13[2] < cVar58);
      auVar55[3] = -(auVar13[3] < cVar59);
      auVar55[4] = -(auVar13[4] < cVar60);
      auVar55[5] = -(auVar13[5] < cVar61);
      auVar55[6] = -(auVar13[6] < cVar62);
      auVar55[7] = -(auVar13[7] < cVar63);
      auVar55[8] = -(auVar13[8] < cVar64);
      auVar55[9] = -(auVar13[9] < cVar65);
      auVar55[10] = -(auVar13[10] < cVar66);
      auVar55[0xb] = -(auVar13[0xb] < cVar67);
      auVar55[0xc] = -(auVar13[0xc] < cVar68);
      auVar55[0xd] = -(auVar13[0xd] < cVar69);
      auVar55[0xe] = -(auVar13[0xe] < cVar70);
      auVar55[0xf] = -(auVar13[0xf] < cVar71);
      auVar74[0] = -(cVar32 < auVar31[0]);
      auVar74[1] = -(cVar33 < auVar31[1]);
      auVar74[2] = -(cVar34 < auVar31[2]);
      auVar74[3] = -(cVar35 < auVar31[3]);
      auVar74[4] = -(cVar36 < auVar31[4]);
      auVar74[5] = -(cVar37 < auVar31[5]);
      auVar74[6] = -(cVar38 < auVar31[6]);
      auVar74[7] = -(cVar39 < auVar31[7]);
      auVar74[8] = -(cVar40 < auVar31[8]);
      auVar74[9] = -(cVar41 < auVar31[9]);
      auVar74[10] = -(cVar42 < auVar31[10]);
      auVar74[0xb] = -(cVar43 < auVar31[0xb]);
      auVar74[0xc] = -(cVar44 < auVar31[0xc]);
      auVar74[0xd] = -(cVar45 < auVar31[0xd]);
      auVar74[0xe] = -(cVar46 < auVar31[0xe]);
      auVar74[0xf] = -(cVar47 < auVar31[0xf]);
      auVar78[0] = -(auVar31[0] < cVar52);
      auVar78[1] = -(auVar31[1] < cVar57);
      auVar78[2] = -(auVar31[2] < cVar58);
      auVar78[3] = -(auVar31[3] < cVar59);
      auVar78[4] = -(auVar31[4] < cVar60);
      auVar78[5] = -(auVar31[5] < cVar61);
      auVar78[6] = -(auVar31[6] < cVar62);
      auVar78[7] = -(auVar31[7] < cVar63);
      auVar78[8] = -(auVar31[8] < cVar64);
      auVar78[9] = -(auVar31[9] < cVar65);
      auVar78[10] = -(auVar31[10] < cVar66);
      auVar78[0xb] = -(auVar31[0xb] < cVar67);
      auVar78[0xc] = -(auVar31[0xc] < cVar68);
      auVar78[0xd] = -(auVar31[0xd] < cVar69);
      auVar78[0xe] = -(auVar31[0xe] < cVar70);
      auVar78[0xf] = -(auVar31[0xf] < cVar71);
      uVar5 = pcmpistri(auVar13 | auVar50 & auVar55 & _DAT_0082bc10,
                        auVar31 | auVar74 & auVar78 & _DAT_0082bc10,0x1a);
      lVar8 = lVar9 + 0x10;
      if (bVar10 || bVar11) break;
      auVar13 = *(undefined1 (*) [16])(param_1[1] + lVar9);
      auVar31 = *(undefined1 (*) [16])(param_2[1] + lVar9);
      auVar51[0] = -(cVar32 < auVar13[0]);
      auVar51[1] = -(cVar33 < auVar13[1]);
      auVar51[2] = -(cVar34 < auVar13[2]);
      auVar51[3] = -(cVar35 < auVar13[3]);
      auVar51[4] = -(cVar36 < auVar13[4]);
      auVar51[5] = -(cVar37 < auVar13[5]);
      auVar51[6] = -(cVar38 < auVar13[6]);
      auVar51[7] = -(cVar39 < auVar13[7]);
      auVar51[8] = -(cVar40 < auVar13[8]);
      auVar51[9] = -(cVar41 < auVar13[9]);
      auVar51[10] = -(cVar42 < auVar13[10]);
      auVar51[0xb] = -(cVar43 < auVar13[0xb]);
      auVar51[0xc] = -(cVar44 < auVar13[0xc]);
      auVar51[0xd] = -(cVar45 < auVar13[0xd]);
      auVar51[0xe] = -(cVar46 < auVar13[0xe]);
      auVar51[0xf] = -(cVar47 < auVar13[0xf]);
      auVar56[0] = -(auVar13[0] < cVar52);
      auVar56[1] = -(auVar13[1] < cVar57);
      auVar56[2] = -(auVar13[2] < cVar58);
      auVar56[3] = -(auVar13[3] < cVar59);
      auVar56[4] = -(auVar13[4] < cVar60);
      auVar56[5] = -(auVar13[5] < cVar61);
      auVar56[6] = -(auVar13[6] < cVar62);
      auVar56[7] = -(auVar13[7] < cVar63);
      auVar56[8] = -(auVar13[8] < cVar64);
      auVar56[9] = -(auVar13[9] < cVar65);
      auVar56[10] = -(auVar13[10] < cVar66);
      auVar56[0xb] = -(auVar13[0xb] < cVar67);
      auVar56[0xc] = -(auVar13[0xc] < cVar68);
      auVar56[0xd] = -(auVar13[0xd] < cVar69);
      auVar56[0xe] = -(auVar13[0xe] < cVar70);
      auVar56[0xf] = -(auVar13[0xf] < cVar71);
      auVar75[0] = -(cVar32 < auVar31[0]);
      auVar75[1] = -(cVar33 < auVar31[1]);
      auVar75[2] = -(cVar34 < auVar31[2]);
      auVar75[3] = -(cVar35 < auVar31[3]);
      auVar75[4] = -(cVar36 < auVar31[4]);
      auVar75[5] = -(cVar37 < auVar31[5]);
      auVar75[6] = -(cVar38 < auVar31[6]);
      auVar75[7] = -(cVar39 < auVar31[7]);
      auVar75[8] = -(cVar40 < auVar31[8]);
      auVar75[9] = -(cVar41 < auVar31[9]);
      auVar75[10] = -(cVar42 < auVar31[10]);
      auVar75[0xb] = -(cVar43 < auVar31[0xb]);
      auVar75[0xc] = -(cVar44 < auVar31[0xc]);
      auVar75[0xd] = -(cVar45 < auVar31[0xd]);
      auVar75[0xe] = -(cVar46 < auVar31[0xe]);
      auVar75[0xf] = -(cVar47 < auVar31[0xf]);
      auVar79[0] = -(auVar31[0] < cVar52);
      auVar79[1] = -(auVar31[1] < cVar57);
      auVar79[2] = -(auVar31[2] < cVar58);
      auVar79[3] = -(auVar31[3] < cVar59);
      auVar79[4] = -(auVar31[4] < cVar60);
      auVar79[5] = -(auVar31[5] < cVar61);
      auVar79[6] = -(auVar31[6] < cVar62);
      auVar79[7] = -(auVar31[7] < cVar63);
      auVar79[8] = -(auVar31[8] < cVar64);
      auVar79[9] = -(auVar31[9] < cVar65);
      auVar79[10] = -(auVar31[10] < cVar66);
      auVar79[0xb] = -(auVar31[0xb] < cVar67);
      auVar79[0xc] = -(auVar31[0xc] < cVar68);
      auVar79[0xd] = -(auVar31[0xd] < cVar69);
      auVar79[0xe] = -(auVar31[0xe] < cVar70);
      auVar79[0xf] = -(auVar31[0xf] < cVar71);
      uVar5 = pcmpistri(auVar13 | auVar51 & auVar56 & _DAT_0082bc10,
                        auVar31 | auVar75 & auVar79 & _DAT_0082bc10,0x1a);
      lVar8 = lVar9 + 0x20;
      lVar9 = lVar8;
    } while (!bVar10 && !bVar11);
    if (bVar10) {
      return (ulong)(uint)(*(int *)(&DAT_00831080 +
                                   (ulong)(byte)param_1[-1][(ulong)uVar5 + lVar8] * 4) -
                          *(int *)(&DAT_00831080 +
                                  (ulong)(byte)param_2[-1][(ulong)uVar5 + lVar8] * 4));
    }
    return 0;
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar4);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar5);
LAB_00733500:
  lVar9 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
    }
  }
  return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[lVar9] * 4) -
                      *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[lVar9] * 4));
}

