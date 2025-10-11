
void FUN_007489b0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [11];
  undefined1 auVar10 [11];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
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
  char cVar30;
  char cVar31;
  undefined8 uVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  char *pcVar36;
  ulong uVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
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
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  char cVar72;
  byte bVar73;
  char cVar74;
  byte bVar75;
  char cVar76;
  byte bVar77;
  char cVar78;
  byte bVar79;
  char cVar80;
  byte bVar81;
  char cVar82;
  byte bVar83;
  char cVar84;
  byte bVar85;
  char cVar86;
  byte bVar87;
  char cVar88;
  byte bVar89;
  char cVar90;
  byte bVar91;
  char cVar92;
  byte bVar93;
  char cVar94;
  byte bVar95;
  char cVar96;
  byte bVar97;
  char cVar98;
  byte bVar99;
  char cVar100;
  byte bVar101;
  char cVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  
  if (((ulong)param_2 & 0x3f) < 0x21) {
    auVar52 = *param_2;
    auVar43 = param_2[1];
    auVar51[0] = -(auVar52[0] == '\0');
    auVar51[1] = -(auVar52[1] == '\0');
    auVar51[2] = -(auVar52[2] == '\0');
    auVar51[3] = -(auVar52[3] == '\0');
    auVar51[4] = -(auVar52[4] == '\0');
    auVar51[5] = -(auVar52[5] == '\0');
    auVar51[6] = -(auVar52[6] == '\0');
    auVar51[7] = -(auVar52[7] == '\0');
    auVar51[8] = -(auVar52[8] == '\0');
    auVar51[9] = -(auVar52[9] == '\0');
    auVar51[10] = -(auVar52[10] == '\0');
    auVar51[0xb] = -(auVar52[0xb] == '\0');
    auVar51[0xc] = -(auVar52[0xc] == '\0');
    auVar51[0xd] = -(auVar52[0xd] == '\0');
    auVar51[0xe] = -(auVar52[0xe] == '\0');
    auVar51[0xf] = -(auVar52[0xf] == '\0');
    uVar33 = (ulong)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                            (ushort)(auVar51[0xf] >> 7) << 0xf);
    if (uVar33 == 0) {
      auVar42[0] = -(auVar51[0] == auVar43[0]);
      auVar42[1] = -(auVar51[1] == auVar43[1]);
      auVar42[2] = -(auVar51[2] == auVar43[2]);
      auVar42[3] = -(auVar51[3] == auVar43[3]);
      auVar42[4] = -(auVar51[4] == auVar43[4]);
      auVar42[5] = -(auVar51[5] == auVar43[5]);
      auVar42[6] = -(auVar51[6] == auVar43[6]);
      auVar42[7] = -(auVar51[7] == auVar43[7]);
      auVar42[8] = -(auVar51[8] == auVar43[8]);
      auVar42[9] = -(auVar51[9] == auVar43[9]);
      auVar42[10] = -(auVar51[10] == auVar43[10]);
      auVar42[0xb] = -(auVar51[0xb] == auVar43[0xb]);
      auVar42[0xc] = -(auVar51[0xc] == auVar43[0xc]);
      auVar42[0xd] = -(auVar51[0xd] == auVar43[0xd]);
      auVar42[0xe] = -(auVar51[0xe] == auVar43[0xe]);
      auVar42[0xf] = -(auVar51[0xf] == auVar43[0xf]);
      *param_1 = auVar52;
      uVar33 = (ulong)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar42[0xf] >> 7) << 0xf);
      if (uVar33 == 0) goto LAB_00748a10;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
    lVar34 = 0;
    if (uVar33 != 0) {
      for (; (uVar33 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00748c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
              (param_1,param_2,lVar34,&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4));
    return;
  }
  pcVar36 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  uVar33 = (ulong)param_2 & 0xf;
  auVar52[0] = -(*pcVar36 == '\0');
  auVar52[1] = -(pcVar36[1] == '\0');
  auVar52[2] = -(pcVar36[2] == '\0');
  auVar52[3] = -(pcVar36[3] == '\0');
  auVar52[4] = -(pcVar36[4] == '\0');
  auVar52[5] = -(pcVar36[5] == '\0');
  auVar52[6] = -(pcVar36[6] == '\0');
  auVar52[7] = -(pcVar36[7] == '\0');
  auVar52[8] = -(pcVar36[8] == '\0');
  auVar52[9] = -(pcVar36[9] == '\0');
  auVar52[10] = -(pcVar36[10] == '\0');
  auVar52[0xb] = -(pcVar36[0xb] == '\0');
  auVar52[0xc] = -(pcVar36[0xc] == '\0');
  auVar52[0xd] = -(pcVar36[0xd] == '\0');
  auVar52[0xe] = -(pcVar36[0xe] == '\0');
  auVar52[0xf] = -(pcVar36[0xf] == '\0');
  uVar3 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                  (ushort)(auVar52[0xf] >> 7) << 0xf) >> (sbyte)uVar33;
  if (uVar3 != 0) {
    lVar34 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00748c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
              (param_1,pcVar36 + uVar33,lVar34,&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4))
    ;
    return;
  }
  auVar42[0] = -(pcVar36[0x10] == '\0');
  auVar42[1] = -(pcVar36[0x11] == '\0');
  auVar42[2] = -(pcVar36[0x12] == '\0');
  auVar42[3] = -(pcVar36[0x13] == '\0');
  auVar42[4] = -(pcVar36[0x14] == '\0');
  auVar42[5] = -(pcVar36[0x15] == '\0');
  auVar42[6] = -(pcVar36[0x16] == '\0');
  auVar42[7] = -(pcVar36[0x17] == '\0');
  auVar42[8] = -(pcVar36[0x18] == '\0');
  auVar42[9] = -(pcVar36[0x19] == '\0');
  auVar42[10] = -(pcVar36[0x1a] == '\0');
  auVar42[0xb] = -(pcVar36[0x1b] == '\0');
  auVar42[0xc] = -(pcVar36[0x1c] == '\0');
  auVar42[0xd] = -(pcVar36[0x1d] == '\0');
  auVar42[0xe] = -(pcVar36[0x1e] == '\0');
  auVar42[0xf] = -(pcVar36[0x1f] == '\0');
  uVar3 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    lVar34 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
      }
    }
    lVar34 = (lVar34 + 0x10) - uVar33;
                    /* WARNING: Could not recover jumptable at 0x00748c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
              (param_1,pcVar36 + uVar33,lVar34,&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4))
    ;
    return;
  }
  uVar32 = *(undefined8 *)(pcVar36 + uVar33 + 8);
  *(undefined8 *)*param_1 = *(undefined8 *)(pcVar36 + uVar33);
  *(undefined8 *)(*param_1 + 8) = uVar32;
LAB_00748a10:
  uVar33 = (ulong)param_2 & 0xf;
  uVar37 = (ulong)param_2 & 0xfffffffffffffff0;
  uVar32 = *(undefined8 *)(uVar37 + 0x18);
  cVar72 = *(char *)(uVar37 + 0x20);
  cVar74 = *(char *)(uVar37 + 0x21);
  cVar76 = *(char *)(uVar37 + 0x22);
  cVar78 = *(char *)(uVar37 + 0x23);
  cVar80 = *(char *)(uVar37 + 0x24);
  cVar82 = *(char *)(uVar37 + 0x25);
  cVar84 = *(char *)(uVar37 + 0x26);
  cVar86 = *(char *)(uVar37 + 0x27);
  cVar88 = *(char *)(uVar37 + 0x28);
  cVar90 = *(char *)(uVar37 + 0x29);
  cVar92 = *(char *)(uVar37 + 0x2a);
  cVar94 = *(char *)(uVar37 + 0x2b);
  cVar96 = *(char *)(uVar37 + 0x2c);
  cVar98 = *(char *)(uVar37 + 0x2d);
  cVar100 = *(char *)(uVar37 + 0x2e);
  cVar102 = *(char *)(uVar37 + 0x2f);
  *(undefined8 *)((long)param_1 + (0x10 - uVar33)) = *(undefined8 *)(uVar37 + 0x10);
  *(undefined8 *)((long)param_1 + (0x18 - uVar33)) = uVar32;
  auVar43[0] = -(auVar42[0] == cVar72);
  auVar43[1] = -(auVar42[1] == cVar74);
  auVar43[2] = -(auVar42[2] == cVar76);
  auVar43[3] = -(auVar42[3] == cVar78);
  auVar43[4] = -(auVar42[4] == cVar80);
  auVar43[5] = -(auVar42[5] == cVar82);
  auVar43[6] = -(auVar42[6] == cVar84);
  auVar43[7] = -(auVar42[7] == cVar86);
  auVar43[8] = -(auVar42[8] == cVar88);
  auVar43[9] = -(auVar42[9] == cVar90);
  auVar43[10] = -(auVar42[10] == cVar92);
  auVar43[0xb] = -(auVar42[0xb] == cVar94);
  auVar43[0xc] = -(auVar42[0xc] == cVar96);
  auVar43[0xd] = -(auVar42[0xd] == cVar98);
  auVar43[0xe] = -(auVar42[0xe] == cVar100);
  auVar43[0xf] = -(auVar42[0xf] == cVar102);
  uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar43[0xf] >> 7) << 0xf);
  lVar34 = 0x20;
  if (uVar35 == 0) {
    cVar17 = *(char *)(uVar37 + 0x30);
    cVar18 = *(char *)(uVar37 + 0x31);
    cVar19 = *(char *)(uVar37 + 0x32);
    cVar20 = *(char *)(uVar37 + 0x33);
    cVar21 = *(char *)(uVar37 + 0x34);
    cVar22 = *(char *)(uVar37 + 0x35);
    cVar23 = *(char *)(uVar37 + 0x36);
    cVar24 = *(char *)(uVar37 + 0x37);
    cVar25 = *(char *)(uVar37 + 0x38);
    cVar26 = *(char *)(uVar37 + 0x39);
    cVar27 = *(char *)(uVar37 + 0x3a);
    cVar28 = *(char *)(uVar37 + 0x3b);
    cVar29 = *(char *)(uVar37 + 0x3c);
    cVar30 = *(char *)(uVar37 + 0x3d);
    cVar31 = *(char *)(uVar37 + 0x3e);
    bVar103 = *(byte *)(uVar37 + 0x3f);
    *(char *)((long)param_1 + (0x20 - uVar33)) = cVar72;
    *(char *)((long)param_1 + (0x21 - uVar33)) = cVar74;
    *(char *)((long)param_1 + (0x22 - uVar33)) = cVar76;
    *(char *)((long)param_1 + (0x23 - uVar33)) = cVar78;
    *(char *)((long)param_1 + (0x24 - uVar33)) = cVar80;
    *(char *)((long)param_1 + (0x25 - uVar33)) = cVar82;
    *(char *)((long)param_1 + (0x26 - uVar33)) = cVar84;
    *(char *)((long)param_1 + (0x27 - uVar33)) = cVar86;
    *(char *)((long)param_1 + (0x28 - uVar33)) = cVar88;
    *(char *)((long)param_1 + (0x29 - uVar33)) = cVar90;
    *(char *)((long)param_1 + (0x2a - uVar33)) = cVar92;
    *(char *)((long)param_1 + (0x2b - uVar33)) = cVar94;
    *(char *)((long)param_1 + (0x2c - uVar33)) = cVar96;
    *(char *)((long)param_1 + (0x2d - uVar33)) = cVar98;
    *(char *)((long)param_1 + (0x2e - uVar33)) = cVar100;
    *(char *)((long)param_1 + (0x2f - uVar33)) = cVar102;
    auVar44[0] = -(auVar43[0] == cVar17);
    auVar44[1] = -(auVar43[1] == cVar18);
    auVar44[2] = -(auVar43[2] == cVar19);
    auVar44[3] = -(auVar43[3] == cVar20);
    auVar44[4] = -(auVar43[4] == cVar21);
    auVar44[5] = -(auVar43[5] == cVar22);
    auVar44[6] = -(auVar43[6] == cVar23);
    auVar44[7] = -(auVar43[7] == cVar24);
    auVar44[8] = -(auVar43[8] == cVar25);
    auVar44[9] = -(auVar43[9] == cVar26);
    auVar44[10] = -(auVar43[10] == cVar27);
    auVar44[0xb] = -(auVar43[0xb] == cVar28);
    auVar44[0xc] = -(auVar43[0xc] == cVar29);
    auVar44[0xd] = -(auVar43[0xd] == cVar30);
    auVar44[0xe] = -(auVar43[0xe] == cVar31);
    auVar44[0xf] = -(auVar43[0xf] == bVar103);
    uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar44[0xf] >> 7) << 0xf);
    lVar34 = 0x30;
    if (uVar35 == 0) {
      cVar72 = *(char *)(uVar37 + 0x40);
      cVar74 = *(char *)(uVar37 + 0x41);
      cVar76 = *(char *)(uVar37 + 0x42);
      cVar78 = *(char *)(uVar37 + 0x43);
      cVar80 = *(char *)(uVar37 + 0x44);
      cVar82 = *(char *)(uVar37 + 0x45);
      cVar84 = *(char *)(uVar37 + 0x46);
      cVar86 = *(char *)(uVar37 + 0x47);
      cVar88 = *(char *)(uVar37 + 0x48);
      cVar90 = *(char *)(uVar37 + 0x49);
      cVar92 = *(char *)(uVar37 + 0x4a);
      cVar94 = *(char *)(uVar37 + 0x4b);
      cVar96 = *(char *)(uVar37 + 0x4c);
      cVar98 = *(char *)(uVar37 + 0x4d);
      cVar100 = *(char *)(uVar37 + 0x4e);
      bVar104 = *(byte *)(uVar37 + 0x4f);
      *(char *)((long)param_1 + (0x30 - uVar33)) = cVar17;
      *(char *)((long)param_1 + (0x31 - uVar33)) = cVar18;
      *(char *)((long)param_1 + (0x32 - uVar33)) = cVar19;
      *(char *)((long)param_1 + (0x33 - uVar33)) = cVar20;
      *(char *)((long)param_1 + (0x34 - uVar33)) = cVar21;
      *(char *)((long)param_1 + (0x35 - uVar33)) = cVar22;
      *(char *)((long)param_1 + (0x36 - uVar33)) = cVar23;
      *(char *)((long)param_1 + (0x37 - uVar33)) = cVar24;
      *(char *)((long)param_1 + (0x38 - uVar33)) = cVar25;
      *(char *)((long)param_1 + (0x39 - uVar33)) = cVar26;
      *(char *)((long)param_1 + (0x3a - uVar33)) = cVar27;
      *(char *)((long)param_1 + (0x3b - uVar33)) = cVar28;
      *(char *)((long)param_1 + (0x3c - uVar33)) = cVar29;
      *(char *)((long)param_1 + (0x3d - uVar33)) = cVar30;
      *(char *)((long)param_1 + (0x3e - uVar33)) = cVar31;
      *(byte *)((long)param_1 + (0x3f - uVar33)) = bVar103;
      auVar45[0] = -(auVar44[0] == cVar72);
      auVar45[1] = -(auVar44[1] == cVar74);
      auVar45[2] = -(auVar44[2] == cVar76);
      auVar45[3] = -(auVar44[3] == cVar78);
      auVar45[4] = -(auVar44[4] == cVar80);
      auVar45[5] = -(auVar44[5] == cVar82);
      auVar45[6] = -(auVar44[6] == cVar84);
      auVar45[7] = -(auVar44[7] == cVar86);
      auVar45[8] = -(auVar44[8] == cVar88);
      auVar45[9] = -(auVar44[9] == cVar90);
      auVar45[10] = -(auVar44[10] == cVar92);
      auVar45[0xb] = -(auVar44[0xb] == cVar94);
      auVar45[0xc] = -(auVar44[0xc] == cVar96);
      auVar45[0xd] = -(auVar44[0xd] == cVar98);
      auVar45[0xe] = -(auVar44[0xe] == cVar100);
      auVar45[0xf] = -(auVar44[0xf] == bVar104);
      uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar45[0xf] >> 7) << 0xf);
      lVar34 = 0x40;
      if (uVar35 == 0) {
        cVar102 = *(char *)(uVar37 + 0x50);
        cVar17 = *(char *)(uVar37 + 0x51);
        cVar18 = *(char *)(uVar37 + 0x52);
        cVar19 = *(char *)(uVar37 + 0x53);
        cVar20 = *(char *)(uVar37 + 0x54);
        cVar21 = *(char *)(uVar37 + 0x55);
        cVar22 = *(char *)(uVar37 + 0x56);
        cVar23 = *(char *)(uVar37 + 0x57);
        cVar24 = *(char *)(uVar37 + 0x58);
        cVar25 = *(char *)(uVar37 + 0x59);
        cVar26 = *(char *)(uVar37 + 0x5a);
        cVar27 = *(char *)(uVar37 + 0x5b);
        cVar28 = *(char *)(uVar37 + 0x5c);
        cVar29 = *(char *)(uVar37 + 0x5d);
        cVar30 = *(char *)(uVar37 + 0x5e);
        bVar103 = *(byte *)(uVar37 + 0x5f);
        *(char *)((long)param_1 + (0x40 - uVar33)) = cVar72;
        *(char *)((long)param_1 + (0x41 - uVar33)) = cVar74;
        *(char *)((long)param_1 + (0x42 - uVar33)) = cVar76;
        *(char *)((long)param_1 + (0x43 - uVar33)) = cVar78;
        *(char *)((long)param_1 + (0x44 - uVar33)) = cVar80;
        *(char *)((long)param_1 + (0x45 - uVar33)) = cVar82;
        *(char *)((long)param_1 + (0x46 - uVar33)) = cVar84;
        *(char *)((long)param_1 + (0x47 - uVar33)) = cVar86;
        *(char *)((long)param_1 + (0x48 - uVar33)) = cVar88;
        *(char *)((long)param_1 + (0x49 - uVar33)) = cVar90;
        *(char *)((long)param_1 + (0x4a - uVar33)) = cVar92;
        *(char *)((long)param_1 + (0x4b - uVar33)) = cVar94;
        *(char *)((long)param_1 + (0x4c - uVar33)) = cVar96;
        *(char *)((long)param_1 + (0x4d - uVar33)) = cVar98;
        *(char *)((long)param_1 + (0x4e - uVar33)) = cVar100;
        *(byte *)((long)param_1 + (0x4f - uVar33)) = bVar104;
        auVar46[0] = -(auVar45[0] == cVar102);
        auVar46[1] = -(auVar45[1] == cVar17);
        auVar46[2] = -(auVar45[2] == cVar18);
        auVar46[3] = -(auVar45[3] == cVar19);
        auVar46[4] = -(auVar45[4] == cVar20);
        auVar46[5] = -(auVar45[5] == cVar21);
        auVar46[6] = -(auVar45[6] == cVar22);
        auVar46[7] = -(auVar45[7] == cVar23);
        auVar46[8] = -(auVar45[8] == cVar24);
        auVar46[9] = -(auVar45[9] == cVar25);
        auVar46[10] = -(auVar45[10] == cVar26);
        auVar46[0xb] = -(auVar45[0xb] == cVar27);
        auVar46[0xc] = -(auVar45[0xc] == cVar28);
        auVar46[0xd] = -(auVar45[0xd] == cVar29);
        auVar46[0xe] = -(auVar45[0xe] == cVar30);
        auVar46[0xf] = -(auVar45[0xf] == bVar103);
        uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar46[0xf] >> 7) << 0xf);
        lVar34 = 0x50;
        if (uVar35 == 0) {
          cVar72 = *(char *)(uVar37 + 0x60);
          cVar74 = *(char *)(uVar37 + 0x61);
          cVar76 = *(char *)(uVar37 + 0x62);
          cVar78 = *(char *)(uVar37 + 99);
          cVar80 = *(char *)(uVar37 + 100);
          cVar82 = *(char *)(uVar37 + 0x65);
          cVar84 = *(char *)(uVar37 + 0x66);
          cVar86 = *(char *)(uVar37 + 0x67);
          cVar88 = *(char *)(uVar37 + 0x68);
          cVar90 = *(char *)(uVar37 + 0x69);
          cVar92 = *(char *)(uVar37 + 0x6a);
          cVar94 = *(char *)(uVar37 + 0x6b);
          cVar96 = *(char *)(uVar37 + 0x6c);
          cVar98 = *(char *)(uVar37 + 0x6d);
          cVar100 = *(char *)(uVar37 + 0x6e);
          bVar104 = *(byte *)(uVar37 + 0x6f);
          *(char *)((long)param_1 + (0x50 - uVar33)) = cVar102;
          *(char *)((long)param_1 + (0x51 - uVar33)) = cVar17;
          *(char *)((long)param_1 + (0x52 - uVar33)) = cVar18;
          *(char *)((long)param_1 + (0x53 - uVar33)) = cVar19;
          *(char *)((long)param_1 + (0x54 - uVar33)) = cVar20;
          *(char *)((long)param_1 + (0x55 - uVar33)) = cVar21;
          *(char *)((long)param_1 + (0x56 - uVar33)) = cVar22;
          *(char *)((long)param_1 + (0x57 - uVar33)) = cVar23;
          *(char *)((long)param_1 + (0x58 - uVar33)) = cVar24;
          *(char *)((long)param_1 + (0x59 - uVar33)) = cVar25;
          *(char *)((long)param_1 + (0x5a - uVar33)) = cVar26;
          *(char *)((long)param_1 + (0x5b - uVar33)) = cVar27;
          *(char *)((long)param_1 + (0x5c - uVar33)) = cVar28;
          *(char *)((long)param_1 + (0x5d - uVar33)) = cVar29;
          *(char *)((long)param_1 + (0x5e - uVar33)) = cVar30;
          *(byte *)((long)param_1 + (0x5f - uVar33)) = bVar103;
          auVar47[0] = -(auVar46[0] == cVar72);
          auVar47[1] = -(auVar46[1] == cVar74);
          auVar47[2] = -(auVar46[2] == cVar76);
          auVar47[3] = -(auVar46[3] == cVar78);
          auVar47[4] = -(auVar46[4] == cVar80);
          auVar47[5] = -(auVar46[5] == cVar82);
          auVar47[6] = -(auVar46[6] == cVar84);
          auVar47[7] = -(auVar46[7] == cVar86);
          auVar47[8] = -(auVar46[8] == cVar88);
          auVar47[9] = -(auVar46[9] == cVar90);
          auVar47[10] = -(auVar46[10] == cVar92);
          auVar47[0xb] = -(auVar46[0xb] == cVar94);
          auVar47[0xc] = -(auVar46[0xc] == cVar96);
          auVar47[0xd] = -(auVar46[0xd] == cVar98);
          auVar47[0xe] = -(auVar46[0xe] == cVar100);
          auVar47[0xf] = -(auVar46[0xf] == bVar104);
          uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                                  (ushort)(auVar47[0xf] >> 7) << 0xf);
          lVar34 = 0x60;
          if (uVar35 == 0) {
            cVar102 = *(char *)(uVar37 + 0x70);
            cVar17 = *(char *)(uVar37 + 0x71);
            cVar18 = *(char *)(uVar37 + 0x72);
            cVar19 = *(char *)(uVar37 + 0x73);
            cVar20 = *(char *)(uVar37 + 0x74);
            cVar21 = *(char *)(uVar37 + 0x75);
            cVar22 = *(char *)(uVar37 + 0x76);
            cVar23 = *(char *)(uVar37 + 0x77);
            cVar24 = *(char *)(uVar37 + 0x78);
            cVar25 = *(char *)(uVar37 + 0x79);
            cVar26 = *(char *)(uVar37 + 0x7a);
            cVar27 = *(char *)(uVar37 + 0x7b);
            cVar28 = *(char *)(uVar37 + 0x7c);
            cVar29 = *(char *)(uVar37 + 0x7d);
            cVar30 = *(char *)(uVar37 + 0x7e);
            bVar103 = *(byte *)(uVar37 + 0x7f);
            *(char *)((long)param_1 + (0x60 - uVar33)) = cVar72;
            *(char *)((long)param_1 + (0x61 - uVar33)) = cVar74;
            *(char *)((long)param_1 + (0x62 - uVar33)) = cVar76;
            *(char *)((long)param_1 + (99 - uVar33)) = cVar78;
            *(char *)((long)param_1 + (100 - uVar33)) = cVar80;
            *(char *)((long)param_1 + (0x65 - uVar33)) = cVar82;
            *(char *)((long)param_1 + (0x66 - uVar33)) = cVar84;
            *(char *)((long)param_1 + (0x67 - uVar33)) = cVar86;
            *(char *)((long)param_1 + (0x68 - uVar33)) = cVar88;
            *(char *)((long)param_1 + (0x69 - uVar33)) = cVar90;
            *(char *)((long)param_1 + (0x6a - uVar33)) = cVar92;
            *(char *)((long)param_1 + (0x6b - uVar33)) = cVar94;
            *(char *)((long)param_1 + (0x6c - uVar33)) = cVar96;
            *(char *)((long)param_1 + (0x6d - uVar33)) = cVar98;
            *(char *)((long)param_1 + (0x6e - uVar33)) = cVar100;
            *(byte *)((long)param_1 + (0x6f - uVar33)) = bVar104;
            auVar48[0] = -(auVar47[0] == cVar102);
            auVar48[1] = -(auVar47[1] == cVar17);
            auVar48[2] = -(auVar47[2] == cVar18);
            auVar48[3] = -(auVar47[3] == cVar19);
            auVar48[4] = -(auVar47[4] == cVar20);
            auVar48[5] = -(auVar47[5] == cVar21);
            auVar48[6] = -(auVar47[6] == cVar22);
            auVar48[7] = -(auVar47[7] == cVar23);
            auVar48[8] = -(auVar47[8] == cVar24);
            auVar48[9] = -(auVar47[9] == cVar25);
            auVar48[10] = -(auVar47[10] == cVar26);
            auVar48[0xb] = -(auVar47[0xb] == cVar27);
            auVar48[0xc] = -(auVar47[0xc] == cVar28);
            auVar48[0xd] = -(auVar47[0xd] == cVar29);
            auVar48[0xe] = -(auVar47[0xe] == cVar30);
            auVar48[0xf] = -(auVar47[0xf] == bVar103);
            uVar35 = (ulong)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                                    (ushort)(auVar48[0xf] >> 7) << 0xf);
            lVar34 = 0x70;
            if (uVar35 == 0) {
              *(char *)((long)param_1 + (0x70 - uVar33)) = cVar102;
              *(char *)((long)param_1 + (0x71 - uVar33)) = cVar17;
              *(char *)((long)param_1 + (0x72 - uVar33)) = cVar18;
              *(char *)((long)param_1 + (0x73 - uVar33)) = cVar19;
              *(char *)((long)param_1 + (0x74 - uVar33)) = cVar20;
              *(char *)((long)param_1 + (0x75 - uVar33)) = cVar21;
              *(char *)((long)param_1 + (0x76 - uVar33)) = cVar22;
              *(char *)((long)param_1 + (0x77 - uVar33)) = cVar23;
              *(char *)((long)param_1 + (0x78 - uVar33)) = cVar24;
              *(char *)((long)param_1 + (0x79 - uVar33)) = cVar25;
              *(char *)((long)param_1 + (0x7a - uVar33)) = cVar26;
              *(char *)((long)param_1 + (0x7b - uVar33)) = cVar27;
              *(char *)((long)param_1 + (0x7c - uVar33)) = cVar28;
              *(char *)((long)param_1 + (0x7d - uVar33)) = cVar29;
              *(char *)((long)param_1 + (0x7e - uVar33)) = cVar30;
              *(byte *)((long)param_1 + (0x7f - uVar33)) = bVar103;
              pbVar38 = (byte *)(uVar37 + 0x80 & 0xffffffffffffffc0);
              pbVar40 = (byte *)((long)param_1 + (-(uVar37 - (long)pbVar38) - uVar33));
              bVar103 = *pbVar38;
              bVar104 = pbVar38[1];
              bVar105 = pbVar38[2];
              bVar106 = pbVar38[3];
              bVar107 = pbVar38[4];
              bVar108 = pbVar38[5];
              bVar109 = pbVar38[6];
              bVar110 = pbVar38[7];
              bVar111 = pbVar38[8];
              bVar112 = pbVar38[9];
              bVar113 = pbVar38[10];
              bVar114 = pbVar38[0xb];
              bVar115 = pbVar38[0xc];
              bVar116 = pbVar38[0xd];
              bVar117 = pbVar38[0xe];
              bVar118 = pbVar38[0xf];
              bVar119 = pbVar38[0x10];
              bVar120 = pbVar38[0x11];
              bVar121 = pbVar38[0x12];
              bVar122 = pbVar38[0x13];
              bVar123 = pbVar38[0x14];
              bVar124 = pbVar38[0x15];
              bVar125 = pbVar38[0x16];
              bVar126 = pbVar38[0x17];
              bVar127 = pbVar38[0x18];
              bVar128 = pbVar38[0x19];
              bVar129 = pbVar38[0x1a];
              bVar130 = pbVar38[0x1b];
              bVar131 = pbVar38[0x1c];
              bVar132 = pbVar38[0x1d];
              bVar133 = pbVar38[0x1e];
              bVar134 = pbVar38[0x1f];
              bVar135 = pbVar38[0x20];
              bVar136 = pbVar38[0x21];
              bVar137 = pbVar38[0x22];
              bVar138 = pbVar38[0x23];
              bVar139 = pbVar38[0x24];
              bVar140 = pbVar38[0x25];
              bVar141 = pbVar38[0x26];
              bVar142 = pbVar38[0x27];
              bVar143 = pbVar38[0x28];
              bVar144 = pbVar38[0x29];
              bVar145 = pbVar38[0x2a];
              bVar146 = pbVar38[0x2b];
              bVar147 = pbVar38[0x2c];
              bVar148 = pbVar38[0x2d];
              bVar149 = pbVar38[0x2e];
              bVar150 = pbVar38[0x2f];
              bVar151 = pbVar38[0x30];
              bVar152 = pbVar38[0x31];
              bVar153 = pbVar38[0x32];
              bVar154 = pbVar38[0x33];
              bVar155 = pbVar38[0x34];
              bVar156 = pbVar38[0x35];
              bVar157 = pbVar38[0x36];
              bVar158 = pbVar38[0x37];
              bVar159 = pbVar38[0x38];
              bVar160 = pbVar38[0x39];
              bVar161 = pbVar38[0x3a];
              bVar162 = pbVar38[0x3b];
              bVar163 = pbVar38[0x3c];
              bVar164 = pbVar38[0x3d];
              bVar165 = pbVar38[0x3e];
              bVar166 = pbVar38[0x3f];
              bVar55 = (bVar119 < bVar103) * bVar119 | (bVar119 >= bVar103) * bVar103;
              bVar56 = (bVar120 < bVar104) * bVar120 | (bVar120 >= bVar104) * bVar104;
              bVar57 = (bVar121 < bVar105) * bVar121 | (bVar121 >= bVar105) * bVar105;
              bVar58 = (bVar122 < bVar106) * bVar122 | (bVar122 >= bVar106) * bVar106;
              bVar59 = (bVar123 < bVar107) * bVar123 | (bVar123 >= bVar107) * bVar107;
              bVar60 = (bVar124 < bVar108) * bVar124 | (bVar124 >= bVar108) * bVar108;
              bVar61 = (bVar125 < bVar109) * bVar125 | (bVar125 >= bVar109) * bVar109;
              bVar62 = (bVar126 < bVar110) * bVar126 | (bVar126 >= bVar110) * bVar110;
              bVar63 = (bVar127 < bVar111) * bVar127 | (bVar127 >= bVar111) * bVar111;
              bVar64 = (bVar128 < bVar112) * bVar128 | (bVar128 >= bVar112) * bVar112;
              bVar65 = (bVar129 < bVar113) * bVar129 | (bVar129 >= bVar113) * bVar113;
              bVar66 = (bVar130 < bVar114) * bVar130 | (bVar130 >= bVar114) * bVar114;
              bVar67 = (bVar131 < bVar115) * bVar131 | (bVar131 >= bVar115) * bVar115;
              bVar68 = (bVar132 < bVar116) * bVar132 | (bVar132 >= bVar116) * bVar116;
              bVar69 = (bVar133 < bVar117) * bVar133 | (bVar133 >= bVar117) * bVar117;
              bVar70 = (bVar134 < bVar118) * bVar134 | (bVar134 >= bVar118) * bVar118;
              bVar71 = (bVar151 < bVar135) * bVar151 | (bVar151 >= bVar135) * bVar135;
              bVar73 = (bVar152 < bVar136) * bVar152 | (bVar152 >= bVar136) * bVar136;
              bVar75 = (bVar153 < bVar137) * bVar153 | (bVar153 >= bVar137) * bVar137;
              bVar77 = (bVar154 < bVar138) * bVar154 | (bVar154 >= bVar138) * bVar138;
              bVar79 = (bVar155 < bVar139) * bVar155 | (bVar155 >= bVar139) * bVar139;
              bVar81 = (bVar156 < bVar140) * bVar156 | (bVar156 >= bVar140) * bVar140;
              bVar83 = (bVar157 < bVar141) * bVar157 | (bVar157 >= bVar141) * bVar141;
              bVar85 = (bVar158 < bVar142) * bVar158 | (bVar158 >= bVar142) * bVar142;
              bVar87 = (bVar159 < bVar143) * bVar159 | (bVar159 >= bVar143) * bVar143;
              bVar89 = (bVar160 < bVar144) * bVar160 | (bVar160 >= bVar144) * bVar144;
              bVar91 = (bVar161 < bVar145) * bVar161 | (bVar161 >= bVar145) * bVar145;
              bVar93 = (bVar162 < bVar146) * bVar162 | (bVar162 >= bVar146) * bVar146;
              bVar95 = (bVar163 < bVar147) * bVar163 | (bVar163 >= bVar147) * bVar147;
              bVar97 = (bVar164 < bVar148) * bVar164 | (bVar164 >= bVar148) * bVar148;
              bVar99 = (bVar165 < bVar149) * bVar165 | (bVar165 >= bVar149) * bVar149;
              bVar101 = (bVar166 < bVar150) * bVar166 | (bVar166 >= bVar150) * bVar150;
              cVar72 = -((byte)((bVar55 < bVar71) * bVar55 | (bVar55 >= bVar71) * bVar71) ==
                        auVar48[0]);
              cVar74 = -((byte)((bVar56 < bVar73) * bVar56 | (bVar56 >= bVar73) * bVar73) ==
                        auVar48[1]);
              cVar76 = -((byte)((bVar57 < bVar75) * bVar57 | (bVar57 >= bVar75) * bVar75) ==
                        auVar48[2]);
              cVar78 = -((byte)((bVar58 < bVar77) * bVar58 | (bVar58 >= bVar77) * bVar77) ==
                        auVar48[3]);
              cVar80 = -((byte)((bVar59 < bVar79) * bVar59 | (bVar59 >= bVar79) * bVar79) ==
                        auVar48[4]);
              cVar82 = -((byte)((bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81) ==
                        auVar48[5]);
              cVar84 = -((byte)((bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83) ==
                        auVar48[6]);
              cVar86 = -((byte)((bVar62 < bVar85) * bVar62 | (bVar62 >= bVar85) * bVar85) ==
                        auVar48[7]);
              cVar88 = -((byte)((bVar63 < bVar87) * bVar63 | (bVar63 >= bVar87) * bVar87) ==
                        auVar48[8]);
              cVar90 = -((byte)((bVar64 < bVar89) * bVar64 | (bVar64 >= bVar89) * bVar89) ==
                        auVar48[9]);
              cVar92 = -((byte)((bVar65 < bVar91) * bVar65 | (bVar65 >= bVar91) * bVar91) ==
                        auVar48[10]);
              cVar94 = -((byte)((bVar66 < bVar93) * bVar66 | (bVar66 >= bVar93) * bVar93) ==
                        auVar48[0xb]);
              cVar96 = -((byte)((bVar67 < bVar95) * bVar67 | (bVar67 >= bVar95) * bVar95) ==
                        auVar48[0xc]);
              cVar98 = -((byte)((bVar68 < bVar97) * bVar68 | (bVar68 >= bVar97) * bVar97) ==
                        auVar48[0xd]);
              cVar100 = -((byte)((bVar69 < bVar99) * bVar69 | (bVar69 >= bVar99) * bVar99) ==
                         auVar48[0xe]);
              bVar2 = (byte)((bVar70 < bVar101) * bVar70 | (bVar70 >= bVar101) * bVar101) ==
                      auVar48[0xf];
              cVar102 = -bVar2;
              auVar5[1] = cVar74;
              auVar5[0] = cVar72;
              auVar5[2] = cVar76;
              auVar5[3] = cVar78;
              auVar5[4] = cVar80;
              auVar5[5] = cVar82;
              auVar5[6] = cVar84;
              auVar5[7] = cVar86;
              auVar5[8] = cVar88;
              auVar5[9] = cVar90;
              auVar5[10] = cVar92;
              auVar5[0xb] = cVar94;
              auVar5[0xc] = cVar96;
              auVar5[0xd] = cVar98;
              auVar5[0xe] = cVar100;
              auVar5[0xf] = cVar102;
              auVar6[1] = cVar74;
              auVar6[0] = cVar72;
              auVar6[2] = cVar76;
              auVar6[3] = cVar78;
              auVar6[4] = cVar80;
              auVar6[5] = cVar82;
              auVar6[6] = cVar84;
              auVar6[7] = cVar86;
              auVar6[8] = cVar88;
              auVar6[9] = cVar90;
              auVar6[10] = cVar92;
              auVar6[0xb] = cVar94;
              auVar6[0xc] = cVar96;
              auVar6[0xd] = cVar98;
              auVar6[0xe] = cVar100;
              auVar6[0xf] = cVar102;
              auVar15[1] = cVar78;
              auVar15[0] = cVar76;
              auVar15[2] = cVar80;
              auVar15[3] = cVar82;
              auVar15[4] = cVar84;
              auVar15[5] = cVar86;
              auVar15[6] = cVar88;
              auVar15[7] = cVar90;
              auVar15[8] = cVar92;
              auVar15[9] = cVar94;
              auVar15[10] = cVar96;
              auVar15[0xb] = cVar98;
              auVar15[0xc] = cVar100;
              auVar15[0xd] = cVar102;
              auVar13[1] = cVar80;
              auVar13[0] = cVar78;
              auVar13[2] = cVar82;
              auVar13[3] = cVar84;
              auVar13[4] = cVar86;
              auVar13[5] = cVar88;
              auVar13[6] = cVar90;
              auVar13[7] = cVar92;
              auVar13[8] = cVar94;
              auVar13[9] = cVar96;
              auVar13[10] = cVar98;
              auVar13[0xb] = cVar100;
              auVar13[0xc] = cVar102;
              auVar11[1] = cVar82;
              auVar11[0] = cVar80;
              auVar11[2] = cVar84;
              auVar11[3] = cVar86;
              auVar11[4] = cVar88;
              auVar11[5] = cVar90;
              auVar11[6] = cVar92;
              auVar11[7] = cVar94;
              auVar11[8] = cVar96;
              auVar11[9] = cVar98;
              auVar11[10] = cVar100;
              auVar11[0xb] = cVar102;
              auVar9[1] = cVar84;
              auVar9[0] = cVar82;
              auVar9[2] = cVar86;
              auVar9[3] = cVar88;
              auVar9[4] = cVar90;
              auVar9[5] = cVar92;
              auVar9[6] = cVar94;
              auVar9[7] = cVar96;
              auVar9[8] = cVar98;
              auVar9[9] = cVar100;
              auVar9[10] = cVar102;
              pbVar39 = pbVar38;
              pbVar41 = pbVar40;
              bVar55 = bVar135;
              bVar56 = bVar136;
              bVar57 = bVar137;
              bVar58 = bVar138;
              bVar59 = bVar139;
              bVar60 = bVar140;
              bVar61 = bVar141;
              bVar62 = bVar142;
              bVar63 = bVar143;
              bVar64 = bVar144;
              bVar65 = bVar145;
              bVar66 = bVar146;
              bVar67 = bVar147;
              bVar68 = bVar148;
              bVar69 = bVar149;
              bVar70 = bVar150;
              if (((((((((auVar5 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                        (auVar6 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar15 >> 7 & (undefined1  [14])0x1) == (undefined1  [14])0x0) &&
                      (auVar13 >> 7 & (undefined1  [13])0x1) == (undefined1  [13])0x0) &&
                     (auVar11 >> 7 & (undefined1  [12])0x1) == (undefined1  [12])0x0) &&
                    (auVar9 >> 7 & (undefined1  [11])0x1) == (undefined1  [11])0x0) &&
                   (CONCAT19(cVar102,CONCAT18(cVar100,CONCAT17(cVar98,CONCAT16(cVar96,CONCAT15(
                                                  cVar94,CONCAT14(cVar92,CONCAT13(cVar90,CONCAT12(
                                                  cVar88,CONCAT11(cVar86,cVar84))))))))) >> 7 & 1)
                   == 0) && (CONCAT18(cVar102,CONCAT17(cVar100,CONCAT16(cVar98,CONCAT15(cVar96,
                                                  CONCAT14(cVar94,CONCAT13(cVar92,CONCAT12(cVar90,
                                                  CONCAT11(cVar88,cVar86)))))))) >> 7 & 1) == 0) &&
                  !bVar2) {
                do {
                  pbVar40 = pbVar41 + 0x40;
                  pbVar38 = pbVar39 + 0x40;
                  *pbVar41 = bVar103;
                  pbVar41[1] = bVar104;
                  pbVar41[2] = bVar105;
                  pbVar41[3] = bVar106;
                  pbVar41[4] = bVar107;
                  pbVar41[5] = bVar108;
                  pbVar41[6] = bVar109;
                  pbVar41[7] = bVar110;
                  pbVar41[8] = bVar111;
                  pbVar41[9] = bVar112;
                  pbVar41[10] = bVar113;
                  pbVar41[0xb] = bVar114;
                  pbVar41[0xc] = bVar115;
                  pbVar41[0xd] = bVar116;
                  pbVar41[0xe] = bVar117;
                  pbVar41[0xf] = bVar118;
                  bVar103 = *pbVar38;
                  bVar104 = pbVar39[0x41];
                  bVar105 = pbVar39[0x42];
                  bVar106 = pbVar39[0x43];
                  bVar107 = pbVar39[0x44];
                  bVar108 = pbVar39[0x45];
                  bVar109 = pbVar39[0x46];
                  bVar110 = pbVar39[0x47];
                  bVar111 = pbVar39[0x48];
                  bVar112 = pbVar39[0x49];
                  bVar113 = pbVar39[0x4a];
                  bVar114 = pbVar39[0x4b];
                  bVar115 = pbVar39[0x4c];
                  bVar116 = pbVar39[0x4d];
                  bVar117 = pbVar39[0x4e];
                  bVar118 = pbVar39[0x4f];
                  pbVar41[0x10] = bVar119;
                  pbVar41[0x11] = bVar120;
                  pbVar41[0x12] = bVar121;
                  pbVar41[0x13] = bVar122;
                  pbVar41[0x14] = bVar123;
                  pbVar41[0x15] = bVar124;
                  pbVar41[0x16] = bVar125;
                  pbVar41[0x17] = bVar126;
                  pbVar41[0x18] = bVar127;
                  pbVar41[0x19] = bVar128;
                  pbVar41[0x1a] = bVar129;
                  pbVar41[0x1b] = bVar130;
                  pbVar41[0x1c] = bVar131;
                  pbVar41[0x1d] = bVar132;
                  pbVar41[0x1e] = bVar133;
                  pbVar41[0x1f] = bVar134;
                  bVar119 = pbVar39[0x50];
                  bVar120 = pbVar39[0x51];
                  bVar121 = pbVar39[0x52];
                  bVar122 = pbVar39[0x53];
                  bVar123 = pbVar39[0x54];
                  bVar124 = pbVar39[0x55];
                  bVar125 = pbVar39[0x56];
                  bVar126 = pbVar39[0x57];
                  bVar127 = pbVar39[0x58];
                  bVar128 = pbVar39[0x59];
                  bVar129 = pbVar39[0x5a];
                  bVar130 = pbVar39[0x5b];
                  bVar131 = pbVar39[0x5c];
                  bVar132 = pbVar39[0x5d];
                  bVar133 = pbVar39[0x5e];
                  bVar134 = pbVar39[0x5f];
                  bVar71 = (bVar119 < bVar103) * bVar119 | (bVar119 >= bVar103) * bVar103;
                  bVar73 = (bVar120 < bVar104) * bVar120 | (bVar120 >= bVar104) * bVar104;
                  bVar75 = (bVar121 < bVar105) * bVar121 | (bVar121 >= bVar105) * bVar105;
                  bVar77 = (bVar122 < bVar106) * bVar122 | (bVar122 >= bVar106) * bVar106;
                  bVar79 = (bVar123 < bVar107) * bVar123 | (bVar123 >= bVar107) * bVar107;
                  bVar81 = (bVar124 < bVar108) * bVar124 | (bVar124 >= bVar108) * bVar108;
                  bVar83 = (bVar125 < bVar109) * bVar125 | (bVar125 >= bVar109) * bVar109;
                  bVar85 = (bVar126 < bVar110) * bVar126 | (bVar126 >= bVar110) * bVar110;
                  bVar87 = (bVar127 < bVar111) * bVar127 | (bVar127 >= bVar111) * bVar111;
                  bVar89 = (bVar128 < bVar112) * bVar128 | (bVar128 >= bVar112) * bVar112;
                  bVar91 = (bVar129 < bVar113) * bVar129 | (bVar129 >= bVar113) * bVar113;
                  bVar93 = (bVar130 < bVar114) * bVar130 | (bVar130 >= bVar114) * bVar114;
                  bVar95 = (bVar131 < bVar115) * bVar131 | (bVar131 >= bVar115) * bVar115;
                  bVar97 = (bVar132 < bVar116) * bVar132 | (bVar132 >= bVar116) * bVar116;
                  bVar99 = (bVar133 < bVar117) * bVar133 | (bVar133 >= bVar117) * bVar117;
                  bVar101 = (bVar134 < bVar118) * bVar134 | (bVar134 >= bVar118) * bVar118;
                  bVar135 = pbVar39[0x60];
                  bVar136 = pbVar39[0x61];
                  bVar137 = pbVar39[0x62];
                  bVar138 = pbVar39[99];
                  bVar139 = pbVar39[100];
                  bVar140 = pbVar39[0x65];
                  bVar141 = pbVar39[0x66];
                  bVar142 = pbVar39[0x67];
                  bVar143 = pbVar39[0x68];
                  bVar144 = pbVar39[0x69];
                  bVar145 = pbVar39[0x6a];
                  bVar146 = pbVar39[0x6b];
                  bVar147 = pbVar39[0x6c];
                  bVar148 = pbVar39[0x6d];
                  bVar149 = pbVar39[0x6e];
                  bVar150 = pbVar39[0x6f];
                  pbVar41[0x20] = bVar55;
                  pbVar41[0x21] = bVar56;
                  pbVar41[0x22] = bVar57;
                  pbVar41[0x23] = bVar58;
                  pbVar41[0x24] = bVar59;
                  pbVar41[0x25] = bVar60;
                  pbVar41[0x26] = bVar61;
                  pbVar41[0x27] = bVar62;
                  pbVar41[0x28] = bVar63;
                  pbVar41[0x29] = bVar64;
                  pbVar41[0x2a] = bVar65;
                  pbVar41[0x2b] = bVar66;
                  pbVar41[0x2c] = bVar67;
                  pbVar41[0x2d] = bVar68;
                  pbVar41[0x2e] = bVar69;
                  pbVar41[0x2f] = bVar70;
                  pbVar41[0x30] = bVar151;
                  pbVar41[0x31] = bVar152;
                  pbVar41[0x32] = bVar153;
                  pbVar41[0x33] = bVar154;
                  pbVar41[0x34] = bVar155;
                  pbVar41[0x35] = bVar156;
                  pbVar41[0x36] = bVar157;
                  pbVar41[0x37] = bVar158;
                  pbVar41[0x38] = bVar159;
                  pbVar41[0x39] = bVar160;
                  pbVar41[0x3a] = bVar161;
                  pbVar41[0x3b] = bVar162;
                  pbVar41[0x3c] = bVar163;
                  pbVar41[0x3d] = bVar164;
                  pbVar41[0x3e] = bVar165;
                  pbVar41[0x3f] = bVar166;
                  bVar151 = pbVar39[0x70];
                  bVar152 = pbVar39[0x71];
                  bVar153 = pbVar39[0x72];
                  bVar154 = pbVar39[0x73];
                  bVar155 = pbVar39[0x74];
                  bVar156 = pbVar39[0x75];
                  bVar157 = pbVar39[0x76];
                  bVar158 = pbVar39[0x77];
                  bVar159 = pbVar39[0x78];
                  bVar160 = pbVar39[0x79];
                  bVar161 = pbVar39[0x7a];
                  bVar162 = pbVar39[0x7b];
                  bVar163 = pbVar39[0x7c];
                  bVar164 = pbVar39[0x7d];
                  bVar165 = pbVar39[0x7e];
                  bVar166 = pbVar39[0x7f];
                  bVar55 = (bVar151 < bVar135) * bVar151 | (bVar151 >= bVar135) * bVar135;
                  bVar56 = (bVar152 < bVar136) * bVar152 | (bVar152 >= bVar136) * bVar136;
                  bVar57 = (bVar153 < bVar137) * bVar153 | (bVar153 >= bVar137) * bVar137;
                  bVar58 = (bVar154 < bVar138) * bVar154 | (bVar154 >= bVar138) * bVar138;
                  bVar59 = (bVar155 < bVar139) * bVar155 | (bVar155 >= bVar139) * bVar139;
                  bVar60 = (bVar156 < bVar140) * bVar156 | (bVar156 >= bVar140) * bVar140;
                  bVar61 = (bVar157 < bVar141) * bVar157 | (bVar157 >= bVar141) * bVar141;
                  bVar62 = (bVar158 < bVar142) * bVar158 | (bVar158 >= bVar142) * bVar142;
                  bVar63 = (bVar159 < bVar143) * bVar159 | (bVar159 >= bVar143) * bVar143;
                  bVar64 = (bVar160 < bVar144) * bVar160 | (bVar160 >= bVar144) * bVar144;
                  bVar65 = (bVar161 < bVar145) * bVar161 | (bVar161 >= bVar145) * bVar145;
                  bVar66 = (bVar162 < bVar146) * bVar162 | (bVar162 >= bVar146) * bVar146;
                  bVar67 = (bVar163 < bVar147) * bVar163 | (bVar163 >= bVar147) * bVar147;
                  bVar68 = (bVar164 < bVar148) * bVar164 | (bVar164 >= bVar148) * bVar148;
                  bVar69 = (bVar165 < bVar149) * bVar165 | (bVar165 >= bVar149) * bVar149;
                  bVar70 = (bVar166 < bVar150) * bVar166 | (bVar166 >= bVar150) * bVar150;
                  cVar72 = -((byte)((bVar71 < bVar55) * bVar71 | (bVar71 >= bVar55) * bVar55) ==
                            auVar48[0]);
                  cVar74 = -((byte)((bVar73 < bVar56) * bVar73 | (bVar73 >= bVar56) * bVar56) ==
                            auVar48[1]);
                  cVar76 = -((byte)((bVar75 < bVar57) * bVar75 | (bVar75 >= bVar57) * bVar57) ==
                            auVar48[2]);
                  cVar78 = -((byte)((bVar77 < bVar58) * bVar77 | (bVar77 >= bVar58) * bVar58) ==
                            auVar48[3]);
                  cVar80 = -((byte)((bVar79 < bVar59) * bVar79 | (bVar79 >= bVar59) * bVar59) ==
                            auVar48[4]);
                  cVar82 = -((byte)((bVar81 < bVar60) * bVar81 | (bVar81 >= bVar60) * bVar60) ==
                            auVar48[5]);
                  cVar84 = -((byte)((bVar83 < bVar61) * bVar83 | (bVar83 >= bVar61) * bVar61) ==
                            auVar48[6]);
                  cVar86 = -((byte)((bVar85 < bVar62) * bVar85 | (bVar85 >= bVar62) * bVar62) ==
                            auVar48[7]);
                  cVar88 = -((byte)((bVar87 < bVar63) * bVar87 | (bVar87 >= bVar63) * bVar63) ==
                            auVar48[8]);
                  cVar90 = -((byte)((bVar89 < bVar64) * bVar89 | (bVar89 >= bVar64) * bVar64) ==
                            auVar48[9]);
                  cVar92 = -((byte)((bVar91 < bVar65) * bVar91 | (bVar91 >= bVar65) * bVar65) ==
                            auVar48[10]);
                  cVar94 = -((byte)((bVar93 < bVar66) * bVar93 | (bVar93 >= bVar66) * bVar66) ==
                            auVar48[0xb]);
                  cVar96 = -((byte)((bVar95 < bVar67) * bVar95 | (bVar95 >= bVar67) * bVar67) ==
                            auVar48[0xc]);
                  cVar98 = -((byte)((bVar97 < bVar68) * bVar97 | (bVar97 >= bVar68) * bVar68) ==
                            auVar48[0xd]);
                  cVar100 = -((byte)((bVar99 < bVar69) * bVar99 | (bVar99 >= bVar69) * bVar69) ==
                             auVar48[0xe]);
                  cVar102 = -((byte)((bVar101 < bVar70) * bVar101 | (bVar101 >= bVar70) * bVar70) ==
                             auVar48[0xf]);
                  auVar7[1] = cVar74;
                  auVar7[0] = cVar72;
                  auVar7[2] = cVar76;
                  auVar7[3] = cVar78;
                  auVar7[4] = cVar80;
                  auVar7[5] = cVar82;
                  auVar7[6] = cVar84;
                  auVar7[7] = cVar86;
                  auVar7[8] = cVar88;
                  auVar7[9] = cVar90;
                  auVar7[10] = cVar92;
                  auVar7[0xb] = cVar94;
                  auVar7[0xc] = cVar96;
                  auVar7[0xd] = cVar98;
                  auVar7[0xe] = cVar100;
                  auVar7[0xf] = cVar102;
                  auVar8[1] = cVar74;
                  auVar8[0] = cVar72;
                  auVar8[2] = cVar76;
                  auVar8[3] = cVar78;
                  auVar8[4] = cVar80;
                  auVar8[5] = cVar82;
                  auVar8[6] = cVar84;
                  auVar8[7] = cVar86;
                  auVar8[8] = cVar88;
                  auVar8[9] = cVar90;
                  auVar8[10] = cVar92;
                  auVar8[0xb] = cVar94;
                  auVar8[0xc] = cVar96;
                  auVar8[0xd] = cVar98;
                  auVar8[0xe] = cVar100;
                  auVar8[0xf] = cVar102;
                  auVar16[1] = cVar78;
                  auVar16[0] = cVar76;
                  auVar16[2] = cVar80;
                  auVar16[3] = cVar82;
                  auVar16[4] = cVar84;
                  auVar16[5] = cVar86;
                  auVar16[6] = cVar88;
                  auVar16[7] = cVar90;
                  auVar16[8] = cVar92;
                  auVar16[9] = cVar94;
                  auVar16[10] = cVar96;
                  auVar16[0xb] = cVar98;
                  auVar16[0xc] = cVar100;
                  auVar16[0xd] = cVar102;
                  auVar14[1] = cVar80;
                  auVar14[0] = cVar78;
                  auVar14[2] = cVar82;
                  auVar14[3] = cVar84;
                  auVar14[4] = cVar86;
                  auVar14[5] = cVar88;
                  auVar14[6] = cVar90;
                  auVar14[7] = cVar92;
                  auVar14[8] = cVar94;
                  auVar14[9] = cVar96;
                  auVar14[10] = cVar98;
                  auVar14[0xb] = cVar100;
                  auVar14[0xc] = cVar102;
                  auVar12[1] = cVar82;
                  auVar12[0] = cVar80;
                  auVar12[2] = cVar84;
                  auVar12[3] = cVar86;
                  auVar12[4] = cVar88;
                  auVar12[5] = cVar90;
                  auVar12[6] = cVar92;
                  auVar12[7] = cVar94;
                  auVar12[8] = cVar96;
                  auVar12[9] = cVar98;
                  auVar12[10] = cVar100;
                  auVar12[0xb] = cVar102;
                  auVar10[1] = cVar84;
                  auVar10[0] = cVar82;
                  auVar10[2] = cVar86;
                  auVar10[3] = cVar88;
                  auVar10[4] = cVar90;
                  auVar10[5] = cVar92;
                  auVar10[6] = cVar94;
                  auVar10[7] = cVar96;
                  auVar10[8] = cVar98;
                  auVar10[9] = cVar100;
                  auVar10[10] = cVar102;
                  pbVar39 = pbVar38;
                  pbVar41 = pbVar40;
                  bVar55 = bVar135;
                  bVar56 = bVar136;
                  bVar57 = bVar137;
                  bVar58 = bVar138;
                  bVar59 = bVar139;
                  bVar60 = bVar140;
                  bVar61 = bVar141;
                  bVar62 = bVar142;
                  bVar63 = bVar143;
                  bVar64 = bVar144;
                  bVar65 = bVar145;
                  bVar66 = bVar146;
                  bVar67 = bVar147;
                  bVar68 = bVar148;
                  bVar69 = bVar149;
                  bVar70 = bVar150;
                } while (((((((((auVar7 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                               (auVar8 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                              (auVar16 >> 7 & (undefined1  [14])0x1) == (undefined1  [14])0x0) &&
                             (auVar14 >> 7 & (undefined1  [13])0x1) == (undefined1  [13])0x0) &&
                            (auVar12 >> 7 & (undefined1  [12])0x1) == (undefined1  [12])0x0) &&
                           (auVar10 >> 7 & (undefined1  [11])0x1) == (undefined1  [11])0x0) &&
                          (CONCAT19(cVar102,CONCAT18(cVar100,CONCAT17(cVar98,CONCAT16(cVar96,
                                                  CONCAT15(cVar94,CONCAT14(cVar92,CONCAT13(cVar90,
                                                  CONCAT12(cVar88,CONCAT11(cVar86,cVar84))))))))) >>
                           7 & 1) == 0) &&
                         (CONCAT18(cVar102,CONCAT17(cVar100,CONCAT16(cVar98,CONCAT15(cVar96,CONCAT14
                                                  (cVar94,CONCAT13(cVar92,CONCAT12(cVar90,CONCAT11(
                                                  cVar88,cVar86)))))))) >> 7 & 1) == 0) &&
                         -1 < cVar102);
              }
              auVar49[0] = -(auVar48[0] == bVar103);
              auVar49[1] = -(auVar48[1] == bVar104);
              auVar49[2] = -(auVar48[2] == bVar105);
              auVar49[3] = -(auVar48[3] == bVar106);
              auVar49[4] = -(auVar48[4] == bVar107);
              auVar49[5] = -(auVar48[5] == bVar108);
              auVar49[6] = -(auVar48[6] == bVar109);
              auVar49[7] = -(auVar48[7] == bVar110);
              auVar49[8] = -(auVar48[8] == bVar111);
              auVar49[9] = -(auVar48[9] == bVar112);
              auVar49[10] = -(auVar48[10] == bVar113);
              auVar49[0xb] = -(auVar48[0xb] == bVar114);
              auVar49[0xc] = -(auVar48[0xc] == bVar115);
              auVar49[0xd] = -(auVar48[0xd] == bVar116);
              auVar49[0xe] = -(auVar48[0xe] == bVar117);
              auVar49[0xf] = -(auVar48[0xf] == bVar118);
              auVar53[0] = -(bVar119 == 0);
              auVar53[1] = -(bVar120 == 0);
              auVar53[2] = -(bVar121 == 0);
              auVar53[3] = -(bVar122 == 0);
              auVar53[4] = -(bVar123 == 0);
              auVar53[5] = -(bVar124 == 0);
              auVar53[6] = -(bVar125 == 0);
              auVar53[7] = -(bVar126 == 0);
              auVar53[8] = -(bVar127 == 0);
              auVar53[9] = -(bVar128 == 0);
              auVar53[10] = -(bVar129 == 0);
              auVar53[0xb] = -(bVar130 == 0);
              auVar53[0xc] = -(bVar131 == 0);
              auVar53[0xd] = -(bVar132 == 0);
              auVar53[0xe] = -(bVar133 == 0);
              auVar53[0xf] = -(bVar134 == 0);
              uVar3 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                      (ushort)(auVar49[0xf] >> 7) << 0xf;
              uVar4 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar53[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                lVar34 = 0;
                if (uVar3 != 0) {
                  for (; (uVar3 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
                  }
                }
                    /* WARNING: Could not recover jumptable at 0x00748ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))();
                return;
              }
              if (uVar4 != 0) {
                lVar34 = 0;
                if (uVar4 != 0) {
                  for (; (uVar4 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
                  }
                }
                *pbVar40 = bVar103;
                pbVar40[1] = bVar104;
                pbVar40[2] = bVar105;
                pbVar40[3] = bVar106;
                pbVar40[4] = bVar107;
                pbVar40[5] = bVar108;
                pbVar40[6] = bVar109;
                pbVar40[7] = bVar110;
                pbVar40[8] = bVar111;
                pbVar40[9] = bVar112;
                pbVar40[10] = bVar113;
                pbVar40[0xb] = bVar114;
                pbVar40[0xc] = bVar115;
                pbVar40[0xd] = bVar116;
                pbVar40[0xe] = bVar117;
                pbVar40[0xf] = bVar118;
                    /* WARNING: Could not recover jumptable at 0x00748ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
                          (pbVar40 + 0x10,pbVar38 + 0x10,lVar34,
                           &DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4));
                return;
              }
              auVar50[0] = -(auVar49[0] == bVar135);
              auVar50[1] = -(auVar49[1] == bVar136);
              auVar50[2] = -(auVar49[2] == bVar137);
              auVar50[3] = -(auVar49[3] == bVar138);
              auVar50[4] = -(auVar49[4] == bVar139);
              auVar50[5] = -(auVar49[5] == bVar140);
              auVar50[6] = -(auVar49[6] == bVar141);
              auVar50[7] = -(auVar49[7] == bVar142);
              auVar50[8] = -(auVar49[8] == bVar143);
              auVar50[9] = -(auVar49[9] == bVar144);
              auVar50[10] = -(auVar49[10] == bVar145);
              auVar50[0xb] = -(auVar49[0xb] == bVar146);
              auVar50[0xc] = -(auVar49[0xc] == bVar147);
              auVar50[0xd] = -(auVar49[0xd] == bVar148);
              auVar50[0xe] = -(auVar49[0xe] == bVar149);
              auVar50[0xf] = -(auVar49[0xf] == bVar150);
              auVar54[0] = -(auVar53[0] == bVar151);
              auVar54[1] = -(auVar53[1] == bVar152);
              auVar54[2] = -(auVar53[2] == bVar153);
              auVar54[3] = -(auVar53[3] == bVar154);
              auVar54[4] = -(auVar53[4] == bVar155);
              auVar54[5] = -(auVar53[5] == bVar156);
              auVar54[6] = -(auVar53[6] == bVar157);
              auVar54[7] = -(auVar53[7] == bVar158);
              auVar54[8] = -(auVar53[8] == bVar159);
              auVar54[9] = -(auVar53[9] == bVar160);
              auVar54[10] = -(auVar53[10] == bVar161);
              auVar54[0xb] = -(auVar53[0xb] == bVar162);
              auVar54[0xc] = -(auVar53[0xc] == bVar163);
              auVar54[0xd] = -(auVar53[0xd] == bVar164);
              auVar54[0xe] = -(auVar53[0xe] == bVar165);
              auVar54[0xf] = -(auVar53[0xf] == bVar166);
              uVar3 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                      (ushort)(auVar50[0xf] >> 7) << 0xf;
              uVar4 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar54[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                lVar34 = 0;
                if (uVar3 != 0) {
                  for (; (uVar3 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
                  }
                }
                *pbVar40 = bVar103;
                pbVar40[1] = bVar104;
                pbVar40[2] = bVar105;
                pbVar40[3] = bVar106;
                pbVar40[4] = bVar107;
                pbVar40[5] = bVar108;
                pbVar40[6] = bVar109;
                pbVar40[7] = bVar110;
                pbVar40[8] = bVar111;
                pbVar40[9] = bVar112;
                pbVar40[10] = bVar113;
                pbVar40[0xb] = bVar114;
                pbVar40[0xc] = bVar115;
                pbVar40[0xd] = bVar116;
                pbVar40[0xe] = bVar117;
                pbVar40[0xf] = bVar118;
                pbVar40[0x10] = bVar119;
                pbVar40[0x11] = bVar120;
                pbVar40[0x12] = bVar121;
                pbVar40[0x13] = bVar122;
                pbVar40[0x14] = bVar123;
                pbVar40[0x15] = bVar124;
                pbVar40[0x16] = bVar125;
                pbVar40[0x17] = bVar126;
                pbVar40[0x18] = bVar127;
                pbVar40[0x19] = bVar128;
                pbVar40[0x1a] = bVar129;
                pbVar40[0x1b] = bVar130;
                pbVar40[0x1c] = bVar131;
                pbVar40[0x1d] = bVar132;
                pbVar40[0x1e] = bVar133;
                pbVar40[0x1f] = bVar134;
                    /* WARNING: Could not recover jumptable at 0x00748d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
                          (pbVar40 + 0x20,pbVar38 + 0x20,lVar34,
                           &DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4));
                return;
              }
              lVar34 = 0;
              if (uVar4 != 0) {
                for (; (uVar4 >> lVar34 & 1) == 0; lVar34 = lVar34 + 1) {
                }
              }
              *pbVar40 = bVar103;
              pbVar40[1] = bVar104;
              pbVar40[2] = bVar105;
              pbVar40[3] = bVar106;
              pbVar40[4] = bVar107;
              pbVar40[5] = bVar108;
              pbVar40[6] = bVar109;
              pbVar40[7] = bVar110;
              pbVar40[8] = bVar111;
              pbVar40[9] = bVar112;
              pbVar40[10] = bVar113;
              pbVar40[0xb] = bVar114;
              pbVar40[0xc] = bVar115;
              pbVar40[0xd] = bVar116;
              pbVar40[0xe] = bVar117;
              pbVar40[0xf] = bVar118;
              pbVar40[0x10] = bVar119;
              pbVar40[0x11] = bVar120;
              pbVar40[0x12] = bVar121;
              pbVar40[0x13] = bVar122;
              pbVar40[0x14] = bVar123;
              pbVar40[0x15] = bVar124;
              pbVar40[0x16] = bVar125;
              pbVar40[0x17] = bVar126;
              pbVar40[0x18] = bVar127;
              pbVar40[0x19] = bVar128;
              pbVar40[0x1a] = bVar129;
              pbVar40[0x1b] = bVar130;
              pbVar40[0x1c] = bVar131;
              pbVar40[0x1d] = bVar132;
              pbVar40[0x1e] = bVar133;
              pbVar40[0x1f] = bVar134;
              pbVar40[0x20] = bVar135;
              pbVar40[0x21] = bVar136;
              pbVar40[0x22] = bVar137;
              pbVar40[0x23] = bVar138;
              pbVar40[0x24] = bVar139;
              pbVar40[0x25] = bVar140;
              pbVar40[0x26] = bVar141;
              pbVar40[0x27] = bVar142;
              pbVar40[0x28] = bVar143;
              pbVar40[0x29] = bVar144;
              pbVar40[0x2a] = bVar145;
              pbVar40[0x2b] = bVar146;
              pbVar40[0x2c] = bVar147;
              pbVar40[0x2d] = bVar148;
              pbVar40[0x2e] = bVar149;
              pbVar40[0x2f] = bVar150;
                    /* WARNING: Could not recover jumptable at 0x00748bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4)))
                        (pbVar40 + 0x30,pbVar38 + 0x30,lVar34,
                         &DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar34 * 4));
              return;
            }
          }
        }
      }
    }
  }
  lVar1 = 0;
  if (uVar35 != 0) {
    for (; (uVar35 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00748c29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar1 * 4)))
            ((long)param_1 + (lVar34 - uVar33),uVar37 + lVar34,lVar1,
             &DAT_0082c004 + *(int *)(&DAT_0082c004 + lVar1 * 4));
  return;
}

