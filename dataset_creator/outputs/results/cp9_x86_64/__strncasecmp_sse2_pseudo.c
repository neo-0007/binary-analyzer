
/* WARNING: Removing unreachable block (ram,0x0072d7c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong __strncasecmp_sse2(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
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
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 uVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
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
  char cVar47;
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
  char cVar65;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  char cVar66;
  undefined1 auVar51 [16];
  undefined1 auVar67 [16];
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
  char cVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  char cVar88;
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
  char cVar107;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  
  if ((*(uint *)(**(long **)(in_FS_OFFSET + -0x78) + 0x278) & 1) != 0) {
    if ((param_1 == param_2) || (param_3 == 0)) {
      uVar21 = 0;
    }
    else {
      lVar4 = (*(long **)(in_FS_OFFSET + -0x78))[0xe];
      uVar24 = 0;
      do {
        uVar22 = *(int *)(lVar4 + (ulong)(byte)(*param_1)[uVar24] * 4) -
                 *(int *)(lVar4 + (ulong)(byte)(*param_2)[uVar24] * 4);
        uVar21 = (ulong)uVar22;
        if (uVar22 != 0) {
          return uVar21;
        }
      } while (((*param_1)[uVar24] != 0) && (uVar24 = uVar24 + 1, param_3 != uVar24));
    }
    return uVar21;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[0] * 4 + 0x200) -
                        *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[0] * 4 + 0x200));
  }
  uVar22 = (uint)param_2;
  uVar20 = (uint)param_1;
  cVar68 = DAT_008219d0;
  cVar69 = DAT_008219d0._1_1_;
  cVar70 = DAT_008219d0._2_1_;
  cVar71 = DAT_008219d0._3_1_;
  cVar72 = DAT_008219d0._4_1_;
  cVar73 = DAT_008219d0._5_1_;
  cVar74 = DAT_008219d0._6_1_;
  cVar75 = DAT_008219d0._7_1_;
  cVar76 = DAT_008219d0._8_1_;
  cVar77 = DAT_008219d0._9_1_;
  cVar78 = DAT_008219d0._10_1_;
  cVar79 = DAT_008219d0._11_1_;
  cVar80 = DAT_008219d0._12_1_;
  cVar81 = DAT_008219d0._13_1_;
  cVar82 = DAT_008219d0._14_1_;
  cVar83 = DAT_008219d0._15_1_;
  cVar88 = DAT_008219e0;
  cVar107 = DAT_008219e0._15_1_;
  cVar93 = DAT_008219e0._1_1_;
  cVar94 = DAT_008219e0._2_1_;
  cVar95 = DAT_008219e0._3_1_;
  cVar96 = DAT_008219e0._4_1_;
  cVar97 = DAT_008219e0._5_1_;
  cVar98 = DAT_008219e0._6_1_;
  cVar99 = DAT_008219e0._7_1_;
  cVar100 = DAT_008219e0._8_1_;
  cVar101 = DAT_008219e0._9_1_;
  cVar102 = DAT_008219e0._10_1_;
  cVar103 = DAT_008219e0._11_1_;
  cVar104 = DAT_008219e0._12_1_;
  cVar105 = DAT_008219e0._13_1_;
  cVar106 = DAT_008219e0._14_1_;
  if (((uVar22 & 0x3f) < 0x31) && ((uVar20 & 0x3f) < 0x31)) {
    uVar27 = *(undefined8 *)*param_1;
    uVar1 = *(undefined8 *)*param_2;
    uVar2 = *(undefined8 *)(*param_1 + 8);
    auVar48 = *param_1;
    uVar3 = *(undefined8 *)(*param_2 + 8);
    auVar67 = *param_2;
    auVar84[0] = -(cVar68 < (char)uVar27);
    auVar84[1] = -(cVar69 < auVar48[1]);
    auVar84[2] = -(cVar70 < auVar48[2]);
    auVar84[3] = -(cVar71 < auVar48[3]);
    auVar84[4] = -(cVar72 < auVar48[4]);
    auVar84[5] = -(cVar73 < auVar48[5]);
    auVar84[6] = -(cVar74 < auVar48[6]);
    auVar84[7] = -(cVar75 < auVar48[7]);
    auVar84[8] = -(cVar76 < auVar48[8]);
    auVar84[9] = -(cVar77 < auVar48[9]);
    auVar84[10] = -(cVar78 < auVar48[10]);
    auVar84[0xb] = -(cVar79 < auVar48[0xb]);
    auVar84[0xc] = -(cVar80 < auVar48[0xc]);
    auVar84[0xd] = -(cVar81 < auVar48[0xd]);
    auVar84[0xe] = -(cVar82 < auVar48[0xe]);
    auVar84[0xf] = -(cVar83 < auVar48[0xf]);
    auVar89[0] = -((char)uVar27 < cVar88);
    auVar89[1] = -((char)((ulong)uVar27 >> 8) < cVar93);
    auVar89[2] = -((char)((ulong)uVar27 >> 0x10) < cVar94);
    auVar89[3] = -((char)((ulong)uVar27 >> 0x18) < cVar95);
    auVar89[4] = -((char)((ulong)uVar27 >> 0x20) < cVar96);
    auVar89[5] = -((char)((ulong)uVar27 >> 0x28) < cVar97);
    auVar89[6] = -((char)((ulong)uVar27 >> 0x30) < cVar98);
    auVar89[7] = -((char)((ulong)uVar27 >> 0x38) < cVar99);
    auVar89[8] = -((char)uVar2 < cVar100);
    auVar89[9] = -((char)((ulong)uVar2 >> 8) < cVar101);
    auVar89[10] = -((char)((ulong)uVar2 >> 0x10) < cVar102);
    auVar89[0xb] = -((char)((ulong)uVar2 >> 0x18) < cVar103);
    auVar89[0xc] = -((char)((ulong)uVar2 >> 0x20) < cVar104);
    auVar89[0xd] = -((char)((ulong)uVar2 >> 0x28) < cVar105);
    auVar89[0xe] = -((char)((ulong)uVar2 >> 0x30) < cVar106);
    auVar89[0xf] = -((char)((ulong)uVar2 >> 0x38) < cVar107);
    auVar108[0] = -(cVar68 < (char)uVar1);
    auVar108[1] = -(cVar69 < auVar67[1]);
    auVar108[2] = -(cVar70 < auVar67[2]);
    auVar108[3] = -(cVar71 < auVar67[3]);
    auVar108[4] = -(cVar72 < auVar67[4]);
    auVar108[5] = -(cVar73 < auVar67[5]);
    auVar108[6] = -(cVar74 < auVar67[6]);
    auVar108[7] = -(cVar75 < auVar67[7]);
    auVar108[8] = -(cVar76 < auVar67[8]);
    auVar108[9] = -(cVar77 < auVar67[9]);
    auVar108[10] = -(cVar78 < auVar67[10]);
    auVar108[0xb] = -(cVar79 < auVar67[0xb]);
    auVar108[0xc] = -(cVar80 < auVar67[0xc]);
    auVar108[0xd] = -(cVar81 < auVar67[0xd]);
    auVar108[0xe] = -(cVar82 < auVar67[0xe]);
    auVar108[0xf] = -(cVar83 < auVar67[0xf]);
    auVar112[0] = -((char)uVar1 < cVar88);
    auVar112[1] = -((char)((ulong)uVar1 >> 8) < cVar93);
    auVar112[2] = -((char)((ulong)uVar1 >> 0x10) < cVar94);
    auVar112[3] = -((char)((ulong)uVar1 >> 0x18) < cVar95);
    auVar112[4] = -((char)((ulong)uVar1 >> 0x20) < cVar96);
    auVar112[5] = -((char)((ulong)uVar1 >> 0x28) < cVar97);
    auVar112[6] = -((char)((ulong)uVar1 >> 0x30) < cVar98);
    auVar112[7] = -((char)((ulong)uVar1 >> 0x38) < cVar99);
    auVar112[8] = -((char)uVar3 < cVar100);
    auVar112[9] = -((char)((ulong)uVar3 >> 8) < cVar101);
    auVar112[10] = -((char)((ulong)uVar3 >> 0x10) < cVar102);
    auVar112[0xb] = -((char)((ulong)uVar3 >> 0x18) < cVar103);
    auVar112[0xc] = -((char)((ulong)uVar3 >> 0x20) < cVar104);
    auVar112[0xd] = -((char)((ulong)uVar3 >> 0x28) < cVar105);
    auVar112[0xe] = -((char)((ulong)uVar3 >> 0x30) < cVar106);
    auVar112[0xf] = -((char)((ulong)uVar3 >> 0x38) < cVar107);
    auVar48 = auVar48 | auVar84 & auVar89 & _DAT_008219f0;
    auVar67 = auVar67 | auVar108 & auVar112 & _DAT_008219f0;
    auVar49[0] = (auVar48[0] == '\0') - (auVar48[0] == auVar67[0]);
    auVar49[1] = (auVar48[1] == '\0') - (auVar48[1] == auVar67[1]);
    auVar49[2] = (auVar48[2] == '\0') - (auVar48[2] == auVar67[2]);
    auVar49[3] = (auVar48[3] == '\0') - (auVar48[3] == auVar67[3]);
    auVar49[4] = (auVar48[4] == '\0') - (auVar48[4] == auVar67[4]);
    auVar49[5] = (auVar48[5] == '\0') - (auVar48[5] == auVar67[5]);
    auVar49[6] = (auVar48[6] == '\0') - (auVar48[6] == auVar67[6]);
    auVar49[7] = (auVar48[7] == '\0') - (auVar48[7] == auVar67[7]);
    auVar49[8] = (auVar48[8] == '\0') - (auVar48[8] == auVar67[8]);
    auVar49[9] = (auVar48[9] == '\0') - (auVar48[9] == auVar67[9]);
    auVar49[10] = (auVar48[10] == '\0') - (auVar48[10] == auVar67[10]);
    auVar49[0xb] = (auVar48[0xb] == '\0') - (auVar48[0xb] == auVar67[0xb]);
    auVar49[0xc] = (auVar48[0xc] == '\0') - (auVar48[0xc] == auVar67[0xc]);
    auVar49[0xd] = (auVar48[0xd] == '\0') - (auVar48[0xd] == auVar67[0xd]);
    auVar49[0xe] = (auVar48[0xe] == '\0') - (auVar48[0xe] == auVar67[0xe]);
    auVar49[0xf] = (auVar48[0xf] == '\0') - (auVar48[0xf] == auVar67[0xf]);
    uVar25 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                     (ushort)(auVar49[0xf] >> 7) << 0xf) - 0xffff;
    if (uVar25 != 0) goto LAB_0072d7d0;
    bVar29 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar29 || param_3 == 0) {
      return 0;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar27 = 0;
  uVar22 = uVar22 & 0xf;
  uVar24 = (ulong)uVar22;
  uVar20 = uVar20 & 0xf;
  uVar21 = (ulong)uVar20;
  if (uVar22 != uVar20) {
    pauVar26 = param_2;
    if (uVar22 <= uVar20) {
      uVar27 = 0xffff;
      uVar21 = (ulong)uVar22;
      uVar24 = (ulong)uVar20;
      pauVar26 = param_1;
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0072b309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar21 = (*(code *)(&DAT_00821b10 + *(int *)(&DAT_00821b10 + ((uVar21 + 0xf) - uVar24) * 4)))
                       (param_1,pauVar26,0xffff,uVar24,uVar27);
    return uVar21;
  }
  auVar48 = *param_2;
  cVar30 = auVar48[0];
  cVar31 = auVar48[1];
  cVar32 = auVar48[2];
  cVar33 = auVar48[3];
  cVar34 = auVar48[4];
  cVar35 = auVar48[5];
  cVar36 = auVar48[6];
  cVar37 = auVar48[7];
  cVar38 = auVar48[8];
  cVar39 = auVar48[9];
  cVar40 = auVar48[10];
  cVar41 = auVar48[0xb];
  cVar42 = auVar48[0xc];
  cVar43 = auVar48[0xd];
  cVar44 = auVar48[0xe];
  cVar45 = auVar48[0xf];
  auVar67 = *param_1;
  auVar85[0] = -(cVar68 < cVar30);
  auVar85[1] = -(cVar69 < cVar31);
  auVar85[2] = -(cVar70 < cVar32);
  auVar85[3] = -(cVar71 < cVar33);
  auVar85[4] = -(cVar72 < cVar34);
  auVar85[5] = -(cVar73 < cVar35);
  auVar85[6] = -(cVar74 < cVar36);
  auVar85[7] = -(cVar75 < cVar37);
  auVar85[8] = -(cVar76 < cVar38);
  auVar85[9] = -(cVar77 < cVar39);
  auVar85[10] = -(cVar78 < cVar40);
  auVar85[0xb] = -(cVar79 < cVar41);
  auVar85[0xc] = -(cVar80 < cVar42);
  auVar85[0xd] = -(cVar81 < cVar43);
  auVar85[0xe] = -(cVar82 < cVar44);
  auVar85[0xf] = -(cVar83 < cVar45);
  auVar90[0] = -(cVar30 < cVar88);
  auVar90[1] = -(cVar31 < cVar93);
  auVar90[2] = -(cVar32 < cVar94);
  auVar90[3] = -(cVar33 < cVar95);
  auVar90[4] = -(cVar34 < cVar96);
  auVar90[5] = -(cVar35 < cVar97);
  auVar90[6] = -(cVar36 < cVar98);
  auVar90[7] = -(cVar37 < cVar99);
  auVar90[8] = -(cVar38 < cVar100);
  auVar90[9] = -(cVar39 < cVar101);
  auVar90[10] = -(cVar40 < cVar102);
  auVar90[0xb] = -(cVar41 < cVar103);
  auVar90[0xc] = -(cVar42 < cVar104);
  auVar90[0xd] = -(cVar43 < cVar105);
  auVar90[0xe] = -(cVar44 < cVar106);
  auVar90[0xf] = -(cVar45 < cVar107);
  auVar109[0] = -(cVar68 < auVar67[0]);
  auVar109[1] = -(cVar69 < auVar67[1]);
  auVar109[2] = -(cVar70 < auVar67[2]);
  auVar109[3] = -(cVar71 < auVar67[3]);
  auVar109[4] = -(cVar72 < auVar67[4]);
  auVar109[5] = -(cVar73 < auVar67[5]);
  auVar109[6] = -(cVar74 < auVar67[6]);
  auVar109[7] = -(cVar75 < auVar67[7]);
  auVar109[8] = -(cVar76 < auVar67[8]);
  auVar109[9] = -(cVar77 < auVar67[9]);
  auVar109[10] = -(cVar78 < auVar67[10]);
  auVar109[0xb] = -(cVar79 < auVar67[0xb]);
  auVar109[0xc] = -(cVar80 < auVar67[0xc]);
  auVar109[0xd] = -(cVar81 < auVar67[0xd]);
  auVar109[0xe] = -(cVar82 < auVar67[0xe]);
  auVar109[0xf] = -(cVar83 < auVar67[0xf]);
  auVar113[0] = -(auVar67[0] < cVar88);
  auVar113[1] = -(auVar67[1] < cVar93);
  auVar113[2] = -(auVar67[2] < cVar94);
  auVar113[3] = -(auVar67[3] < cVar95);
  auVar113[4] = -(auVar67[4] < cVar96);
  auVar113[5] = -(auVar67[5] < cVar97);
  auVar113[6] = -(auVar67[6] < cVar98);
  auVar113[7] = -(auVar67[7] < cVar99);
  auVar113[8] = -(auVar67[8] < cVar100);
  auVar113[9] = -(auVar67[9] < cVar101);
  auVar113[10] = -(auVar67[10] < cVar102);
  auVar113[0xb] = -(auVar67[0xb] < cVar103);
  auVar113[0xc] = -(auVar67[0xc] < cVar104);
  auVar113[0xd] = -(auVar67[0xd] < cVar105);
  auVar113[0xe] = -(auVar67[0xe] < cVar106);
  auVar113[0xf] = -(auVar67[0xf] < cVar107);
  auVar48 = auVar48 | auVar85 & auVar90 & _DAT_008219f0;
  auVar67 = auVar67 | auVar109 & auVar113 & _DAT_008219f0;
  auVar50[0] = (cVar30 == '\0') - (auVar48[0] == auVar67[0]);
  auVar50[1] = (cVar31 == '\0') - (auVar48[1] == auVar67[1]);
  auVar50[2] = (cVar32 == '\0') - (auVar48[2] == auVar67[2]);
  auVar50[3] = (cVar33 == '\0') - (auVar48[3] == auVar67[3]);
  auVar50[4] = (cVar34 == '\0') - (auVar48[4] == auVar67[4]);
  auVar50[5] = (cVar35 == '\0') - (auVar48[5] == auVar67[5]);
  auVar50[6] = (cVar36 == '\0') - (auVar48[6] == auVar67[6]);
  auVar50[7] = (cVar37 == '\0') - (auVar48[7] == auVar67[7]);
  auVar50[8] = (cVar38 == '\0') - (auVar48[8] == auVar67[8]);
  auVar50[9] = (cVar39 == '\0') - (auVar48[9] == auVar67[9]);
  auVar50[10] = (cVar40 == '\0') - (auVar48[10] == auVar67[10]);
  auVar50[0xb] = (cVar41 == '\0') - (auVar48[0xb] == auVar67[0xb]);
  auVar50[0xc] = (cVar42 == '\0') - (auVar48[0xc] == auVar67[0xc]);
  auVar50[0xd] = (cVar43 == '\0') - (auVar48[0xd] == auVar67[0xd]);
  auVar50[0xe] = (cVar44 == '\0') - (auVar48[0xe] == auVar67[0xe]);
  auVar50[0xf] = (cVar45 == '\0') - (auVar48[0xf] == auVar67[0xf]);
  uVar25 = (0xffffU >> (sbyte)uVar22) -
           (uint)((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                          (ushort)(auVar50[0xf] >> 7) << 0xf) >> (sbyte)uVar22);
  if (uVar25 == 0) {
    uVar28 = (uVar24 - 0x10) + param_3;
    if (param_3 < uVar28) {
      return 0;
    }
    if (uVar28 == 0) {
      return 0;
    }
    uVar23 = 0x10;
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
    cVar45 = '\0';
    while( true ) {
      auVar48 = *(undefined1 (*) [16])(*param_2 + uVar23);
      auVar67 = *(undefined1 (*) [16])(*param_1 + uVar23);
      auVar86[0] = -(cVar68 < auVar48[0]);
      auVar86[1] = -(cVar69 < auVar48[1]);
      auVar86[2] = -(cVar70 < auVar48[2]);
      auVar86[3] = -(cVar71 < auVar48[3]);
      auVar86[4] = -(cVar72 < auVar48[4]);
      auVar86[5] = -(cVar73 < auVar48[5]);
      auVar86[6] = -(cVar74 < auVar48[6]);
      auVar86[7] = -(cVar75 < auVar48[7]);
      auVar86[8] = -(cVar76 < auVar48[8]);
      auVar86[9] = -(cVar77 < auVar48[9]);
      auVar86[10] = -(cVar78 < auVar48[10]);
      auVar86[0xb] = -(cVar79 < auVar48[0xb]);
      auVar86[0xc] = -(cVar80 < auVar48[0xc]);
      auVar86[0xd] = -(cVar81 < auVar48[0xd]);
      auVar86[0xe] = -(cVar82 < auVar48[0xe]);
      auVar86[0xf] = -(cVar83 < auVar48[0xf]);
      auVar91[0] = -(auVar48[0] < cVar88);
      auVar91[1] = -(auVar48[1] < cVar93);
      auVar91[2] = -(auVar48[2] < cVar94);
      auVar91[3] = -(auVar48[3] < cVar95);
      auVar91[4] = -(auVar48[4] < cVar96);
      auVar91[5] = -(auVar48[5] < cVar97);
      auVar91[6] = -(auVar48[6] < cVar98);
      auVar91[7] = -(auVar48[7] < cVar99);
      auVar91[8] = -(auVar48[8] < cVar100);
      auVar91[9] = -(auVar48[9] < cVar101);
      auVar91[10] = -(auVar48[10] < cVar102);
      auVar91[0xb] = -(auVar48[0xb] < cVar103);
      auVar91[0xc] = -(auVar48[0xc] < cVar104);
      auVar91[0xd] = -(auVar48[0xd] < cVar105);
      auVar91[0xe] = -(auVar48[0xe] < cVar106);
      auVar91[0xf] = -(auVar48[0xf] < cVar107);
      auVar110[0] = -(cVar68 < auVar67[0]);
      auVar110[1] = -(cVar69 < auVar67[1]);
      auVar110[2] = -(cVar70 < auVar67[2]);
      auVar110[3] = -(cVar71 < auVar67[3]);
      auVar110[4] = -(cVar72 < auVar67[4]);
      auVar110[5] = -(cVar73 < auVar67[5]);
      auVar110[6] = -(cVar74 < auVar67[6]);
      auVar110[7] = -(cVar75 < auVar67[7]);
      auVar110[8] = -(cVar76 < auVar67[8]);
      auVar110[9] = -(cVar77 < auVar67[9]);
      auVar110[10] = -(cVar78 < auVar67[10]);
      auVar110[0xb] = -(cVar79 < auVar67[0xb]);
      auVar110[0xc] = -(cVar80 < auVar67[0xc]);
      auVar110[0xd] = -(cVar81 < auVar67[0xd]);
      auVar110[0xe] = -(cVar82 < auVar67[0xe]);
      auVar110[0xf] = -(cVar83 < auVar67[0xf]);
      auVar114[0] = -(auVar67[0] < cVar88);
      auVar114[1] = -(auVar67[1] < cVar93);
      auVar114[2] = -(auVar67[2] < cVar94);
      auVar114[3] = -(auVar67[3] < cVar95);
      auVar114[4] = -(auVar67[4] < cVar96);
      auVar114[5] = -(auVar67[5] < cVar97);
      auVar114[6] = -(auVar67[6] < cVar98);
      auVar114[7] = -(auVar67[7] < cVar99);
      auVar114[8] = -(auVar67[8] < cVar100);
      auVar114[9] = -(auVar67[9] < cVar101);
      auVar114[10] = -(auVar67[10] < cVar102);
      auVar114[0xb] = -(auVar67[0xb] < cVar103);
      auVar114[0xc] = -(auVar67[0xc] < cVar104);
      auVar114[0xd] = -(auVar67[0xd] < cVar105);
      auVar114[0xe] = -(auVar67[0xe] < cVar106);
      auVar114[0xf] = -(auVar67[0xf] < cVar107);
      auVar48 = auVar48 | auVar86 & auVar91 & _DAT_008219f0;
      auVar67 = auVar67 | auVar110 & auVar114 & _DAT_008219f0;
      cVar46 = auVar48[0];
      cVar52 = auVar48[1];
      cVar53 = auVar48[2];
      cVar54 = auVar48[3];
      cVar55 = auVar48[4];
      cVar56 = auVar48[5];
      cVar57 = auVar48[6];
      cVar58 = auVar48[7];
      cVar59 = auVar48[8];
      cVar60 = auVar48[9];
      cVar61 = auVar48[10];
      cVar62 = auVar48[0xb];
      cVar63 = auVar48[0xc];
      cVar64 = auVar48[0xd];
      cVar65 = auVar48[0xe];
      cVar66 = auVar48[0xf];
      auVar48[0] = (cVar30 == cVar46) - (cVar46 == auVar67[0]);
      auVar48[1] = (cVar31 == cVar52) - (cVar52 == auVar67[1]);
      auVar48[2] = (cVar32 == cVar53) - (cVar53 == auVar67[2]);
      auVar48[3] = (cVar33 == cVar54) - (cVar54 == auVar67[3]);
      auVar48[4] = (cVar34 == cVar55) - (cVar55 == auVar67[4]);
      auVar48[5] = (cVar35 == cVar56) - (cVar56 == auVar67[5]);
      auVar48[6] = (cVar36 == cVar57) - (cVar57 == auVar67[6]);
      auVar48[7] = (cVar37 == cVar58) - (cVar58 == auVar67[7]);
      auVar48[8] = (cVar38 == cVar59) - (cVar59 == auVar67[8]);
      auVar48[9] = (cVar39 == cVar60) - (cVar60 == auVar67[9]);
      auVar48[10] = (cVar40 == cVar61) - (cVar61 == auVar67[10]);
      auVar48[0xb] = (cVar41 == cVar62) - (cVar62 == auVar67[0xb]);
      auVar48[0xc] = (cVar42 == cVar63) - (cVar63 == auVar67[0xc]);
      auVar48[0xd] = (cVar43 == cVar64) - (cVar64 == auVar67[0xd]);
      auVar48[0xe] = (cVar44 == cVar65) - (cVar65 == auVar67[0xe]);
      auVar48[0xf] = (cVar45 == cVar66) - (cVar66 == auVar67[0xf]);
      uVar25 = (ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
      uVar21 = uVar23;
      uVar24 = uVar23;
      param_3 = uVar28;
      if (uVar25 != 0) break;
      param_3 = uVar28 - 0x10;
      if (uVar28 < 0x10 || param_3 == 0) {
        return 0;
      }
      uVar21 = uVar23 + 0x10;
      auVar48 = *(undefined1 (*) [16])(param_2[1] + uVar23);
      auVar67 = *(undefined1 (*) [16])(param_1[1] + uVar23);
      auVar87[0] = -(cVar68 < auVar48[0]);
      auVar87[1] = -(cVar69 < auVar48[1]);
      auVar87[2] = -(cVar70 < auVar48[2]);
      auVar87[3] = -(cVar71 < auVar48[3]);
      auVar87[4] = -(cVar72 < auVar48[4]);
      auVar87[5] = -(cVar73 < auVar48[5]);
      auVar87[6] = -(cVar74 < auVar48[6]);
      auVar87[7] = -(cVar75 < auVar48[7]);
      auVar87[8] = -(cVar76 < auVar48[8]);
      auVar87[9] = -(cVar77 < auVar48[9]);
      auVar87[10] = -(cVar78 < auVar48[10]);
      auVar87[0xb] = -(cVar79 < auVar48[0xb]);
      auVar87[0xc] = -(cVar80 < auVar48[0xc]);
      auVar87[0xd] = -(cVar81 < auVar48[0xd]);
      auVar87[0xe] = -(cVar82 < auVar48[0xe]);
      auVar87[0xf] = -(cVar83 < auVar48[0xf]);
      auVar92[0] = -(auVar48[0] < cVar88);
      auVar92[1] = -(auVar48[1] < cVar93);
      auVar92[2] = -(auVar48[2] < cVar94);
      auVar92[3] = -(auVar48[3] < cVar95);
      auVar92[4] = -(auVar48[4] < cVar96);
      auVar92[5] = -(auVar48[5] < cVar97);
      auVar92[6] = -(auVar48[6] < cVar98);
      auVar92[7] = -(auVar48[7] < cVar99);
      auVar92[8] = -(auVar48[8] < cVar100);
      auVar92[9] = -(auVar48[9] < cVar101);
      auVar92[10] = -(auVar48[10] < cVar102);
      auVar92[0xb] = -(auVar48[0xb] < cVar103);
      auVar92[0xc] = -(auVar48[0xc] < cVar104);
      auVar92[0xd] = -(auVar48[0xd] < cVar105);
      auVar92[0xe] = -(auVar48[0xe] < cVar106);
      auVar92[0xf] = -(auVar48[0xf] < cVar107);
      auVar111[0] = -(cVar68 < auVar67[0]);
      auVar111[1] = -(cVar69 < auVar67[1]);
      auVar111[2] = -(cVar70 < auVar67[2]);
      auVar111[3] = -(cVar71 < auVar67[3]);
      auVar111[4] = -(cVar72 < auVar67[4]);
      auVar111[5] = -(cVar73 < auVar67[5]);
      auVar111[6] = -(cVar74 < auVar67[6]);
      auVar111[7] = -(cVar75 < auVar67[7]);
      auVar111[8] = -(cVar76 < auVar67[8]);
      auVar111[9] = -(cVar77 < auVar67[9]);
      auVar111[10] = -(cVar78 < auVar67[10]);
      auVar111[0xb] = -(cVar79 < auVar67[0xb]);
      auVar111[0xc] = -(cVar80 < auVar67[0xc]);
      auVar111[0xd] = -(cVar81 < auVar67[0xd]);
      auVar111[0xe] = -(cVar82 < auVar67[0xe]);
      auVar111[0xf] = -(cVar83 < auVar67[0xf]);
      auVar115[0] = -(auVar67[0] < cVar88);
      auVar115[1] = -(auVar67[1] < cVar93);
      auVar115[2] = -(auVar67[2] < cVar94);
      auVar115[3] = -(auVar67[3] < cVar95);
      auVar115[4] = -(auVar67[4] < cVar96);
      auVar115[5] = -(auVar67[5] < cVar97);
      auVar115[6] = -(auVar67[6] < cVar98);
      auVar115[7] = -(auVar67[7] < cVar99);
      auVar115[8] = -(auVar67[8] < cVar100);
      auVar115[9] = -(auVar67[9] < cVar101);
      auVar115[10] = -(auVar67[10] < cVar102);
      auVar115[0xb] = -(auVar67[0xb] < cVar103);
      auVar115[0xc] = -(auVar67[0xc] < cVar104);
      auVar115[0xd] = -(auVar67[0xd] < cVar105);
      auVar115[0xe] = -(auVar67[0xe] < cVar106);
      auVar115[0xf] = -(auVar67[0xf] < cVar107);
      auVar48 = auVar48 | auVar87 & auVar92 & _DAT_008219f0;
      auVar67 = auVar67 | auVar111 & auVar115 & _DAT_008219f0;
      cVar47 = auVar48[0];
      bVar29 = -(cVar30 == cVar46) == cVar47;
      cVar30 = -bVar29;
      cVar46 = auVar48[1];
      bVar5 = -(cVar31 == cVar52) == cVar46;
      cVar31 = -bVar5;
      cVar52 = auVar48[2];
      bVar6 = -(cVar32 == cVar53) == cVar52;
      cVar32 = -bVar6;
      cVar53 = auVar48[3];
      bVar7 = -(cVar33 == cVar54) == cVar53;
      cVar33 = -bVar7;
      cVar54 = auVar48[4];
      bVar8 = -(cVar34 == cVar55) == cVar54;
      cVar34 = -bVar8;
      cVar55 = auVar48[5];
      bVar9 = -(cVar35 == cVar56) == cVar55;
      cVar35 = -bVar9;
      cVar56 = auVar48[6];
      bVar10 = -(cVar36 == cVar57) == cVar56;
      cVar36 = -bVar10;
      cVar57 = auVar48[7];
      bVar11 = -(cVar37 == cVar58) == cVar57;
      cVar37 = -bVar11;
      cVar58 = auVar48[8];
      bVar12 = -(cVar38 == cVar59) == cVar58;
      cVar38 = -bVar12;
      cVar59 = auVar48[9];
      bVar13 = -(cVar39 == cVar60) == cVar59;
      cVar39 = -bVar13;
      cVar60 = auVar48[10];
      bVar14 = -(cVar40 == cVar61) == cVar60;
      cVar40 = -bVar14;
      cVar61 = auVar48[0xb];
      bVar15 = -(cVar41 == cVar62) == cVar61;
      cVar41 = -bVar15;
      cVar62 = auVar48[0xc];
      bVar16 = -(cVar42 == cVar63) == cVar62;
      cVar42 = -bVar16;
      cVar63 = auVar48[0xd];
      bVar17 = -(cVar43 == cVar64) == cVar63;
      cVar43 = -bVar17;
      cVar64 = auVar48[0xe];
      bVar18 = -(cVar44 == cVar65) == cVar64;
      cVar44 = -bVar18;
      cVar65 = auVar48[0xf];
      bVar19 = -(cVar45 == cVar66) == cVar65;
      cVar45 = -bVar19;
      auVar51[0] = bVar29 - (cVar47 == auVar67[0]);
      auVar51[1] = bVar5 - (cVar46 == auVar67[1]);
      auVar51[2] = bVar6 - (cVar52 == auVar67[2]);
      auVar51[3] = bVar7 - (cVar53 == auVar67[3]);
      auVar51[4] = bVar8 - (cVar54 == auVar67[4]);
      auVar51[5] = bVar9 - (cVar55 == auVar67[5]);
      auVar51[6] = bVar10 - (cVar56 == auVar67[6]);
      auVar51[7] = bVar11 - (cVar57 == auVar67[7]);
      auVar51[8] = bVar12 - (cVar58 == auVar67[8]);
      auVar51[9] = bVar13 - (cVar59 == auVar67[9]);
      auVar51[10] = bVar14 - (cVar60 == auVar67[10]);
      auVar51[0xb] = bVar15 - (cVar61 == auVar67[0xb]);
      auVar51[0xc] = bVar16 - (cVar62 == auVar67[0xc]);
      auVar51[0xd] = bVar17 - (cVar63 == auVar67[0xd]);
      auVar51[0xe] = bVar18 - (cVar64 == auVar67[0xe]);
      auVar51[0xf] = bVar19 - (cVar65 == auVar67[0xf]);
      uVar25 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar51[0xf] >> 7) << 0xf) - 0xffff;
      uVar24 = uVar21;
      if (uVar25 != 0) break;
      uVar28 = uVar28 - 0x20;
      if (param_3 < 0x10 || uVar28 == 0) {
        return 0;
      }
      uVar23 = uVar23 + 0x20;
    }
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar21);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar24);
LAB_0072d7d0:
  uVar21 = 0;
  if (uVar25 != 0) {
    for (; (uVar25 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
    }
  }
  if (param_3 <= uVar21) {
    return 0;
  }
  return (ulong)(uint)(*(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_1)[uVar21] * 4 + 0x200
                               ) -
                      *(int *)(_nl_C_LC_CTYPE_tolower + (ulong)(byte)(*param_2)[uVar21] * 4 + 0x200)
                      );
}

