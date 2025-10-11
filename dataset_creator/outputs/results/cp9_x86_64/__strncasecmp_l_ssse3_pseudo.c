
/* WARNING: Removing unreachable block (ram,0x0072fd32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong __strncasecmp_l_ssse3
                (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  ulong uVar27;
  bool bVar28;
  char cVar29;
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
  char cVar46;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  char cVar65;
  undefined1 auVar50 [16];
  undefined1 auVar66 [16];
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  char cVar87;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  char cVar106;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  
  if ((*(uint *)(*param_4 + 0x278) & 1) != 0) {
    if ((param_1 == param_2) || (param_3 == 0)) {
      uVar20 = 0;
    }
    else {
      uVar23 = 0;
      do {
        uVar21 = *(int *)(param_4[0xe] + (ulong)(byte)(*param_1)[uVar23] * 4) -
                 *(int *)(param_4[0xe] + (ulong)(byte)(*param_2)[uVar23] * 4);
        uVar20 = (ulong)uVar21;
        if (uVar21 != 0) {
          return uVar20;
        }
      } while (((*param_1)[uVar23] != 0) && (uVar23 = uVar23 + 1, param_3 != uVar23));
    }
    return uVar20;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[0] * 4 + 0x200) -
                        *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[0] * 4 + 0x200));
  }
  uVar21 = (uint)param_2;
  uVar19 = (uint)param_1;
  cVar67 = DAT_008219d0;
  cVar68 = DAT_008219d0._1_1_;
  cVar69 = DAT_008219d0._2_1_;
  cVar70 = DAT_008219d0._3_1_;
  cVar71 = DAT_008219d0._4_1_;
  cVar72 = DAT_008219d0._5_1_;
  cVar73 = DAT_008219d0._6_1_;
  cVar74 = DAT_008219d0._7_1_;
  cVar75 = DAT_008219d0._8_1_;
  cVar76 = DAT_008219d0._9_1_;
  cVar77 = DAT_008219d0._10_1_;
  cVar78 = DAT_008219d0._11_1_;
  cVar79 = DAT_008219d0._12_1_;
  cVar80 = DAT_008219d0._13_1_;
  cVar81 = DAT_008219d0._14_1_;
  cVar82 = DAT_008219d0._15_1_;
  cVar87 = DAT_008219e0;
  cVar106 = DAT_008219e0._15_1_;
  cVar92 = DAT_008219e0._1_1_;
  cVar93 = DAT_008219e0._2_1_;
  cVar94 = DAT_008219e0._3_1_;
  cVar95 = DAT_008219e0._4_1_;
  cVar96 = DAT_008219e0._5_1_;
  cVar97 = DAT_008219e0._6_1_;
  cVar98 = DAT_008219e0._7_1_;
  cVar99 = DAT_008219e0._8_1_;
  cVar100 = DAT_008219e0._9_1_;
  cVar101 = DAT_008219e0._10_1_;
  cVar102 = DAT_008219e0._11_1_;
  cVar103 = DAT_008219e0._12_1_;
  cVar104 = DAT_008219e0._13_1_;
  cVar105 = DAT_008219e0._14_1_;
  if (((uVar21 & 0x3f) < 0x31) && ((uVar19 & 0x3f) < 0x31)) {
    uVar26 = *(undefined8 *)*param_1;
    uVar1 = *(undefined8 *)*param_2;
    uVar2 = *(undefined8 *)(*param_1 + 8);
    auVar47 = *param_1;
    uVar3 = *(undefined8 *)(*param_2 + 8);
    auVar66 = *param_2;
    auVar83[0] = -(cVar67 < (char)uVar26);
    auVar83[1] = -(cVar68 < auVar47[1]);
    auVar83[2] = -(cVar69 < auVar47[2]);
    auVar83[3] = -(cVar70 < auVar47[3]);
    auVar83[4] = -(cVar71 < auVar47[4]);
    auVar83[5] = -(cVar72 < auVar47[5]);
    auVar83[6] = -(cVar73 < auVar47[6]);
    auVar83[7] = -(cVar74 < auVar47[7]);
    auVar83[8] = -(cVar75 < auVar47[8]);
    auVar83[9] = -(cVar76 < auVar47[9]);
    auVar83[10] = -(cVar77 < auVar47[10]);
    auVar83[0xb] = -(cVar78 < auVar47[0xb]);
    auVar83[0xc] = -(cVar79 < auVar47[0xc]);
    auVar83[0xd] = -(cVar80 < auVar47[0xd]);
    auVar83[0xe] = -(cVar81 < auVar47[0xe]);
    auVar83[0xf] = -(cVar82 < auVar47[0xf]);
    auVar88[0] = -((char)uVar26 < cVar87);
    auVar88[1] = -((char)((ulong)uVar26 >> 8) < cVar92);
    auVar88[2] = -((char)((ulong)uVar26 >> 0x10) < cVar93);
    auVar88[3] = -((char)((ulong)uVar26 >> 0x18) < cVar94);
    auVar88[4] = -((char)((ulong)uVar26 >> 0x20) < cVar95);
    auVar88[5] = -((char)((ulong)uVar26 >> 0x28) < cVar96);
    auVar88[6] = -((char)((ulong)uVar26 >> 0x30) < cVar97);
    auVar88[7] = -((char)((ulong)uVar26 >> 0x38) < cVar98);
    auVar88[8] = -((char)uVar2 < cVar99);
    auVar88[9] = -((char)((ulong)uVar2 >> 8) < cVar100);
    auVar88[10] = -((char)((ulong)uVar2 >> 0x10) < cVar101);
    auVar88[0xb] = -((char)((ulong)uVar2 >> 0x18) < cVar102);
    auVar88[0xc] = -((char)((ulong)uVar2 >> 0x20) < cVar103);
    auVar88[0xd] = -((char)((ulong)uVar2 >> 0x28) < cVar104);
    auVar88[0xe] = -((char)((ulong)uVar2 >> 0x30) < cVar105);
    auVar88[0xf] = -((char)((ulong)uVar2 >> 0x38) < cVar106);
    auVar107[0] = -(cVar67 < (char)uVar1);
    auVar107[1] = -(cVar68 < auVar66[1]);
    auVar107[2] = -(cVar69 < auVar66[2]);
    auVar107[3] = -(cVar70 < auVar66[3]);
    auVar107[4] = -(cVar71 < auVar66[4]);
    auVar107[5] = -(cVar72 < auVar66[5]);
    auVar107[6] = -(cVar73 < auVar66[6]);
    auVar107[7] = -(cVar74 < auVar66[7]);
    auVar107[8] = -(cVar75 < auVar66[8]);
    auVar107[9] = -(cVar76 < auVar66[9]);
    auVar107[10] = -(cVar77 < auVar66[10]);
    auVar107[0xb] = -(cVar78 < auVar66[0xb]);
    auVar107[0xc] = -(cVar79 < auVar66[0xc]);
    auVar107[0xd] = -(cVar80 < auVar66[0xd]);
    auVar107[0xe] = -(cVar81 < auVar66[0xe]);
    auVar107[0xf] = -(cVar82 < auVar66[0xf]);
    auVar111[0] = -((char)uVar1 < cVar87);
    auVar111[1] = -((char)((ulong)uVar1 >> 8) < cVar92);
    auVar111[2] = -((char)((ulong)uVar1 >> 0x10) < cVar93);
    auVar111[3] = -((char)((ulong)uVar1 >> 0x18) < cVar94);
    auVar111[4] = -((char)((ulong)uVar1 >> 0x20) < cVar95);
    auVar111[5] = -((char)((ulong)uVar1 >> 0x28) < cVar96);
    auVar111[6] = -((char)((ulong)uVar1 >> 0x30) < cVar97);
    auVar111[7] = -((char)((ulong)uVar1 >> 0x38) < cVar98);
    auVar111[8] = -((char)uVar3 < cVar99);
    auVar111[9] = -((char)((ulong)uVar3 >> 8) < cVar100);
    auVar111[10] = -((char)((ulong)uVar3 >> 0x10) < cVar101);
    auVar111[0xb] = -((char)((ulong)uVar3 >> 0x18) < cVar102);
    auVar111[0xc] = -((char)((ulong)uVar3 >> 0x20) < cVar103);
    auVar111[0xd] = -((char)((ulong)uVar3 >> 0x28) < cVar104);
    auVar111[0xe] = -((char)((ulong)uVar3 >> 0x30) < cVar105);
    auVar111[0xf] = -((char)((ulong)uVar3 >> 0x38) < cVar106);
    auVar47 = auVar47 | auVar83 & auVar88 & _DAT_008219f0;
    auVar66 = auVar66 | auVar107 & auVar111 & _DAT_008219f0;
    auVar48[0] = (auVar47[0] == '\0') - (auVar47[0] == auVar66[0]);
    auVar48[1] = (auVar47[1] == '\0') - (auVar47[1] == auVar66[1]);
    auVar48[2] = (auVar47[2] == '\0') - (auVar47[2] == auVar66[2]);
    auVar48[3] = (auVar47[3] == '\0') - (auVar47[3] == auVar66[3]);
    auVar48[4] = (auVar47[4] == '\0') - (auVar47[4] == auVar66[4]);
    auVar48[5] = (auVar47[5] == '\0') - (auVar47[5] == auVar66[5]);
    auVar48[6] = (auVar47[6] == '\0') - (auVar47[6] == auVar66[6]);
    auVar48[7] = (auVar47[7] == '\0') - (auVar47[7] == auVar66[7]);
    auVar48[8] = (auVar47[8] == '\0') - (auVar47[8] == auVar66[8]);
    auVar48[9] = (auVar47[9] == '\0') - (auVar47[9] == auVar66[9]);
    auVar48[10] = (auVar47[10] == '\0') - (auVar47[10] == auVar66[10]);
    auVar48[0xb] = (auVar47[0xb] == '\0') - (auVar47[0xb] == auVar66[0xb]);
    auVar48[0xc] = (auVar47[0xc] == '\0') - (auVar47[0xc] == auVar66[0xc]);
    auVar48[0xd] = (auVar47[0xd] == '\0') - (auVar47[0xd] == auVar66[0xd]);
    auVar48[0xe] = (auVar47[0xe] == '\0') - (auVar47[0xe] == auVar66[0xe]);
    auVar48[0xf] = (auVar47[0xf] == '\0') - (auVar47[0xf] == auVar66[0xf]);
    uVar24 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar48[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar24 != 0) goto LAB_0072fd40;
    bVar28 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar28 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar26 = 0;
  uVar21 = uVar21 & 0xf;
  uVar23 = (ulong)uVar21;
  uVar19 = uVar19 & 0xf;
  uVar20 = (ulong)uVar19;
  if (uVar21 != uVar19) {
    pauVar25 = param_2;
    if (uVar21 <= uVar19) {
      uVar26 = 0xffff;
      uVar20 = (ulong)uVar21;
      uVar23 = (ulong)uVar19;
      pauVar25 = param_1;
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0072d969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar20 = (*(code *)(&DAT_00821b50 + *(int *)(&DAT_00821b50 + ((uVar20 + 0xf) - uVar23) * 4)))
                       (param_1,pauVar25,0xffff,uVar23,uVar26);
    return uVar20;
  }
  auVar47 = *param_2;
  cVar29 = auVar47[0];
  cVar30 = auVar47[1];
  cVar31 = auVar47[2];
  cVar32 = auVar47[3];
  cVar33 = auVar47[4];
  cVar34 = auVar47[5];
  cVar35 = auVar47[6];
  cVar36 = auVar47[7];
  cVar37 = auVar47[8];
  cVar38 = auVar47[9];
  cVar39 = auVar47[10];
  cVar40 = auVar47[0xb];
  cVar41 = auVar47[0xc];
  cVar42 = auVar47[0xd];
  cVar43 = auVar47[0xe];
  cVar44 = auVar47[0xf];
  auVar66 = *param_1;
  auVar84[0] = -(cVar67 < cVar29);
  auVar84[1] = -(cVar68 < cVar30);
  auVar84[2] = -(cVar69 < cVar31);
  auVar84[3] = -(cVar70 < cVar32);
  auVar84[4] = -(cVar71 < cVar33);
  auVar84[5] = -(cVar72 < cVar34);
  auVar84[6] = -(cVar73 < cVar35);
  auVar84[7] = -(cVar74 < cVar36);
  auVar84[8] = -(cVar75 < cVar37);
  auVar84[9] = -(cVar76 < cVar38);
  auVar84[10] = -(cVar77 < cVar39);
  auVar84[0xb] = -(cVar78 < cVar40);
  auVar84[0xc] = -(cVar79 < cVar41);
  auVar84[0xd] = -(cVar80 < cVar42);
  auVar84[0xe] = -(cVar81 < cVar43);
  auVar84[0xf] = -(cVar82 < cVar44);
  auVar89[0] = -(cVar29 < cVar87);
  auVar89[1] = -(cVar30 < cVar92);
  auVar89[2] = -(cVar31 < cVar93);
  auVar89[3] = -(cVar32 < cVar94);
  auVar89[4] = -(cVar33 < cVar95);
  auVar89[5] = -(cVar34 < cVar96);
  auVar89[6] = -(cVar35 < cVar97);
  auVar89[7] = -(cVar36 < cVar98);
  auVar89[8] = -(cVar37 < cVar99);
  auVar89[9] = -(cVar38 < cVar100);
  auVar89[10] = -(cVar39 < cVar101);
  auVar89[0xb] = -(cVar40 < cVar102);
  auVar89[0xc] = -(cVar41 < cVar103);
  auVar89[0xd] = -(cVar42 < cVar104);
  auVar89[0xe] = -(cVar43 < cVar105);
  auVar89[0xf] = -(cVar44 < cVar106);
  auVar108[0] = -(cVar67 < auVar66[0]);
  auVar108[1] = -(cVar68 < auVar66[1]);
  auVar108[2] = -(cVar69 < auVar66[2]);
  auVar108[3] = -(cVar70 < auVar66[3]);
  auVar108[4] = -(cVar71 < auVar66[4]);
  auVar108[5] = -(cVar72 < auVar66[5]);
  auVar108[6] = -(cVar73 < auVar66[6]);
  auVar108[7] = -(cVar74 < auVar66[7]);
  auVar108[8] = -(cVar75 < auVar66[8]);
  auVar108[9] = -(cVar76 < auVar66[9]);
  auVar108[10] = -(cVar77 < auVar66[10]);
  auVar108[0xb] = -(cVar78 < auVar66[0xb]);
  auVar108[0xc] = -(cVar79 < auVar66[0xc]);
  auVar108[0xd] = -(cVar80 < auVar66[0xd]);
  auVar108[0xe] = -(cVar81 < auVar66[0xe]);
  auVar108[0xf] = -(cVar82 < auVar66[0xf]);
  auVar112[0] = -(auVar66[0] < cVar87);
  auVar112[1] = -(auVar66[1] < cVar92);
  auVar112[2] = -(auVar66[2] < cVar93);
  auVar112[3] = -(auVar66[3] < cVar94);
  auVar112[4] = -(auVar66[4] < cVar95);
  auVar112[5] = -(auVar66[5] < cVar96);
  auVar112[6] = -(auVar66[6] < cVar97);
  auVar112[7] = -(auVar66[7] < cVar98);
  auVar112[8] = -(auVar66[8] < cVar99);
  auVar112[9] = -(auVar66[9] < cVar100);
  auVar112[10] = -(auVar66[10] < cVar101);
  auVar112[0xb] = -(auVar66[0xb] < cVar102);
  auVar112[0xc] = -(auVar66[0xc] < cVar103);
  auVar112[0xd] = -(auVar66[0xd] < cVar104);
  auVar112[0xe] = -(auVar66[0xe] < cVar105);
  auVar112[0xf] = -(auVar66[0xf] < cVar106);
  auVar47 = auVar47 | auVar84 & auVar89 & _DAT_008219f0;
  auVar66 = auVar66 | auVar108 & auVar112 & _DAT_008219f0;
  auVar49[0] = (cVar29 == '\0') - (auVar47[0] == auVar66[0]);
  auVar49[1] = (cVar30 == '\0') - (auVar47[1] == auVar66[1]);
  auVar49[2] = (cVar31 == '\0') - (auVar47[2] == auVar66[2]);
  auVar49[3] = (cVar32 == '\0') - (auVar47[3] == auVar66[3]);
  auVar49[4] = (cVar33 == '\0') - (auVar47[4] == auVar66[4]);
  auVar49[5] = (cVar34 == '\0') - (auVar47[5] == auVar66[5]);
  auVar49[6] = (cVar35 == '\0') - (auVar47[6] == auVar66[6]);
  auVar49[7] = (cVar36 == '\0') - (auVar47[7] == auVar66[7]);
  auVar49[8] = (cVar37 == '\0') - (auVar47[8] == auVar66[8]);
  auVar49[9] = (cVar38 == '\0') - (auVar47[9] == auVar66[9]);
  auVar49[10] = (cVar39 == '\0') - (auVar47[10] == auVar66[10]);
  auVar49[0xb] = (cVar40 == '\0') - (auVar47[0xb] == auVar66[0xb]);
  auVar49[0xc] = (cVar41 == '\0') - (auVar47[0xc] == auVar66[0xc]);
  auVar49[0xd] = (cVar42 == '\0') - (auVar47[0xd] == auVar66[0xd]);
  auVar49[0xe] = (cVar43 == '\0') - (auVar47[0xe] == auVar66[0xe]);
  auVar49[0xf] = (cVar44 == '\0') - (auVar47[0xf] == auVar66[0xf]);
  uVar24 = (0xffffU >> (sbyte)uVar21) -
           (uint)((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar49[0xf] >> 7) << 0xf) >> (sbyte)uVar21);
  if (uVar24 == 0) {
    uVar27 = (uVar23 - 0x10) + param_3;
    if (param_3 < uVar27) {
      return 0;
    }
    if (uVar27 == 0) {
      return 0;
    }
    uVar22 = 0x10;
    cVar29 = '\0';
    cVar30 = '\0';
    cVar31 = '\0';
    cVar32 = '\0';
    cVar33 = '\0';
    cVar34 = '\0';
    cVar35 = '\0';
    cVar36 = '\0';
    cVar37 = '\0';
    cVar38 = '\0';
    cVar39 = '\0';
    cVar40 = '\0';
    cVar41 = '\0';
    cVar42 = '\0';
    cVar43 = '\0';
    cVar44 = '\0';
    while( true ) {
      auVar47 = *(undefined1 (*) [16])(*param_2 + uVar22);
      auVar66 = *(undefined1 (*) [16])(*param_1 + uVar22);
      auVar85[0] = -(cVar67 < auVar47[0]);
      auVar85[1] = -(cVar68 < auVar47[1]);
      auVar85[2] = -(cVar69 < auVar47[2]);
      auVar85[3] = -(cVar70 < auVar47[3]);
      auVar85[4] = -(cVar71 < auVar47[4]);
      auVar85[5] = -(cVar72 < auVar47[5]);
      auVar85[6] = -(cVar73 < auVar47[6]);
      auVar85[7] = -(cVar74 < auVar47[7]);
      auVar85[8] = -(cVar75 < auVar47[8]);
      auVar85[9] = -(cVar76 < auVar47[9]);
      auVar85[10] = -(cVar77 < auVar47[10]);
      auVar85[0xb] = -(cVar78 < auVar47[0xb]);
      auVar85[0xc] = -(cVar79 < auVar47[0xc]);
      auVar85[0xd] = -(cVar80 < auVar47[0xd]);
      auVar85[0xe] = -(cVar81 < auVar47[0xe]);
      auVar85[0xf] = -(cVar82 < auVar47[0xf]);
      auVar90[0] = -(auVar47[0] < cVar87);
      auVar90[1] = -(auVar47[1] < cVar92);
      auVar90[2] = -(auVar47[2] < cVar93);
      auVar90[3] = -(auVar47[3] < cVar94);
      auVar90[4] = -(auVar47[4] < cVar95);
      auVar90[5] = -(auVar47[5] < cVar96);
      auVar90[6] = -(auVar47[6] < cVar97);
      auVar90[7] = -(auVar47[7] < cVar98);
      auVar90[8] = -(auVar47[8] < cVar99);
      auVar90[9] = -(auVar47[9] < cVar100);
      auVar90[10] = -(auVar47[10] < cVar101);
      auVar90[0xb] = -(auVar47[0xb] < cVar102);
      auVar90[0xc] = -(auVar47[0xc] < cVar103);
      auVar90[0xd] = -(auVar47[0xd] < cVar104);
      auVar90[0xe] = -(auVar47[0xe] < cVar105);
      auVar90[0xf] = -(auVar47[0xf] < cVar106);
      auVar109[0] = -(cVar67 < auVar66[0]);
      auVar109[1] = -(cVar68 < auVar66[1]);
      auVar109[2] = -(cVar69 < auVar66[2]);
      auVar109[3] = -(cVar70 < auVar66[3]);
      auVar109[4] = -(cVar71 < auVar66[4]);
      auVar109[5] = -(cVar72 < auVar66[5]);
      auVar109[6] = -(cVar73 < auVar66[6]);
      auVar109[7] = -(cVar74 < auVar66[7]);
      auVar109[8] = -(cVar75 < auVar66[8]);
      auVar109[9] = -(cVar76 < auVar66[9]);
      auVar109[10] = -(cVar77 < auVar66[10]);
      auVar109[0xb] = -(cVar78 < auVar66[0xb]);
      auVar109[0xc] = -(cVar79 < auVar66[0xc]);
      auVar109[0xd] = -(cVar80 < auVar66[0xd]);
      auVar109[0xe] = -(cVar81 < auVar66[0xe]);
      auVar109[0xf] = -(cVar82 < auVar66[0xf]);
      auVar113[0] = -(auVar66[0] < cVar87);
      auVar113[1] = -(auVar66[1] < cVar92);
      auVar113[2] = -(auVar66[2] < cVar93);
      auVar113[3] = -(auVar66[3] < cVar94);
      auVar113[4] = -(auVar66[4] < cVar95);
      auVar113[5] = -(auVar66[5] < cVar96);
      auVar113[6] = -(auVar66[6] < cVar97);
      auVar113[7] = -(auVar66[7] < cVar98);
      auVar113[8] = -(auVar66[8] < cVar99);
      auVar113[9] = -(auVar66[9] < cVar100);
      auVar113[10] = -(auVar66[10] < cVar101);
      auVar113[0xb] = -(auVar66[0xb] < cVar102);
      auVar113[0xc] = -(auVar66[0xc] < cVar103);
      auVar113[0xd] = -(auVar66[0xd] < cVar104);
      auVar113[0xe] = -(auVar66[0xe] < cVar105);
      auVar113[0xf] = -(auVar66[0xf] < cVar106);
      auVar47 = auVar47 | auVar85 & auVar90 & _DAT_008219f0;
      auVar66 = auVar66 | auVar109 & auVar113 & _DAT_008219f0;
      cVar45 = auVar47[0];
      cVar51 = auVar47[1];
      cVar52 = auVar47[2];
      cVar53 = auVar47[3];
      cVar54 = auVar47[4];
      cVar55 = auVar47[5];
      cVar56 = auVar47[6];
      cVar57 = auVar47[7];
      cVar58 = auVar47[8];
      cVar59 = auVar47[9];
      cVar60 = auVar47[10];
      cVar61 = auVar47[0xb];
      cVar62 = auVar47[0xc];
      cVar63 = auVar47[0xd];
      cVar64 = auVar47[0xe];
      cVar65 = auVar47[0xf];
      auVar47[0] = (cVar29 == cVar45) - (cVar45 == auVar66[0]);
      auVar47[1] = (cVar30 == cVar51) - (cVar51 == auVar66[1]);
      auVar47[2] = (cVar31 == cVar52) - (cVar52 == auVar66[2]);
      auVar47[3] = (cVar32 == cVar53) - (cVar53 == auVar66[3]);
      auVar47[4] = (cVar33 == cVar54) - (cVar54 == auVar66[4]);
      auVar47[5] = (cVar34 == cVar55) - (cVar55 == auVar66[5]);
      auVar47[6] = (cVar35 == cVar56) - (cVar56 == auVar66[6]);
      auVar47[7] = (cVar36 == cVar57) - (cVar57 == auVar66[7]);
      auVar47[8] = (cVar37 == cVar58) - (cVar58 == auVar66[8]);
      auVar47[9] = (cVar38 == cVar59) - (cVar59 == auVar66[9]);
      auVar47[10] = (cVar39 == cVar60) - (cVar60 == auVar66[10]);
      auVar47[0xb] = (cVar40 == cVar61) - (cVar61 == auVar66[0xb]);
      auVar47[0xc] = (cVar41 == cVar62) - (cVar62 == auVar66[0xc]);
      auVar47[0xd] = (cVar42 == cVar63) - (cVar63 == auVar66[0xd]);
      auVar47[0xe] = (cVar43 == cVar64) - (cVar64 == auVar66[0xe]);
      auVar47[0xf] = (cVar44 == cVar65) - (cVar65 == auVar66[0xf]);
      uVar24 = (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar47[0xf] >> 7) << 0xf) - 0xffff;
      uVar20 = uVar22;
      uVar23 = uVar22;
      param_3 = uVar27;
      if (uVar24 != 0) break;
      param_3 = uVar27 - 0x10;
      if (uVar27 < 0x10 || param_3 == 0) {
        return 0;
      }
      uVar20 = uVar22 + 0x10;
      auVar47 = *(undefined1 (*) [16])(param_2[1] + uVar22);
      auVar66 = *(undefined1 (*) [16])(param_1[1] + uVar22);
      auVar86[0] = -(cVar67 < auVar47[0]);
      auVar86[1] = -(cVar68 < auVar47[1]);
      auVar86[2] = -(cVar69 < auVar47[2]);
      auVar86[3] = -(cVar70 < auVar47[3]);
      auVar86[4] = -(cVar71 < auVar47[4]);
      auVar86[5] = -(cVar72 < auVar47[5]);
      auVar86[6] = -(cVar73 < auVar47[6]);
      auVar86[7] = -(cVar74 < auVar47[7]);
      auVar86[8] = -(cVar75 < auVar47[8]);
      auVar86[9] = -(cVar76 < auVar47[9]);
      auVar86[10] = -(cVar77 < auVar47[10]);
      auVar86[0xb] = -(cVar78 < auVar47[0xb]);
      auVar86[0xc] = -(cVar79 < auVar47[0xc]);
      auVar86[0xd] = -(cVar80 < auVar47[0xd]);
      auVar86[0xe] = -(cVar81 < auVar47[0xe]);
      auVar86[0xf] = -(cVar82 < auVar47[0xf]);
      auVar91[0] = -(auVar47[0] < cVar87);
      auVar91[1] = -(auVar47[1] < cVar92);
      auVar91[2] = -(auVar47[2] < cVar93);
      auVar91[3] = -(auVar47[3] < cVar94);
      auVar91[4] = -(auVar47[4] < cVar95);
      auVar91[5] = -(auVar47[5] < cVar96);
      auVar91[6] = -(auVar47[6] < cVar97);
      auVar91[7] = -(auVar47[7] < cVar98);
      auVar91[8] = -(auVar47[8] < cVar99);
      auVar91[9] = -(auVar47[9] < cVar100);
      auVar91[10] = -(auVar47[10] < cVar101);
      auVar91[0xb] = -(auVar47[0xb] < cVar102);
      auVar91[0xc] = -(auVar47[0xc] < cVar103);
      auVar91[0xd] = -(auVar47[0xd] < cVar104);
      auVar91[0xe] = -(auVar47[0xe] < cVar105);
      auVar91[0xf] = -(auVar47[0xf] < cVar106);
      auVar110[0] = -(cVar67 < auVar66[0]);
      auVar110[1] = -(cVar68 < auVar66[1]);
      auVar110[2] = -(cVar69 < auVar66[2]);
      auVar110[3] = -(cVar70 < auVar66[3]);
      auVar110[4] = -(cVar71 < auVar66[4]);
      auVar110[5] = -(cVar72 < auVar66[5]);
      auVar110[6] = -(cVar73 < auVar66[6]);
      auVar110[7] = -(cVar74 < auVar66[7]);
      auVar110[8] = -(cVar75 < auVar66[8]);
      auVar110[9] = -(cVar76 < auVar66[9]);
      auVar110[10] = -(cVar77 < auVar66[10]);
      auVar110[0xb] = -(cVar78 < auVar66[0xb]);
      auVar110[0xc] = -(cVar79 < auVar66[0xc]);
      auVar110[0xd] = -(cVar80 < auVar66[0xd]);
      auVar110[0xe] = -(cVar81 < auVar66[0xe]);
      auVar110[0xf] = -(cVar82 < auVar66[0xf]);
      auVar114[0] = -(auVar66[0] < cVar87);
      auVar114[1] = -(auVar66[1] < cVar92);
      auVar114[2] = -(auVar66[2] < cVar93);
      auVar114[3] = -(auVar66[3] < cVar94);
      auVar114[4] = -(auVar66[4] < cVar95);
      auVar114[5] = -(auVar66[5] < cVar96);
      auVar114[6] = -(auVar66[6] < cVar97);
      auVar114[7] = -(auVar66[7] < cVar98);
      auVar114[8] = -(auVar66[8] < cVar99);
      auVar114[9] = -(auVar66[9] < cVar100);
      auVar114[10] = -(auVar66[10] < cVar101);
      auVar114[0xb] = -(auVar66[0xb] < cVar102);
      auVar114[0xc] = -(auVar66[0xc] < cVar103);
      auVar114[0xd] = -(auVar66[0xd] < cVar104);
      auVar114[0xe] = -(auVar66[0xe] < cVar105);
      auVar114[0xf] = -(auVar66[0xf] < cVar106);
      auVar47 = auVar47 | auVar86 & auVar91 & _DAT_008219f0;
      auVar66 = auVar66 | auVar110 & auVar114 & _DAT_008219f0;
      cVar46 = auVar47[0];
      bVar28 = -(cVar29 == cVar45) == cVar46;
      cVar29 = -bVar28;
      cVar45 = auVar47[1];
      bVar4 = -(cVar30 == cVar51) == cVar45;
      cVar30 = -bVar4;
      cVar51 = auVar47[2];
      bVar5 = -(cVar31 == cVar52) == cVar51;
      cVar31 = -bVar5;
      cVar52 = auVar47[3];
      bVar6 = -(cVar32 == cVar53) == cVar52;
      cVar32 = -bVar6;
      cVar53 = auVar47[4];
      bVar7 = -(cVar33 == cVar54) == cVar53;
      cVar33 = -bVar7;
      cVar54 = auVar47[5];
      bVar8 = -(cVar34 == cVar55) == cVar54;
      cVar34 = -bVar8;
      cVar55 = auVar47[6];
      bVar9 = -(cVar35 == cVar56) == cVar55;
      cVar35 = -bVar9;
      cVar56 = auVar47[7];
      bVar10 = -(cVar36 == cVar57) == cVar56;
      cVar36 = -bVar10;
      cVar57 = auVar47[8];
      bVar11 = -(cVar37 == cVar58) == cVar57;
      cVar37 = -bVar11;
      cVar58 = auVar47[9];
      bVar12 = -(cVar38 == cVar59) == cVar58;
      cVar38 = -bVar12;
      cVar59 = auVar47[10];
      bVar13 = -(cVar39 == cVar60) == cVar59;
      cVar39 = -bVar13;
      cVar60 = auVar47[0xb];
      bVar14 = -(cVar40 == cVar61) == cVar60;
      cVar40 = -bVar14;
      cVar61 = auVar47[0xc];
      bVar15 = -(cVar41 == cVar62) == cVar61;
      cVar41 = -bVar15;
      cVar62 = auVar47[0xd];
      bVar16 = -(cVar42 == cVar63) == cVar62;
      cVar42 = -bVar16;
      cVar63 = auVar47[0xe];
      bVar17 = -(cVar43 == cVar64) == cVar63;
      cVar43 = -bVar17;
      cVar64 = auVar47[0xf];
      bVar18 = -(cVar44 == cVar65) == cVar64;
      cVar44 = -bVar18;
      auVar50[0] = bVar28 - (cVar46 == auVar66[0]);
      auVar50[1] = bVar4 - (cVar45 == auVar66[1]);
      auVar50[2] = bVar5 - (cVar51 == auVar66[2]);
      auVar50[3] = bVar6 - (cVar52 == auVar66[3]);
      auVar50[4] = bVar7 - (cVar53 == auVar66[4]);
      auVar50[5] = bVar8 - (cVar54 == auVar66[5]);
      auVar50[6] = bVar9 - (cVar55 == auVar66[6]);
      auVar50[7] = bVar10 - (cVar56 == auVar66[7]);
      auVar50[8] = bVar11 - (cVar57 == auVar66[8]);
      auVar50[9] = bVar12 - (cVar58 == auVar66[9]);
      auVar50[10] = bVar13 - (cVar59 == auVar66[10]);
      auVar50[0xb] = bVar14 - (cVar60 == auVar66[0xb]);
      auVar50[0xc] = bVar15 - (cVar61 == auVar66[0xc]);
      auVar50[0xd] = bVar16 - (cVar62 == auVar66[0xd]);
      auVar50[0xe] = bVar17 - (cVar63 == auVar66[0xe]);
      auVar50[0xf] = bVar18 - (cVar64 == auVar66[0xf]);
      uVar24 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar50[0xf] >> 7) << 0xf) - 0xffff;
      uVar23 = uVar20;
      if (uVar24 != 0) break;
      uVar27 = uVar27 - 0x20;
      if (param_3 < 0x10 || uVar27 == 0) {
        return 0;
      }
      uVar22 = uVar22 + 0x20;
    }
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar20);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar23);
LAB_0072fd40:
  uVar20 = 0;
  if (uVar24 != 0) {
    for (; (uVar24 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
    }
  }
  if (param_3 <= uVar20) {
    return 0;
  }
  return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[uVar20] * 4 + 0x200
                               ) -
                      *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[uVar20] * 4 + 0x200)
                      );
}

