
/* WARNING: Removing unreachable block (ram,0x00731942) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0072f830(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  bool bVar20;
  bool bVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  long in_FS_OFFSET;
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
  char cVar48;
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
  char cVar66;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  char cVar67;
  undefined1 auVar52 [16];
  undefined1 auVar68 [16];
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
  char cVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  char cVar89;
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
  char cVar108;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  ulong uVar25;
  
  if ((*(uint *)(**(long **)(in_FS_OFFSET + -0x78) + 0x278) & 1) != 0) {
    if (param_1 == param_2) {
      uVar23 = 0;
    }
    else {
      lVar5 = (*(long **)(in_FS_OFFSET + -0x78))[0xe];
      lVar28 = 0;
      do {
        pbVar1 = *param_1 + lVar28;
        uVar24 = *(int *)(lVar5 + (ulong)*pbVar1 * 4) -
                 *(int *)(lVar5 + (ulong)(byte)(*param_2)[lVar28] * 4);
        uVar23 = (ulong)uVar24;
        if (uVar24 != 0) {
          return uVar23;
        }
        lVar28 = lVar28 + 1;
      } while (*pbVar1 != 0);
    }
    return uVar23;
  }
  uVar24 = (uint)param_2;
  uVar22 = (uint)param_1;
  cVar69 = DAT_0082bbf0;
  cVar70 = DAT_0082bbf0._1_1_;
  cVar71 = DAT_0082bbf0._2_1_;
  cVar72 = DAT_0082bbf0._3_1_;
  cVar73 = DAT_0082bbf0._4_1_;
  cVar74 = DAT_0082bbf0._5_1_;
  cVar75 = DAT_0082bbf0._6_1_;
  cVar76 = DAT_0082bbf0._7_1_;
  cVar77 = DAT_0082bbf0._8_1_;
  cVar78 = DAT_0082bbf0._9_1_;
  cVar79 = DAT_0082bbf0._10_1_;
  cVar80 = DAT_0082bbf0._11_1_;
  cVar81 = DAT_0082bbf0._12_1_;
  cVar82 = DAT_0082bbf0._13_1_;
  cVar83 = DAT_0082bbf0._14_1_;
  cVar84 = DAT_0082bbf0._15_1_;
  cVar89 = DAT_0082bc00;
  cVar108 = DAT_0082bc00._15_1_;
  cVar94 = DAT_0082bc00._1_1_;
  cVar95 = DAT_0082bc00._2_1_;
  cVar96 = DAT_0082bc00._3_1_;
  cVar97 = DAT_0082bc00._4_1_;
  cVar98 = DAT_0082bc00._5_1_;
  cVar99 = DAT_0082bc00._6_1_;
  cVar100 = DAT_0082bc00._7_1_;
  cVar101 = DAT_0082bc00._8_1_;
  cVar102 = DAT_0082bc00._9_1_;
  cVar103 = DAT_0082bc00._10_1_;
  cVar104 = DAT_0082bc00._11_1_;
  cVar105 = DAT_0082bc00._12_1_;
  cVar106 = DAT_0082bc00._13_1_;
  cVar107 = DAT_0082bc00._14_1_;
  if (((uVar24 & 0x3f) < 0x31) && ((uVar22 & 0x3f) < 0x31)) {
    uVar30 = *(undefined8 *)*param_1;
    uVar2 = *(undefined8 *)*param_2;
    uVar3 = *(undefined8 *)(*param_1 + 8);
    auVar49 = *param_1;
    uVar4 = *(undefined8 *)(*param_2 + 8);
    auVar68 = *param_2;
    auVar85[0] = -(cVar69 < (char)uVar30);
    auVar85[1] = -(cVar70 < auVar49[1]);
    auVar85[2] = -(cVar71 < auVar49[2]);
    auVar85[3] = -(cVar72 < auVar49[3]);
    auVar85[4] = -(cVar73 < auVar49[4]);
    auVar85[5] = -(cVar74 < auVar49[5]);
    auVar85[6] = -(cVar75 < auVar49[6]);
    auVar85[7] = -(cVar76 < auVar49[7]);
    auVar85[8] = -(cVar77 < auVar49[8]);
    auVar85[9] = -(cVar78 < auVar49[9]);
    auVar85[10] = -(cVar79 < auVar49[10]);
    auVar85[0xb] = -(cVar80 < auVar49[0xb]);
    auVar85[0xc] = -(cVar81 < auVar49[0xc]);
    auVar85[0xd] = -(cVar82 < auVar49[0xd]);
    auVar85[0xe] = -(cVar83 < auVar49[0xe]);
    auVar85[0xf] = -(cVar84 < auVar49[0xf]);
    auVar90[0] = -((char)uVar30 < cVar89);
    auVar90[1] = -((char)((ulong)uVar30 >> 8) < cVar94);
    auVar90[2] = -((char)((ulong)uVar30 >> 0x10) < cVar95);
    auVar90[3] = -((char)((ulong)uVar30 >> 0x18) < cVar96);
    auVar90[4] = -((char)((ulong)uVar30 >> 0x20) < cVar97);
    auVar90[5] = -((char)((ulong)uVar30 >> 0x28) < cVar98);
    auVar90[6] = -((char)((ulong)uVar30 >> 0x30) < cVar99);
    auVar90[7] = -((char)((ulong)uVar30 >> 0x38) < cVar100);
    auVar90[8] = -((char)uVar3 < cVar101);
    auVar90[9] = -((char)((ulong)uVar3 >> 8) < cVar102);
    auVar90[10] = -((char)((ulong)uVar3 >> 0x10) < cVar103);
    auVar90[0xb] = -((char)((ulong)uVar3 >> 0x18) < cVar104);
    auVar90[0xc] = -((char)((ulong)uVar3 >> 0x20) < cVar105);
    auVar90[0xd] = -((char)((ulong)uVar3 >> 0x28) < cVar106);
    auVar90[0xe] = -((char)((ulong)uVar3 >> 0x30) < cVar107);
    auVar90[0xf] = -((char)((ulong)uVar3 >> 0x38) < cVar108);
    auVar109[0] = -(cVar69 < (char)uVar2);
    auVar109[1] = -(cVar70 < auVar68[1]);
    auVar109[2] = -(cVar71 < auVar68[2]);
    auVar109[3] = -(cVar72 < auVar68[3]);
    auVar109[4] = -(cVar73 < auVar68[4]);
    auVar109[5] = -(cVar74 < auVar68[5]);
    auVar109[6] = -(cVar75 < auVar68[6]);
    auVar109[7] = -(cVar76 < auVar68[7]);
    auVar109[8] = -(cVar77 < auVar68[8]);
    auVar109[9] = -(cVar78 < auVar68[9]);
    auVar109[10] = -(cVar79 < auVar68[10]);
    auVar109[0xb] = -(cVar80 < auVar68[0xb]);
    auVar109[0xc] = -(cVar81 < auVar68[0xc]);
    auVar109[0xd] = -(cVar82 < auVar68[0xd]);
    auVar109[0xe] = -(cVar83 < auVar68[0xe]);
    auVar109[0xf] = -(cVar84 < auVar68[0xf]);
    auVar113[0] = -((char)uVar2 < cVar89);
    auVar113[1] = -((char)((ulong)uVar2 >> 8) < cVar94);
    auVar113[2] = -((char)((ulong)uVar2 >> 0x10) < cVar95);
    auVar113[3] = -((char)((ulong)uVar2 >> 0x18) < cVar96);
    auVar113[4] = -((char)((ulong)uVar2 >> 0x20) < cVar97);
    auVar113[5] = -((char)((ulong)uVar2 >> 0x28) < cVar98);
    auVar113[6] = -((char)((ulong)uVar2 >> 0x30) < cVar99);
    auVar113[7] = -((char)((ulong)uVar2 >> 0x38) < cVar100);
    auVar113[8] = -((char)uVar4 < cVar101);
    auVar113[9] = -((char)((ulong)uVar4 >> 8) < cVar102);
    auVar113[10] = -((char)((ulong)uVar4 >> 0x10) < cVar103);
    auVar113[0xb] = -((char)((ulong)uVar4 >> 0x18) < cVar104);
    auVar113[0xc] = -((char)((ulong)uVar4 >> 0x20) < cVar105);
    auVar113[0xd] = -((char)((ulong)uVar4 >> 0x28) < cVar106);
    auVar113[0xe] = -((char)((ulong)uVar4 >> 0x30) < cVar107);
    auVar113[0xf] = -((char)((ulong)uVar4 >> 0x38) < cVar108);
    auVar49 = auVar49 | auVar85 & auVar90 & _DAT_0082bc10;
    auVar68 = auVar68 | auVar109 & auVar113 & _DAT_0082bc10;
    auVar50[0] = (auVar49[0] == '\0') - (auVar49[0] == auVar68[0]);
    auVar50[1] = (auVar49[1] == '\0') - (auVar49[1] == auVar68[1]);
    auVar50[2] = (auVar49[2] == '\0') - (auVar49[2] == auVar68[2]);
    auVar50[3] = (auVar49[3] == '\0') - (auVar49[3] == auVar68[3]);
    auVar50[4] = (auVar49[4] == '\0') - (auVar49[4] == auVar68[4]);
    auVar50[5] = (auVar49[5] == '\0') - (auVar49[5] == auVar68[5]);
    auVar50[6] = (auVar49[6] == '\0') - (auVar49[6] == auVar68[6]);
    auVar50[7] = (auVar49[7] == '\0') - (auVar49[7] == auVar68[7]);
    auVar50[8] = (auVar49[8] == '\0') - (auVar49[8] == auVar68[8]);
    auVar50[9] = (auVar49[9] == '\0') - (auVar49[9] == auVar68[9]);
    auVar50[10] = (auVar49[10] == '\0') - (auVar49[10] == auVar68[10]);
    auVar50[0xb] = (auVar49[0xb] == '\0') - (auVar49[0xb] == auVar68[0xb]);
    auVar50[0xc] = (auVar49[0xc] == '\0') - (auVar49[0xc] == auVar68[0xc]);
    auVar50[0xd] = (auVar49[0xd] == '\0') - (auVar49[0xd] == auVar68[0xd]);
    auVar50[0xe] = (auVar49[0xe] == '\0') - (auVar49[0xe] == auVar68[0xe]);
    auVar50[0xf] = (auVar49[0xf] == '\0') - (auVar49[0xf] == auVar68[0xf]);
    uVar27 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
    if (uVar27 != 0) goto LAB_00731950;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  param_2 = (undefined1 (*) [16])((ulong)param_2 & 0xfffffffffffffff0);
  param_1 = (undefined1 (*) [16])((ulong)param_1 & 0xfffffffffffffff0);
  uVar30 = 0;
  uVar24 = uVar24 & 0xf;
  uVar25 = (ulong)uVar24;
  uVar22 = uVar22 & 0xf;
  uVar23 = (ulong)uVar22;
  if (uVar24 != uVar22) {
    pauVar29 = param_2;
    if (uVar24 <= uVar22) {
      uVar30 = 0xffff;
      uVar23 = (ulong)uVar24;
      uVar25 = (ulong)uVar22;
      pauVar29 = param_1;
      param_1 = param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0072f959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar23 = (*(code *)(&DAT_0082bc60 + *(int *)(&DAT_0082bc60 + ((uVar23 + 0xf) - uVar25) * 4)))
                       (param_1,pauVar29,0xffff,uVar25,uVar30);
    return uVar23;
  }
  auVar49 = *param_2;
  cVar31 = auVar49[0];
  cVar32 = auVar49[1];
  cVar33 = auVar49[2];
  cVar34 = auVar49[3];
  cVar35 = auVar49[4];
  cVar36 = auVar49[5];
  cVar37 = auVar49[6];
  cVar38 = auVar49[7];
  cVar39 = auVar49[8];
  cVar40 = auVar49[9];
  cVar41 = auVar49[10];
  cVar42 = auVar49[0xb];
  cVar43 = auVar49[0xc];
  cVar44 = auVar49[0xd];
  cVar45 = auVar49[0xe];
  cVar46 = auVar49[0xf];
  auVar68 = *param_1;
  auVar86[0] = -(cVar69 < cVar31);
  auVar86[1] = -(cVar70 < cVar32);
  auVar86[2] = -(cVar71 < cVar33);
  auVar86[3] = -(cVar72 < cVar34);
  auVar86[4] = -(cVar73 < cVar35);
  auVar86[5] = -(cVar74 < cVar36);
  auVar86[6] = -(cVar75 < cVar37);
  auVar86[7] = -(cVar76 < cVar38);
  auVar86[8] = -(cVar77 < cVar39);
  auVar86[9] = -(cVar78 < cVar40);
  auVar86[10] = -(cVar79 < cVar41);
  auVar86[0xb] = -(cVar80 < cVar42);
  auVar86[0xc] = -(cVar81 < cVar43);
  auVar86[0xd] = -(cVar82 < cVar44);
  auVar86[0xe] = -(cVar83 < cVar45);
  auVar86[0xf] = -(cVar84 < cVar46);
  auVar91[0] = -(cVar31 < cVar89);
  auVar91[1] = -(cVar32 < cVar94);
  auVar91[2] = -(cVar33 < cVar95);
  auVar91[3] = -(cVar34 < cVar96);
  auVar91[4] = -(cVar35 < cVar97);
  auVar91[5] = -(cVar36 < cVar98);
  auVar91[6] = -(cVar37 < cVar99);
  auVar91[7] = -(cVar38 < cVar100);
  auVar91[8] = -(cVar39 < cVar101);
  auVar91[9] = -(cVar40 < cVar102);
  auVar91[10] = -(cVar41 < cVar103);
  auVar91[0xb] = -(cVar42 < cVar104);
  auVar91[0xc] = -(cVar43 < cVar105);
  auVar91[0xd] = -(cVar44 < cVar106);
  auVar91[0xe] = -(cVar45 < cVar107);
  auVar91[0xf] = -(cVar46 < cVar108);
  auVar110[0] = -(cVar69 < auVar68[0]);
  auVar110[1] = -(cVar70 < auVar68[1]);
  auVar110[2] = -(cVar71 < auVar68[2]);
  auVar110[3] = -(cVar72 < auVar68[3]);
  auVar110[4] = -(cVar73 < auVar68[4]);
  auVar110[5] = -(cVar74 < auVar68[5]);
  auVar110[6] = -(cVar75 < auVar68[6]);
  auVar110[7] = -(cVar76 < auVar68[7]);
  auVar110[8] = -(cVar77 < auVar68[8]);
  auVar110[9] = -(cVar78 < auVar68[9]);
  auVar110[10] = -(cVar79 < auVar68[10]);
  auVar110[0xb] = -(cVar80 < auVar68[0xb]);
  auVar110[0xc] = -(cVar81 < auVar68[0xc]);
  auVar110[0xd] = -(cVar82 < auVar68[0xd]);
  auVar110[0xe] = -(cVar83 < auVar68[0xe]);
  auVar110[0xf] = -(cVar84 < auVar68[0xf]);
  auVar114[0] = -(auVar68[0] < cVar89);
  auVar114[1] = -(auVar68[1] < cVar94);
  auVar114[2] = -(auVar68[2] < cVar95);
  auVar114[3] = -(auVar68[3] < cVar96);
  auVar114[4] = -(auVar68[4] < cVar97);
  auVar114[5] = -(auVar68[5] < cVar98);
  auVar114[6] = -(auVar68[6] < cVar99);
  auVar114[7] = -(auVar68[7] < cVar100);
  auVar114[8] = -(auVar68[8] < cVar101);
  auVar114[9] = -(auVar68[9] < cVar102);
  auVar114[10] = -(auVar68[10] < cVar103);
  auVar114[0xb] = -(auVar68[0xb] < cVar104);
  auVar114[0xc] = -(auVar68[0xc] < cVar105);
  auVar114[0xd] = -(auVar68[0xd] < cVar106);
  auVar114[0xe] = -(auVar68[0xe] < cVar107);
  auVar114[0xf] = -(auVar68[0xf] < cVar108);
  auVar49 = auVar49 | auVar86 & auVar91 & _DAT_0082bc10;
  auVar68 = auVar68 | auVar110 & auVar114 & _DAT_0082bc10;
  auVar51[0] = (cVar31 == '\0') - (auVar49[0] == auVar68[0]);
  auVar51[1] = (cVar32 == '\0') - (auVar49[1] == auVar68[1]);
  auVar51[2] = (cVar33 == '\0') - (auVar49[2] == auVar68[2]);
  auVar51[3] = (cVar34 == '\0') - (auVar49[3] == auVar68[3]);
  auVar51[4] = (cVar35 == '\0') - (auVar49[4] == auVar68[4]);
  auVar51[5] = (cVar36 == '\0') - (auVar49[5] == auVar68[5]);
  auVar51[6] = (cVar37 == '\0') - (auVar49[6] == auVar68[6]);
  auVar51[7] = (cVar38 == '\0') - (auVar49[7] == auVar68[7]);
  auVar51[8] = (cVar39 == '\0') - (auVar49[8] == auVar68[8]);
  auVar51[9] = (cVar40 == '\0') - (auVar49[9] == auVar68[9]);
  auVar51[10] = (cVar41 == '\0') - (auVar49[10] == auVar68[10]);
  auVar51[0xb] = (cVar42 == '\0') - (auVar49[0xb] == auVar68[0xb]);
  auVar51[0xc] = (cVar43 == '\0') - (auVar49[0xc] == auVar68[0xc]);
  auVar51[0xd] = (cVar44 == '\0') - (auVar49[0xd] == auVar68[0xd]);
  auVar51[0xe] = (cVar45 == '\0') - (auVar49[0xe] == auVar68[0xe]);
  auVar51[0xf] = (cVar46 == '\0') - (auVar49[0xf] == auVar68[0xf]);
  uVar27 = (0xffffU >> (sbyte)uVar24) -
           (uint)((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                          (ushort)(auVar51[0xf] >> 7) << 0xf) >> (sbyte)uVar24);
  if (uVar27 == 0) {
    uVar26 = 0x10;
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
    cVar46 = '\0';
    while( true ) {
      auVar49 = *(undefined1 (*) [16])(*param_2 + uVar26);
      auVar68 = *(undefined1 (*) [16])(*param_1 + uVar26);
      auVar87[0] = -(cVar69 < auVar49[0]);
      auVar87[1] = -(cVar70 < auVar49[1]);
      auVar87[2] = -(cVar71 < auVar49[2]);
      auVar87[3] = -(cVar72 < auVar49[3]);
      auVar87[4] = -(cVar73 < auVar49[4]);
      auVar87[5] = -(cVar74 < auVar49[5]);
      auVar87[6] = -(cVar75 < auVar49[6]);
      auVar87[7] = -(cVar76 < auVar49[7]);
      auVar87[8] = -(cVar77 < auVar49[8]);
      auVar87[9] = -(cVar78 < auVar49[9]);
      auVar87[10] = -(cVar79 < auVar49[10]);
      auVar87[0xb] = -(cVar80 < auVar49[0xb]);
      auVar87[0xc] = -(cVar81 < auVar49[0xc]);
      auVar87[0xd] = -(cVar82 < auVar49[0xd]);
      auVar87[0xe] = -(cVar83 < auVar49[0xe]);
      auVar87[0xf] = -(cVar84 < auVar49[0xf]);
      auVar92[0] = -(auVar49[0] < cVar89);
      auVar92[1] = -(auVar49[1] < cVar94);
      auVar92[2] = -(auVar49[2] < cVar95);
      auVar92[3] = -(auVar49[3] < cVar96);
      auVar92[4] = -(auVar49[4] < cVar97);
      auVar92[5] = -(auVar49[5] < cVar98);
      auVar92[6] = -(auVar49[6] < cVar99);
      auVar92[7] = -(auVar49[7] < cVar100);
      auVar92[8] = -(auVar49[8] < cVar101);
      auVar92[9] = -(auVar49[9] < cVar102);
      auVar92[10] = -(auVar49[10] < cVar103);
      auVar92[0xb] = -(auVar49[0xb] < cVar104);
      auVar92[0xc] = -(auVar49[0xc] < cVar105);
      auVar92[0xd] = -(auVar49[0xd] < cVar106);
      auVar92[0xe] = -(auVar49[0xe] < cVar107);
      auVar92[0xf] = -(auVar49[0xf] < cVar108);
      auVar111[0] = -(cVar69 < auVar68[0]);
      auVar111[1] = -(cVar70 < auVar68[1]);
      auVar111[2] = -(cVar71 < auVar68[2]);
      auVar111[3] = -(cVar72 < auVar68[3]);
      auVar111[4] = -(cVar73 < auVar68[4]);
      auVar111[5] = -(cVar74 < auVar68[5]);
      auVar111[6] = -(cVar75 < auVar68[6]);
      auVar111[7] = -(cVar76 < auVar68[7]);
      auVar111[8] = -(cVar77 < auVar68[8]);
      auVar111[9] = -(cVar78 < auVar68[9]);
      auVar111[10] = -(cVar79 < auVar68[10]);
      auVar111[0xb] = -(cVar80 < auVar68[0xb]);
      auVar111[0xc] = -(cVar81 < auVar68[0xc]);
      auVar111[0xd] = -(cVar82 < auVar68[0xd]);
      auVar111[0xe] = -(cVar83 < auVar68[0xe]);
      auVar111[0xf] = -(cVar84 < auVar68[0xf]);
      auVar115[0] = -(auVar68[0] < cVar89);
      auVar115[1] = -(auVar68[1] < cVar94);
      auVar115[2] = -(auVar68[2] < cVar95);
      auVar115[3] = -(auVar68[3] < cVar96);
      auVar115[4] = -(auVar68[4] < cVar97);
      auVar115[5] = -(auVar68[5] < cVar98);
      auVar115[6] = -(auVar68[6] < cVar99);
      auVar115[7] = -(auVar68[7] < cVar100);
      auVar115[8] = -(auVar68[8] < cVar101);
      auVar115[9] = -(auVar68[9] < cVar102);
      auVar115[10] = -(auVar68[10] < cVar103);
      auVar115[0xb] = -(auVar68[0xb] < cVar104);
      auVar115[0xc] = -(auVar68[0xc] < cVar105);
      auVar115[0xd] = -(auVar68[0xd] < cVar106);
      auVar115[0xe] = -(auVar68[0xe] < cVar107);
      auVar115[0xf] = -(auVar68[0xf] < cVar108);
      auVar49 = auVar49 | auVar87 & auVar92 & _DAT_0082bc10;
      auVar68 = auVar68 | auVar111 & auVar115 & _DAT_0082bc10;
      cVar47 = auVar49[0];
      cVar53 = auVar49[1];
      cVar54 = auVar49[2];
      cVar55 = auVar49[3];
      cVar56 = auVar49[4];
      cVar57 = auVar49[5];
      cVar58 = auVar49[6];
      cVar59 = auVar49[7];
      cVar60 = auVar49[8];
      cVar61 = auVar49[9];
      cVar62 = auVar49[10];
      cVar63 = auVar49[0xb];
      cVar64 = auVar49[0xc];
      cVar65 = auVar49[0xd];
      cVar66 = auVar49[0xe];
      cVar67 = auVar49[0xf];
      auVar49[0] = (cVar31 == cVar47) - (cVar47 == auVar68[0]);
      auVar49[1] = (cVar32 == cVar53) - (cVar53 == auVar68[1]);
      auVar49[2] = (cVar33 == cVar54) - (cVar54 == auVar68[2]);
      auVar49[3] = (cVar34 == cVar55) - (cVar55 == auVar68[3]);
      auVar49[4] = (cVar35 == cVar56) - (cVar56 == auVar68[4]);
      auVar49[5] = (cVar36 == cVar57) - (cVar57 == auVar68[5]);
      auVar49[6] = (cVar37 == cVar58) - (cVar58 == auVar68[6]);
      auVar49[7] = (cVar38 == cVar59) - (cVar59 == auVar68[7]);
      auVar49[8] = (cVar39 == cVar60) - (cVar60 == auVar68[8]);
      auVar49[9] = (cVar40 == cVar61) - (cVar61 == auVar68[9]);
      auVar49[10] = (cVar41 == cVar62) - (cVar62 == auVar68[10]);
      auVar49[0xb] = (cVar42 == cVar63) - (cVar63 == auVar68[0xb]);
      auVar49[0xc] = (cVar43 == cVar64) - (cVar64 == auVar68[0xc]);
      auVar49[0xd] = (cVar44 == cVar65) - (cVar65 == auVar68[0xd]);
      auVar49[0xe] = (cVar45 == cVar66) - (cVar66 == auVar68[0xe]);
      auVar49[0xf] = (cVar46 == cVar67) - (cVar67 == auVar68[0xf]);
      uVar27 = (ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
      uVar23 = uVar26;
      uVar25 = uVar26;
      if (uVar27 != 0) break;
      uVar23 = uVar26 + 0x10;
      auVar49 = *(undefined1 (*) [16])(param_2[1] + uVar26);
      auVar68 = *(undefined1 (*) [16])(param_1[1] + uVar26);
      auVar88[0] = -(cVar69 < auVar49[0]);
      auVar88[1] = -(cVar70 < auVar49[1]);
      auVar88[2] = -(cVar71 < auVar49[2]);
      auVar88[3] = -(cVar72 < auVar49[3]);
      auVar88[4] = -(cVar73 < auVar49[4]);
      auVar88[5] = -(cVar74 < auVar49[5]);
      auVar88[6] = -(cVar75 < auVar49[6]);
      auVar88[7] = -(cVar76 < auVar49[7]);
      auVar88[8] = -(cVar77 < auVar49[8]);
      auVar88[9] = -(cVar78 < auVar49[9]);
      auVar88[10] = -(cVar79 < auVar49[10]);
      auVar88[0xb] = -(cVar80 < auVar49[0xb]);
      auVar88[0xc] = -(cVar81 < auVar49[0xc]);
      auVar88[0xd] = -(cVar82 < auVar49[0xd]);
      auVar88[0xe] = -(cVar83 < auVar49[0xe]);
      auVar88[0xf] = -(cVar84 < auVar49[0xf]);
      auVar93[0] = -(auVar49[0] < cVar89);
      auVar93[1] = -(auVar49[1] < cVar94);
      auVar93[2] = -(auVar49[2] < cVar95);
      auVar93[3] = -(auVar49[3] < cVar96);
      auVar93[4] = -(auVar49[4] < cVar97);
      auVar93[5] = -(auVar49[5] < cVar98);
      auVar93[6] = -(auVar49[6] < cVar99);
      auVar93[7] = -(auVar49[7] < cVar100);
      auVar93[8] = -(auVar49[8] < cVar101);
      auVar93[9] = -(auVar49[9] < cVar102);
      auVar93[10] = -(auVar49[10] < cVar103);
      auVar93[0xb] = -(auVar49[0xb] < cVar104);
      auVar93[0xc] = -(auVar49[0xc] < cVar105);
      auVar93[0xd] = -(auVar49[0xd] < cVar106);
      auVar93[0xe] = -(auVar49[0xe] < cVar107);
      auVar93[0xf] = -(auVar49[0xf] < cVar108);
      auVar112[0] = -(cVar69 < auVar68[0]);
      auVar112[1] = -(cVar70 < auVar68[1]);
      auVar112[2] = -(cVar71 < auVar68[2]);
      auVar112[3] = -(cVar72 < auVar68[3]);
      auVar112[4] = -(cVar73 < auVar68[4]);
      auVar112[5] = -(cVar74 < auVar68[5]);
      auVar112[6] = -(cVar75 < auVar68[6]);
      auVar112[7] = -(cVar76 < auVar68[7]);
      auVar112[8] = -(cVar77 < auVar68[8]);
      auVar112[9] = -(cVar78 < auVar68[9]);
      auVar112[10] = -(cVar79 < auVar68[10]);
      auVar112[0xb] = -(cVar80 < auVar68[0xb]);
      auVar112[0xc] = -(cVar81 < auVar68[0xc]);
      auVar112[0xd] = -(cVar82 < auVar68[0xd]);
      auVar112[0xe] = -(cVar83 < auVar68[0xe]);
      auVar112[0xf] = -(cVar84 < auVar68[0xf]);
      auVar116[0] = -(auVar68[0] < cVar89);
      auVar116[1] = -(auVar68[1] < cVar94);
      auVar116[2] = -(auVar68[2] < cVar95);
      auVar116[3] = -(auVar68[3] < cVar96);
      auVar116[4] = -(auVar68[4] < cVar97);
      auVar116[5] = -(auVar68[5] < cVar98);
      auVar116[6] = -(auVar68[6] < cVar99);
      auVar116[7] = -(auVar68[7] < cVar100);
      auVar116[8] = -(auVar68[8] < cVar101);
      auVar116[9] = -(auVar68[9] < cVar102);
      auVar116[10] = -(auVar68[10] < cVar103);
      auVar116[0xb] = -(auVar68[0xb] < cVar104);
      auVar116[0xc] = -(auVar68[0xc] < cVar105);
      auVar116[0xd] = -(auVar68[0xd] < cVar106);
      auVar116[0xe] = -(auVar68[0xe] < cVar107);
      auVar116[0xf] = -(auVar68[0xf] < cVar108);
      auVar49 = auVar49 | auVar88 & auVar93 & _DAT_0082bc10;
      auVar68 = auVar68 | auVar112 & auVar116 & _DAT_0082bc10;
      cVar48 = auVar49[0];
      bVar6 = -(cVar31 == cVar47) == cVar48;
      cVar31 = -bVar6;
      cVar47 = auVar49[1];
      bVar7 = -(cVar32 == cVar53) == cVar47;
      cVar32 = -bVar7;
      cVar53 = auVar49[2];
      bVar8 = -(cVar33 == cVar54) == cVar53;
      cVar33 = -bVar8;
      cVar54 = auVar49[3];
      bVar9 = -(cVar34 == cVar55) == cVar54;
      cVar34 = -bVar9;
      cVar55 = auVar49[4];
      bVar10 = -(cVar35 == cVar56) == cVar55;
      cVar35 = -bVar10;
      cVar56 = auVar49[5];
      bVar11 = -(cVar36 == cVar57) == cVar56;
      cVar36 = -bVar11;
      cVar57 = auVar49[6];
      bVar12 = -(cVar37 == cVar58) == cVar57;
      cVar37 = -bVar12;
      cVar58 = auVar49[7];
      bVar13 = -(cVar38 == cVar59) == cVar58;
      cVar38 = -bVar13;
      cVar59 = auVar49[8];
      bVar14 = -(cVar39 == cVar60) == cVar59;
      cVar39 = -bVar14;
      cVar60 = auVar49[9];
      bVar15 = -(cVar40 == cVar61) == cVar60;
      cVar40 = -bVar15;
      cVar61 = auVar49[10];
      bVar16 = -(cVar41 == cVar62) == cVar61;
      cVar41 = -bVar16;
      cVar62 = auVar49[0xb];
      bVar17 = -(cVar42 == cVar63) == cVar62;
      cVar42 = -bVar17;
      cVar63 = auVar49[0xc];
      bVar18 = -(cVar43 == cVar64) == cVar63;
      cVar43 = -bVar18;
      cVar64 = auVar49[0xd];
      bVar19 = -(cVar44 == cVar65) == cVar64;
      cVar44 = -bVar19;
      cVar65 = auVar49[0xe];
      bVar20 = -(cVar45 == cVar66) == cVar65;
      cVar45 = -bVar20;
      cVar66 = auVar49[0xf];
      bVar21 = -(cVar46 == cVar67) == cVar66;
      cVar46 = -bVar21;
      auVar52[0] = bVar6 - (cVar48 == auVar68[0]);
      auVar52[1] = bVar7 - (cVar47 == auVar68[1]);
      auVar52[2] = bVar8 - (cVar53 == auVar68[2]);
      auVar52[3] = bVar9 - (cVar54 == auVar68[3]);
      auVar52[4] = bVar10 - (cVar55 == auVar68[4]);
      auVar52[5] = bVar11 - (cVar56 == auVar68[5]);
      auVar52[6] = bVar12 - (cVar57 == auVar68[6]);
      auVar52[7] = bVar13 - (cVar58 == auVar68[7]);
      auVar52[8] = bVar14 - (cVar59 == auVar68[8]);
      auVar52[9] = bVar15 - (cVar60 == auVar68[9]);
      auVar52[10] = bVar16 - (cVar61 == auVar68[10]);
      auVar52[0xb] = bVar17 - (cVar62 == auVar68[0xb]);
      auVar52[0xc] = bVar18 - (cVar63 == auVar68[0xc]);
      auVar52[0xd] = bVar19 - (cVar64 == auVar68[0xd]);
      auVar52[0xe] = bVar20 - (cVar65 == auVar68[0xe]);
      auVar52[0xf] = bVar21 - (cVar66 == auVar68[0xf]);
      uVar27 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar52[0xf] >> 7) << 0xf) - 0xffff;
      uVar25 = uVar23;
      if (uVar27 != 0) break;
      uVar26 = uVar26 + 0x20;
    }
  }
  param_1 = (undefined1 (*) [16])(*param_1 + uVar23);
  param_2 = (undefined1 (*) [16])(*param_2 + uVar25);
LAB_00731950:
  lVar5 = 0;
  if (uVar27 != 0) {
    for (; (uVar27 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
    }
  }
  return (ulong)(uint)(*(int *)(&DAT_00831080 + (ulong)(byte)(*param_1)[lVar5] * 4) -
                      *(int *)(&DAT_00831080 + (ulong)(byte)(*param_2)[lVar5] * 4));
}

