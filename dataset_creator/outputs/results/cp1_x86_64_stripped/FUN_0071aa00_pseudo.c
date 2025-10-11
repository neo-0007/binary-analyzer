
int FUN_0071aa00(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar16;
  byte bVar18;
  byte bVar20;
  byte bVar22;
  byte bVar24;
  byte bVar26;
  byte bVar28;
  byte bVar30;
  byte bVar32;
  byte bVar34;
  byte bVar36;
  byte bVar38;
  byte bVar40;
  byte bVar42;
  byte bVar44;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte bVar17;
  byte bVar19;
  byte bVar21;
  byte bVar23;
  byte bVar25;
  byte bVar27;
  byte bVar29;
  byte bVar31;
  byte bVar33;
  byte bVar35;
  byte bVar37;
  byte bVar39;
  byte bVar41;
  byte bVar43;
  byte bVar45;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar46;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar64 [16];
  byte bVar65;
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
  byte bVar80;
  byte bVar81;
  undefined1 auVar66 [16];
  byte bVar82;
  byte bVar83;
  byte bVar86;
  byte bVar88;
  byte bVar90;
  byte bVar92;
  byte bVar94;
  byte bVar96;
  byte bVar98;
  byte bVar100;
  byte bVar102;
  byte bVar104;
  byte bVar106;
  byte bVar108;
  byte bVar110;
  byte bVar112;
  byte bVar114;
  undefined1 auVar84 [16];
  byte bVar87;
  byte bVar89;
  byte bVar91;
  byte bVar93;
  byte bVar95;
  byte bVar97;
  byte bVar99;
  byte bVar101;
  byte bVar103;
  byte bVar105;
  byte bVar107;
  byte bVar109;
  byte bVar111;
  byte bVar113;
  byte bVar115;
  undefined1 auVar85 [16];
  byte bVar116;
  byte bVar117;
  byte bVar120;
  byte bVar122;
  byte bVar124;
  byte bVar126;
  byte bVar128;
  byte bVar130;
  byte bVar132;
  byte bVar134;
  byte bVar136;
  byte bVar138;
  byte bVar140;
  byte bVar142;
  byte bVar144;
  byte bVar146;
  byte bVar148;
  undefined1 auVar118 [16];
  byte bVar121;
  byte bVar123;
  byte bVar125;
  byte bVar127;
  byte bVar129;
  byte bVar131;
  byte bVar133;
  byte bVar135;
  byte bVar137;
  byte bVar139;
  byte bVar141;
  byte bVar143;
  byte bVar145;
  byte bVar147;
  byte bVar149;
  undefined1 auVar119 [16];
  
  lVar6 = 0;
  if ((((uint)param_1 | (uint)param_2) & 0xfff) < 0xfc1) {
    bVar10 = *param_1;
    bVar17 = param_1[1];
    bVar19 = param_1[2];
    bVar21 = param_1[3];
    bVar23 = param_1[4];
    bVar25 = param_1[5];
    bVar27 = param_1[6];
    bVar29 = param_1[7];
    bVar31 = param_1[8];
    bVar33 = param_1[9];
    bVar35 = param_1[10];
    bVar37 = param_1[0xb];
    bVar39 = param_1[0xc];
    bVar41 = param_1[0xd];
    bVar43 = param_1[0xe];
    bVar45 = param_1[0xf];
    bVar9 = -(*param_2 == bVar10);
    bVar16 = -(param_2[1] == bVar17);
    bVar18 = -(param_2[2] == bVar19);
    bVar20 = -(param_2[3] == bVar21);
    bVar22 = -(param_2[4] == bVar23);
    bVar24 = -(param_2[5] == bVar25);
    bVar26 = -(param_2[6] == bVar27);
    bVar28 = -(param_2[7] == bVar29);
    bVar30 = -(param_2[8] == bVar31);
    bVar32 = -(param_2[9] == bVar33);
    bVar34 = -(param_2[10] == bVar35);
    bVar36 = -(param_2[0xb] == bVar37);
    bVar38 = -(param_2[0xc] == bVar39);
    bVar40 = -(param_2[0xd] == bVar41);
    bVar42 = -(param_2[0xe] == bVar43);
    bVar44 = -(param_2[0xf] == bVar45);
    auVar11[0] = -((byte)((bVar10 < bVar9) * bVar10) == '\0' &&
                  (byte)((bVar10 >= bVar9) * bVar9) == '\0');
    auVar11[1] = -((byte)((bVar17 < bVar16) * bVar17) == '\0' &&
                  (byte)((bVar17 >= bVar16) * bVar16) == '\0');
    auVar11[2] = -((byte)((bVar19 < bVar18) * bVar19) == '\0' &&
                  (byte)((bVar19 >= bVar18) * bVar18) == '\0');
    auVar11[3] = -((byte)((bVar21 < bVar20) * bVar21) == '\0' &&
                  (byte)((bVar21 >= bVar20) * bVar20) == '\0');
    auVar11[4] = -((byte)((bVar23 < bVar22) * bVar23) == '\0' &&
                  (byte)((bVar23 >= bVar22) * bVar22) == '\0');
    auVar11[5] = -((byte)((bVar25 < bVar24) * bVar25) == '\0' &&
                  (byte)((bVar25 >= bVar24) * bVar24) == '\0');
    auVar11[6] = -((byte)((bVar27 < bVar26) * bVar27) == '\0' &&
                  (byte)((bVar27 >= bVar26) * bVar26) == '\0');
    auVar11[7] = -((byte)((bVar29 < bVar28) * bVar29) == '\0' &&
                  (byte)((bVar29 >= bVar28) * bVar28) == '\0');
    auVar11[8] = -((byte)((bVar31 < bVar30) * bVar31) == '\0' &&
                  (byte)((bVar31 >= bVar30) * bVar30) == '\0');
    auVar11[9] = -((byte)((bVar33 < bVar32) * bVar33) == '\0' &&
                  (byte)((bVar33 >= bVar32) * bVar32) == '\0');
    auVar11[10] = -((byte)((bVar35 < bVar34) * bVar35) == '\0' &&
                   (byte)((bVar35 >= bVar34) * bVar34) == '\0');
    auVar11[0xb] = -((byte)((bVar37 < bVar36) * bVar37) == '\0' &&
                    (byte)((bVar37 >= bVar36) * bVar36) == '\0');
    auVar11[0xc] = -((byte)((bVar39 < bVar38) * bVar39) == '\0' &&
                    (byte)((bVar39 >= bVar38) * bVar38) == '\0');
    auVar11[0xd] = -((byte)((bVar41 < bVar40) * bVar41) == '\0' &&
                    (byte)((bVar41 >= bVar40) * bVar40) == '\0');
    auVar11[0xe] = -((byte)((bVar43 < bVar42) * bVar43) == '\0' &&
                    (byte)((bVar43 >= bVar42) * bVar42) == '\0');
    auVar11[0xf] = -((byte)((bVar45 < bVar44) * bVar45) == '\0' &&
                    (byte)((bVar45 >= bVar44) * bVar44) == '\0');
    uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar11[0xf] >> 7) << 0xf);
    if (uVar5 == 0) {
      bVar10 = param_1[0x10];
      bVar17 = param_1[0x11];
      bVar19 = param_1[0x12];
      bVar21 = param_1[0x13];
      bVar23 = param_1[0x14];
      bVar25 = param_1[0x15];
      bVar27 = param_1[0x16];
      bVar29 = param_1[0x17];
      bVar31 = param_1[0x18];
      bVar33 = param_1[0x19];
      bVar35 = param_1[0x1a];
      bVar37 = param_1[0x1b];
      bVar39 = param_1[0x1c];
      bVar41 = param_1[0x1d];
      bVar43 = param_1[0x1e];
      bVar45 = param_1[0x1f];
      bVar9 = param_1[0x20];
      bVar16 = param_1[0x21];
      bVar18 = param_1[0x22];
      bVar20 = param_1[0x23];
      bVar22 = param_1[0x24];
      bVar24 = param_1[0x25];
      bVar26 = param_1[0x26];
      bVar28 = param_1[0x27];
      bVar30 = param_1[0x28];
      bVar32 = param_1[0x29];
      bVar34 = param_1[0x2a];
      bVar36 = param_1[0x2b];
      bVar38 = param_1[0x2c];
      bVar40 = param_1[0x2d];
      bVar42 = param_1[0x2e];
      bVar44 = param_1[0x2f];
      bVar65 = -(param_2[0x10] == bVar10);
      bVar67 = -(param_2[0x11] == bVar17);
      bVar68 = -(param_2[0x12] == bVar19);
      bVar69 = -(param_2[0x13] == bVar21);
      bVar70 = -(param_2[0x14] == bVar23);
      bVar71 = -(param_2[0x15] == bVar25);
      bVar72 = -(param_2[0x16] == bVar27);
      bVar73 = -(param_2[0x17] == bVar29);
      bVar74 = -(param_2[0x18] == bVar31);
      bVar75 = -(param_2[0x19] == bVar33);
      bVar76 = -(param_2[0x1a] == bVar35);
      bVar77 = -(param_2[0x1b] == bVar37);
      bVar78 = -(param_2[0x1c] == bVar39);
      bVar79 = -(param_2[0x1d] == bVar41);
      bVar80 = -(param_2[0x1e] == bVar43);
      bVar81 = -(param_2[0x1f] == bVar45);
      auVar66[0] = -((byte)((bVar10 < bVar65) * bVar10) == '\0' &&
                    (byte)((bVar10 >= bVar65) * bVar65) == '\0');
      auVar66[1] = -((byte)((bVar17 < bVar67) * bVar17) == '\0' &&
                    (byte)((bVar17 >= bVar67) * bVar67) == '\0');
      auVar66[2] = -((byte)((bVar19 < bVar68) * bVar19) == '\0' &&
                    (byte)((bVar19 >= bVar68) * bVar68) == '\0');
      auVar66[3] = -((byte)((bVar21 < bVar69) * bVar21) == '\0' &&
                    (byte)((bVar21 >= bVar69) * bVar69) == '\0');
      auVar66[4] = -((byte)((bVar23 < bVar70) * bVar23) == '\0' &&
                    (byte)((bVar23 >= bVar70) * bVar70) == '\0');
      auVar66[5] = -((byte)((bVar25 < bVar71) * bVar25) == '\0' &&
                    (byte)((bVar25 >= bVar71) * bVar71) == '\0');
      auVar66[6] = -((byte)((bVar27 < bVar72) * bVar27) == '\0' &&
                    (byte)((bVar27 >= bVar72) * bVar72) == '\0');
      auVar66[7] = -((byte)((bVar29 < bVar73) * bVar29) == '\0' &&
                    (byte)((bVar29 >= bVar73) * bVar73) == '\0');
      auVar66[8] = -((byte)((bVar31 < bVar74) * bVar31) == '\0' &&
                    (byte)((bVar31 >= bVar74) * bVar74) == '\0');
      auVar66[9] = -((byte)((bVar33 < bVar75) * bVar33) == '\0' &&
                    (byte)((bVar33 >= bVar75) * bVar75) == '\0');
      auVar66[10] = -((byte)((bVar35 < bVar76) * bVar35) == '\0' &&
                     (byte)((bVar35 >= bVar76) * bVar76) == '\0');
      auVar66[0xb] = -((byte)((bVar37 < bVar77) * bVar37) == '\0' &&
                      (byte)((bVar37 >= bVar77) * bVar77) == '\0');
      auVar66[0xc] = -((byte)((bVar39 < bVar78) * bVar39) == '\0' &&
                      (byte)((bVar39 >= bVar78) * bVar78) == '\0');
      auVar66[0xd] = -((byte)((bVar41 < bVar79) * bVar41) == '\0' &&
                      (byte)((bVar41 >= bVar79) * bVar79) == '\0');
      auVar66[0xe] = -((byte)((bVar43 < bVar80) * bVar43) == '\0' &&
                      (byte)((bVar43 >= bVar80) * bVar80) == '\0');
      auVar66[0xf] = -((byte)((bVar45 < bVar81) * bVar45) == '\0' &&
                      (byte)((bVar45 >= bVar81) * bVar81) == '\0');
      bVar10 = param_1[0x30];
      bVar17 = param_1[0x31];
      bVar19 = param_1[0x32];
      bVar21 = param_1[0x33];
      bVar23 = param_1[0x34];
      bVar25 = param_1[0x35];
      bVar27 = param_1[0x36];
      bVar29 = param_1[0x37];
      bVar31 = param_1[0x38];
      bVar33 = param_1[0x39];
      bVar35 = param_1[0x3a];
      bVar37 = param_1[0x3b];
      bVar39 = param_1[0x3c];
      bVar41 = param_1[0x3d];
      bVar43 = param_1[0x3e];
      bVar45 = param_1[0x3f];
      bVar65 = -(param_2[0x20] == bVar9);
      bVar67 = -(param_2[0x21] == bVar16);
      bVar68 = -(param_2[0x22] == bVar18);
      bVar69 = -(param_2[0x23] == bVar20);
      bVar70 = -(param_2[0x24] == bVar22);
      bVar71 = -(param_2[0x25] == bVar24);
      bVar72 = -(param_2[0x26] == bVar26);
      bVar73 = -(param_2[0x27] == bVar28);
      bVar74 = -(param_2[0x28] == bVar30);
      bVar75 = -(param_2[0x29] == bVar32);
      bVar76 = -(param_2[0x2a] == bVar34);
      bVar77 = -(param_2[0x2b] == bVar36);
      bVar78 = -(param_2[0x2c] == bVar38);
      bVar79 = -(param_2[0x2d] == bVar40);
      bVar80 = -(param_2[0x2e] == bVar42);
      bVar81 = -(param_2[0x2f] == bVar44);
      auVar64[0] = -((byte)((bVar9 < bVar65) * bVar9) == '\0' &&
                    (byte)((bVar9 >= bVar65) * bVar65) == '\0');
      auVar64[1] = -((byte)((bVar16 < bVar67) * bVar16) == '\0' &&
                    (byte)((bVar16 >= bVar67) * bVar67) == '\0');
      auVar64[2] = -((byte)((bVar18 < bVar68) * bVar18) == '\0' &&
                    (byte)((bVar18 >= bVar68) * bVar68) == '\0');
      auVar64[3] = -((byte)((bVar20 < bVar69) * bVar20) == '\0' &&
                    (byte)((bVar20 >= bVar69) * bVar69) == '\0');
      auVar64[4] = -((byte)((bVar22 < bVar70) * bVar22) == '\0' &&
                    (byte)((bVar22 >= bVar70) * bVar70) == '\0');
      auVar64[5] = -((byte)((bVar24 < bVar71) * bVar24) == '\0' &&
                    (byte)((bVar24 >= bVar71) * bVar71) == '\0');
      auVar64[6] = -((byte)((bVar26 < bVar72) * bVar26) == '\0' &&
                    (byte)((bVar26 >= bVar72) * bVar72) == '\0');
      auVar64[7] = -((byte)((bVar28 < bVar73) * bVar28) == '\0' &&
                    (byte)((bVar28 >= bVar73) * bVar73) == '\0');
      auVar64[8] = -((byte)((bVar30 < bVar74) * bVar30) == '\0' &&
                    (byte)((bVar30 >= bVar74) * bVar74) == '\0');
      auVar64[9] = -((byte)((bVar32 < bVar75) * bVar32) == '\0' &&
                    (byte)((bVar32 >= bVar75) * bVar75) == '\0');
      auVar64[10] = -((byte)((bVar34 < bVar76) * bVar34) == '\0' &&
                     (byte)((bVar34 >= bVar76) * bVar76) == '\0');
      auVar64[0xb] = -((byte)((bVar36 < bVar77) * bVar36) == '\0' &&
                      (byte)((bVar36 >= bVar77) * bVar77) == '\0');
      auVar64[0xc] = -((byte)((bVar38 < bVar78) * bVar38) == '\0' &&
                      (byte)((bVar38 >= bVar78) * bVar78) == '\0');
      auVar64[0xd] = -((byte)((bVar40 < bVar79) * bVar40) == '\0' &&
                      (byte)((bVar40 >= bVar79) * bVar79) == '\0');
      auVar64[0xe] = -((byte)((bVar42 < bVar80) * bVar42) == '\0' &&
                      (byte)((bVar42 >= bVar80) * bVar80) == '\0');
      auVar64[0xf] = -((byte)((bVar44 < bVar81) * bVar44) == '\0' &&
                      (byte)((bVar44 >= bVar81) * bVar81) == '\0');
      bVar9 = -(param_2[0x30] == bVar10);
      bVar16 = -(param_2[0x31] == bVar17);
      bVar18 = -(param_2[0x32] == bVar19);
      bVar20 = -(param_2[0x33] == bVar21);
      bVar22 = -(param_2[0x34] == bVar23);
      bVar24 = -(param_2[0x35] == bVar25);
      bVar26 = -(param_2[0x36] == bVar27);
      bVar28 = -(param_2[0x37] == bVar29);
      bVar30 = -(param_2[0x38] == bVar31);
      bVar32 = -(param_2[0x39] == bVar33);
      bVar34 = -(param_2[0x3a] == bVar35);
      bVar36 = -(param_2[0x3b] == bVar37);
      bVar38 = -(param_2[0x3c] == bVar39);
      bVar40 = -(param_2[0x3d] == bVar41);
      bVar42 = -(param_2[0x3e] == bVar43);
      bVar44 = -(param_2[0x3f] == bVar45);
      auVar12[0] = -((byte)((bVar10 < bVar9) * bVar10) == '\0' &&
                    (byte)((bVar10 >= bVar9) * bVar9) == '\0');
      auVar12[1] = -((byte)((bVar17 < bVar16) * bVar17) == '\0' &&
                    (byte)((bVar17 >= bVar16) * bVar16) == '\0');
      auVar12[2] = -((byte)((bVar19 < bVar18) * bVar19) == '\0' &&
                    (byte)((bVar19 >= bVar18) * bVar18) == '\0');
      auVar12[3] = -((byte)((bVar21 < bVar20) * bVar21) == '\0' &&
                    (byte)((bVar21 >= bVar20) * bVar20) == '\0');
      auVar12[4] = -((byte)((bVar23 < bVar22) * bVar23) == '\0' &&
                    (byte)((bVar23 >= bVar22) * bVar22) == '\0');
      auVar12[5] = -((byte)((bVar25 < bVar24) * bVar25) == '\0' &&
                    (byte)((bVar25 >= bVar24) * bVar24) == '\0');
      auVar12[6] = -((byte)((bVar27 < bVar26) * bVar27) == '\0' &&
                    (byte)((bVar27 >= bVar26) * bVar26) == '\0');
      auVar12[7] = -((byte)((bVar29 < bVar28) * bVar29) == '\0' &&
                    (byte)((bVar29 >= bVar28) * bVar28) == '\0');
      auVar12[8] = -((byte)((bVar31 < bVar30) * bVar31) == '\0' &&
                    (byte)((bVar31 >= bVar30) * bVar30) == '\0');
      auVar12[9] = -((byte)((bVar33 < bVar32) * bVar33) == '\0' &&
                    (byte)((bVar33 >= bVar32) * bVar32) == '\0');
      auVar12[10] = -((byte)((bVar35 < bVar34) * bVar35) == '\0' &&
                     (byte)((bVar35 >= bVar34) * bVar34) == '\0');
      auVar12[0xb] = -((byte)((bVar37 < bVar36) * bVar37) == '\0' &&
                      (byte)((bVar37 >= bVar36) * bVar36) == '\0');
      auVar12[0xc] = -((byte)((bVar39 < bVar38) * bVar39) == '\0' &&
                      (byte)((bVar39 >= bVar38) * bVar38) == '\0');
      auVar12[0xd] = -((byte)((bVar41 < bVar40) * bVar41) == '\0' &&
                      (byte)((bVar41 >= bVar40) * bVar40) == '\0');
      auVar12[0xe] = -((byte)((bVar43 < bVar42) * bVar43) == '\0' &&
                      (byte)((bVar43 >= bVar42) * bVar42) == '\0');
      auVar12[0xf] = -((byte)((bVar45 < bVar44) * bVar45) == '\0' &&
                      (byte)((bVar45 >= bVar44) * bVar44) == '\0');
      uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar64[0xf] >> 7) << 0xf) << 0x20 |
              (ulong)(ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar66[0xf] >> 7) << 0xf) << 0x10 |
              (ulong)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
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
                             (ushort)(auVar12[0xf] >> 7) << 0xf) << 0x30;
      if (uVar5 == 0) goto LAB_0071aab5;
    }
    lVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
      }
    }
    return (uint)param_1[lVar6] - (uint)param_2[lVar6];
  }
  do {
    bVar10 = param_1[lVar6];
    uVar4 = (uint)bVar10;
    if (bVar10 == 0) {
      uVar4 = 0;
LAB_0071aca0:
      return uVar4 - param_2[lVar6];
    }
    if (bVar10 != param_2[lVar6]) goto LAB_0071aca0;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x40);
LAB_0071aab5:
  lVar6 = ((ulong)(param_1 + 0x40) & 0xffffffffffffffc0) - (long)param_1;
  param_1 = param_1 + lVar6;
  param_2 = param_2 + lVar6;
  uVar5 = 0x1000 - (ulong)((uint)param_2 & 0xfff) >> 6;
  while( true ) {
    bVar8 = uVar5 == 0;
    uVar5 = uVar5 - 1;
    if (bVar8) {
      lVar6 = -((ulong)param_2 & 0x3f);
      pbVar1 = param_2 + lVar6;
      pbVar3 = param_2 + lVar6 + 0x10;
      pbVar2 = param_1 + lVar6;
      bVar10 = *pbVar2;
      bVar17 = pbVar2[1];
      bVar19 = pbVar2[2];
      bVar21 = pbVar2[3];
      bVar23 = pbVar2[4];
      bVar25 = pbVar2[5];
      bVar27 = pbVar2[6];
      bVar29 = pbVar2[7];
      bVar31 = pbVar2[8];
      bVar33 = pbVar2[9];
      bVar35 = pbVar2[10];
      bVar37 = pbVar2[0xb];
      bVar39 = pbVar2[0xc];
      bVar41 = pbVar2[0xd];
      bVar43 = pbVar2[0xe];
      bVar45 = pbVar2[0xf];
      pbVar2 = param_1 + lVar6 + 0x10;
      bVar9 = *pbVar2;
      bVar16 = pbVar2[1];
      bVar18 = pbVar2[2];
      bVar20 = pbVar2[3];
      bVar22 = pbVar2[4];
      bVar24 = pbVar2[5];
      bVar26 = pbVar2[6];
      bVar28 = pbVar2[7];
      bVar30 = pbVar2[8];
      bVar32 = pbVar2[9];
      bVar34 = pbVar2[10];
      bVar36 = pbVar2[0xb];
      bVar38 = pbVar2[0xc];
      bVar40 = pbVar2[0xd];
      bVar42 = pbVar2[0xe];
      bVar44 = pbVar2[0xf];
      bVar82 = -(*pbVar1 == bVar10);
      bVar86 = -(pbVar1[1] == bVar17);
      bVar88 = -(pbVar1[2] == bVar19);
      bVar90 = -(pbVar1[3] == bVar21);
      bVar92 = -(pbVar1[4] == bVar23);
      bVar94 = -(pbVar1[5] == bVar25);
      bVar96 = -(pbVar1[6] == bVar27);
      bVar98 = -(pbVar1[7] == bVar29);
      bVar100 = -(pbVar1[8] == bVar31);
      bVar102 = -(pbVar1[9] == bVar33);
      bVar104 = -(pbVar1[10] == bVar35);
      bVar106 = -(pbVar1[0xb] == bVar37);
      bVar108 = -(pbVar1[0xc] == bVar39);
      bVar110 = -(pbVar1[0xd] == bVar41);
      bVar112 = -(pbVar1[0xe] == bVar43);
      bVar114 = -(pbVar1[0xf] == bVar45);
      pbVar1 = param_2 + lVar6 + 0x20;
      bVar116 = -(*pbVar3 == bVar9);
      bVar120 = -(pbVar3[1] == bVar16);
      bVar122 = -(pbVar3[2] == bVar18);
      bVar124 = -(pbVar3[3] == bVar20);
      bVar126 = -(pbVar3[4] == bVar22);
      bVar128 = -(pbVar3[5] == bVar24);
      bVar130 = -(pbVar3[6] == bVar26);
      bVar132 = -(pbVar3[7] == bVar28);
      bVar134 = -(pbVar3[8] == bVar30);
      bVar136 = -(pbVar3[9] == bVar32);
      bVar138 = -(pbVar3[10] == bVar34);
      bVar140 = -(pbVar3[0xb] == bVar36);
      bVar142 = -(pbVar3[0xc] == bVar38);
      bVar144 = -(pbVar3[0xd] == bVar40);
      bVar146 = -(pbVar3[0xe] == bVar42);
      bVar148 = -(pbVar3[0xf] == bVar44);
      pbVar2 = param_2 + lVar6 + 0x30;
      pbVar3 = param_1 + lVar6 + 0x20;
      bVar65 = *pbVar3;
      bVar67 = pbVar3[1];
      bVar68 = pbVar3[2];
      bVar69 = pbVar3[3];
      bVar70 = pbVar3[4];
      bVar71 = pbVar3[5];
      bVar72 = pbVar3[6];
      bVar73 = pbVar3[7];
      bVar74 = pbVar3[8];
      bVar75 = pbVar3[9];
      bVar76 = pbVar3[10];
      bVar77 = pbVar3[0xb];
      bVar78 = pbVar3[0xc];
      bVar79 = pbVar3[0xd];
      bVar80 = pbVar3[0xe];
      bVar81 = pbVar3[0xf];
      pbVar3 = param_1 + lVar6 + 0x30;
      bVar46 = *pbVar3;
      bVar49 = pbVar3[1];
      bVar50 = pbVar3[2];
      bVar51 = pbVar3[3];
      bVar52 = pbVar3[4];
      bVar53 = pbVar3[5];
      bVar54 = pbVar3[6];
      bVar55 = pbVar3[7];
      bVar56 = pbVar3[8];
      bVar57 = pbVar3[9];
      bVar58 = pbVar3[10];
      bVar59 = pbVar3[0xb];
      bVar60 = pbVar3[0xc];
      bVar61 = pbVar3[0xd];
      bVar62 = pbVar3[0xe];
      bVar63 = pbVar3[0xf];
      bVar83 = -(*pbVar1 == bVar65);
      bVar87 = -(pbVar1[1] == bVar67);
      bVar89 = -(pbVar1[2] == bVar68);
      bVar91 = -(pbVar1[3] == bVar69);
      bVar93 = -(pbVar1[4] == bVar70);
      bVar95 = -(pbVar1[5] == bVar71);
      bVar97 = -(pbVar1[6] == bVar72);
      bVar99 = -(pbVar1[7] == bVar73);
      bVar101 = -(pbVar1[8] == bVar74);
      bVar103 = -(pbVar1[9] == bVar75);
      bVar105 = -(pbVar1[10] == bVar76);
      bVar107 = -(pbVar1[0xb] == bVar77);
      bVar109 = -(pbVar1[0xc] == bVar78);
      bVar111 = -(pbVar1[0xd] == bVar79);
      bVar113 = -(pbVar1[0xe] == bVar80);
      bVar115 = -(pbVar1[0xf] == bVar81);
      bVar117 = -(*pbVar2 == bVar46);
      bVar121 = -(pbVar2[1] == bVar49);
      bVar123 = -(pbVar2[2] == bVar50);
      bVar125 = -(pbVar2[3] == bVar51);
      bVar127 = -(pbVar2[4] == bVar52);
      bVar129 = -(pbVar2[5] == bVar53);
      bVar131 = -(pbVar2[6] == bVar54);
      bVar133 = -(pbVar2[7] == bVar55);
      bVar135 = -(pbVar2[8] == bVar56);
      bVar137 = -(pbVar2[9] == bVar57);
      bVar139 = -(pbVar2[10] == bVar58);
      bVar141 = -(pbVar2[0xb] == bVar59);
      bVar143 = -(pbVar2[0xc] == bVar60);
      bVar145 = -(pbVar2[0xd] == bVar61);
      bVar147 = -(pbVar2[0xe] == bVar62);
      bVar149 = -(pbVar2[0xf] == bVar63);
      auVar15[0] = -((byte)((bVar10 < bVar82) * bVar10) == '\0' &&
                    (byte)((bVar10 >= bVar82) * bVar82) == '\0');
      auVar15[1] = -((byte)((bVar17 < bVar86) * bVar17) == '\0' &&
                    (byte)((bVar17 >= bVar86) * bVar86) == '\0');
      auVar15[2] = -((byte)((bVar19 < bVar88) * bVar19) == '\0' &&
                    (byte)((bVar19 >= bVar88) * bVar88) == '\0');
      auVar15[3] = -((byte)((bVar21 < bVar90) * bVar21) == '\0' &&
                    (byte)((bVar21 >= bVar90) * bVar90) == '\0');
      auVar15[4] = -((byte)((bVar23 < bVar92) * bVar23) == '\0' &&
                    (byte)((bVar23 >= bVar92) * bVar92) == '\0');
      auVar15[5] = -((byte)((bVar25 < bVar94) * bVar25) == '\0' &&
                    (byte)((bVar25 >= bVar94) * bVar94) == '\0');
      auVar15[6] = -((byte)((bVar27 < bVar96) * bVar27) == '\0' &&
                    (byte)((bVar27 >= bVar96) * bVar96) == '\0');
      auVar15[7] = -((byte)((bVar29 < bVar98) * bVar29) == '\0' &&
                    (byte)((bVar29 >= bVar98) * bVar98) == '\0');
      auVar15[8] = -((byte)((bVar31 < bVar100) * bVar31) == '\0' &&
                    (byte)((bVar31 >= bVar100) * bVar100) == '\0');
      auVar15[9] = -((byte)((bVar33 < bVar102) * bVar33) == '\0' &&
                    (byte)((bVar33 >= bVar102) * bVar102) == '\0');
      auVar15[10] = -((byte)((bVar35 < bVar104) * bVar35) == '\0' &&
                     (byte)((bVar35 >= bVar104) * bVar104) == '\0');
      auVar15[0xb] = -((byte)((bVar37 < bVar106) * bVar37) == '\0' &&
                      (byte)((bVar37 >= bVar106) * bVar106) == '\0');
      auVar15[0xc] = -((byte)((bVar39 < bVar108) * bVar39) == '\0' &&
                      (byte)((bVar39 >= bVar108) * bVar108) == '\0');
      auVar15[0xd] = -((byte)((bVar41 < bVar110) * bVar41) == '\0' &&
                      (byte)((bVar41 >= bVar110) * bVar110) == '\0');
      auVar15[0xe] = -((byte)((bVar43 < bVar112) * bVar43) == '\0' &&
                      (byte)((bVar43 >= bVar112) * bVar112) == '\0');
      auVar15[0xf] = -((byte)((bVar45 < bVar114) * bVar45) == '\0' &&
                      (byte)((bVar45 >= bVar114) * bVar114) == '\0');
      auVar48[0] = -((byte)((bVar9 < bVar116) * bVar9) == '\0' &&
                    (byte)((bVar9 >= bVar116) * bVar116) == '\0');
      auVar48[1] = -((byte)((bVar16 < bVar120) * bVar16) == '\0' &&
                    (byte)((bVar16 >= bVar120) * bVar120) == '\0');
      auVar48[2] = -((byte)((bVar18 < bVar122) * bVar18) == '\0' &&
                    (byte)((bVar18 >= bVar122) * bVar122) == '\0');
      auVar48[3] = -((byte)((bVar20 < bVar124) * bVar20) == '\0' &&
                    (byte)((bVar20 >= bVar124) * bVar124) == '\0');
      auVar48[4] = -((byte)((bVar22 < bVar126) * bVar22) == '\0' &&
                    (byte)((bVar22 >= bVar126) * bVar126) == '\0');
      auVar48[5] = -((byte)((bVar24 < bVar128) * bVar24) == '\0' &&
                    (byte)((bVar24 >= bVar128) * bVar128) == '\0');
      auVar48[6] = -((byte)((bVar26 < bVar130) * bVar26) == '\0' &&
                    (byte)((bVar26 >= bVar130) * bVar130) == '\0');
      auVar48[7] = -((byte)((bVar28 < bVar132) * bVar28) == '\0' &&
                    (byte)((bVar28 >= bVar132) * bVar132) == '\0');
      auVar48[8] = -((byte)((bVar30 < bVar134) * bVar30) == '\0' &&
                    (byte)((bVar30 >= bVar134) * bVar134) == '\0');
      auVar48[9] = -((byte)((bVar32 < bVar136) * bVar32) == '\0' &&
                    (byte)((bVar32 >= bVar136) * bVar136) == '\0');
      auVar48[10] = -((byte)((bVar34 < bVar138) * bVar34) == '\0' &&
                     (byte)((bVar34 >= bVar138) * bVar138) == '\0');
      auVar48[0xb] = -((byte)((bVar36 < bVar140) * bVar36) == '\0' &&
                      (byte)((bVar36 >= bVar140) * bVar140) == '\0');
      auVar48[0xc] = -((byte)((bVar38 < bVar142) * bVar38) == '\0' &&
                      (byte)((bVar38 >= bVar142) * bVar142) == '\0');
      auVar48[0xd] = -((byte)((bVar40 < bVar144) * bVar40) == '\0' &&
                      (byte)((bVar40 >= bVar144) * bVar144) == '\0');
      auVar48[0xe] = -((byte)((bVar42 < bVar146) * bVar42) == '\0' &&
                      (byte)((bVar42 >= bVar146) * bVar146) == '\0');
      auVar48[0xf] = -((byte)((bVar44 < bVar148) * bVar44) == '\0' &&
                      (byte)((bVar44 >= bVar148) * bVar148) == '\0');
      auVar85[0] = -((byte)((bVar65 < bVar83) * bVar65) == '\0' &&
                    (byte)((bVar65 >= bVar83) * bVar83) == '\0');
      auVar85[1] = -((byte)((bVar67 < bVar87) * bVar67) == '\0' &&
                    (byte)((bVar67 >= bVar87) * bVar87) == '\0');
      auVar85[2] = -((byte)((bVar68 < bVar89) * bVar68) == '\0' &&
                    (byte)((bVar68 >= bVar89) * bVar89) == '\0');
      auVar85[3] = -((byte)((bVar69 < bVar91) * bVar69) == '\0' &&
                    (byte)((bVar69 >= bVar91) * bVar91) == '\0');
      auVar85[4] = -((byte)((bVar70 < bVar93) * bVar70) == '\0' &&
                    (byte)((bVar70 >= bVar93) * bVar93) == '\0');
      auVar85[5] = -((byte)((bVar71 < bVar95) * bVar71) == '\0' &&
                    (byte)((bVar71 >= bVar95) * bVar95) == '\0');
      auVar85[6] = -((byte)((bVar72 < bVar97) * bVar72) == '\0' &&
                    (byte)((bVar72 >= bVar97) * bVar97) == '\0');
      auVar85[7] = -((byte)((bVar73 < bVar99) * bVar73) == '\0' &&
                    (byte)((bVar73 >= bVar99) * bVar99) == '\0');
      auVar85[8] = -((byte)((bVar74 < bVar101) * bVar74) == '\0' &&
                    (byte)((bVar74 >= bVar101) * bVar101) == '\0');
      auVar85[9] = -((byte)((bVar75 < bVar103) * bVar75) == '\0' &&
                    (byte)((bVar75 >= bVar103) * bVar103) == '\0');
      auVar85[10] = -((byte)((bVar76 < bVar105) * bVar76) == '\0' &&
                     (byte)((bVar76 >= bVar105) * bVar105) == '\0');
      auVar85[0xb] = -((byte)((bVar77 < bVar107) * bVar77) == '\0' &&
                      (byte)((bVar77 >= bVar107) * bVar107) == '\0');
      auVar85[0xc] = -((byte)((bVar78 < bVar109) * bVar78) == '\0' &&
                      (byte)((bVar78 >= bVar109) * bVar109) == '\0');
      auVar85[0xd] = -((byte)((bVar79 < bVar111) * bVar79) == '\0' &&
                      (byte)((bVar79 >= bVar111) * bVar111) == '\0');
      auVar85[0xe] = -((byte)((bVar80 < bVar113) * bVar80) == '\0' &&
                      (byte)((bVar80 >= bVar113) * bVar113) == '\0');
      auVar85[0xf] = -((byte)((bVar81 < bVar115) * bVar81) == '\0' &&
                      (byte)((bVar81 >= bVar115) * bVar115) == '\0');
      auVar119[0] = -((byte)((bVar46 < bVar117) * bVar46) == '\0' &&
                     (byte)((bVar46 >= bVar117) * bVar117) == '\0');
      auVar119[1] = -((byte)((bVar49 < bVar121) * bVar49) == '\0' &&
                     (byte)((bVar49 >= bVar121) * bVar121) == '\0');
      auVar119[2] = -((byte)((bVar50 < bVar123) * bVar50) == '\0' &&
                     (byte)((bVar50 >= bVar123) * bVar123) == '\0');
      auVar119[3] = -((byte)((bVar51 < bVar125) * bVar51) == '\0' &&
                     (byte)((bVar51 >= bVar125) * bVar125) == '\0');
      auVar119[4] = -((byte)((bVar52 < bVar127) * bVar52) == '\0' &&
                     (byte)((bVar52 >= bVar127) * bVar127) == '\0');
      auVar119[5] = -((byte)((bVar53 < bVar129) * bVar53) == '\0' &&
                     (byte)((bVar53 >= bVar129) * bVar129) == '\0');
      auVar119[6] = -((byte)((bVar54 < bVar131) * bVar54) == '\0' &&
                     (byte)((bVar54 >= bVar131) * bVar131) == '\0');
      auVar119[7] = -((byte)((bVar55 < bVar133) * bVar55) == '\0' &&
                     (byte)((bVar55 >= bVar133) * bVar133) == '\0');
      auVar119[8] = -((byte)((bVar56 < bVar135) * bVar56) == '\0' &&
                     (byte)((bVar56 >= bVar135) * bVar135) == '\0');
      auVar119[9] = -((byte)((bVar57 < bVar137) * bVar57) == '\0' &&
                     (byte)((bVar57 >= bVar137) * bVar137) == '\0');
      auVar119[10] = -((byte)((bVar58 < bVar139) * bVar58) == '\0' &&
                      (byte)((bVar58 >= bVar139) * bVar139) == '\0');
      auVar119[0xb] =
           -((byte)((bVar59 < bVar141) * bVar59) == '\0' &&
            (byte)((bVar59 >= bVar141) * bVar141) == '\0');
      auVar119[0xc] =
           -((byte)((bVar60 < bVar143) * bVar60) == '\0' &&
            (byte)((bVar60 >= bVar143) * bVar143) == '\0');
      auVar119[0xd] =
           -((byte)((bVar61 < bVar145) * bVar61) == '\0' &&
            (byte)((bVar61 >= bVar145) * bVar145) == '\0');
      auVar119[0xe] =
           -((byte)((bVar62 < bVar147) * bVar62) == '\0' &&
            (byte)((bVar62 >= bVar147) * bVar147) == '\0');
      auVar119[0xf] =
           -((byte)((bVar63 < bVar149) * bVar63) == '\0' &&
            (byte)((bVar63 >= bVar149) * bVar149) == '\0');
      uVar5 = 0x3f;
      uVar7 = ((ulong)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
                              (ushort)(auVar15[0xf] >> 7) << 0xf) |
               (ulong)(ushort)((ushort)(SUB161(auVar85 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar85[0xf] >> 7) << 0xf) << 0x20 |
               (ulong)(ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                              (ushort)(auVar48[0xf] >> 7) << 0xf) << 0x10 |
              (ulong)(ushort)((ushort)(SUB161(auVar119 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar119 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar119 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar119 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar119 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar119 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar119 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar119 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar119 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar119 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar119 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar119 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar119 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar119 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar119[0xf] >> 7) << 0xf) << 0x30) >>
              (sbyte)((ulong)param_2 & 0x3f);
      if (uVar7 != 0) {
        lVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
          }
        }
        return (uint)param_1[lVar6] - (uint)param_2[lVar6];
      }
    }
    bVar10 = *param_1;
    bVar17 = param_1[1];
    bVar19 = param_1[2];
    bVar21 = param_1[3];
    bVar23 = param_1[4];
    bVar25 = param_1[5];
    bVar27 = param_1[6];
    bVar29 = param_1[7];
    bVar31 = param_1[8];
    bVar33 = param_1[9];
    bVar35 = param_1[10];
    bVar37 = param_1[0xb];
    bVar39 = param_1[0xc];
    bVar41 = param_1[0xd];
    bVar43 = param_1[0xe];
    bVar45 = param_1[0xf];
    bVar9 = param_1[0x10];
    bVar16 = param_1[0x11];
    bVar18 = param_1[0x12];
    bVar20 = param_1[0x13];
    bVar22 = param_1[0x14];
    bVar24 = param_1[0x15];
    bVar26 = param_1[0x16];
    bVar28 = param_1[0x17];
    bVar30 = param_1[0x18];
    bVar32 = param_1[0x19];
    bVar34 = param_1[0x1a];
    bVar36 = param_1[0x1b];
    bVar38 = param_1[0x1c];
    bVar40 = param_1[0x1d];
    bVar42 = param_1[0x1e];
    bVar44 = param_1[0x1f];
    bVar65 = -(*param_2 == bVar10);
    bVar67 = -(param_2[1] == bVar17);
    bVar68 = -(param_2[2] == bVar19);
    bVar69 = -(param_2[3] == bVar21);
    bVar70 = -(param_2[4] == bVar23);
    bVar71 = -(param_2[5] == bVar25);
    bVar72 = -(param_2[6] == bVar27);
    bVar73 = -(param_2[7] == bVar29);
    bVar74 = -(param_2[8] == bVar31);
    bVar75 = -(param_2[9] == bVar33);
    bVar76 = -(param_2[10] == bVar35);
    bVar77 = -(param_2[0xb] == bVar37);
    bVar78 = -(param_2[0xc] == bVar39);
    bVar79 = -(param_2[0xd] == bVar41);
    bVar80 = -(param_2[0xe] == bVar43);
    bVar81 = -(param_2[0xf] == bVar45);
    bVar46 = -(param_2[0x10] == bVar9);
    bVar49 = -(param_2[0x11] == bVar16);
    bVar50 = -(param_2[0x12] == bVar18);
    bVar51 = -(param_2[0x13] == bVar20);
    bVar52 = -(param_2[0x14] == bVar22);
    bVar53 = -(param_2[0x15] == bVar24);
    bVar54 = -(param_2[0x16] == bVar26);
    bVar55 = -(param_2[0x17] == bVar28);
    bVar56 = -(param_2[0x18] == bVar30);
    bVar57 = -(param_2[0x19] == bVar32);
    bVar58 = -(param_2[0x1a] == bVar34);
    bVar59 = -(param_2[0x1b] == bVar36);
    bVar60 = -(param_2[0x1c] == bVar38);
    bVar61 = -(param_2[0x1d] == bVar40);
    bVar62 = -(param_2[0x1e] == bVar42);
    bVar63 = -(param_2[0x1f] == bVar44);
    bVar65 = (bVar10 < bVar65) * bVar10 | (bVar10 >= bVar65) * bVar65;
    bVar67 = (bVar17 < bVar67) * bVar17 | (bVar17 >= bVar67) * bVar67;
    bVar68 = (bVar19 < bVar68) * bVar19 | (bVar19 >= bVar68) * bVar68;
    bVar69 = (bVar21 < bVar69) * bVar21 | (bVar21 >= bVar69) * bVar69;
    bVar70 = (bVar23 < bVar70) * bVar23 | (bVar23 >= bVar70) * bVar70;
    bVar71 = (bVar25 < bVar71) * bVar25 | (bVar25 >= bVar71) * bVar71;
    bVar72 = (bVar27 < bVar72) * bVar27 | (bVar27 >= bVar72) * bVar72;
    bVar73 = (bVar29 < bVar73) * bVar29 | (bVar29 >= bVar73) * bVar73;
    bVar74 = (bVar31 < bVar74) * bVar31 | (bVar31 >= bVar74) * bVar74;
    bVar75 = (bVar33 < bVar75) * bVar33 | (bVar33 >= bVar75) * bVar75;
    bVar76 = (bVar35 < bVar76) * bVar35 | (bVar35 >= bVar76) * bVar76;
    bVar77 = (bVar37 < bVar77) * bVar37 | (bVar37 >= bVar77) * bVar77;
    bVar78 = (bVar39 < bVar78) * bVar39 | (bVar39 >= bVar78) * bVar78;
    bVar79 = (bVar41 < bVar79) * bVar41 | (bVar41 >= bVar79) * bVar79;
    bVar80 = (bVar43 < bVar80) * bVar43 | (bVar43 >= bVar80) * bVar80;
    bVar81 = (bVar45 < bVar81) * bVar45 | (bVar45 >= bVar81) * bVar81;
    bVar46 = (bVar9 < bVar46) * bVar9 | (bVar9 >= bVar46) * bVar46;
    bVar49 = (bVar16 < bVar49) * bVar16 | (bVar16 >= bVar49) * bVar49;
    bVar50 = (bVar18 < bVar50) * bVar18 | (bVar18 >= bVar50) * bVar50;
    bVar51 = (bVar20 < bVar51) * bVar20 | (bVar20 >= bVar51) * bVar51;
    bVar52 = (bVar22 < bVar52) * bVar22 | (bVar22 >= bVar52) * bVar52;
    bVar53 = (bVar24 < bVar53) * bVar24 | (bVar24 >= bVar53) * bVar53;
    bVar54 = (bVar26 < bVar54) * bVar26 | (bVar26 >= bVar54) * bVar54;
    bVar55 = (bVar28 < bVar55) * bVar28 | (bVar28 >= bVar55) * bVar55;
    bVar56 = (bVar30 < bVar56) * bVar30 | (bVar30 >= bVar56) * bVar56;
    bVar57 = (bVar32 < bVar57) * bVar32 | (bVar32 >= bVar57) * bVar57;
    bVar58 = (bVar34 < bVar58) * bVar34 | (bVar34 >= bVar58) * bVar58;
    bVar59 = (bVar36 < bVar59) * bVar36 | (bVar36 >= bVar59) * bVar59;
    bVar60 = (bVar38 < bVar60) * bVar38 | (bVar38 >= bVar60) * bVar60;
    bVar61 = (bVar40 < bVar61) * bVar40 | (bVar40 >= bVar61) * bVar61;
    bVar62 = (bVar42 < bVar62) * bVar42 | (bVar42 >= bVar62) * bVar62;
    bVar63 = (bVar44 < bVar63) * bVar44 | (bVar44 >= bVar63) * bVar63;
    bVar10 = param_1[0x20];
    bVar17 = param_1[0x21];
    bVar19 = param_1[0x22];
    bVar21 = param_1[0x23];
    bVar23 = param_1[0x24];
    bVar25 = param_1[0x25];
    bVar27 = param_1[0x26];
    bVar29 = param_1[0x27];
    bVar31 = param_1[0x28];
    bVar33 = param_1[0x29];
    bVar35 = param_1[0x2a];
    bVar37 = param_1[0x2b];
    bVar39 = param_1[0x2c];
    bVar41 = param_1[0x2d];
    bVar43 = param_1[0x2e];
    bVar45 = param_1[0x2f];
    bVar65 = (bVar46 < bVar65) * bVar46 | (bVar46 >= bVar65) * bVar65;
    bVar67 = (bVar49 < bVar67) * bVar49 | (bVar49 >= bVar67) * bVar67;
    bVar68 = (bVar50 < bVar68) * bVar50 | (bVar50 >= bVar68) * bVar68;
    bVar69 = (bVar51 < bVar69) * bVar51 | (bVar51 >= bVar69) * bVar69;
    bVar70 = (bVar52 < bVar70) * bVar52 | (bVar52 >= bVar70) * bVar70;
    bVar71 = (bVar53 < bVar71) * bVar53 | (bVar53 >= bVar71) * bVar71;
    bVar72 = (bVar54 < bVar72) * bVar54 | (bVar54 >= bVar72) * bVar72;
    bVar73 = (bVar55 < bVar73) * bVar55 | (bVar55 >= bVar73) * bVar73;
    bVar74 = (bVar56 < bVar74) * bVar56 | (bVar56 >= bVar74) * bVar74;
    bVar75 = (bVar57 < bVar75) * bVar57 | (bVar57 >= bVar75) * bVar75;
    bVar76 = (bVar58 < bVar76) * bVar58 | (bVar58 >= bVar76) * bVar76;
    bVar77 = (bVar59 < bVar77) * bVar59 | (bVar59 >= bVar77) * bVar77;
    bVar78 = (bVar60 < bVar78) * bVar60 | (bVar60 >= bVar78) * bVar78;
    bVar79 = (bVar61 < bVar79) * bVar61 | (bVar61 >= bVar79) * bVar79;
    bVar80 = (bVar62 < bVar80) * bVar62 | (bVar62 >= bVar80) * bVar80;
    bVar81 = (bVar63 < bVar81) * bVar63 | (bVar63 >= bVar81) * bVar81;
    bVar9 = param_1[0x30];
    bVar16 = param_1[0x31];
    bVar18 = param_1[0x32];
    bVar20 = param_1[0x33];
    bVar22 = param_1[0x34];
    bVar24 = param_1[0x35];
    bVar26 = param_1[0x36];
    bVar28 = param_1[0x37];
    bVar30 = param_1[0x38];
    bVar32 = param_1[0x39];
    bVar34 = param_1[0x3a];
    bVar36 = param_1[0x3b];
    bVar38 = param_1[0x3c];
    bVar40 = param_1[0x3d];
    bVar42 = param_1[0x3e];
    bVar44 = param_1[0x3f];
    bVar82 = -(param_2[0x20] == bVar10);
    bVar86 = -(param_2[0x21] == bVar17);
    bVar88 = -(param_2[0x22] == bVar19);
    bVar90 = -(param_2[0x23] == bVar21);
    bVar92 = -(param_2[0x24] == bVar23);
    bVar94 = -(param_2[0x25] == bVar25);
    bVar96 = -(param_2[0x26] == bVar27);
    bVar98 = -(param_2[0x27] == bVar29);
    bVar100 = -(param_2[0x28] == bVar31);
    bVar102 = -(param_2[0x29] == bVar33);
    bVar104 = -(param_2[0x2a] == bVar35);
    bVar106 = -(param_2[0x2b] == bVar37);
    bVar108 = -(param_2[0x2c] == bVar39);
    bVar110 = -(param_2[0x2d] == bVar41);
    bVar112 = -(param_2[0x2e] == bVar43);
    bVar114 = -(param_2[0x2f] == bVar45);
    bVar116 = -(param_2[0x30] == bVar9);
    bVar120 = -(param_2[0x31] == bVar16);
    bVar122 = -(param_2[0x32] == bVar18);
    bVar124 = -(param_2[0x33] == bVar20);
    bVar126 = -(param_2[0x34] == bVar22);
    bVar128 = -(param_2[0x35] == bVar24);
    bVar130 = -(param_2[0x36] == bVar26);
    bVar132 = -(param_2[0x37] == bVar28);
    bVar134 = -(param_2[0x38] == bVar30);
    bVar136 = -(param_2[0x39] == bVar32);
    bVar138 = -(param_2[0x3a] == bVar34);
    bVar140 = -(param_2[0x3b] == bVar36);
    bVar142 = -(param_2[0x3c] == bVar38);
    bVar144 = -(param_2[0x3d] == bVar40);
    bVar146 = -(param_2[0x3e] == bVar42);
    bVar148 = -(param_2[0x3f] == bVar44);
    bVar82 = (bVar10 < bVar82) * bVar10 | (bVar10 >= bVar82) * bVar82;
    bVar86 = (bVar17 < bVar86) * bVar17 | (bVar17 >= bVar86) * bVar86;
    bVar88 = (bVar19 < bVar88) * bVar19 | (bVar19 >= bVar88) * bVar88;
    bVar90 = (bVar21 < bVar90) * bVar21 | (bVar21 >= bVar90) * bVar90;
    bVar92 = (bVar23 < bVar92) * bVar23 | (bVar23 >= bVar92) * bVar92;
    bVar94 = (bVar25 < bVar94) * bVar25 | (bVar25 >= bVar94) * bVar94;
    bVar96 = (bVar27 < bVar96) * bVar27 | (bVar27 >= bVar96) * bVar96;
    bVar98 = (bVar29 < bVar98) * bVar29 | (bVar29 >= bVar98) * bVar98;
    bVar100 = (bVar31 < bVar100) * bVar31 | (bVar31 >= bVar100) * bVar100;
    bVar102 = (bVar33 < bVar102) * bVar33 | (bVar33 >= bVar102) * bVar102;
    bVar104 = (bVar35 < bVar104) * bVar35 | (bVar35 >= bVar104) * bVar104;
    bVar106 = (bVar37 < bVar106) * bVar37 | (bVar37 >= bVar106) * bVar106;
    bVar108 = (bVar39 < bVar108) * bVar39 | (bVar39 >= bVar108) * bVar108;
    bVar110 = (bVar41 < bVar110) * bVar41 | (bVar41 >= bVar110) * bVar110;
    bVar112 = (bVar43 < bVar112) * bVar43 | (bVar43 >= bVar112) * bVar112;
    bVar114 = (bVar45 < bVar114) * bVar45 | (bVar45 >= bVar114) * bVar114;
    bVar9 = (bVar9 < bVar116) * bVar9 | (bVar9 >= bVar116) * bVar116;
    bVar16 = (bVar16 < bVar120) * bVar16 | (bVar16 >= bVar120) * bVar120;
    bVar18 = (bVar18 < bVar122) * bVar18 | (bVar18 >= bVar122) * bVar122;
    bVar20 = (bVar20 < bVar124) * bVar20 | (bVar20 >= bVar124) * bVar124;
    bVar22 = (bVar22 < bVar126) * bVar22 | (bVar22 >= bVar126) * bVar126;
    bVar24 = (bVar24 < bVar128) * bVar24 | (bVar24 >= bVar128) * bVar128;
    bVar26 = (bVar26 < bVar130) * bVar26 | (bVar26 >= bVar130) * bVar130;
    bVar28 = (bVar28 < bVar132) * bVar28 | (bVar28 >= bVar132) * bVar132;
    bVar30 = (bVar30 < bVar134) * bVar30 | (bVar30 >= bVar134) * bVar134;
    bVar32 = (bVar32 < bVar136) * bVar32 | (bVar32 >= bVar136) * bVar136;
    bVar34 = (bVar34 < bVar138) * bVar34 | (bVar34 >= bVar138) * bVar138;
    bVar36 = (bVar36 < bVar140) * bVar36 | (bVar36 >= bVar140) * bVar140;
    bVar38 = (bVar38 < bVar142) * bVar38 | (bVar38 >= bVar142) * bVar142;
    bVar40 = (bVar40 < bVar144) * bVar40 | (bVar40 >= bVar144) * bVar144;
    bVar42 = (bVar42 < bVar146) * bVar42 | (bVar42 >= bVar146) * bVar146;
    bVar44 = (bVar44 < bVar148) * bVar44 | (bVar44 >= bVar148) * bVar148;
    bVar10 = (bVar82 < bVar65) * bVar82 | (bVar82 >= bVar65) * bVar65;
    bVar17 = (bVar86 < bVar67) * bVar86 | (bVar86 >= bVar67) * bVar67;
    bVar19 = (bVar88 < bVar68) * bVar88 | (bVar88 >= bVar68) * bVar68;
    bVar21 = (bVar90 < bVar69) * bVar90 | (bVar90 >= bVar69) * bVar69;
    bVar23 = (bVar92 < bVar70) * bVar92 | (bVar92 >= bVar70) * bVar70;
    bVar25 = (bVar94 < bVar71) * bVar94 | (bVar94 >= bVar71) * bVar71;
    bVar27 = (bVar96 < bVar72) * bVar96 | (bVar96 >= bVar72) * bVar72;
    bVar29 = (bVar98 < bVar73) * bVar98 | (bVar98 >= bVar73) * bVar73;
    bVar31 = (bVar100 < bVar74) * bVar100 | (bVar100 >= bVar74) * bVar74;
    bVar33 = (bVar102 < bVar75) * bVar102 | (bVar102 >= bVar75) * bVar75;
    bVar35 = (bVar104 < bVar76) * bVar104 | (bVar104 >= bVar76) * bVar76;
    bVar37 = (bVar106 < bVar77) * bVar106 | (bVar106 >= bVar77) * bVar77;
    bVar39 = (bVar108 < bVar78) * bVar108 | (bVar108 >= bVar78) * bVar78;
    bVar41 = (bVar110 < bVar79) * bVar110 | (bVar110 >= bVar79) * bVar79;
    bVar43 = (bVar112 < bVar80) * bVar112 | (bVar112 >= bVar80) * bVar80;
    bVar45 = (bVar114 < bVar81) * bVar114 | (bVar114 >= bVar81) * bVar81;
    auVar13[0] = -((byte)((bVar9 < bVar10) * bVar9) == '\0' &&
                  (byte)((bVar9 >= bVar10) * bVar10) == '\0');
    auVar13[1] = -((byte)((bVar16 < bVar17) * bVar16) == '\0' &&
                  (byte)((bVar16 >= bVar17) * bVar17) == '\0');
    auVar13[2] = -((byte)((bVar18 < bVar19) * bVar18) == '\0' &&
                  (byte)((bVar18 >= bVar19) * bVar19) == '\0');
    auVar13[3] = -((byte)((bVar20 < bVar21) * bVar20) == '\0' &&
                  (byte)((bVar20 >= bVar21) * bVar21) == '\0');
    auVar13[4] = -((byte)((bVar22 < bVar23) * bVar22) == '\0' &&
                  (byte)((bVar22 >= bVar23) * bVar23) == '\0');
    auVar13[5] = -((byte)((bVar24 < bVar25) * bVar24) == '\0' &&
                  (byte)((bVar24 >= bVar25) * bVar25) == '\0');
    auVar13[6] = -((byte)((bVar26 < bVar27) * bVar26) == '\0' &&
                  (byte)((bVar26 >= bVar27) * bVar27) == '\0');
    auVar13[7] = -((byte)((bVar28 < bVar29) * bVar28) == '\0' &&
                  (byte)((bVar28 >= bVar29) * bVar29) == '\0');
    auVar13[8] = -((byte)((bVar30 < bVar31) * bVar30) == '\0' &&
                  (byte)((bVar30 >= bVar31) * bVar31) == '\0');
    auVar13[9] = -((byte)((bVar32 < bVar33) * bVar32) == '\0' &&
                  (byte)((bVar32 >= bVar33) * bVar33) == '\0');
    auVar13[10] = -((byte)((bVar34 < bVar35) * bVar34) == '\0' &&
                   (byte)((bVar34 >= bVar35) * bVar35) == '\0');
    auVar13[0xb] = -((byte)((bVar36 < bVar37) * bVar36) == '\0' &&
                    (byte)((bVar36 >= bVar37) * bVar37) == '\0');
    auVar13[0xc] = -((byte)((bVar38 < bVar39) * bVar38) == '\0' &&
                    (byte)((bVar38 >= bVar39) * bVar39) == '\0');
    auVar13[0xd] = -((byte)((bVar40 < bVar41) * bVar40) == '\0' &&
                    (byte)((bVar40 >= bVar41) * bVar41) == '\0');
    auVar13[0xe] = -((byte)((bVar42 < bVar43) * bVar42) == '\0' &&
                    (byte)((bVar42 >= bVar43) * bVar43) == '\0');
    bVar8 = (byte)((bVar44 < bVar45) * bVar44) == '\0' &&
            (byte)((bVar44 >= bVar45) * bVar45) == '\0';
    auVar13[0xf] = -bVar8;
    if ((((((((((((((((auVar13 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar13 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar13 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar13 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar13 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar13 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar13 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar13 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar13 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar13 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar13 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar13 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar13 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar13 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar13 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar8) break;
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  auVar84[0] = -(bVar82 == 0);
  auVar84[1] = -(bVar86 == 0);
  auVar84[2] = -(bVar88 == 0);
  auVar84[3] = -(bVar90 == 0);
  auVar84[4] = -(bVar92 == 0);
  auVar84[5] = -(bVar94 == 0);
  auVar84[6] = -(bVar96 == 0);
  auVar84[7] = -(bVar98 == 0);
  auVar84[8] = -(bVar100 == 0);
  auVar84[9] = -(bVar102 == 0);
  auVar84[10] = -(bVar104 == 0);
  auVar84[0xb] = -(bVar106 == 0);
  auVar84[0xc] = -(bVar108 == 0);
  auVar84[0xd] = -(bVar110 == 0);
  auVar84[0xe] = -(bVar112 == 0);
  auVar84[0xf] = -(bVar114 == 0);
  auVar47[0] = -(bVar46 == 0);
  auVar47[1] = -(bVar49 == 0);
  auVar47[2] = -(bVar50 == 0);
  auVar47[3] = -(bVar51 == 0);
  auVar47[4] = -(bVar52 == 0);
  auVar47[5] = -(bVar53 == 0);
  auVar47[6] = -(bVar54 == 0);
  auVar47[7] = -(bVar55 == 0);
  auVar47[8] = -(bVar56 == 0);
  auVar47[9] = -(bVar57 == 0);
  auVar47[10] = -(bVar58 == 0);
  auVar47[0xb] = -(bVar59 == 0);
  auVar47[0xc] = -(bVar60 == 0);
  auVar47[0xd] = -(bVar61 == 0);
  auVar47[0xe] = -(bVar62 == 0);
  auVar47[0xf] = -(bVar63 == 0);
  bVar10 = *param_1;
  bVar17 = param_1[1];
  bVar19 = param_1[2];
  bVar21 = param_1[3];
  bVar23 = param_1[4];
  bVar25 = param_1[5];
  bVar27 = param_1[6];
  bVar29 = param_1[7];
  bVar31 = param_1[8];
  bVar33 = param_1[9];
  bVar35 = param_1[10];
  bVar37 = param_1[0xb];
  bVar39 = param_1[0xc];
  bVar41 = param_1[0xd];
  bVar43 = param_1[0xe];
  bVar45 = param_1[0xf];
  bVar65 = -(*param_2 == bVar10);
  bVar67 = -(param_2[1] == bVar17);
  bVar68 = -(param_2[2] == bVar19);
  bVar69 = -(param_2[3] == bVar21);
  bVar70 = -(param_2[4] == bVar23);
  bVar71 = -(param_2[5] == bVar25);
  bVar72 = -(param_2[6] == bVar27);
  bVar73 = -(param_2[7] == bVar29);
  bVar74 = -(param_2[8] == bVar31);
  bVar75 = -(param_2[9] == bVar33);
  bVar76 = -(param_2[10] == bVar35);
  bVar77 = -(param_2[0xb] == bVar37);
  bVar78 = -(param_2[0xc] == bVar39);
  bVar79 = -(param_2[0xd] == bVar41);
  bVar80 = -(param_2[0xe] == bVar43);
  bVar81 = -(param_2[0xf] == bVar45);
  auVar118[0] = -(bVar9 == 0);
  auVar118[1] = -(bVar16 == 0);
  auVar118[2] = -(bVar18 == 0);
  auVar118[3] = -(bVar20 == 0);
  auVar118[4] = -(bVar22 == 0);
  auVar118[5] = -(bVar24 == 0);
  auVar118[6] = -(bVar26 == 0);
  auVar118[7] = -(bVar28 == 0);
  auVar118[8] = -(bVar30 == 0);
  auVar118[9] = -(bVar32 == 0);
  auVar118[10] = -(bVar34 == 0);
  auVar118[0xb] = -(bVar36 == 0);
  auVar118[0xc] = -(bVar38 == 0);
  auVar118[0xd] = -(bVar40 == 0);
  auVar118[0xe] = -(bVar42 == 0);
  auVar118[0xf] = -(bVar44 == 0);
  auVar14[0] = -((byte)((bVar10 < bVar65) * bVar10) == '\0' &&
                (byte)((bVar10 >= bVar65) * bVar65) == '\0');
  auVar14[1] = -((byte)((bVar17 < bVar67) * bVar17) == '\0' &&
                (byte)((bVar17 >= bVar67) * bVar67) == '\0');
  auVar14[2] = -((byte)((bVar19 < bVar68) * bVar19) == '\0' &&
                (byte)((bVar19 >= bVar68) * bVar68) == '\0');
  auVar14[3] = -((byte)((bVar21 < bVar69) * bVar21) == '\0' &&
                (byte)((bVar21 >= bVar69) * bVar69) == '\0');
  auVar14[4] = -((byte)((bVar23 < bVar70) * bVar23) == '\0' &&
                (byte)((bVar23 >= bVar70) * bVar70) == '\0');
  auVar14[5] = -((byte)((bVar25 < bVar71) * bVar25) == '\0' &&
                (byte)((bVar25 >= bVar71) * bVar71) == '\0');
  auVar14[6] = -((byte)((bVar27 < bVar72) * bVar27) == '\0' &&
                (byte)((bVar27 >= bVar72) * bVar72) == '\0');
  auVar14[7] = -((byte)((bVar29 < bVar73) * bVar29) == '\0' &&
                (byte)((bVar29 >= bVar73) * bVar73) == '\0');
  auVar14[8] = -((byte)((bVar31 < bVar74) * bVar31) == '\0' &&
                (byte)((bVar31 >= bVar74) * bVar74) == '\0');
  auVar14[9] = -((byte)((bVar33 < bVar75) * bVar33) == '\0' &&
                (byte)((bVar33 >= bVar75) * bVar75) == '\0');
  auVar14[10] = -((byte)((bVar35 < bVar76) * bVar35) == '\0' &&
                 (byte)((bVar35 >= bVar76) * bVar76) == '\0');
  auVar14[0xb] = -((byte)((bVar37 < bVar77) * bVar37) == '\0' &&
                  (byte)((bVar37 >= bVar77) * bVar77) == '\0');
  auVar14[0xc] = -((byte)((bVar39 < bVar78) * bVar39) == '\0' &&
                  (byte)((bVar39 >= bVar78) * bVar78) == '\0');
  auVar14[0xd] = -((byte)((bVar41 < bVar79) * bVar41) == '\0' &&
                  (byte)((bVar41 >= bVar79) * bVar79) == '\0');
  auVar14[0xe] = -((byte)((bVar43 < bVar80) * bVar43) == '\0' &&
                  (byte)((bVar43 >= bVar80) * bVar80) == '\0');
  auVar14[0xf] = -((byte)((bVar45 < bVar81) * bVar45) == '\0' &&
                  (byte)((bVar45 >= bVar81) * bVar81) == '\0');
  uVar5 = (ulong)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                         (ushort)(auVar47[0xf] >> 7) << 0xf) << 0x10 |
          (ulong)(ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar84[0xf] >> 7) << 0xf) << 0x20 |
          (ulong)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
                         (ushort)(auVar14[0xf] >> 7) << 0xf) |
          (ulong)(ushort)((ushort)(SUB161(auVar118 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar118[0xf] >> 7) << 0xf) << 0x30;
  lVar6 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> lVar6 & 1) == 0; lVar6 = lVar6 + 1) {
    }
  }
  return (uint)param_1[lVar6] - (uint)param_2[lVar6];
}

