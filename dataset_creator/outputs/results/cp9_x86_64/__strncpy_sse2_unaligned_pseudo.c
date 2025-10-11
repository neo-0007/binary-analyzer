
undefined1 (*) [16]
__strncpy_sse2_unaligned(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [11];
  undefined1 auVar7 [11];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined8 uVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort uVar17;
  ulong uVar18;
  char *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
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
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  char cVar80;
  byte bVar81;
  byte bVar82;
  char cVar83;
  byte bVar84;
  byte bVar85;
  char cVar86;
  byte bVar87;
  byte bVar88;
  char cVar89;
  byte bVar90;
  byte bVar91;
  char cVar92;
  byte bVar93;
  byte bVar94;
  char cVar95;
  byte bVar96;
  byte bVar97;
  char cVar98;
  byte bVar99;
  byte bVar100;
  char cVar101;
  byte bVar102;
  byte bVar103;
  char cVar104;
  byte bVar105;
  byte bVar106;
  char cVar107;
  byte bVar108;
  byte bVar109;
  char cVar110;
  byte bVar111;
  byte bVar112;
  char cVar113;
  byte bVar114;
  byte bVar115;
  char cVar116;
  byte bVar117;
  byte bVar118;
  char cVar119;
  byte bVar120;
  byte bVar121;
  char cVar122;
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
  
  if (param_3 == 0) {
    return param_1;
  }
  if (((ulong)param_2 & 0x3f) < 0x21) {
    auVar44 = *param_2;
    auVar31 = param_2[1];
    auVar39[0] = -(auVar44[0] == '\0');
    auVar39[1] = -(auVar44[1] == '\0');
    auVar39[2] = -(auVar44[2] == '\0');
    auVar39[3] = -(auVar44[3] == '\0');
    auVar39[4] = -(auVar44[4] == '\0');
    auVar39[5] = -(auVar44[5] == '\0');
    auVar39[6] = -(auVar44[6] == '\0');
    auVar39[7] = -(auVar44[7] == '\0');
    auVar39[8] = -(auVar44[8] == '\0');
    auVar39[9] = -(auVar44[9] == '\0');
    auVar39[10] = -(auVar44[10] == '\0');
    auVar39[0xb] = -(auVar44[0xb] == '\0');
    auVar39[0xc] = -(auVar44[0xc] == '\0');
    auVar39[0xd] = -(auVar44[0xd] == '\0');
    auVar39[0xe] = -(auVar44[0xe] == '\0');
    auVar39[0xf] = -(auVar44[0xf] == '\0');
    uVar24 = (ulong)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar39[0xf] >> 7) << 0xf);
    if (0x11 < param_3) {
      if (uVar24 != 0) {
LAB_0073e2cc:
        lVar27 = 0;
        if (uVar24 != 0) {
          for (; (uVar24 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0073e2df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pauVar23 = (undefined1 (*) [16])
                   (*(code *)(&DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4)))
                             (param_1,param_2,lVar27,
                              &DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4),param_3);
        return pauVar23;
      }
      auVar30[0] = -(auVar39[0] == auVar31[0]);
      auVar30[1] = -(auVar39[1] == auVar31[1]);
      auVar30[2] = -(auVar39[2] == auVar31[2]);
      auVar30[3] = -(auVar39[3] == auVar31[3]);
      auVar30[4] = -(auVar39[4] == auVar31[4]);
      auVar30[5] = -(auVar39[5] == auVar31[5]);
      auVar30[6] = -(auVar39[6] == auVar31[6]);
      auVar30[7] = -(auVar39[7] == auVar31[7]);
      auVar30[8] = -(auVar39[8] == auVar31[8]);
      auVar30[9] = -(auVar39[9] == auVar31[9]);
      auVar30[10] = -(auVar39[10] == auVar31[10]);
      auVar30[0xb] = -(auVar39[0xb] == auVar31[0xb]);
      auVar30[0xc] = -(auVar39[0xc] == auVar31[0xc]);
      auVar30[0xd] = -(auVar39[0xd] == auVar31[0xd]);
      auVar30[0xe] = -(auVar39[0xe] == auVar31[0xe]);
      auVar30[0xf] = -(auVar39[0xf] == auVar31[0xf]);
      *param_1 = auVar44;
      uVar24 = (ulong)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar30[0xf] >> 7) << 0xf);
      if (0x21 < param_3) {
        if (uVar24 != 0) {
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
          param_3 = param_3 - 0x10;
          goto LAB_0073e2cc;
        }
        goto LAB_0073e030;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 - 0x10;
    }
    if (uVar24 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0073e524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))();
      return pauVar23;
    }
    uVar16 = 0;
    if (uVar24 != 0) {
      for (; (uVar24 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
      }
    }
    if (param_3 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0073e483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))
                           (param_1,param_2,uVar16,
                            &DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4));
      return pauVar23;
    }
    goto LAB_0073e3d0;
  }
  pcVar19 = (char *)((ulong)param_2 & 0xfffffffffffffff0);
  uVar16 = (ulong)param_2 & 0xf;
  auVar44[0] = -(*pcVar19 == '\0');
  auVar44[1] = -(pcVar19[1] == '\0');
  auVar44[2] = -(pcVar19[2] == '\0');
  auVar44[3] = -(pcVar19[3] == '\0');
  auVar44[4] = -(pcVar19[4] == '\0');
  auVar44[5] = -(pcVar19[5] == '\0');
  auVar44[6] = -(pcVar19[6] == '\0');
  auVar44[7] = -(pcVar19[7] == '\0');
  auVar44[8] = -(pcVar19[8] == '\0');
  auVar44[9] = -(pcVar19[9] == '\0');
  auVar44[10] = -(pcVar19[10] == '\0');
  auVar44[0xb] = -(pcVar19[0xb] == '\0');
  auVar44[0xc] = -(pcVar19[0xc] == '\0');
  auVar44[0xd] = -(pcVar19[0xd] == '\0');
  auVar44[0xe] = -(pcVar19[0xe] == '\0');
  auVar44[0xf] = -(pcVar19[0xf] == '\0');
  uVar17 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                   (ushort)(auVar44[0xf] >> 7) << 0xf) >> (sbyte)uVar16;
  if (param_3 <= -uVar16 + 0x11) {
    if (uVar17 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0073e4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))
                           (param_1,pcVar19 + uVar16,0,
                            &DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4));
      return pauVar23;
    }
    param_2 = (undefined1 (*) [16])(pcVar19 + uVar16);
    uVar16 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
      }
    }
    if (param_3 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0073e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))
                           (param_1,param_2,uVar16,
                            &DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4));
      return pauVar23;
    }
    goto LAB_0073e3d0;
  }
  if (uVar17 != 0) {
    lVar27 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0073e2b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar23 = (undefined1 (*) [16])
               (*(code *)(&DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4)))
                         (param_1,pcVar19 + uVar16,lVar27,
                          &DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4));
    return pauVar23;
  }
  auVar30[0] = -(pcVar19[0x10] == '\0');
  auVar30[1] = -(pcVar19[0x11] == '\0');
  auVar30[2] = -(pcVar19[0x12] == '\0');
  auVar30[3] = -(pcVar19[0x13] == '\0');
  auVar30[4] = -(pcVar19[0x14] == '\0');
  auVar30[5] = -(pcVar19[0x15] == '\0');
  auVar30[6] = -(pcVar19[0x16] == '\0');
  auVar30[7] = -(pcVar19[0x17] == '\0');
  auVar30[8] = -(pcVar19[0x18] == '\0');
  auVar30[9] = -(pcVar19[0x19] == '\0');
  auVar30[10] = -(pcVar19[0x1a] == '\0');
  auVar30[0xb] = -(pcVar19[0x1b] == '\0');
  auVar30[0xc] = -(pcVar19[0x1c] == '\0');
  auVar30[0xd] = -(pcVar19[0x1d] == '\0');
  auVar30[0xe] = -(pcVar19[0x1e] == '\0');
  auVar30[0xf] = -(pcVar19[0x1f] == '\0');
  uVar17 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  if (param_3 <= -uVar16 + 0x21) {
    if (uVar17 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0073e4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))
                           (param_1,pcVar19 + uVar16,0,
                            &DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4));
      return pauVar23;
    }
    param_2 = (undefined1 (*) [16])(pcVar19 + uVar16);
    lVar27 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
    uVar16 = (lVar27 + 0x10) - uVar16;
    if (param_3 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0073e442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4)))
                           (param_1,param_2,uVar16,
                            &DAT_00821d10 + *(int *)(&DAT_00821d10 + param_3 * 4));
      return pauVar23;
    }
    goto LAB_0073e3d0;
  }
  if (uVar17 != 0) {
    lVar27 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
      }
    }
    lVar27 = (lVar27 + 0x10) - uVar16;
                    /* WARNING: Could not recover jumptable at 0x0073e30d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar23 = (undefined1 (*) [16])
               (*(code *)(&DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4)))
                         (param_1,pcVar19 + uVar16,lVar27,
                          &DAT_00821c90 + *(int *)(&DAT_00821c90 + lVar27 * 4));
    return pauVar23;
  }
  uVar14 = *(undefined8 *)(pcVar19 + uVar16 + 8);
  *(undefined8 *)*param_1 = *(undefined8 *)(pcVar19 + uVar16);
  *(undefined8 *)(*param_1 + 8) = uVar14;
LAB_0073e030:
  uVar24 = (ulong)param_2 & 0xf;
  pbVar20 = (byte *)((ulong)param_2 & 0xfffffffffffffff0);
  pbVar22 = (byte *)((long)param_1 - uVar24);
  uVar24 = param_3 + uVar24 | -(ulong)CARRY8(param_3,uVar24);
  uVar14 = *(undefined8 *)(pbVar20 + 0x18);
  bVar48 = pbVar20[0x20];
  bVar50 = pbVar20[0x21];
  bVar52 = pbVar20[0x22];
  bVar54 = pbVar20[0x23];
  bVar56 = pbVar20[0x24];
  bVar58 = pbVar20[0x25];
  bVar60 = pbVar20[0x26];
  bVar62 = pbVar20[0x27];
  bVar64 = pbVar20[0x28];
  bVar66 = pbVar20[0x29];
  bVar68 = pbVar20[0x2a];
  bVar70 = pbVar20[0x2b];
  bVar72 = pbVar20[0x2c];
  bVar74 = pbVar20[0x2d];
  bVar76 = pbVar20[0x2e];
  bVar78 = pbVar20[0x2f];
  *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)(pbVar20 + 0x10);
  *(undefined8 *)(pbVar22 + 0x18) = uVar14;
  auVar31[0] = -(auVar30[0] == bVar48);
  auVar31[1] = -(auVar30[1] == bVar50);
  auVar31[2] = -(auVar30[2] == bVar52);
  auVar31[3] = -(auVar30[3] == bVar54);
  auVar31[4] = -(auVar30[4] == bVar56);
  auVar31[5] = -(auVar30[5] == bVar58);
  auVar31[6] = -(auVar30[6] == bVar60);
  auVar31[7] = -(auVar30[7] == bVar62);
  auVar31[8] = -(auVar30[8] == bVar64);
  auVar31[9] = -(auVar30[9] == bVar66);
  auVar31[10] = -(auVar30[10] == bVar68);
  auVar31[0xb] = -(auVar30[0xb] == bVar70);
  auVar31[0xc] = -(auVar30[0xc] == bVar72);
  auVar31[0xd] = -(auVar30[0xd] == bVar74);
  auVar31[0xe] = -(auVar30[0xe] == bVar76);
  auVar31[0xf] = -(auVar30[0xf] == bVar78);
  uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar31[0xf] >> 7) << 0xf);
  uVar16 = 0x20;
  uVar25 = uVar24 - 0x30;
  pbVar21 = pbVar20;
  if (0x2f < uVar24 && uVar25 != 0) {
    if (uVar18 != 0) {
LAB_0073edc0:
      pbVar21 = pbVar22 + uVar16;
      *pbVar21 = bVar48;
      pbVar21[1] = bVar50;
      pbVar21[2] = bVar52;
      pbVar21[3] = bVar54;
      pbVar21[4] = bVar56;
      pbVar21[5] = bVar58;
      pbVar21[6] = bVar60;
      pbVar21[7] = bVar62;
      pbVar21[8] = bVar64;
      pbVar21[9] = bVar66;
      pbVar21[10] = bVar68;
      pbVar21[0xb] = bVar70;
      pbVar21[0xc] = bVar72;
      pbVar21[0xd] = bVar74;
      pbVar21[0xe] = bVar76;
      pbVar21[0xf] = bVar78;
LAB_0073edd0:
      lVar27 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
        }
      }
      uVar24 = (uVar25 + 0xf) - lVar27;
      pauVar23 = (undefined1 (*) [16])(pbVar22 + lVar27 + uVar16 + 1);
LAB_0073edf0:
      lVar27 = uVar24 - 0x10;
      if (0xf < uVar24 && lVar27 != 0) {
        *pauVar23 = (undefined1  [16])0x0;
        uVar16 = (ulong)(pauVar23 + 1) & 0xf;
        pauVar23 = (undefined1 (*) [16])((long)(pauVar23 + 1) - uVar16);
        uVar24 = lVar27 + uVar16;
        while (0x3f < uVar24) {
          *pauVar23 = (undefined1  [16])0x0;
          pauVar23[1] = (undefined1  [16])0x0;
          pauVar23[2] = (undefined1  [16])0x0;
          pauVar23[3] = (undefined1  [16])0x0;
          pauVar23 = pauVar23 + 4;
          uVar24 = uVar24 - 0x40;
        }
        lVar28 = uVar24 - 0x20;
        if (SCARRY8(uVar24 - 0x40,0x20) == lVar28 < 0) {
          *pauVar23 = (undefined1  [16])0x0;
          pauVar23[1] = (undefined1  [16])0x0;
          lVar27 = uVar24 - 0x30;
          if (0xf < lVar28) {
            pauVar23[2] = (undefined1  [16])0x0;
                    /* WARNING: Could not recover jumptable at 0x0073ee69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar23 = (undefined1 (*) [16])
                       (*(code *)(&DAT_00821da0 + *(int *)(&DAT_00821da0 + lVar27 * 4)))
                                 (pauVar23 + 3,uVar16,0,
                                  &DAT_00821da0 + *(int *)(&DAT_00821da0 + lVar27 * 4));
            return pauVar23;
          }
        }
        else {
          lVar27 = uVar24 - 0x10;
          if (SCARRY8(lVar28,0x10) == lVar27 < 0) {
            *pauVar23 = (undefined1  [16])0x0;
                    /* WARNING: Could not recover jumptable at 0x0073ee89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar23 = (undefined1 (*) [16])
                       (*(code *)(&DAT_00821da0 + *(int *)(&DAT_00821da0 + lVar27 * 4)))
                                 (pauVar23 + 1,uVar16,0,
                                  &DAT_00821da0 + *(int *)(&DAT_00821da0 + lVar27 * 4));
            return pauVar23;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0073ee9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar23 = (undefined1 (*) [16])
                 (*(code *)(&DAT_00821da0 + *(int *)(&DAT_00821da0 + (lVar27 + 0x10) * 4)))();
      return pauVar23;
    }
    bVar81 = pbVar20[0x30];
    bVar84 = pbVar20[0x31];
    bVar87 = pbVar20[0x32];
    bVar90 = pbVar20[0x33];
    bVar93 = pbVar20[0x34];
    bVar96 = pbVar20[0x35];
    bVar99 = pbVar20[0x36];
    bVar102 = pbVar20[0x37];
    bVar105 = pbVar20[0x38];
    bVar108 = pbVar20[0x39];
    bVar111 = pbVar20[0x3a];
    bVar114 = pbVar20[0x3b];
    bVar117 = pbVar20[0x3c];
    bVar120 = pbVar20[0x3d];
    bVar123 = pbVar20[0x3e];
    bVar125 = pbVar20[0x3f];
    pbVar22[0x20] = bVar48;
    pbVar22[0x21] = bVar50;
    pbVar22[0x22] = bVar52;
    pbVar22[0x23] = bVar54;
    pbVar22[0x24] = bVar56;
    pbVar22[0x25] = bVar58;
    pbVar22[0x26] = bVar60;
    pbVar22[0x27] = bVar62;
    pbVar22[0x28] = bVar64;
    pbVar22[0x29] = bVar66;
    pbVar22[0x2a] = bVar68;
    pbVar22[0x2b] = bVar70;
    pbVar22[0x2c] = bVar72;
    pbVar22[0x2d] = bVar74;
    pbVar22[0x2e] = bVar76;
    pbVar22[0x2f] = bVar78;
    auVar32[0] = -(auVar31[0] == bVar81);
    auVar32[1] = -(auVar31[1] == bVar84);
    auVar32[2] = -(auVar31[2] == bVar87);
    auVar32[3] = -(auVar31[3] == bVar90);
    auVar32[4] = -(auVar31[4] == bVar93);
    auVar32[5] = -(auVar31[5] == bVar96);
    auVar32[6] = -(auVar31[6] == bVar99);
    auVar32[7] = -(auVar31[7] == bVar102);
    auVar32[8] = -(auVar31[8] == bVar105);
    auVar32[9] = -(auVar31[9] == bVar108);
    auVar32[10] = -(auVar31[10] == bVar111);
    auVar32[0xb] = -(auVar31[0xb] == bVar114);
    auVar32[0xc] = -(auVar31[0xc] == bVar117);
    auVar32[0xd] = -(auVar31[0xd] == bVar120);
    auVar32[0xe] = -(auVar31[0xe] == bVar123);
    auVar32[0xf] = -(auVar31[0xf] == bVar125);
    uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar32[0xf] >> 7) << 0xf);
    uVar16 = 0x30;
    bVar29 = 0xf < uVar25;
    uVar25 = uVar24 - 0x40;
    if (bVar29 && uVar25 != 0) {
      if (uVar18 != 0) {
LAB_0073e3b0:
        pbVar21 = pbVar22 + uVar16;
        *pbVar21 = bVar81;
        pbVar21[1] = bVar84;
        pbVar21[2] = bVar87;
        pbVar21[3] = bVar90;
        pbVar21[4] = bVar93;
        pbVar21[5] = bVar96;
        pbVar21[6] = bVar99;
        pbVar21[7] = bVar102;
        pbVar21[8] = bVar105;
        pbVar21[9] = bVar108;
        pbVar21[10] = bVar111;
        pbVar21[0xb] = bVar114;
        pbVar21[0xc] = bVar117;
        pbVar21[0xd] = bVar120;
        pbVar21[0xe] = bVar123;
        pbVar21[0xf] = bVar125;
        goto LAB_0073edd0;
      }
      bVar48 = pbVar20[0x40];
      bVar50 = pbVar20[0x41];
      bVar52 = pbVar20[0x42];
      bVar54 = pbVar20[0x43];
      bVar56 = pbVar20[0x44];
      bVar58 = pbVar20[0x45];
      bVar60 = pbVar20[0x46];
      bVar62 = pbVar20[0x47];
      bVar64 = pbVar20[0x48];
      bVar66 = pbVar20[0x49];
      bVar68 = pbVar20[0x4a];
      bVar70 = pbVar20[0x4b];
      bVar72 = pbVar20[0x4c];
      bVar74 = pbVar20[0x4d];
      bVar76 = pbVar20[0x4e];
      bVar78 = pbVar20[0x4f];
      pbVar22[0x30] = bVar81;
      pbVar22[0x31] = bVar84;
      pbVar22[0x32] = bVar87;
      pbVar22[0x33] = bVar90;
      pbVar22[0x34] = bVar93;
      pbVar22[0x35] = bVar96;
      pbVar22[0x36] = bVar99;
      pbVar22[0x37] = bVar102;
      pbVar22[0x38] = bVar105;
      pbVar22[0x39] = bVar108;
      pbVar22[0x3a] = bVar111;
      pbVar22[0x3b] = bVar114;
      pbVar22[0x3c] = bVar117;
      pbVar22[0x3d] = bVar120;
      pbVar22[0x3e] = bVar123;
      pbVar22[0x3f] = bVar125;
      auVar33[0] = -(auVar32[0] == bVar48);
      auVar33[1] = -(auVar32[1] == bVar50);
      auVar33[2] = -(auVar32[2] == bVar52);
      auVar33[3] = -(auVar32[3] == bVar54);
      auVar33[4] = -(auVar32[4] == bVar56);
      auVar33[5] = -(auVar32[5] == bVar58);
      auVar33[6] = -(auVar32[6] == bVar60);
      auVar33[7] = -(auVar32[7] == bVar62);
      auVar33[8] = -(auVar32[8] == bVar64);
      auVar33[9] = -(auVar32[9] == bVar66);
      auVar33[10] = -(auVar32[10] == bVar68);
      auVar33[0xb] = -(auVar32[0xb] == bVar70);
      auVar33[0xc] = -(auVar32[0xc] == bVar72);
      auVar33[0xd] = -(auVar32[0xd] == bVar74);
      auVar33[0xe] = -(auVar32[0xe] == bVar76);
      auVar33[0xf] = -(auVar32[0xf] == bVar78);
      uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar33[0xf] >> 7) << 0xf);
      uVar16 = 0x40;
      bVar29 = 0xf < uVar25;
      uVar25 = uVar24 - 0x50;
      if (bVar29 && uVar25 != 0) {
        if (uVar18 != 0) {
LAB_0073e3a0:
          pbVar21 = pbVar22 + uVar16;
          *pbVar21 = bVar48;
          pbVar21[1] = bVar50;
          pbVar21[2] = bVar52;
          pbVar21[3] = bVar54;
          pbVar21[4] = bVar56;
          pbVar21[5] = bVar58;
          pbVar21[6] = bVar60;
          pbVar21[7] = bVar62;
          pbVar21[8] = bVar64;
          pbVar21[9] = bVar66;
          pbVar21[10] = bVar68;
          pbVar21[0xb] = bVar70;
          pbVar21[0xc] = bVar72;
          pbVar21[0xd] = bVar74;
          pbVar21[0xe] = bVar76;
          pbVar21[0xf] = bVar78;
          goto LAB_0073edd0;
        }
        bVar81 = pbVar20[0x50];
        bVar84 = pbVar20[0x51];
        bVar87 = pbVar20[0x52];
        bVar90 = pbVar20[0x53];
        bVar93 = pbVar20[0x54];
        bVar96 = pbVar20[0x55];
        bVar99 = pbVar20[0x56];
        bVar102 = pbVar20[0x57];
        bVar105 = pbVar20[0x58];
        bVar108 = pbVar20[0x59];
        bVar111 = pbVar20[0x5a];
        bVar114 = pbVar20[0x5b];
        bVar117 = pbVar20[0x5c];
        bVar120 = pbVar20[0x5d];
        bVar123 = pbVar20[0x5e];
        bVar125 = pbVar20[0x5f];
        pbVar22[0x40] = bVar48;
        pbVar22[0x41] = bVar50;
        pbVar22[0x42] = bVar52;
        pbVar22[0x43] = bVar54;
        pbVar22[0x44] = bVar56;
        pbVar22[0x45] = bVar58;
        pbVar22[0x46] = bVar60;
        pbVar22[0x47] = bVar62;
        pbVar22[0x48] = bVar64;
        pbVar22[0x49] = bVar66;
        pbVar22[0x4a] = bVar68;
        pbVar22[0x4b] = bVar70;
        pbVar22[0x4c] = bVar72;
        pbVar22[0x4d] = bVar74;
        pbVar22[0x4e] = bVar76;
        pbVar22[0x4f] = bVar78;
        auVar34[0] = -(auVar33[0] == bVar81);
        auVar34[1] = -(auVar33[1] == bVar84);
        auVar34[2] = -(auVar33[2] == bVar87);
        auVar34[3] = -(auVar33[3] == bVar90);
        auVar34[4] = -(auVar33[4] == bVar93);
        auVar34[5] = -(auVar33[5] == bVar96);
        auVar34[6] = -(auVar33[6] == bVar99);
        auVar34[7] = -(auVar33[7] == bVar102);
        auVar34[8] = -(auVar33[8] == bVar105);
        auVar34[9] = -(auVar33[9] == bVar108);
        auVar34[10] = -(auVar33[10] == bVar111);
        auVar34[0xb] = -(auVar33[0xb] == bVar114);
        auVar34[0xc] = -(auVar33[0xc] == bVar117);
        auVar34[0xd] = -(auVar33[0xd] == bVar120);
        auVar34[0xe] = -(auVar33[0xe] == bVar123);
        auVar34[0xf] = -(auVar33[0xf] == bVar125);
        uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar34[0xf] >> 7) << 0xf);
        uVar16 = 0x50;
        bVar29 = 0xf < uVar25;
        uVar25 = uVar24 - 0x60;
        if (bVar29 && uVar25 != 0) {
          if (uVar18 != 0) {
            pbVar22[0x50] = bVar81;
            pbVar22[0x51] = bVar84;
            pbVar22[0x52] = bVar87;
            pbVar22[0x53] = bVar90;
            pbVar22[0x54] = bVar93;
            pbVar22[0x55] = bVar96;
            pbVar22[0x56] = bVar99;
            pbVar22[0x57] = bVar102;
            pbVar22[0x58] = bVar105;
            pbVar22[0x59] = bVar108;
            pbVar22[0x5a] = bVar111;
            pbVar22[0x5b] = bVar114;
            pbVar22[0x5c] = bVar117;
            pbVar22[0x5d] = bVar120;
            pbVar22[0x5e] = bVar123;
            pbVar22[0x5f] = bVar125;
            goto LAB_0073edd0;
          }
          bVar48 = pbVar20[0x60];
          bVar50 = pbVar20[0x61];
          bVar52 = pbVar20[0x62];
          bVar54 = pbVar20[99];
          bVar56 = pbVar20[100];
          bVar58 = pbVar20[0x65];
          bVar60 = pbVar20[0x66];
          bVar62 = pbVar20[0x67];
          bVar64 = pbVar20[0x68];
          bVar66 = pbVar20[0x69];
          bVar68 = pbVar20[0x6a];
          bVar70 = pbVar20[0x6b];
          bVar72 = pbVar20[0x6c];
          bVar74 = pbVar20[0x6d];
          bVar76 = pbVar20[0x6e];
          bVar78 = pbVar20[0x6f];
          pbVar22[0x50] = bVar81;
          pbVar22[0x51] = bVar84;
          pbVar22[0x52] = bVar87;
          pbVar22[0x53] = bVar90;
          pbVar22[0x54] = bVar93;
          pbVar22[0x55] = bVar96;
          pbVar22[0x56] = bVar99;
          pbVar22[0x57] = bVar102;
          pbVar22[0x58] = bVar105;
          pbVar22[0x59] = bVar108;
          pbVar22[0x5a] = bVar111;
          pbVar22[0x5b] = bVar114;
          pbVar22[0x5c] = bVar117;
          pbVar22[0x5d] = bVar120;
          pbVar22[0x5e] = bVar123;
          pbVar22[0x5f] = bVar125;
          auVar35[0] = -(auVar34[0] == bVar48);
          auVar35[1] = -(auVar34[1] == bVar50);
          auVar35[2] = -(auVar34[2] == bVar52);
          auVar35[3] = -(auVar34[3] == bVar54);
          auVar35[4] = -(auVar34[4] == bVar56);
          auVar35[5] = -(auVar34[5] == bVar58);
          auVar35[6] = -(auVar34[6] == bVar60);
          auVar35[7] = -(auVar34[7] == bVar62);
          auVar35[8] = -(auVar34[8] == bVar64);
          auVar35[9] = -(auVar34[9] == bVar66);
          auVar35[10] = -(auVar34[10] == bVar68);
          auVar35[0xb] = -(auVar34[0xb] == bVar70);
          auVar35[0xc] = -(auVar34[0xc] == bVar72);
          auVar35[0xd] = -(auVar34[0xd] == bVar74);
          auVar35[0xe] = -(auVar34[0xe] == bVar76);
          auVar35[0xf] = -(auVar34[0xf] == bVar78);
          uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar35[0xf] >> 7) << 0xf);
          uVar16 = 0x60;
          bVar29 = 0xf < uVar25;
          uVar25 = uVar24 - 0x70;
          if (bVar29 && uVar25 != 0) {
            if (uVar18 != 0) goto LAB_0073edc0;
            bVar81 = pbVar20[0x70];
            bVar84 = pbVar20[0x71];
            bVar87 = pbVar20[0x72];
            bVar90 = pbVar20[0x73];
            bVar93 = pbVar20[0x74];
            bVar96 = pbVar20[0x75];
            bVar99 = pbVar20[0x76];
            bVar102 = pbVar20[0x77];
            bVar105 = pbVar20[0x78];
            bVar108 = pbVar20[0x79];
            bVar111 = pbVar20[0x7a];
            bVar114 = pbVar20[0x7b];
            bVar117 = pbVar20[0x7c];
            bVar120 = pbVar20[0x7d];
            bVar123 = pbVar20[0x7e];
            bVar125 = pbVar20[0x7f];
            pbVar22[0x60] = bVar48;
            pbVar22[0x61] = bVar50;
            pbVar22[0x62] = bVar52;
            pbVar22[99] = bVar54;
            pbVar22[100] = bVar56;
            pbVar22[0x65] = bVar58;
            pbVar22[0x66] = bVar60;
            pbVar22[0x67] = bVar62;
            pbVar22[0x68] = bVar64;
            pbVar22[0x69] = bVar66;
            pbVar22[0x6a] = bVar68;
            pbVar22[0x6b] = bVar70;
            pbVar22[0x6c] = bVar72;
            pbVar22[0x6d] = bVar74;
            pbVar22[0x6e] = bVar76;
            pbVar22[0x6f] = bVar78;
            auVar36[0] = -(auVar35[0] == bVar81);
            auVar36[1] = -(auVar35[1] == bVar84);
            auVar36[2] = -(auVar35[2] == bVar87);
            auVar36[3] = -(auVar35[3] == bVar90);
            auVar36[4] = -(auVar35[4] == bVar93);
            auVar36[5] = -(auVar35[5] == bVar96);
            auVar36[6] = -(auVar35[6] == bVar99);
            auVar36[7] = -(auVar35[7] == bVar102);
            auVar36[8] = -(auVar35[8] == bVar105);
            auVar36[9] = -(auVar35[9] == bVar108);
            auVar36[10] = -(auVar35[10] == bVar111);
            auVar36[0xb] = -(auVar35[0xb] == bVar114);
            auVar36[0xc] = -(auVar35[0xc] == bVar117);
            auVar36[0xd] = -(auVar35[0xd] == bVar120);
            auVar36[0xe] = -(auVar35[0xe] == bVar123);
            auVar36[0xf] = -(auVar35[0xf] == bVar125);
            uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(auVar36[0xf] >> 7) << 0xf);
            uVar16 = 0x70;
            bVar29 = 0xf < uVar25;
            uVar25 = uVar24 - 0x80;
            if (bVar29 && uVar25 != 0) {
              if (uVar18 != 0) goto LAB_0073e3b0;
              pbVar22[0x70] = bVar81;
              pbVar22[0x71] = bVar84;
              pbVar22[0x72] = bVar87;
              pbVar22[0x73] = bVar90;
              pbVar22[0x74] = bVar93;
              pbVar22[0x75] = bVar96;
              pbVar22[0x76] = bVar99;
              pbVar22[0x77] = bVar102;
              pbVar22[0x78] = bVar105;
              pbVar22[0x79] = bVar108;
              pbVar22[0x7a] = bVar111;
              pbVar22[0x7b] = bVar114;
              pbVar22[0x7c] = bVar117;
              pbVar22[0x7d] = bVar120;
              pbVar22[0x7e] = bVar123;
              pbVar22[0x7f] = bVar125;
              pbVar21 = (byte *)((ulong)(pbVar20 + 0x80) & 0xffffffffffffffc0);
              pbVar22 = pbVar22 + -((long)pbVar20 - (long)pbVar21);
              uVar24 = uVar24 + ((long)pbVar20 - (long)pbVar21);
              bVar48 = *pbVar21;
              bVar50 = pbVar21[1];
              bVar52 = pbVar21[2];
              bVar54 = pbVar21[3];
              bVar56 = pbVar21[4];
              bVar58 = pbVar21[5];
              bVar60 = pbVar21[6];
              bVar62 = pbVar21[7];
              bVar64 = pbVar21[8];
              bVar66 = pbVar21[9];
              bVar68 = pbVar21[10];
              bVar70 = pbVar21[0xb];
              bVar72 = pbVar21[0xc];
              bVar74 = pbVar21[0xd];
              bVar76 = pbVar21[0xe];
              bVar78 = pbVar21[0xf];
              bVar81 = pbVar21[0x10];
              bVar84 = pbVar21[0x11];
              bVar87 = pbVar21[0x12];
              bVar90 = pbVar21[0x13];
              bVar93 = pbVar21[0x14];
              bVar96 = pbVar21[0x15];
              bVar99 = pbVar21[0x16];
              bVar102 = pbVar21[0x17];
              bVar105 = pbVar21[0x18];
              bVar108 = pbVar21[0x19];
              bVar111 = pbVar21[0x1a];
              bVar114 = pbVar21[0x1b];
              bVar117 = pbVar21[0x1c];
              bVar120 = pbVar21[0x1d];
              bVar123 = pbVar21[0x1e];
              bVar125 = pbVar21[0x1f];
              bVar126 = pbVar21[0x20];
              bVar127 = pbVar21[0x21];
              bVar128 = pbVar21[0x22];
              bVar129 = pbVar21[0x23];
              bVar130 = pbVar21[0x24];
              bVar131 = pbVar21[0x25];
              bVar132 = pbVar21[0x26];
              bVar133 = pbVar21[0x27];
              bVar134 = pbVar21[0x28];
              bVar135 = pbVar21[0x29];
              bVar136 = pbVar21[0x2a];
              bVar137 = pbVar21[0x2b];
              bVar138 = pbVar21[0x2c];
              bVar139 = pbVar21[0x2d];
              bVar140 = pbVar21[0x2e];
              bVar141 = pbVar21[0x2f];
              bVar142 = pbVar21[0x30];
              bVar143 = pbVar21[0x31];
              bVar144 = pbVar21[0x32];
              bVar145 = pbVar21[0x33];
              bVar146 = pbVar21[0x34];
              bVar147 = pbVar21[0x35];
              bVar148 = pbVar21[0x36];
              bVar149 = pbVar21[0x37];
              bVar150 = pbVar21[0x38];
              bVar151 = pbVar21[0x39];
              bVar152 = pbVar21[0x3a];
              bVar153 = pbVar21[0x3b];
              bVar154 = pbVar21[0x3c];
              bVar155 = pbVar21[0x3d];
              bVar156 = pbVar21[0x3e];
              bVar157 = pbVar21[0x3f];
              bVar47 = (bVar81 < bVar48) * bVar81 | (bVar81 >= bVar48) * bVar48;
              bVar49 = (bVar84 < bVar50) * bVar84 | (bVar84 >= bVar50) * bVar50;
              bVar51 = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
              bVar53 = (bVar90 < bVar54) * bVar90 | (bVar90 >= bVar54) * bVar54;
              bVar55 = (bVar93 < bVar56) * bVar93 | (bVar93 >= bVar56) * bVar56;
              bVar57 = (bVar96 < bVar58) * bVar96 | (bVar96 >= bVar58) * bVar58;
              bVar59 = (bVar99 < bVar60) * bVar99 | (bVar99 >= bVar60) * bVar60;
              bVar61 = (bVar102 < bVar62) * bVar102 | (bVar102 >= bVar62) * bVar62;
              bVar63 = (bVar105 < bVar64) * bVar105 | (bVar105 >= bVar64) * bVar64;
              bVar65 = (bVar108 < bVar66) * bVar108 | (bVar108 >= bVar66) * bVar66;
              bVar67 = (bVar111 < bVar68) * bVar111 | (bVar111 >= bVar68) * bVar68;
              bVar69 = (bVar114 < bVar70) * bVar114 | (bVar114 >= bVar70) * bVar70;
              bVar71 = (bVar117 < bVar72) * bVar117 | (bVar117 >= bVar72) * bVar72;
              bVar73 = (bVar120 < bVar74) * bVar120 | (bVar120 >= bVar74) * bVar74;
              bVar75 = (bVar123 < bVar76) * bVar123 | (bVar123 >= bVar76) * bVar76;
              bVar77 = (bVar125 < bVar78) * bVar125 | (bVar125 >= bVar78) * bVar78;
              bVar79 = (bVar142 < bVar126) * bVar142 | (bVar142 >= bVar126) * bVar126;
              bVar82 = (bVar143 < bVar127) * bVar143 | (bVar143 >= bVar127) * bVar127;
              bVar85 = (bVar144 < bVar128) * bVar144 | (bVar144 >= bVar128) * bVar128;
              bVar88 = (bVar145 < bVar129) * bVar145 | (bVar145 >= bVar129) * bVar129;
              bVar91 = (bVar146 < bVar130) * bVar146 | (bVar146 >= bVar130) * bVar130;
              bVar94 = (bVar147 < bVar131) * bVar147 | (bVar147 >= bVar131) * bVar131;
              bVar97 = (bVar148 < bVar132) * bVar148 | (bVar148 >= bVar132) * bVar132;
              bVar100 = (bVar149 < bVar133) * bVar149 | (bVar149 >= bVar133) * bVar133;
              bVar103 = (bVar150 < bVar134) * bVar150 | (bVar150 >= bVar134) * bVar134;
              bVar106 = (bVar151 < bVar135) * bVar151 | (bVar151 >= bVar135) * bVar135;
              bVar109 = (bVar152 < bVar136) * bVar152 | (bVar152 >= bVar136) * bVar136;
              bVar112 = (bVar153 < bVar137) * bVar153 | (bVar153 >= bVar137) * bVar137;
              bVar115 = (bVar154 < bVar138) * bVar154 | (bVar154 >= bVar138) * bVar138;
              bVar118 = (bVar155 < bVar139) * bVar155 | (bVar155 >= bVar139) * bVar139;
              bVar121 = (bVar156 < bVar140) * bVar156 | (bVar156 >= bVar140) * bVar140;
              bVar124 = (bVar157 < bVar141) * bVar157 | (bVar157 >= bVar141) * bVar141;
              cVar80 = -((byte)((bVar47 < bVar79) * bVar47 | (bVar47 >= bVar79) * bVar79) ==
                        auVar36[0]);
              cVar83 = -((byte)((bVar49 < bVar82) * bVar49 | (bVar49 >= bVar82) * bVar82) ==
                        auVar36[1]);
              cVar86 = -((byte)((bVar51 < bVar85) * bVar51 | (bVar51 >= bVar85) * bVar85) ==
                        auVar36[2]);
              cVar89 = -((byte)((bVar53 < bVar88) * bVar53 | (bVar53 >= bVar88) * bVar88) ==
                        auVar36[3]);
              cVar92 = -((byte)((bVar55 < bVar91) * bVar55 | (bVar55 >= bVar91) * bVar91) ==
                        auVar36[4]);
              cVar95 = -((byte)((bVar57 < bVar94) * bVar57 | (bVar57 >= bVar94) * bVar94) ==
                        auVar36[5]);
              cVar98 = -((byte)((bVar59 < bVar97) * bVar59 | (bVar59 >= bVar97) * bVar97) ==
                        auVar36[6]);
              cVar101 = -((byte)((bVar61 < bVar100) * bVar61 | (bVar61 >= bVar100) * bVar100) ==
                         auVar36[7]);
              cVar104 = -((byte)((bVar63 < bVar103) * bVar63 | (bVar63 >= bVar103) * bVar103) ==
                         auVar36[8]);
              cVar107 = -((byte)((bVar65 < bVar106) * bVar65 | (bVar65 >= bVar106) * bVar106) ==
                         auVar36[9]);
              cVar110 = -((byte)((bVar67 < bVar109) * bVar67 | (bVar67 >= bVar109) * bVar109) ==
                         auVar36[10]);
              cVar113 = -((byte)((bVar69 < bVar112) * bVar69 | (bVar69 >= bVar112) * bVar112) ==
                         auVar36[0xb]);
              cVar116 = -((byte)((bVar71 < bVar115) * bVar71 | (bVar71 >= bVar115) * bVar115) ==
                         auVar36[0xc]);
              cVar119 = -((byte)((bVar73 < bVar118) * bVar73 | (bVar73 >= bVar118) * bVar118) ==
                         auVar36[0xd]);
              cVar122 = -((byte)((bVar75 < bVar121) * bVar75 | (bVar75 >= bVar121) * bVar121) ==
                         auVar36[0xe]);
              bVar47 = -((byte)((bVar77 < bVar124) * bVar77 | (bVar77 >= bVar124) * bVar124) ==
                        auVar36[0xf]);
              auVar2[1] = cVar83;
              auVar2[0] = cVar80;
              auVar2[2] = cVar86;
              auVar2[3] = cVar89;
              auVar2[4] = cVar92;
              auVar2[5] = cVar95;
              auVar2[6] = cVar98;
              auVar2[7] = cVar101;
              auVar2[8] = cVar104;
              auVar2[9] = cVar107;
              auVar2[10] = cVar110;
              auVar2[0xb] = cVar113;
              auVar2[0xc] = cVar116;
              auVar2[0xd] = cVar119;
              auVar2[0xe] = cVar122;
              auVar2[0xf] = bVar47;
              auVar3[1] = cVar83;
              auVar3[0] = cVar80;
              auVar3[2] = cVar86;
              auVar3[3] = cVar89;
              auVar3[4] = cVar92;
              auVar3[5] = cVar95;
              auVar3[6] = cVar98;
              auVar3[7] = cVar101;
              auVar3[8] = cVar104;
              auVar3[9] = cVar107;
              auVar3[10] = cVar110;
              auVar3[0xb] = cVar113;
              auVar3[0xc] = cVar116;
              auVar3[0xd] = cVar119;
              auVar3[0xe] = cVar122;
              auVar3[0xf] = bVar47;
              auVar12[1] = cVar89;
              auVar12[0] = cVar86;
              auVar12[2] = cVar92;
              auVar12[3] = cVar95;
              auVar12[4] = cVar98;
              auVar12[5] = cVar101;
              auVar12[6] = cVar104;
              auVar12[7] = cVar107;
              auVar12[8] = cVar110;
              auVar12[9] = cVar113;
              auVar12[10] = cVar116;
              auVar12[0xb] = cVar119;
              auVar12[0xc] = cVar122;
              auVar12[0xd] = bVar47;
              auVar10[1] = cVar92;
              auVar10[0] = cVar89;
              auVar10[2] = cVar95;
              auVar10[3] = cVar98;
              auVar10[4] = cVar101;
              auVar10[5] = cVar104;
              auVar10[6] = cVar107;
              auVar10[7] = cVar110;
              auVar10[8] = cVar113;
              auVar10[9] = cVar116;
              auVar10[10] = cVar119;
              auVar10[0xb] = cVar122;
              auVar10[0xc] = bVar47;
              auVar8[1] = cVar95;
              auVar8[0] = cVar92;
              auVar8[2] = cVar98;
              auVar8[3] = cVar101;
              auVar8[4] = cVar104;
              auVar8[5] = cVar107;
              auVar8[6] = cVar110;
              auVar8[7] = cVar113;
              auVar8[8] = cVar116;
              auVar8[9] = cVar119;
              auVar8[10] = cVar122;
              auVar8[0xb] = bVar47;
              auVar6[1] = cVar98;
              auVar6[0] = cVar95;
              auVar6[2] = cVar101;
              auVar6[3] = cVar104;
              auVar6[4] = cVar107;
              auVar6[5] = cVar110;
              auVar6[6] = cVar113;
              auVar6[7] = cVar116;
              auVar6[8] = cVar119;
              auVar6[9] = cVar122;
              auVar6[10] = bVar47;
              uVar17 = (ushort)(SUB161(auVar2 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB141(auVar12 >> 7,0) & 1) << 2 |
                       (ushort)(SUB131(auVar10 >> 7,0) & 1) << 3 |
                       (ushort)(SUB121(auVar8 >> 7,0) & 1) << 4 |
                       (ushort)(SUB111(auVar6 >> 7,0) & 1) << 5 |
                       (ushort)((byte)(CONCAT19(bVar47,CONCAT18(cVar122,CONCAT17(cVar119,CONCAT16(
                                                  cVar116,CONCAT15(cVar113,CONCAT14(cVar110,CONCAT13
                                                  (cVar107,CONCAT12(cVar104,CONCAT11(cVar101,cVar98)
                                                                   )))))))) >> 7) & 1) << 6 |
                       (ushort)((byte)(CONCAT18(bVar47,CONCAT17(cVar122,CONCAT16(cVar119,CONCAT15(
                                                  cVar116,CONCAT14(cVar113,CONCAT13(cVar110,CONCAT12
                                                  (cVar107,CONCAT11(cVar104,cVar101)))))))) >> 7) &
                               1) << 7 | (ushort)(bVar47 >> 7) << 0xf;
              uVar26 = uVar24 - 0x40;
              pbVar20 = pbVar21;
              pbVar15 = pbVar22;
              bVar47 = bVar126;
              bVar49 = bVar127;
              bVar51 = bVar128;
              bVar53 = bVar129;
              bVar55 = bVar130;
              bVar57 = bVar131;
              bVar59 = bVar132;
              bVar61 = bVar133;
              bVar63 = bVar134;
              bVar65 = bVar135;
              bVar67 = bVar136;
              bVar69 = bVar137;
              bVar71 = bVar138;
              bVar73 = bVar139;
              bVar75 = bVar140;
              bVar77 = bVar141;
              if (0x3f < uVar24 && uVar26 != 0) {
                do {
                  if (uVar17 != 0) {
                    auVar37[0] = -(auVar36[0] == bVar48);
                    auVar37[1] = -(auVar36[1] == bVar50);
                    auVar37[2] = -(auVar36[2] == bVar52);
                    auVar37[3] = -(auVar36[3] == bVar54);
                    auVar37[4] = -(auVar36[4] == bVar56);
                    auVar37[5] = -(auVar36[5] == bVar58);
                    auVar37[6] = -(auVar36[6] == bVar60);
                    auVar37[7] = -(auVar36[7] == bVar62);
                    auVar37[8] = -(auVar36[8] == bVar64);
                    auVar37[9] = -(auVar36[9] == bVar66);
                    auVar37[10] = -(auVar36[10] == bVar68);
                    auVar37[0xb] = -(auVar36[0xb] == bVar70);
                    auVar37[0xc] = -(auVar36[0xc] == bVar72);
                    auVar37[0xd] = -(auVar36[0xd] == bVar74);
                    auVar37[0xe] = -(auVar36[0xe] == bVar76);
                    auVar37[0xf] = -(auVar36[0xf] == bVar78);
                    auVar45[0] = -(bVar81 == 0);
                    auVar45[1] = -(bVar84 == 0);
                    auVar45[2] = -(bVar87 == 0);
                    auVar45[3] = -(bVar90 == 0);
                    auVar45[4] = -(bVar93 == 0);
                    auVar45[5] = -(bVar96 == 0);
                    auVar45[6] = -(bVar99 == 0);
                    auVar45[7] = -(bVar102 == 0);
                    auVar45[8] = -(bVar105 == 0);
                    auVar45[9] = -(bVar108 == 0);
                    auVar45[10] = -(bVar111 == 0);
                    auVar45[0xb] = -(bVar114 == 0);
                    auVar45[0xc] = -(bVar117 == 0);
                    auVar45[0xd] = -(bVar120 == 0);
                    auVar45[0xe] = -(bVar123 == 0);
                    auVar45[0xf] = -(bVar125 == 0);
                    uVar17 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar37[0xf] >> 7) << 0xf;
                    uVar1 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                            (ushort)(auVar45[0xf] >> 7) << 0xf;
                    if (uVar17 == 0) {
                      if (uVar1 == 0) {
                        auVar38[0] = -(auVar37[0] == bVar47);
                        auVar38[1] = -(auVar37[1] == bVar49);
                        auVar38[2] = -(auVar37[2] == bVar51);
                        auVar38[3] = -(auVar37[3] == bVar53);
                        auVar38[4] = -(auVar37[4] == bVar55);
                        auVar38[5] = -(auVar37[5] == bVar57);
                        auVar38[6] = -(auVar37[6] == bVar59);
                        auVar38[7] = -(auVar37[7] == bVar61);
                        auVar38[8] = -(auVar37[8] == bVar63);
                        auVar38[9] = -(auVar37[9] == bVar65);
                        auVar38[10] = -(auVar37[10] == bVar67);
                        auVar38[0xb] = -(auVar37[0xb] == bVar69);
                        auVar38[0xc] = -(auVar37[0xc] == bVar71);
                        auVar38[0xd] = -(auVar37[0xd] == bVar73);
                        auVar38[0xe] = -(auVar37[0xe] == bVar75);
                        auVar38[0xf] = -(auVar37[0xf] == bVar77);
                        auVar46[0] = -(auVar45[0] == bVar142);
                        auVar46[1] = -(auVar45[1] == bVar143);
                        auVar46[2] = -(auVar45[2] == bVar144);
                        auVar46[3] = -(auVar45[3] == bVar145);
                        auVar46[4] = -(auVar45[4] == bVar146);
                        auVar46[5] = -(auVar45[5] == bVar147);
                        auVar46[6] = -(auVar45[6] == bVar148);
                        auVar46[7] = -(auVar45[7] == bVar149);
                        auVar46[8] = -(auVar45[8] == bVar150);
                        auVar46[9] = -(auVar45[9] == bVar151);
                        auVar46[10] = -(auVar45[10] == bVar152);
                        auVar46[0xb] = -(auVar45[0xb] == bVar153);
                        auVar46[0xc] = -(auVar45[0xc] == bVar154);
                        auVar46[0xd] = -(auVar45[0xd] == bVar155);
                        auVar46[0xe] = -(auVar45[0xe] == bVar156);
                        auVar46[0xf] = -(auVar45[0xf] == bVar157);
                        uVar17 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar38[0xf] >> 7) << 0xf;
                        uVar1 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
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
                                (ushort)(auVar46[0xf] >> 7) << 0xf;
                        if (uVar17 == 0) {
                          lVar27 = 0;
                          if (uVar1 != 0) {
                            for (; (uVar1 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                            }
                          }
                          *pbVar15 = bVar48;
                          pbVar15[1] = bVar50;
                          pbVar15[2] = bVar52;
                          pbVar15[3] = bVar54;
                          pbVar15[4] = bVar56;
                          pbVar15[5] = bVar58;
                          pbVar15[6] = bVar60;
                          pbVar15[7] = bVar62;
                          pbVar15[8] = bVar64;
                          pbVar15[9] = bVar66;
                          pbVar15[10] = bVar68;
                          pbVar15[0xb] = bVar70;
                          pbVar15[0xc] = bVar72;
                          pbVar15[0xd] = bVar74;
                          pbVar15[0xe] = bVar76;
                          pbVar15[0xf] = bVar78;
                          pbVar15[0x10] = bVar81;
                          pbVar15[0x11] = bVar84;
                          pbVar15[0x12] = bVar87;
                          pbVar15[0x13] = bVar90;
                          pbVar15[0x14] = bVar93;
                          pbVar15[0x15] = bVar96;
                          pbVar15[0x16] = bVar99;
                          pbVar15[0x17] = bVar102;
                          pbVar15[0x18] = bVar105;
                          pbVar15[0x19] = bVar108;
                          pbVar15[0x1a] = bVar111;
                          pbVar15[0x1b] = bVar114;
                          pbVar15[0x1c] = bVar117;
                          pbVar15[0x1d] = bVar120;
                          pbVar15[0x1e] = bVar123;
                          pbVar15[0x1f] = bVar125;
                          pbVar15[0x20] = bVar47;
                          pbVar15[0x21] = bVar49;
                          pbVar15[0x22] = bVar51;
                          pbVar15[0x23] = bVar53;
                          pbVar15[0x24] = bVar55;
                          pbVar15[0x25] = bVar57;
                          pbVar15[0x26] = bVar59;
                          pbVar15[0x27] = bVar61;
                          pbVar15[0x28] = bVar63;
                          pbVar15[0x29] = bVar65;
                          pbVar15[0x2a] = bVar67;
                          pbVar15[0x2b] = bVar69;
                          pbVar15[0x2c] = bVar71;
                          pbVar15[0x2d] = bVar73;
                          pbVar15[0x2e] = bVar75;
                          pbVar15[0x2f] = bVar77;
                          pbVar15[0x30] = bVar142;
                          pbVar15[0x31] = bVar143;
                          pbVar15[0x32] = bVar144;
                          pbVar15[0x33] = bVar145;
                          pbVar15[0x34] = bVar146;
                          pbVar15[0x35] = bVar147;
                          pbVar15[0x36] = bVar148;
                          pbVar15[0x37] = bVar149;
                          pbVar15[0x38] = bVar150;
                          pbVar15[0x39] = bVar151;
                          pbVar15[0x3a] = bVar152;
                          pbVar15[0x3b] = bVar153;
                          pbVar15[0x3c] = bVar154;
                          pbVar15[0x3d] = bVar155;
                          pbVar15[0x3e] = bVar156;
                          pbVar15[0x3f] = bVar157;
                          uVar24 = (uVar26 + 0xf) - lVar27;
                          pauVar23 = (undefined1 (*) [16])(pbVar15 + lVar27 + 0x31);
                        }
                        else {
                          lVar27 = 0;
                          if (uVar17 != 0) {
                            for (; (uVar17 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                            }
                          }
                          *pbVar15 = bVar48;
                          pbVar15[1] = bVar50;
                          pbVar15[2] = bVar52;
                          pbVar15[3] = bVar54;
                          pbVar15[4] = bVar56;
                          pbVar15[5] = bVar58;
                          pbVar15[6] = bVar60;
                          pbVar15[7] = bVar62;
                          pbVar15[8] = bVar64;
                          pbVar15[9] = bVar66;
                          pbVar15[10] = bVar68;
                          pbVar15[0xb] = bVar70;
                          pbVar15[0xc] = bVar72;
                          pbVar15[0xd] = bVar74;
                          pbVar15[0xe] = bVar76;
                          pbVar15[0xf] = bVar78;
                          pbVar15[0x10] = bVar81;
                          pbVar15[0x11] = bVar84;
                          pbVar15[0x12] = bVar87;
                          pbVar15[0x13] = bVar90;
                          pbVar15[0x14] = bVar93;
                          pbVar15[0x15] = bVar96;
                          pbVar15[0x16] = bVar99;
                          pbVar15[0x17] = bVar102;
                          pbVar15[0x18] = bVar105;
                          pbVar15[0x19] = bVar108;
                          pbVar15[0x1a] = bVar111;
                          pbVar15[0x1b] = bVar114;
                          pbVar15[0x1c] = bVar117;
                          pbVar15[0x1d] = bVar120;
                          pbVar15[0x1e] = bVar123;
                          pbVar15[0x1f] = bVar125;
                          pbVar15[0x20] = bVar47;
                          pbVar15[0x21] = bVar49;
                          pbVar15[0x22] = bVar51;
                          pbVar15[0x23] = bVar53;
                          pbVar15[0x24] = bVar55;
                          pbVar15[0x25] = bVar57;
                          pbVar15[0x26] = bVar59;
                          pbVar15[0x27] = bVar61;
                          pbVar15[0x28] = bVar63;
                          pbVar15[0x29] = bVar65;
                          pbVar15[0x2a] = bVar67;
                          pbVar15[0x2b] = bVar69;
                          pbVar15[0x2c] = bVar71;
                          pbVar15[0x2d] = bVar73;
                          pbVar15[0x2e] = bVar75;
                          pbVar15[0x2f] = bVar77;
                          uVar24 = (uVar26 + 0x1f) - lVar27;
                          pauVar23 = (undefined1 (*) [16])(pbVar15 + lVar27 + 0x21);
                        }
                      }
                      else {
                        lVar27 = 0;
                        if (uVar1 != 0) {
                          for (; (uVar1 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                          }
                        }
                        *pbVar15 = bVar48;
                        pbVar15[1] = bVar50;
                        pbVar15[2] = bVar52;
                        pbVar15[3] = bVar54;
                        pbVar15[4] = bVar56;
                        pbVar15[5] = bVar58;
                        pbVar15[6] = bVar60;
                        pbVar15[7] = bVar62;
                        pbVar15[8] = bVar64;
                        pbVar15[9] = bVar66;
                        pbVar15[10] = bVar68;
                        pbVar15[0xb] = bVar70;
                        pbVar15[0xc] = bVar72;
                        pbVar15[0xd] = bVar74;
                        pbVar15[0xe] = bVar76;
                        pbVar15[0xf] = bVar78;
                        pbVar15[0x10] = bVar81;
                        pbVar15[0x11] = bVar84;
                        pbVar15[0x12] = bVar87;
                        pbVar15[0x13] = bVar90;
                        pbVar15[0x14] = bVar93;
                        pbVar15[0x15] = bVar96;
                        pbVar15[0x16] = bVar99;
                        pbVar15[0x17] = bVar102;
                        pbVar15[0x18] = bVar105;
                        pbVar15[0x19] = bVar108;
                        pbVar15[0x1a] = bVar111;
                        pbVar15[0x1b] = bVar114;
                        pbVar15[0x1c] = bVar117;
                        pbVar15[0x1d] = bVar120;
                        pbVar15[0x1e] = bVar123;
                        pbVar15[0x1f] = bVar125;
                        uVar24 = (uVar26 + 0x2f) - lVar27;
                        pauVar23 = (undefined1 (*) [16])(pbVar15 + lVar27 + 0x11);
                      }
                    }
                    else {
                      lVar27 = 0;
                      if (uVar17 != 0) {
                        for (; (uVar17 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                        }
                      }
                      *pbVar15 = bVar48;
                      pbVar15[1] = bVar50;
                      pbVar15[2] = bVar52;
                      pbVar15[3] = bVar54;
                      pbVar15[4] = bVar56;
                      pbVar15[5] = bVar58;
                      pbVar15[6] = bVar60;
                      pbVar15[7] = bVar62;
                      pbVar15[8] = bVar64;
                      pbVar15[9] = bVar66;
                      pbVar15[10] = bVar68;
                      pbVar15[0xb] = bVar70;
                      pbVar15[0xc] = bVar72;
                      pbVar15[0xd] = bVar74;
                      pbVar15[0xe] = bVar76;
                      pbVar15[0xf] = bVar78;
                      uVar24 = (uVar26 + 0x3f) - lVar27;
                      pauVar23 = (undefined1 (*) [16])(pbVar15 + lVar27 + 1);
                    }
                    goto LAB_0073edf0;
                  }
                  pbVar22 = pbVar15 + 0x40;
                  pbVar21 = pbVar20 + 0x40;
                  *pbVar15 = bVar48;
                  pbVar15[1] = bVar50;
                  pbVar15[2] = bVar52;
                  pbVar15[3] = bVar54;
                  pbVar15[4] = bVar56;
                  pbVar15[5] = bVar58;
                  pbVar15[6] = bVar60;
                  pbVar15[7] = bVar62;
                  pbVar15[8] = bVar64;
                  pbVar15[9] = bVar66;
                  pbVar15[10] = bVar68;
                  pbVar15[0xb] = bVar70;
                  pbVar15[0xc] = bVar72;
                  pbVar15[0xd] = bVar74;
                  pbVar15[0xe] = bVar76;
                  pbVar15[0xf] = bVar78;
                  bVar48 = *pbVar21;
                  bVar50 = pbVar20[0x41];
                  bVar52 = pbVar20[0x42];
                  bVar54 = pbVar20[0x43];
                  bVar56 = pbVar20[0x44];
                  bVar58 = pbVar20[0x45];
                  bVar60 = pbVar20[0x46];
                  bVar62 = pbVar20[0x47];
                  bVar64 = pbVar20[0x48];
                  bVar66 = pbVar20[0x49];
                  bVar68 = pbVar20[0x4a];
                  bVar70 = pbVar20[0x4b];
                  bVar72 = pbVar20[0x4c];
                  bVar74 = pbVar20[0x4d];
                  bVar76 = pbVar20[0x4e];
                  bVar78 = pbVar20[0x4f];
                  pbVar15[0x10] = bVar81;
                  pbVar15[0x11] = bVar84;
                  pbVar15[0x12] = bVar87;
                  pbVar15[0x13] = bVar90;
                  pbVar15[0x14] = bVar93;
                  pbVar15[0x15] = bVar96;
                  pbVar15[0x16] = bVar99;
                  pbVar15[0x17] = bVar102;
                  pbVar15[0x18] = bVar105;
                  pbVar15[0x19] = bVar108;
                  pbVar15[0x1a] = bVar111;
                  pbVar15[0x1b] = bVar114;
                  pbVar15[0x1c] = bVar117;
                  pbVar15[0x1d] = bVar120;
                  pbVar15[0x1e] = bVar123;
                  pbVar15[0x1f] = bVar125;
                  bVar81 = pbVar20[0x50];
                  bVar84 = pbVar20[0x51];
                  bVar87 = pbVar20[0x52];
                  bVar90 = pbVar20[0x53];
                  bVar93 = pbVar20[0x54];
                  bVar96 = pbVar20[0x55];
                  bVar99 = pbVar20[0x56];
                  bVar102 = pbVar20[0x57];
                  bVar105 = pbVar20[0x58];
                  bVar108 = pbVar20[0x59];
                  bVar111 = pbVar20[0x5a];
                  bVar114 = pbVar20[0x5b];
                  bVar117 = pbVar20[0x5c];
                  bVar120 = pbVar20[0x5d];
                  bVar123 = pbVar20[0x5e];
                  bVar125 = pbVar20[0x5f];
                  bVar79 = (bVar81 < bVar48) * bVar81 | (bVar81 >= bVar48) * bVar48;
                  bVar82 = (bVar84 < bVar50) * bVar84 | (bVar84 >= bVar50) * bVar50;
                  bVar85 = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
                  bVar88 = (bVar90 < bVar54) * bVar90 | (bVar90 >= bVar54) * bVar54;
                  bVar91 = (bVar93 < bVar56) * bVar93 | (bVar93 >= bVar56) * bVar56;
                  bVar94 = (bVar96 < bVar58) * bVar96 | (bVar96 >= bVar58) * bVar58;
                  bVar97 = (bVar99 < bVar60) * bVar99 | (bVar99 >= bVar60) * bVar60;
                  bVar100 = (bVar102 < bVar62) * bVar102 | (bVar102 >= bVar62) * bVar62;
                  bVar103 = (bVar105 < bVar64) * bVar105 | (bVar105 >= bVar64) * bVar64;
                  bVar106 = (bVar108 < bVar66) * bVar108 | (bVar108 >= bVar66) * bVar66;
                  bVar109 = (bVar111 < bVar68) * bVar111 | (bVar111 >= bVar68) * bVar68;
                  bVar112 = (bVar114 < bVar70) * bVar114 | (bVar114 >= bVar70) * bVar70;
                  bVar115 = (bVar117 < bVar72) * bVar117 | (bVar117 >= bVar72) * bVar72;
                  bVar118 = (bVar120 < bVar74) * bVar120 | (bVar120 >= bVar74) * bVar74;
                  bVar121 = (bVar123 < bVar76) * bVar123 | (bVar123 >= bVar76) * bVar76;
                  bVar124 = (bVar125 < bVar78) * bVar125 | (bVar125 >= bVar78) * bVar78;
                  bVar126 = pbVar20[0x60];
                  bVar127 = pbVar20[0x61];
                  bVar128 = pbVar20[0x62];
                  bVar129 = pbVar20[99];
                  bVar130 = pbVar20[100];
                  bVar131 = pbVar20[0x65];
                  bVar132 = pbVar20[0x66];
                  bVar133 = pbVar20[0x67];
                  bVar134 = pbVar20[0x68];
                  bVar135 = pbVar20[0x69];
                  bVar136 = pbVar20[0x6a];
                  bVar137 = pbVar20[0x6b];
                  bVar138 = pbVar20[0x6c];
                  bVar139 = pbVar20[0x6d];
                  bVar140 = pbVar20[0x6e];
                  bVar141 = pbVar20[0x6f];
                  pbVar15[0x20] = bVar47;
                  pbVar15[0x21] = bVar49;
                  pbVar15[0x22] = bVar51;
                  pbVar15[0x23] = bVar53;
                  pbVar15[0x24] = bVar55;
                  pbVar15[0x25] = bVar57;
                  pbVar15[0x26] = bVar59;
                  pbVar15[0x27] = bVar61;
                  pbVar15[0x28] = bVar63;
                  pbVar15[0x29] = bVar65;
                  pbVar15[0x2a] = bVar67;
                  pbVar15[0x2b] = bVar69;
                  pbVar15[0x2c] = bVar71;
                  pbVar15[0x2d] = bVar73;
                  pbVar15[0x2e] = bVar75;
                  pbVar15[0x2f] = bVar77;
                  pbVar15[0x30] = bVar142;
                  pbVar15[0x31] = bVar143;
                  pbVar15[0x32] = bVar144;
                  pbVar15[0x33] = bVar145;
                  pbVar15[0x34] = bVar146;
                  pbVar15[0x35] = bVar147;
                  pbVar15[0x36] = bVar148;
                  pbVar15[0x37] = bVar149;
                  pbVar15[0x38] = bVar150;
                  pbVar15[0x39] = bVar151;
                  pbVar15[0x3a] = bVar152;
                  pbVar15[0x3b] = bVar153;
                  pbVar15[0x3c] = bVar154;
                  pbVar15[0x3d] = bVar155;
                  pbVar15[0x3e] = bVar156;
                  pbVar15[0x3f] = bVar157;
                  bVar142 = pbVar20[0x70];
                  bVar143 = pbVar20[0x71];
                  bVar144 = pbVar20[0x72];
                  bVar145 = pbVar20[0x73];
                  bVar146 = pbVar20[0x74];
                  bVar147 = pbVar20[0x75];
                  bVar148 = pbVar20[0x76];
                  bVar149 = pbVar20[0x77];
                  bVar150 = pbVar20[0x78];
                  bVar151 = pbVar20[0x79];
                  bVar152 = pbVar20[0x7a];
                  bVar153 = pbVar20[0x7b];
                  bVar154 = pbVar20[0x7c];
                  bVar155 = pbVar20[0x7d];
                  bVar156 = pbVar20[0x7e];
                  bVar157 = pbVar20[0x7f];
                  bVar47 = (bVar142 < bVar126) * bVar142 | (bVar142 >= bVar126) * bVar126;
                  bVar49 = (bVar143 < bVar127) * bVar143 | (bVar143 >= bVar127) * bVar127;
                  bVar51 = (bVar144 < bVar128) * bVar144 | (bVar144 >= bVar128) * bVar128;
                  bVar53 = (bVar145 < bVar129) * bVar145 | (bVar145 >= bVar129) * bVar129;
                  bVar55 = (bVar146 < bVar130) * bVar146 | (bVar146 >= bVar130) * bVar130;
                  bVar57 = (bVar147 < bVar131) * bVar147 | (bVar147 >= bVar131) * bVar131;
                  bVar59 = (bVar148 < bVar132) * bVar148 | (bVar148 >= bVar132) * bVar132;
                  bVar61 = (bVar149 < bVar133) * bVar149 | (bVar149 >= bVar133) * bVar133;
                  bVar63 = (bVar150 < bVar134) * bVar150 | (bVar150 >= bVar134) * bVar134;
                  bVar65 = (bVar151 < bVar135) * bVar151 | (bVar151 >= bVar135) * bVar135;
                  bVar67 = (bVar152 < bVar136) * bVar152 | (bVar152 >= bVar136) * bVar136;
                  bVar69 = (bVar153 < bVar137) * bVar153 | (bVar153 >= bVar137) * bVar137;
                  bVar71 = (bVar154 < bVar138) * bVar154 | (bVar154 >= bVar138) * bVar138;
                  bVar73 = (bVar155 < bVar139) * bVar155 | (bVar155 >= bVar139) * bVar139;
                  bVar75 = (bVar156 < bVar140) * bVar156 | (bVar156 >= bVar140) * bVar140;
                  bVar77 = (bVar157 < bVar141) * bVar157 | (bVar157 >= bVar141) * bVar141;
                  cVar80 = -((byte)((bVar79 < bVar47) * bVar79 | (bVar79 >= bVar47) * bVar47) ==
                            auVar36[0]);
                  cVar83 = -((byte)((bVar82 < bVar49) * bVar82 | (bVar82 >= bVar49) * bVar49) ==
                            auVar36[1]);
                  cVar86 = -((byte)((bVar85 < bVar51) * bVar85 | (bVar85 >= bVar51) * bVar51) ==
                            auVar36[2]);
                  cVar89 = -((byte)((bVar88 < bVar53) * bVar88 | (bVar88 >= bVar53) * bVar53) ==
                            auVar36[3]);
                  cVar92 = -((byte)((bVar91 < bVar55) * bVar91 | (bVar91 >= bVar55) * bVar55) ==
                            auVar36[4]);
                  cVar95 = -((byte)((bVar94 < bVar57) * bVar94 | (bVar94 >= bVar57) * bVar57) ==
                            auVar36[5]);
                  cVar98 = -((byte)((bVar97 < bVar59) * bVar97 | (bVar97 >= bVar59) * bVar59) ==
                            auVar36[6]);
                  cVar101 = -((byte)((bVar100 < bVar61) * bVar100 | (bVar100 >= bVar61) * bVar61) ==
                             auVar36[7]);
                  cVar104 = -((byte)((bVar103 < bVar63) * bVar103 | (bVar103 >= bVar63) * bVar63) ==
                             auVar36[8]);
                  cVar107 = -((byte)((bVar106 < bVar65) * bVar106 | (bVar106 >= bVar65) * bVar65) ==
                             auVar36[9]);
                  cVar110 = -((byte)((bVar109 < bVar67) * bVar109 | (bVar109 >= bVar67) * bVar67) ==
                             auVar36[10]);
                  cVar113 = -((byte)((bVar112 < bVar69) * bVar112 | (bVar112 >= bVar69) * bVar69) ==
                             auVar36[0xb]);
                  cVar116 = -((byte)((bVar115 < bVar71) * bVar115 | (bVar115 >= bVar71) * bVar71) ==
                             auVar36[0xc]);
                  cVar119 = -((byte)((bVar118 < bVar73) * bVar118 | (bVar118 >= bVar73) * bVar73) ==
                             auVar36[0xd]);
                  cVar122 = -((byte)((bVar121 < bVar75) * bVar121 | (bVar121 >= bVar75) * bVar75) ==
                             auVar36[0xe]);
                  bVar47 = -((byte)((bVar124 < bVar77) * bVar124 | (bVar124 >= bVar77) * bVar77) ==
                            auVar36[0xf]);
                  auVar4[1] = cVar83;
                  auVar4[0] = cVar80;
                  auVar4[2] = cVar86;
                  auVar4[3] = cVar89;
                  auVar4[4] = cVar92;
                  auVar4[5] = cVar95;
                  auVar4[6] = cVar98;
                  auVar4[7] = cVar101;
                  auVar4[8] = cVar104;
                  auVar4[9] = cVar107;
                  auVar4[10] = cVar110;
                  auVar4[0xb] = cVar113;
                  auVar4[0xc] = cVar116;
                  auVar4[0xd] = cVar119;
                  auVar4[0xe] = cVar122;
                  auVar4[0xf] = bVar47;
                  auVar5[1] = cVar83;
                  auVar5[0] = cVar80;
                  auVar5[2] = cVar86;
                  auVar5[3] = cVar89;
                  auVar5[4] = cVar92;
                  auVar5[5] = cVar95;
                  auVar5[6] = cVar98;
                  auVar5[7] = cVar101;
                  auVar5[8] = cVar104;
                  auVar5[9] = cVar107;
                  auVar5[10] = cVar110;
                  auVar5[0xb] = cVar113;
                  auVar5[0xc] = cVar116;
                  auVar5[0xd] = cVar119;
                  auVar5[0xe] = cVar122;
                  auVar5[0xf] = bVar47;
                  auVar13[1] = cVar89;
                  auVar13[0] = cVar86;
                  auVar13[2] = cVar92;
                  auVar13[3] = cVar95;
                  auVar13[4] = cVar98;
                  auVar13[5] = cVar101;
                  auVar13[6] = cVar104;
                  auVar13[7] = cVar107;
                  auVar13[8] = cVar110;
                  auVar13[9] = cVar113;
                  auVar13[10] = cVar116;
                  auVar13[0xb] = cVar119;
                  auVar13[0xc] = cVar122;
                  auVar13[0xd] = bVar47;
                  auVar11[1] = cVar92;
                  auVar11[0] = cVar89;
                  auVar11[2] = cVar95;
                  auVar11[3] = cVar98;
                  auVar11[4] = cVar101;
                  auVar11[5] = cVar104;
                  auVar11[6] = cVar107;
                  auVar11[7] = cVar110;
                  auVar11[8] = cVar113;
                  auVar11[9] = cVar116;
                  auVar11[10] = cVar119;
                  auVar11[0xb] = cVar122;
                  auVar11[0xc] = bVar47;
                  auVar9[1] = cVar95;
                  auVar9[0] = cVar92;
                  auVar9[2] = cVar98;
                  auVar9[3] = cVar101;
                  auVar9[4] = cVar104;
                  auVar9[5] = cVar107;
                  auVar9[6] = cVar110;
                  auVar9[7] = cVar113;
                  auVar9[8] = cVar116;
                  auVar9[9] = cVar119;
                  auVar9[10] = cVar122;
                  auVar9[0xb] = bVar47;
                  auVar7[1] = cVar98;
                  auVar7[0] = cVar95;
                  auVar7[2] = cVar101;
                  auVar7[3] = cVar104;
                  auVar7[4] = cVar107;
                  auVar7[5] = cVar110;
                  auVar7[6] = cVar113;
                  auVar7[7] = cVar116;
                  auVar7[8] = cVar119;
                  auVar7[9] = cVar122;
                  auVar7[10] = bVar47;
                  uVar17 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB141(auVar13 >> 7,0) & 1) << 2 |
                           (ushort)(SUB131(auVar11 >> 7,0) & 1) << 3 |
                           (ushort)(SUB121(auVar9 >> 7,0) & 1) << 4 |
                           (ushort)(SUB111(auVar7 >> 7,0) & 1) << 5 |
                           (ushort)((byte)(CONCAT19(bVar47,CONCAT18(cVar122,CONCAT17(cVar119,
                                                  CONCAT16(cVar116,CONCAT15(cVar113,CONCAT14(cVar110
                                                  ,CONCAT13(cVar107,CONCAT12(cVar104,CONCAT11(
                                                  cVar101,cVar98))))))))) >> 7) & 1) << 6 |
                           (ushort)((byte)(CONCAT18(bVar47,CONCAT17(cVar122,CONCAT16(cVar119,
                                                  CONCAT15(cVar116,CONCAT14(cVar113,CONCAT13(cVar110
                                                  ,CONCAT12(cVar107,CONCAT11(cVar104,cVar101))))))))
                                          >> 7) & 1) << 7 | (ushort)(bVar47 >> 7) << 0xf;
                  bVar29 = 0x3f < uVar26;
                  uVar26 = uVar26 - 0x40;
                  pbVar20 = pbVar21;
                  pbVar15 = pbVar22;
                  bVar47 = bVar126;
                  bVar49 = bVar127;
                  bVar51 = bVar128;
                  bVar53 = bVar129;
                  bVar55 = bVar130;
                  bVar57 = bVar131;
                  bVar59 = bVar132;
                  bVar61 = bVar133;
                  bVar63 = bVar134;
                  bVar65 = bVar135;
                  bVar67 = bVar136;
                  bVar69 = bVar137;
                  bVar71 = bVar138;
                  bVar73 = bVar139;
                  bVar75 = bVar140;
                  bVar77 = bVar141;
                } while (bVar29 && uVar26 != 0);
              }
              if (uVar17 == 0) {
                uVar16 = uVar26 + 0x40 & 0xfffffffffffffff0;
                uVar24 = uVar26 + 0x30;
                uVar18 = 0;
                uVar25 = uVar24;
                if (SCARRY8(uVar26,0x30) == (long)uVar24 < 0) {
                  *pbVar22 = bVar48;
                  pbVar22[1] = bVar50;
                  pbVar22[2] = bVar52;
                  pbVar22[3] = bVar54;
                  pbVar22[4] = bVar56;
                  pbVar22[5] = bVar58;
                  pbVar22[6] = bVar60;
                  pbVar22[7] = bVar62;
                  pbVar22[8] = bVar64;
                  pbVar22[9] = bVar66;
                  pbVar22[10] = bVar68;
                  pbVar22[0xb] = bVar70;
                  pbVar22[0xc] = bVar72;
                  pbVar22[0xd] = bVar74;
                  pbVar22[0xe] = bVar76;
                  pbVar22[0xf] = bVar78;
                  uVar25 = uVar26 + 0x20;
                  if (0xf < uVar24) {
                    pbVar22[0x10] = bVar81;
                    pbVar22[0x11] = bVar84;
                    pbVar22[0x12] = bVar87;
                    pbVar22[0x13] = bVar90;
                    pbVar22[0x14] = bVar93;
                    pbVar22[0x15] = bVar96;
                    pbVar22[0x16] = bVar99;
                    pbVar22[0x17] = bVar102;
                    pbVar22[0x18] = bVar105;
                    pbVar22[0x19] = bVar108;
                    pbVar22[0x1a] = bVar111;
                    pbVar22[0x1b] = bVar114;
                    pbVar22[0x1c] = bVar117;
                    pbVar22[0x1d] = bVar120;
                    pbVar22[0x1e] = bVar123;
                    pbVar22[0x1f] = bVar125;
                    uVar25 = uVar26 + 0x10;
                    if (0xf < uVar26 + 0x20) {
                      pbVar22[0x20] = bVar126;
                      pbVar22[0x21] = bVar127;
                      pbVar22[0x22] = bVar128;
                      pbVar22[0x23] = bVar129;
                      pbVar22[0x24] = bVar130;
                      pbVar22[0x25] = bVar131;
                      pbVar22[0x26] = bVar132;
                      pbVar22[0x27] = bVar133;
                      pbVar22[0x28] = bVar134;
                      pbVar22[0x29] = bVar135;
                      pbVar22[0x2a] = bVar136;
                      pbVar22[0x2b] = bVar137;
                      pbVar22[0x2c] = bVar138;
                      pbVar22[0x2d] = bVar139;
                      pbVar22[0x2e] = bVar140;
                      pbVar22[0x2f] = bVar141;
                      uVar25 = uVar26;
                      if (0xf < uVar26 + 0x10) {
                        pbVar22[0x30] = bVar142;
                        pbVar22[0x31] = bVar143;
                        pbVar22[0x32] = bVar144;
                        pbVar22[0x33] = bVar145;
                        pbVar22[0x34] = bVar146;
                        pbVar22[0x35] = bVar147;
                        pbVar22[0x36] = bVar148;
                        pbVar22[0x37] = bVar149;
                        pbVar22[0x38] = bVar150;
                        pbVar22[0x39] = bVar151;
                        pbVar22[0x3a] = bVar152;
                        pbVar22[0x3b] = bVar153;
                        pbVar22[0x3c] = bVar154;
                        pbVar22[0x3d] = bVar155;
                        pbVar22[0x3e] = bVar156;
                        pbVar22[0x3f] = bVar157;
                        return param_1;
                      }
                    }
                  }
                }
                goto LAB_0073e499;
              }
              uVar16 = 0;
              auVar40[0] = -(auVar36[0] == bVar48);
              auVar40[1] = -(auVar36[1] == bVar50);
              auVar40[2] = -(auVar36[2] == bVar52);
              auVar40[3] = -(auVar36[3] == bVar54);
              auVar40[4] = -(auVar36[4] == bVar56);
              auVar40[5] = -(auVar36[5] == bVar58);
              auVar40[6] = -(auVar36[6] == bVar60);
              auVar40[7] = -(auVar36[7] == bVar62);
              auVar40[8] = -(auVar36[8] == bVar64);
              auVar40[9] = -(auVar36[9] == bVar66);
              auVar40[10] = -(auVar36[10] == bVar68);
              auVar40[0xb] = -(auVar36[0xb] == bVar70);
              auVar40[0xc] = -(auVar36[0xc] == bVar72);
              auVar40[0xd] = -(auVar36[0xd] == bVar74);
              auVar40[0xe] = -(auVar36[0xe] == bVar76);
              auVar40[0xf] = -(auVar36[0xf] == bVar78);
              uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(auVar40[0xf] >> 7) << 0xf);
              uVar25 = uVar26 + 0x30;
              if (uVar25 != 0 && SCARRY8(uVar26,0x30) == (long)uVar25 < 0) {
                if (uVar18 != 0) goto LAB_0073e3a0;
                auVar41[0] = -(auVar40[0] == bVar81);
                auVar41[1] = -(auVar40[1] == bVar84);
                auVar41[2] = -(auVar40[2] == bVar87);
                auVar41[3] = -(auVar40[3] == bVar90);
                auVar41[4] = -(auVar40[4] == bVar93);
                auVar41[5] = -(auVar40[5] == bVar96);
                auVar41[6] = -(auVar40[6] == bVar99);
                auVar41[7] = -(auVar40[7] == bVar102);
                auVar41[8] = -(auVar40[8] == bVar105);
                auVar41[9] = -(auVar40[9] == bVar108);
                auVar41[10] = -(auVar40[10] == bVar111);
                auVar41[0xb] = -(auVar40[0xb] == bVar114);
                auVar41[0xc] = -(auVar40[0xc] == bVar117);
                auVar41[0xd] = -(auVar40[0xd] == bVar120);
                auVar41[0xe] = -(auVar40[0xe] == bVar123);
                auVar41[0xf] = -(auVar40[0xf] == bVar125);
                uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) |
                                         (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                                         (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                                         (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                                         (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                                         (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                                         (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                                         (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                                         (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                                         (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                                         (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                                         (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                                         (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                                         (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                                         (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                                        (ushort)(auVar41[0xf] >> 7) << 0xf);
                *pbVar22 = bVar48;
                pbVar22[1] = bVar50;
                pbVar22[2] = bVar52;
                pbVar22[3] = bVar54;
                pbVar22[4] = bVar56;
                pbVar22[5] = bVar58;
                pbVar22[6] = bVar60;
                pbVar22[7] = bVar62;
                pbVar22[8] = bVar64;
                pbVar22[9] = bVar66;
                pbVar22[10] = bVar68;
                pbVar22[0xb] = bVar70;
                pbVar22[0xc] = bVar72;
                pbVar22[0xd] = bVar74;
                pbVar22[0xe] = bVar76;
                pbVar22[0xf] = bVar78;
                uVar16 = 0x10;
                bVar29 = 0xf < uVar25;
                uVar25 = uVar26 + 0x20;
                if (bVar29 && uVar25 != 0) {
                  if (uVar18 != 0) {
                    pbVar22[0x10] = bVar81;
                    pbVar22[0x11] = bVar84;
                    pbVar22[0x12] = bVar87;
                    pbVar22[0x13] = bVar90;
                    pbVar22[0x14] = bVar93;
                    pbVar22[0x15] = bVar96;
                    pbVar22[0x16] = bVar99;
                    pbVar22[0x17] = bVar102;
                    pbVar22[0x18] = bVar105;
                    pbVar22[0x19] = bVar108;
                    pbVar22[0x1a] = bVar111;
                    pbVar22[0x1b] = bVar114;
                    pbVar22[0x1c] = bVar117;
                    pbVar22[0x1d] = bVar120;
                    pbVar22[0x1e] = bVar123;
                    pbVar22[0x1f] = bVar125;
                    goto LAB_0073edd0;
                  }
                  auVar42[0] = -(auVar41[0] == bVar126);
                  auVar42[1] = -(auVar41[1] == bVar127);
                  auVar42[2] = -(auVar41[2] == bVar128);
                  auVar42[3] = -(auVar41[3] == bVar129);
                  auVar42[4] = -(auVar41[4] == bVar130);
                  auVar42[5] = -(auVar41[5] == bVar131);
                  auVar42[6] = -(auVar41[6] == bVar132);
                  auVar42[7] = -(auVar41[7] == bVar133);
                  auVar42[8] = -(auVar41[8] == bVar134);
                  auVar42[9] = -(auVar41[9] == bVar135);
                  auVar42[10] = -(auVar41[10] == bVar136);
                  auVar42[0xb] = -(auVar41[0xb] == bVar137);
                  auVar42[0xc] = -(auVar41[0xc] == bVar138);
                  auVar42[0xd] = -(auVar41[0xd] == bVar139);
                  auVar42[0xe] = -(auVar41[0xe] == bVar140);
                  auVar42[0xf] = -(auVar41[0xf] == bVar141);
                  uVar18 = (ulong)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
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
                  pbVar22[0x10] = bVar81;
                  pbVar22[0x11] = bVar84;
                  pbVar22[0x12] = bVar87;
                  pbVar22[0x13] = bVar90;
                  pbVar22[0x14] = bVar93;
                  pbVar22[0x15] = bVar96;
                  pbVar22[0x16] = bVar99;
                  pbVar22[0x17] = bVar102;
                  pbVar22[0x18] = bVar105;
                  pbVar22[0x19] = bVar108;
                  pbVar22[0x1a] = bVar111;
                  pbVar22[0x1b] = bVar114;
                  pbVar22[0x1c] = bVar117;
                  pbVar22[0x1d] = bVar120;
                  pbVar22[0x1e] = bVar123;
                  pbVar22[0x1f] = bVar125;
                  uVar16 = 0x20;
                  bVar29 = 0xf < uVar25;
                  uVar25 = uVar26 + 0x10;
                  if (bVar29 && uVar25 != 0) {
                    if (uVar18 == 0) {
                      auVar43[0] = -(auVar42[0] == bVar142);
                      auVar43[1] = -(auVar42[1] == bVar143);
                      auVar43[2] = -(auVar42[2] == bVar144);
                      auVar43[3] = -(auVar42[3] == bVar145);
                      auVar43[4] = -(auVar42[4] == bVar146);
                      auVar43[5] = -(auVar42[5] == bVar147);
                      auVar43[6] = -(auVar42[6] == bVar148);
                      auVar43[7] = -(auVar42[7] == bVar149);
                      auVar43[8] = -(auVar42[8] == bVar150);
                      auVar43[9] = -(auVar42[9] == bVar151);
                      auVar43[10] = -(auVar42[10] == bVar152);
                      auVar43[0xb] = -(auVar42[0xb] == bVar153);
                      auVar43[0xc] = -(auVar42[0xc] == bVar154);
                      auVar43[0xd] = -(auVar42[0xd] == bVar155);
                      auVar43[0xe] = -(auVar42[0xe] == bVar156);
                      auVar43[0xf] = -(auVar42[0xf] == bVar157);
                      uVar17 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                               (ushort)(auVar43[0xf] >> 7) << 0xf;
                      pbVar22[0x20] = bVar126;
                      pbVar22[0x21] = bVar127;
                      pbVar22[0x22] = bVar128;
                      pbVar22[0x23] = bVar129;
                      pbVar22[0x24] = bVar130;
                      pbVar22[0x25] = bVar131;
                      pbVar22[0x26] = bVar132;
                      pbVar22[0x27] = bVar133;
                      pbVar22[0x28] = bVar134;
                      pbVar22[0x29] = bVar135;
                      pbVar22[0x2a] = bVar136;
                      pbVar22[0x2b] = bVar137;
                      pbVar22[0x2c] = bVar138;
                      pbVar22[0x2d] = bVar139;
                      pbVar22[0x2e] = bVar140;
                      pbVar22[0x2f] = bVar141;
                      param_1 = (undefined1 (*) [16])(pbVar22 + 0x30);
                      param_2 = (undefined1 (*) [16])(pbVar21 + 0x30);
                      uVar16 = 0;
                      if (uVar17 != 0) {
                        for (; (uVar17 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
                        }
                      }
                      if (uVar25 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0073ef98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        pauVar23 = (undefined1 (*) [16])
                                   (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + uVar25 * 4)))
                                             ();
                        return pauVar23;
                      }
                      goto LAB_0073e3d0;
                    }
                    pbVar22[0x20] = bVar126;
                    pbVar22[0x21] = bVar127;
                    pbVar22[0x22] = bVar128;
                    pbVar22[0x23] = bVar129;
                    pbVar22[0x24] = bVar130;
                    pbVar22[0x25] = bVar131;
                    pbVar22[0x26] = bVar132;
                    pbVar22[0x27] = bVar133;
                    pbVar22[0x28] = bVar134;
                    pbVar22[0x29] = bVar135;
                    pbVar22[0x2a] = bVar136;
                    pbVar22[0x2b] = bVar137;
                    pbVar22[0x2c] = bVar138;
                    pbVar22[0x2d] = bVar139;
                    pbVar22[0x2e] = bVar140;
                    pbVar22[0x2f] = bVar141;
                    goto LAB_0073edd0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (uVar18 == 0) {
LAB_0073e499:
                    /* WARNING: Could not recover jumptable at 0x0073e4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar23 = (undefined1 (*) [16])
               (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + (uVar25 + 0x10) * 4)))
                         (pbVar22 + uVar16,pbVar21 + uVar16,uVar18,
                          &DAT_00821d10 + *(int *)(&DAT_00821d10 + (uVar25 + 0x10) * 4));
    return pauVar23;
  }
  param_1 = (undefined1 (*) [16])(pbVar22 + uVar16);
  param_2 = (undefined1 (*) [16])(pbVar21 + uVar16);
  uVar16 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
    }
  }
  if (uVar25 + 0x10 <= uVar16) {
                    /* WARNING: Could not recover jumptable at 0x0073e412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar23 = (undefined1 (*) [16])
               (*(code *)(&DAT_00821d10 + *(int *)(&DAT_00821d10 + (uVar25 + 0x10) * 4)))
                         (param_1,param_2,uVar16,
                          &DAT_00821d10 + *(int *)(&DAT_00821d10 + (uVar25 + 0x10) * 4));
    return pauVar23;
  }
LAB_0073e3d0:
                    /* WARNING: Could not recover jumptable at 0x0073e3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar23 = (undefined1 (*) [16])
             (*(code *)(&DAT_00821c90 + *(int *)(&DAT_00821c90 + uVar16 * 4)))
                       (param_1,param_2,uVar16,&DAT_00821c90 + *(int *)(&DAT_00821c90 + uVar16 * 4))
  ;
  return pauVar23;
}

