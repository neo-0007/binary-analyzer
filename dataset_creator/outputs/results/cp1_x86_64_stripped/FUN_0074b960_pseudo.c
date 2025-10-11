
byte * FUN_0074b960(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar32;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  byte bVar33;
  byte bVar34;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar70;
  byte bVar71;
  byte bVar75;
  byte bVar77;
  byte bVar79;
  byte bVar81;
  byte bVar83;
  byte bVar85;
  byte bVar87;
  byte bVar89;
  byte bVar91;
  byte bVar93;
  byte bVar95;
  byte bVar97;
  byte bVar99;
  byte bVar101;
  byte bVar103;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  byte bVar76;
  byte bVar78;
  byte bVar80;
  byte bVar82;
  byte bVar84;
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
  undefined1 auVar74 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  byte bVar108;
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
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  byte bVar127;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  
  bVar1 = *param_2;
  if (bVar1 == 0) {
    return param_1;
  }
  bVar2 = param_2[1];
  if (bVar2 == 0) {
    pbVar6 = (byte *)FUN_0073d120(param_1,bVar1);
    return pbVar6;
  }
  if (((uint)param_1 & 0xfff) < 0xfc0) {
    bVar33 = -(*param_1 == bVar1);
    bVar40 = -(param_1[1] == bVar1);
    bVar42 = -(param_1[2] == bVar1);
    bVar44 = -(param_1[3] == bVar1);
    bVar46 = -(param_1[4] == bVar1);
    bVar48 = -(param_1[5] == bVar1);
    bVar50 = -(param_1[6] == bVar1);
    bVar52 = -(param_1[7] == bVar1);
    bVar54 = -(param_1[8] == bVar1);
    bVar56 = -(param_1[9] == bVar1);
    bVar58 = -(param_1[10] == bVar1);
    bVar60 = -(param_1[0xb] == bVar1);
    bVar62 = -(param_1[0xc] == bVar1);
    bVar64 = -(param_1[0xd] == bVar1);
    bVar66 = -(param_1[0xe] == bVar1);
    bVar68 = -(param_1[0xf] == bVar1);
    bVar70 = -(param_1[1] == bVar2);
    bVar75 = -(param_1[2] == bVar2);
    bVar77 = -(param_1[3] == bVar2);
    bVar79 = -(param_1[4] == bVar2);
    bVar81 = -(param_1[5] == bVar2);
    bVar83 = -(param_1[6] == bVar2);
    bVar85 = -(param_1[7] == bVar2);
    bVar87 = -(param_1[8] == bVar2);
    bVar89 = -(param_1[9] == bVar2);
    bVar91 = -(param_1[10] == bVar2);
    bVar93 = -(param_1[0xb] == bVar2);
    bVar95 = -(param_1[0xc] == bVar2);
    bVar97 = -(param_1[0xd] == bVar2);
    bVar99 = -(param_1[0xe] == bVar2);
    bVar101 = -(param_1[0xf] == bVar2);
    bVar103 = -(param_1[0x10] == bVar2);
    auVar109[0] = -(*param_1 == 0);
    auVar109[1] = -(param_1[1] == 0);
    auVar109[2] = -(param_1[2] == 0);
    auVar109[3] = -(param_1[3] == 0);
    auVar109[4] = -(param_1[4] == 0);
    auVar109[5] = -(param_1[5] == 0);
    auVar109[6] = -(param_1[6] == 0);
    auVar109[7] = -(param_1[7] == 0);
    auVar109[8] = -(param_1[8] == 0);
    auVar109[9] = -(param_1[9] == 0);
    auVar109[10] = -(param_1[10] == 0);
    auVar109[0xb] = -(param_1[0xb] == 0);
    auVar109[0xc] = -(param_1[0xc] == 0);
    auVar109[0xd] = -(param_1[0xd] == 0);
    auVar109[0xe] = -(param_1[0xe] == 0);
    auVar109[0xf] = -(param_1[0xf] == 0);
    auVar72[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar72[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar72[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar72[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar72[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar72[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar72[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar72[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar72[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar72[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar72[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar72[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar72[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar72[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar72[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar72[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar105[0] = -(param_1[0x10] == 0);
    auVar105[1] = -(param_1[0x11] == 0);
    auVar105[2] = -(param_1[0x12] == 0);
    auVar105[3] = -(param_1[0x13] == 0);
    auVar105[4] = -(param_1[0x14] == 0);
    auVar105[5] = -(param_1[0x15] == 0);
    auVar105[6] = -(param_1[0x16] == 0);
    auVar105[7] = -(param_1[0x17] == 0);
    auVar105[8] = -(param_1[0x18] == 0);
    auVar105[9] = -(param_1[0x19] == 0);
    auVar105[10] = -(param_1[0x1a] == 0);
    auVar105[0xb] = -(param_1[0x1b] == 0);
    auVar105[0xc] = -(param_1[0x1c] == 0);
    auVar105[0xd] = -(param_1[0x1d] == 0);
    auVar105[0xe] = -(param_1[0x1e] == 0);
    auVar105[0xf] = -(param_1[0x1f] == 0);
    bVar70 = -(param_1[0x11] == bVar2);
    bVar75 = -(param_1[0x12] == bVar2);
    bVar77 = -(param_1[0x13] == bVar2);
    bVar79 = -(param_1[0x14] == bVar2);
    bVar81 = -(param_1[0x15] == bVar2);
    bVar83 = -(param_1[0x16] == bVar2);
    bVar85 = -(param_1[0x17] == bVar2);
    bVar87 = -(param_1[0x18] == bVar2);
    bVar89 = -(param_1[0x19] == bVar2);
    bVar91 = -(param_1[0x1a] == bVar2);
    bVar93 = -(param_1[0x1b] == bVar2);
    bVar95 = -(param_1[0x1c] == bVar2);
    bVar97 = -(param_1[0x1d] == bVar2);
    bVar99 = -(param_1[0x1e] == bVar2);
    bVar101 = -(param_1[0x1f] == bVar2);
    bVar103 = -(param_1[0x20] == bVar2);
    auVar72 = auVar72 | auVar109;
    bVar33 = -(param_1[0x10] == bVar1);
    bVar40 = -(param_1[0x11] == bVar1);
    bVar42 = -(param_1[0x12] == bVar1);
    bVar44 = -(param_1[0x13] == bVar1);
    bVar46 = -(param_1[0x14] == bVar1);
    bVar48 = -(param_1[0x15] == bVar1);
    bVar50 = -(param_1[0x16] == bVar1);
    bVar52 = -(param_1[0x17] == bVar1);
    bVar54 = -(param_1[0x18] == bVar1);
    bVar56 = -(param_1[0x19] == bVar1);
    bVar58 = -(param_1[0x1a] == bVar1);
    bVar60 = -(param_1[0x1b] == bVar1);
    bVar62 = -(param_1[0x1c] == bVar1);
    bVar64 = -(param_1[0x1d] == bVar1);
    bVar66 = -(param_1[0x1e] == bVar1);
    bVar68 = -(param_1[0x1f] == bVar1);
    auVar14[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar14[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar14[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar14[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar14[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar14[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar14[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar14[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar14[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar14[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar14[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar14[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar14[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar14[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar14[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar14[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar14 = auVar14 | auVar105;
    for (uVar10 = (ulong)CONCAT22((ushort)(SUB161(auVar14 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar14[0xf] >> 7) << 0xf,
                                  (ushort)(SUB161(auVar72 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar72[0xf] >> 7) << 0xf); uVar10 != 0;
        uVar10 = uVar10 & uVar10 - 1) {
      lVar12 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
        }
      }
      pbVar6 = param_1 + lVar12;
      if (*pbVar6 == 0) {
        return (byte *)0x0;
      }
      if (param_2[2] == 0) {
        return pbVar6;
      }
      if (param_2[2] == pbVar6[2]) {
        lVar12 = 0;
        do {
          lVar7 = lVar12 + 3;
          if (param_2[lVar7] == 0) {
            return pbVar6;
          }
          lVar8 = lVar12 + 3;
          lVar12 = lVar12 + 1;
        } while (param_2[lVar7] == pbVar6[lVar8]);
      }
    }
    bVar33 = -(param_1[0x20] == bVar1);
    bVar40 = -(param_1[0x21] == bVar1);
    bVar42 = -(param_1[0x22] == bVar1);
    bVar44 = -(param_1[0x23] == bVar1);
    bVar46 = -(param_1[0x24] == bVar1);
    bVar48 = -(param_1[0x25] == bVar1);
    bVar50 = -(param_1[0x26] == bVar1);
    bVar52 = -(param_1[0x27] == bVar1);
    bVar54 = -(param_1[0x28] == bVar1);
    bVar56 = -(param_1[0x29] == bVar1);
    bVar58 = -(param_1[0x2a] == bVar1);
    bVar60 = -(param_1[0x2b] == bVar1);
    bVar62 = -(param_1[0x2c] == bVar1);
    bVar64 = -(param_1[0x2d] == bVar1);
    bVar66 = -(param_1[0x2e] == bVar1);
    bVar68 = -(param_1[0x2f] == bVar1);
    bVar70 = -(param_1[0x21] == bVar2);
    bVar75 = -(param_1[0x22] == bVar2);
    bVar77 = -(param_1[0x23] == bVar2);
    bVar79 = -(param_1[0x24] == bVar2);
    bVar81 = -(param_1[0x25] == bVar2);
    bVar83 = -(param_1[0x26] == bVar2);
    bVar85 = -(param_1[0x27] == bVar2);
    bVar87 = -(param_1[0x28] == bVar2);
    bVar89 = -(param_1[0x29] == bVar2);
    bVar91 = -(param_1[0x2a] == bVar2);
    bVar93 = -(param_1[0x2b] == bVar2);
    bVar95 = -(param_1[0x2c] == bVar2);
    bVar97 = -(param_1[0x2d] == bVar2);
    bVar99 = -(param_1[0x2e] == bVar2);
    bVar101 = -(param_1[0x2f] == bVar2);
    bVar103 = -(param_1[0x30] == bVar2);
    auVar110[0] = -(param_1[0x20] == 0);
    auVar110[1] = -(param_1[0x21] == 0);
    auVar110[2] = -(param_1[0x22] == 0);
    auVar110[3] = -(param_1[0x23] == 0);
    auVar110[4] = -(param_1[0x24] == 0);
    auVar110[5] = -(param_1[0x25] == 0);
    auVar110[6] = -(param_1[0x26] == 0);
    auVar110[7] = -(param_1[0x27] == 0);
    auVar110[8] = -(param_1[0x28] == 0);
    auVar110[9] = -(param_1[0x29] == 0);
    auVar110[10] = -(param_1[0x2a] == 0);
    auVar110[0xb] = -(param_1[0x2b] == 0);
    auVar110[0xc] = -(param_1[0x2c] == 0);
    auVar110[0xd] = -(param_1[0x2d] == 0);
    auVar110[0xe] = -(param_1[0x2e] == 0);
    auVar110[0xf] = -(param_1[0x2f] == 0);
    auVar73[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar73[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar73[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar73[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar73[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar73[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar73[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar73[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar73[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar73[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar73[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar73[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar73[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar73[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar73[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar73[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar106[0] = -(param_1[0x30] == 0);
    auVar106[1] = -(param_1[0x31] == 0);
    auVar106[2] = -(param_1[0x32] == 0);
    auVar106[3] = -(param_1[0x33] == 0);
    auVar106[4] = -(param_1[0x34] == 0);
    auVar106[5] = -(param_1[0x35] == 0);
    auVar106[6] = -(param_1[0x36] == 0);
    auVar106[7] = -(param_1[0x37] == 0);
    auVar106[8] = -(param_1[0x38] == 0);
    auVar106[9] = -(param_1[0x39] == 0);
    auVar106[10] = -(param_1[0x3a] == 0);
    auVar106[0xb] = -(param_1[0x3b] == 0);
    auVar106[0xc] = -(param_1[0x3c] == 0);
    auVar106[0xd] = -(param_1[0x3d] == 0);
    auVar106[0xe] = -(param_1[0x3e] == 0);
    auVar106[0xf] = -(param_1[0x3f] == 0);
    bVar70 = -(param_1[0x31] == bVar2);
    bVar75 = -(param_1[0x32] == bVar2);
    bVar77 = -(param_1[0x33] == bVar2);
    bVar79 = -(param_1[0x34] == bVar2);
    bVar81 = -(param_1[0x35] == bVar2);
    bVar83 = -(param_1[0x36] == bVar2);
    bVar85 = -(param_1[0x37] == bVar2);
    bVar87 = -(param_1[0x38] == bVar2);
    bVar89 = -(param_1[0x39] == bVar2);
    bVar91 = -(param_1[0x3a] == bVar2);
    bVar93 = -(param_1[0x3b] == bVar2);
    bVar95 = -(param_1[0x3c] == bVar2);
    bVar97 = -(param_1[0x3d] == bVar2);
    bVar99 = -(param_1[0x3e] == bVar2);
    bVar101 = -(param_1[0x3f] == bVar2);
    bVar103 = -(param_1[0x40] == bVar2);
    auVar73 = auVar73 | auVar110;
    bVar33 = -(param_1[0x30] == bVar1);
    bVar40 = -(param_1[0x31] == bVar1);
    bVar42 = -(param_1[0x32] == bVar1);
    bVar44 = -(param_1[0x33] == bVar1);
    bVar46 = -(param_1[0x34] == bVar1);
    bVar48 = -(param_1[0x35] == bVar1);
    bVar50 = -(param_1[0x36] == bVar1);
    bVar52 = -(param_1[0x37] == bVar1);
    bVar54 = -(param_1[0x38] == bVar1);
    bVar56 = -(param_1[0x39] == bVar1);
    bVar58 = -(param_1[0x3a] == bVar1);
    bVar60 = -(param_1[0x3b] == bVar1);
    bVar62 = -(param_1[0x3c] == bVar1);
    bVar64 = -(param_1[0x3d] == bVar1);
    bVar66 = -(param_1[0x3e] == bVar1);
    bVar68 = -(param_1[0x3f] == bVar1);
    auVar15[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar15[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar15[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar15[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar15[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar15[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar15[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar15[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar15[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar15[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar15[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar15[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar15[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar15[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar15[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar15[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar15 = auVar15 | auVar106;
    for (uVar10 = (ulong)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
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
                                 (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) << 0x30 |
                  (ulong)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar73[0xf] >> 7) << 0xf) << 0x20; uVar10 != 0;
        uVar10 = uVar10 & uVar10 - 1) {
      lVar12 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
        }
      }
      pbVar6 = param_1 + lVar12;
      if (*pbVar6 == 0) {
        return (byte *)0x0;
      }
      if (param_2[2] == 0) {
        return pbVar6;
      }
      if (param_2[2] == pbVar6[2]) {
        lVar12 = 0;
        do {
          lVar7 = lVar12 + 3;
          if (param_2[lVar7] == 0) {
            return pbVar6;
          }
          lVar8 = lVar12 + 3;
          lVar12 = lVar12 + 1;
        } while (param_2[lVar7] == pbVar6[lVar8]);
      }
    }
  }
  else {
    pbVar6 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    bVar70 = -(pbVar6[-1] == bVar1);
    bVar75 = -(*pbVar6 == bVar1);
    bVar77 = -(pbVar6[1] == bVar1);
    bVar79 = -(pbVar6[2] == bVar1);
    bVar81 = -(pbVar6[3] == bVar1);
    bVar83 = -(pbVar6[4] == bVar1);
    bVar85 = -(pbVar6[5] == bVar1);
    bVar87 = -(pbVar6[6] == bVar1);
    bVar89 = -(pbVar6[7] == bVar1);
    bVar91 = -(pbVar6[8] == bVar1);
    bVar93 = -(pbVar6[9] == bVar1);
    bVar95 = -(pbVar6[10] == bVar1);
    bVar97 = -(pbVar6[0xb] == bVar1);
    bVar99 = -(pbVar6[0xc] == bVar1);
    bVar101 = -(pbVar6[0xd] == bVar1);
    bVar103 = -(pbVar6[0xe] == bVar1);
    auVar130[0] = -(*pbVar6 == 0);
    auVar130[1] = -(pbVar6[1] == 0);
    auVar130[2] = -(pbVar6[2] == 0);
    auVar130[3] = -(pbVar6[3] == 0);
    auVar130[4] = -(pbVar6[4] == 0);
    auVar130[5] = -(pbVar6[5] == 0);
    auVar130[6] = -(pbVar6[6] == 0);
    auVar130[7] = -(pbVar6[7] == 0);
    auVar130[8] = -(pbVar6[8] == 0);
    auVar130[9] = -(pbVar6[9] == 0);
    auVar130[10] = -(pbVar6[10] == 0);
    auVar130[0xb] = -(pbVar6[0xb] == 0);
    auVar130[0xc] = -(pbVar6[0xc] == 0);
    auVar130[0xd] = -(pbVar6[0xd] == 0);
    auVar130[0xe] = -(pbVar6[0xe] == 0);
    auVar130[0xf] = -(pbVar6[0xf] == 0);
    bVar33 = -(*pbVar6 == bVar2);
    bVar40 = -(pbVar6[1] == bVar2);
    bVar42 = -(pbVar6[2] == bVar2);
    bVar44 = -(pbVar6[3] == bVar2);
    bVar46 = -(pbVar6[4] == bVar2);
    bVar48 = -(pbVar6[5] == bVar2);
    bVar50 = -(pbVar6[6] == bVar2);
    bVar52 = -(pbVar6[7] == bVar2);
    bVar54 = -(pbVar6[8] == bVar2);
    bVar56 = -(pbVar6[9] == bVar2);
    bVar58 = -(pbVar6[10] == bVar2);
    bVar60 = -(pbVar6[0xb] == bVar2);
    bVar62 = -(pbVar6[0xc] == bVar2);
    bVar64 = -(pbVar6[0xd] == bVar2);
    bVar66 = -(pbVar6[0xe] == bVar2);
    bVar68 = -(pbVar6[0xf] == bVar2);
    auVar36[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar36[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar36[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar36[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar36[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar36[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar36[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar36[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar36[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar36[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar36[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar36[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar36[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar36[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar36[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar36[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar128[0] = -(pbVar6[0x10] == 0);
    auVar128[1] = -(pbVar6[0x11] == 0);
    auVar128[2] = -(pbVar6[0x12] == 0);
    auVar128[3] = -(pbVar6[0x13] == 0);
    auVar128[4] = -(pbVar6[0x14] == 0);
    auVar128[5] = -(pbVar6[0x15] == 0);
    auVar128[6] = -(pbVar6[0x16] == 0);
    auVar128[7] = -(pbVar6[0x17] == 0);
    auVar128[8] = -(pbVar6[0x18] == 0);
    auVar128[9] = -(pbVar6[0x19] == 0);
    auVar128[10] = -(pbVar6[0x1a] == 0);
    auVar128[0xb] = -(pbVar6[0x1b] == 0);
    auVar128[0xc] = -(pbVar6[0x1c] == 0);
    auVar128[0xd] = -(pbVar6[0x1d] == 0);
    auVar128[0xe] = -(pbVar6[0x1e] == 0);
    auVar128[0xf] = -(pbVar6[0x1f] == 0);
    auVar130 = auVar130 | auVar36;
    bVar70 = -(pbVar6[0xf] == bVar1);
    bVar75 = -(pbVar6[0x10] == bVar1);
    bVar77 = -(pbVar6[0x11] == bVar1);
    bVar79 = -(pbVar6[0x12] == bVar1);
    bVar81 = -(pbVar6[0x13] == bVar1);
    bVar83 = -(pbVar6[0x14] == bVar1);
    bVar85 = -(pbVar6[0x15] == bVar1);
    bVar87 = -(pbVar6[0x16] == bVar1);
    bVar89 = -(pbVar6[0x17] == bVar1);
    bVar91 = -(pbVar6[0x18] == bVar1);
    bVar93 = -(pbVar6[0x19] == bVar1);
    bVar95 = -(pbVar6[0x1a] == bVar1);
    bVar97 = -(pbVar6[0x1b] == bVar1);
    bVar99 = -(pbVar6[0x1c] == bVar1);
    bVar101 = -(pbVar6[0x1d] == bVar1);
    bVar103 = -(pbVar6[0x1e] == bVar1);
    bVar33 = -(pbVar6[0x10] == bVar2);
    bVar40 = -(pbVar6[0x11] == bVar2);
    bVar42 = -(pbVar6[0x12] == bVar2);
    bVar44 = -(pbVar6[0x13] == bVar2);
    bVar46 = -(pbVar6[0x14] == bVar2);
    bVar48 = -(pbVar6[0x15] == bVar2);
    bVar50 = -(pbVar6[0x16] == bVar2);
    bVar52 = -(pbVar6[0x17] == bVar2);
    bVar54 = -(pbVar6[0x18] == bVar2);
    bVar56 = -(pbVar6[0x19] == bVar2);
    bVar58 = -(pbVar6[0x1a] == bVar2);
    bVar60 = -(pbVar6[0x1b] == bVar2);
    bVar62 = -(pbVar6[0x1c] == bVar2);
    bVar64 = -(pbVar6[0x1d] == bVar2);
    bVar66 = -(pbVar6[0x1e] == bVar2);
    bVar68 = -(pbVar6[0x1f] == bVar2);
    auVar37[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar37[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar37[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar37[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar37[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar37[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar37[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar37[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar37[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar37[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar37[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar37[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar37[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar37[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar37[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar37[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar128 = auVar128 | auVar37;
    auVar112[0] = -(pbVar6[0x20] == 0);
    auVar112[1] = -(pbVar6[0x21] == 0);
    auVar112[2] = -(pbVar6[0x22] == 0);
    auVar112[3] = -(pbVar6[0x23] == 0);
    auVar112[4] = -(pbVar6[0x24] == 0);
    auVar112[5] = -(pbVar6[0x25] == 0);
    auVar112[6] = -(pbVar6[0x26] == 0);
    auVar112[7] = -(pbVar6[0x27] == 0);
    auVar112[8] = -(pbVar6[0x28] == 0);
    auVar112[9] = -(pbVar6[0x29] == 0);
    auVar112[10] = -(pbVar6[0x2a] == 0);
    auVar112[0xb] = -(pbVar6[0x2b] == 0);
    auVar112[0xc] = -(pbVar6[0x2c] == 0);
    auVar112[0xd] = -(pbVar6[0x2d] == 0);
    auVar112[0xe] = -(pbVar6[0x2e] == 0);
    auVar112[0xf] = -(pbVar6[0x2f] == 0);
    bVar70 = -(pbVar6[0x1f] == bVar1);
    bVar75 = -(pbVar6[0x20] == bVar1);
    bVar77 = -(pbVar6[0x21] == bVar1);
    bVar79 = -(pbVar6[0x22] == bVar1);
    bVar81 = -(pbVar6[0x23] == bVar1);
    bVar83 = -(pbVar6[0x24] == bVar1);
    bVar85 = -(pbVar6[0x25] == bVar1);
    bVar87 = -(pbVar6[0x26] == bVar1);
    bVar89 = -(pbVar6[0x27] == bVar1);
    bVar91 = -(pbVar6[0x28] == bVar1);
    bVar93 = -(pbVar6[0x29] == bVar1);
    bVar95 = -(pbVar6[0x2a] == bVar1);
    bVar97 = -(pbVar6[0x2b] == bVar1);
    bVar99 = -(pbVar6[0x2c] == bVar1);
    bVar101 = -(pbVar6[0x2d] == bVar1);
    bVar103 = -(pbVar6[0x2e] == bVar1);
    bVar33 = -(pbVar6[0x20] == bVar2);
    bVar40 = -(pbVar6[0x21] == bVar2);
    bVar42 = -(pbVar6[0x22] == bVar2);
    bVar44 = -(pbVar6[0x23] == bVar2);
    bVar46 = -(pbVar6[0x24] == bVar2);
    bVar48 = -(pbVar6[0x25] == bVar2);
    bVar50 = -(pbVar6[0x26] == bVar2);
    bVar52 = -(pbVar6[0x27] == bVar2);
    bVar54 = -(pbVar6[0x28] == bVar2);
    bVar56 = -(pbVar6[0x29] == bVar2);
    bVar58 = -(pbVar6[0x2a] == bVar2);
    bVar60 = -(pbVar6[0x2b] == bVar2);
    bVar62 = -(pbVar6[0x2c] == bVar2);
    bVar64 = -(pbVar6[0x2d] == bVar2);
    bVar66 = -(pbVar6[0x2e] == bVar2);
    bVar68 = -(pbVar6[0x2f] == bVar2);
    auVar17[0] = -(pbVar6[0x30] == 0);
    auVar17[1] = -(pbVar6[0x31] == 0);
    auVar17[2] = -(pbVar6[0x32] == 0);
    auVar17[3] = -(pbVar6[0x33] == 0);
    auVar17[4] = -(pbVar6[0x34] == 0);
    auVar17[5] = -(pbVar6[0x35] == 0);
    auVar17[6] = -(pbVar6[0x36] == 0);
    auVar17[7] = -(pbVar6[0x37] == 0);
    auVar17[8] = -(pbVar6[0x38] == 0);
    auVar17[9] = -(pbVar6[0x39] == 0);
    auVar17[10] = -(pbVar6[0x3a] == 0);
    auVar17[0xb] = -(pbVar6[0x3b] == 0);
    auVar17[0xc] = -(pbVar6[0x3c] == 0);
    auVar17[0xd] = -(pbVar6[0x3d] == 0);
    auVar17[0xe] = -(pbVar6[0x3e] == 0);
    auVar17[0xf] = -(pbVar6[0x3f] == 0);
    auVar38[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar38[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar38[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar38[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar38[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar38[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar38[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar38[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar38[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar38[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar38[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar38[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar38[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar38[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar38[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar38[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar112 = auVar112 | auVar38;
    bVar70 = -(pbVar6[0x2f] == bVar1);
    bVar75 = -(pbVar6[0x30] == bVar1);
    bVar77 = -(pbVar6[0x31] == bVar1);
    bVar79 = -(pbVar6[0x32] == bVar1);
    bVar81 = -(pbVar6[0x33] == bVar1);
    bVar83 = -(pbVar6[0x34] == bVar1);
    bVar85 = -(pbVar6[0x35] == bVar1);
    bVar87 = -(pbVar6[0x36] == bVar1);
    bVar89 = -(pbVar6[0x37] == bVar1);
    bVar91 = -(pbVar6[0x38] == bVar1);
    bVar93 = -(pbVar6[0x39] == bVar1);
    bVar95 = -(pbVar6[0x3a] == bVar1);
    bVar97 = -(pbVar6[0x3b] == bVar1);
    bVar99 = -(pbVar6[0x3c] == bVar1);
    bVar101 = -(pbVar6[0x3d] == bVar1);
    bVar103 = -(pbVar6[0x3e] == bVar1);
    bVar33 = -(pbVar6[0x30] == bVar2);
    bVar40 = -(pbVar6[0x31] == bVar2);
    bVar42 = -(pbVar6[0x32] == bVar2);
    bVar44 = -(pbVar6[0x33] == bVar2);
    bVar46 = -(pbVar6[0x34] == bVar2);
    bVar48 = -(pbVar6[0x35] == bVar2);
    bVar50 = -(pbVar6[0x36] == bVar2);
    bVar52 = -(pbVar6[0x37] == bVar2);
    bVar54 = -(pbVar6[0x38] == bVar2);
    bVar56 = -(pbVar6[0x39] == bVar2);
    bVar58 = -(pbVar6[0x3a] == bVar2);
    bVar60 = -(pbVar6[0x3b] == bVar2);
    bVar62 = -(pbVar6[0x3c] == bVar2);
    bVar64 = -(pbVar6[0x3d] == bVar2);
    bVar66 = -(pbVar6[0x3e] == bVar2);
    bVar68 = -(pbVar6[0x3f] == bVar2);
    auVar39[0] = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
    auVar39[1] = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
    auVar39[2] = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
    auVar39[3] = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
    auVar39[4] = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
    auVar39[5] = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
    auVar39[6] = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
    auVar39[7] = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
    auVar39[8] = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
    auVar39[9] = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
    auVar39[10] = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
    auVar39[0xb] = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
    auVar39[0xc] = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
    auVar39[0xd] = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
    auVar39[0xe] = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
    auVar39[0xf] = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
    auVar17 = auVar17 | auVar39;
    uVar10 = (ulong)(ushort)((ushort)(SUB161(auVar128 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar128 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar128 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar128 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar128 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar128 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar128 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar128 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar128 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar128 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar128 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar128 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar128 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar128 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar128 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar128[0xf] >> 7) << 0xf) << 0x10 |
             (ulong)(ushort)((ushort)(SUB161(auVar112 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar112 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar112 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar112 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar112 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar112 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar112 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar112 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar112 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar112 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar112 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar112 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar112[0xf] >> 7) << 0xf) << 0x20 |
             (ulong)(ushort)((ushort)(SUB161(auVar130 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar130 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar130 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar130 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar130 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar130 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar130 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar130 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar130 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar130 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar130 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar130 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar130 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar130 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar130 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar130[0xf] >> 7) << 0xf) |
             (ulong)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) << 0x30;
    uVar11 = uVar10 >> ((byte)param_1 & 0x3f);
    bVar3 = ((ulong)param_1 & 0x3f) != 0;
    if ((bVar3 || uVar10 != 0) && (!bVar3 || uVar11 != 0)) {
      do {
        lVar12 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        pbVar6 = param_1 + lVar12;
        if (*pbVar6 == 0) {
          return (byte *)0x0;
        }
        if (param_1 != pbVar6) {
          if (param_2[2] == 0) {
LAB_0074bdc3:
            return pbVar6 + -1;
          }
          if (param_2[2] == pbVar6[1]) {
            lVar12 = 0;
            do {
              lVar7 = lVar12 + 3;
              if (param_2[lVar7] == 0) goto LAB_0074bdc3;
              lVar8 = lVar12 + 2;
              lVar12 = lVar12 + 1;
            } while (param_2[lVar7] == pbVar6[lVar8]);
          }
        }
        uVar11 = uVar11 & uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  lVar12 = -0x200;
  pbVar6 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
  do {
    do {
      do {
        pbVar9 = pbVar6;
        bVar33 = pbVar9[0x40];
        bVar40 = pbVar9[0x41];
        bVar42 = pbVar9[0x42];
        bVar44 = pbVar9[0x43];
        bVar46 = pbVar9[0x44];
        bVar48 = pbVar9[0x45];
        bVar50 = pbVar9[0x46];
        bVar52 = pbVar9[0x47];
        bVar54 = pbVar9[0x48];
        bVar56 = pbVar9[0x49];
        bVar58 = pbVar9[0x4a];
        bVar60 = pbVar9[0x4b];
        bVar62 = pbVar9[0x4c];
        bVar64 = pbVar9[0x4d];
        bVar66 = pbVar9[0x4e];
        bVar68 = pbVar9[0x4f];
        bVar13 = pbVar9[0x50];
        bVar18 = pbVar9[0x51];
        bVar19 = pbVar9[0x52];
        bVar20 = pbVar9[0x53];
        bVar21 = pbVar9[0x54];
        bVar22 = pbVar9[0x55];
        bVar23 = pbVar9[0x56];
        bVar24 = pbVar9[0x57];
        bVar25 = pbVar9[0x58];
        bVar26 = pbVar9[0x59];
        bVar27 = pbVar9[0x5a];
        bVar28 = pbVar9[0x5b];
        bVar29 = pbVar9[0x5c];
        bVar30 = pbVar9[0x5d];
        bVar31 = pbVar9[0x5e];
        bVar32 = pbVar9[0x5f];
        bVar108 = pbVar9[0x3f] ^ bVar1 | bVar33 ^ bVar2;
        bVar113 = pbVar9[0x40] ^ bVar1 | bVar40 ^ bVar2;
        bVar114 = pbVar9[0x41] ^ bVar1 | bVar42 ^ bVar2;
        bVar115 = pbVar9[0x42] ^ bVar1 | bVar44 ^ bVar2;
        bVar116 = pbVar9[0x43] ^ bVar1 | bVar46 ^ bVar2;
        bVar117 = pbVar9[0x44] ^ bVar1 | bVar48 ^ bVar2;
        bVar118 = pbVar9[0x45] ^ bVar1 | bVar50 ^ bVar2;
        bVar119 = pbVar9[0x46] ^ bVar1 | bVar52 ^ bVar2;
        bVar120 = pbVar9[0x47] ^ bVar1 | bVar54 ^ bVar2;
        bVar121 = pbVar9[0x48] ^ bVar1 | bVar56 ^ bVar2;
        bVar122 = pbVar9[0x49] ^ bVar1 | bVar58 ^ bVar2;
        bVar123 = pbVar9[0x4a] ^ bVar1 | bVar60 ^ bVar2;
        bVar124 = pbVar9[0x4b] ^ bVar1 | bVar62 ^ bVar2;
        bVar125 = pbVar9[0x4c] ^ bVar1 | bVar64 ^ bVar2;
        bVar126 = pbVar9[0x4d] ^ bVar1 | bVar66 ^ bVar2;
        bVar127 = pbVar9[0x4e] ^ bVar1 | bVar68 ^ bVar2;
        bVar33 = (bVar13 < bVar33) * bVar13 | (bVar13 >= bVar33) * bVar33;
        bVar40 = (bVar18 < bVar40) * bVar18 | (bVar18 >= bVar40) * bVar40;
        bVar42 = (bVar19 < bVar42) * bVar19 | (bVar19 >= bVar42) * bVar42;
        bVar44 = (bVar20 < bVar44) * bVar20 | (bVar20 >= bVar44) * bVar44;
        bVar46 = (bVar21 < bVar46) * bVar21 | (bVar21 >= bVar46) * bVar46;
        bVar48 = (bVar22 < bVar48) * bVar22 | (bVar22 >= bVar48) * bVar48;
        bVar50 = (bVar23 < bVar50) * bVar23 | (bVar23 >= bVar50) * bVar50;
        bVar52 = (bVar24 < bVar52) * bVar24 | (bVar24 >= bVar52) * bVar52;
        bVar54 = (bVar25 < bVar54) * bVar25 | (bVar25 >= bVar54) * bVar54;
        bVar56 = (bVar26 < bVar56) * bVar26 | (bVar26 >= bVar56) * bVar56;
        bVar58 = (bVar27 < bVar58) * bVar27 | (bVar27 >= bVar58) * bVar58;
        bVar60 = (bVar28 < bVar60) * bVar28 | (bVar28 >= bVar60) * bVar60;
        bVar62 = (bVar29 < bVar62) * bVar29 | (bVar29 >= bVar62) * bVar62;
        bVar64 = (bVar30 < bVar64) * bVar30 | (bVar30 >= bVar64) * bVar64;
        bVar66 = (bVar31 < bVar66) * bVar31 | (bVar31 >= bVar66) * bVar66;
        bVar68 = (bVar32 < bVar68) * bVar32 | (bVar32 >= bVar68) * bVar68;
        bVar70 = pbVar9[0x60];
        bVar75 = pbVar9[0x61];
        bVar77 = pbVar9[0x62];
        bVar79 = pbVar9[99];
        bVar81 = pbVar9[100];
        bVar83 = pbVar9[0x65];
        bVar85 = pbVar9[0x66];
        bVar87 = pbVar9[0x67];
        bVar89 = pbVar9[0x68];
        bVar91 = pbVar9[0x69];
        bVar93 = pbVar9[0x6a];
        bVar95 = pbVar9[0x6b];
        bVar97 = pbVar9[0x6c];
        bVar99 = pbVar9[0x6d];
        bVar101 = pbVar9[0x6e];
        bVar103 = pbVar9[0x6f];
        bVar34 = pbVar9[0x4f] ^ bVar1 | bVar13 ^ bVar2;
        bVar41 = pbVar9[0x50] ^ bVar1 | bVar18 ^ bVar2;
        bVar43 = pbVar9[0x51] ^ bVar1 | bVar19 ^ bVar2;
        bVar45 = pbVar9[0x52] ^ bVar1 | bVar20 ^ bVar2;
        bVar47 = pbVar9[0x53] ^ bVar1 | bVar21 ^ bVar2;
        bVar49 = pbVar9[0x54] ^ bVar1 | bVar22 ^ bVar2;
        bVar51 = pbVar9[0x55] ^ bVar1 | bVar23 ^ bVar2;
        bVar53 = pbVar9[0x56] ^ bVar1 | bVar24 ^ bVar2;
        bVar55 = pbVar9[0x57] ^ bVar1 | bVar25 ^ bVar2;
        bVar57 = pbVar9[0x58] ^ bVar1 | bVar26 ^ bVar2;
        bVar59 = pbVar9[0x59] ^ bVar1 | bVar27 ^ bVar2;
        bVar61 = pbVar9[0x5a] ^ bVar1 | bVar28 ^ bVar2;
        bVar63 = pbVar9[0x5b] ^ bVar1 | bVar29 ^ bVar2;
        bVar65 = pbVar9[0x5c] ^ bVar1 | bVar30 ^ bVar2;
        bVar67 = pbVar9[0x5d] ^ bVar1 | bVar31 ^ bVar2;
        bVar69 = pbVar9[0x5e] ^ bVar1 | bVar32 ^ bVar2;
        bVar13 = (bVar70 < bVar33) * bVar70 | (bVar70 >= bVar33) * bVar33;
        bVar18 = (bVar75 < bVar40) * bVar75 | (bVar75 >= bVar40) * bVar40;
        bVar19 = (bVar77 < bVar42) * bVar77 | (bVar77 >= bVar42) * bVar42;
        bVar20 = (bVar79 < bVar44) * bVar79 | (bVar79 >= bVar44) * bVar44;
        bVar21 = (bVar81 < bVar46) * bVar81 | (bVar81 >= bVar46) * bVar46;
        bVar22 = (bVar83 < bVar48) * bVar83 | (bVar83 >= bVar48) * bVar48;
        bVar23 = (bVar85 < bVar50) * bVar85 | (bVar85 >= bVar50) * bVar50;
        bVar24 = (bVar87 < bVar52) * bVar87 | (bVar87 >= bVar52) * bVar52;
        bVar25 = (bVar89 < bVar54) * bVar89 | (bVar89 >= bVar54) * bVar54;
        bVar26 = (bVar91 < bVar56) * bVar91 | (bVar91 >= bVar56) * bVar56;
        bVar27 = (bVar93 < bVar58) * bVar93 | (bVar93 >= bVar58) * bVar58;
        bVar28 = (bVar95 < bVar60) * bVar95 | (bVar95 >= bVar60) * bVar60;
        bVar29 = (bVar97 < bVar62) * bVar97 | (bVar97 >= bVar62) * bVar62;
        bVar30 = (bVar99 < bVar64) * bVar99 | (bVar99 >= bVar64) * bVar64;
        bVar31 = (bVar101 < bVar66) * bVar101 | (bVar101 >= bVar66) * bVar66;
        bVar32 = (bVar103 < bVar68) * bVar103 | (bVar103 >= bVar68) * bVar68;
        bVar33 = pbVar9[0x70];
        bVar40 = pbVar9[0x71];
        bVar42 = pbVar9[0x72];
        bVar44 = pbVar9[0x73];
        bVar46 = pbVar9[0x74];
        bVar48 = pbVar9[0x75];
        bVar50 = pbVar9[0x76];
        bVar52 = pbVar9[0x77];
        bVar54 = pbVar9[0x78];
        bVar56 = pbVar9[0x79];
        bVar58 = pbVar9[0x7a];
        bVar60 = pbVar9[0x7b];
        bVar62 = pbVar9[0x7c];
        bVar64 = pbVar9[0x7d];
        bVar66 = pbVar9[0x7e];
        bVar68 = pbVar9[0x7f];
        pbVar6 = pbVar9 + 0x40;
        bVar34 = (bVar108 < bVar34) * bVar108 | (bVar108 >= bVar34) * bVar34;
        bVar41 = (bVar113 < bVar41) * bVar113 | (bVar113 >= bVar41) * bVar41;
        bVar43 = (bVar114 < bVar43) * bVar114 | (bVar114 >= bVar43) * bVar43;
        bVar45 = (bVar115 < bVar45) * bVar115 | (bVar115 >= bVar45) * bVar45;
        bVar47 = (bVar116 < bVar47) * bVar116 | (bVar116 >= bVar47) * bVar47;
        bVar49 = (bVar117 < bVar49) * bVar117 | (bVar117 >= bVar49) * bVar49;
        bVar51 = (bVar118 < bVar51) * bVar118 | (bVar118 >= bVar51) * bVar51;
        bVar53 = (bVar119 < bVar53) * bVar119 | (bVar119 >= bVar53) * bVar53;
        bVar55 = (bVar120 < bVar55) * bVar120 | (bVar120 >= bVar55) * bVar55;
        bVar57 = (bVar121 < bVar57) * bVar121 | (bVar121 >= bVar57) * bVar57;
        bVar59 = (bVar122 < bVar59) * bVar122 | (bVar122 >= bVar59) * bVar59;
        bVar61 = (bVar123 < bVar61) * bVar123 | (bVar123 >= bVar61) * bVar61;
        bVar63 = (bVar124 < bVar63) * bVar124 | (bVar124 >= bVar63) * bVar63;
        bVar65 = (bVar125 < bVar65) * bVar125 | (bVar125 >= bVar65) * bVar65;
        bVar67 = (bVar126 < bVar67) * bVar126 | (bVar126 >= bVar67) * bVar67;
        bVar69 = (bVar127 < bVar69) * bVar127 | (bVar127 >= bVar69) * bVar69;
        bVar13 = (bVar33 < bVar13) * bVar33 | (bVar33 >= bVar13) * bVar13;
        bVar18 = (bVar40 < bVar18) * bVar40 | (bVar40 >= bVar18) * bVar18;
        bVar19 = (bVar42 < bVar19) * bVar42 | (bVar42 >= bVar19) * bVar19;
        bVar20 = (bVar44 < bVar20) * bVar44 | (bVar44 >= bVar20) * bVar20;
        bVar21 = (bVar46 < bVar21) * bVar46 | (bVar46 >= bVar21) * bVar21;
        bVar22 = (bVar48 < bVar22) * bVar48 | (bVar48 >= bVar22) * bVar22;
        bVar23 = (bVar50 < bVar23) * bVar50 | (bVar50 >= bVar23) * bVar23;
        bVar24 = (bVar52 < bVar24) * bVar52 | (bVar52 >= bVar24) * bVar24;
        bVar25 = (bVar54 < bVar25) * bVar54 | (bVar54 >= bVar25) * bVar25;
        bVar26 = (bVar56 < bVar26) * bVar56 | (bVar56 >= bVar26) * bVar26;
        bVar27 = (bVar58 < bVar27) * bVar58 | (bVar58 >= bVar27) * bVar27;
        bVar28 = (bVar60 < bVar28) * bVar60 | (bVar60 >= bVar28) * bVar28;
        bVar29 = (bVar62 < bVar29) * bVar62 | (bVar62 >= bVar29) * bVar29;
        bVar30 = (bVar64 < bVar30) * bVar64 | (bVar64 >= bVar30) * bVar30;
        bVar31 = (bVar66 < bVar31) * bVar66 | (bVar66 >= bVar31) * bVar31;
        bVar32 = (bVar68 < bVar32) * bVar68 | (bVar68 >= bVar32) * bVar32;
        bVar71 = pbVar9[0x5f] ^ bVar1 | bVar70 ^ bVar2;
        bVar76 = pbVar9[0x60] ^ bVar1 | bVar75 ^ bVar2;
        bVar78 = pbVar9[0x61] ^ bVar1 | bVar77 ^ bVar2;
        bVar80 = pbVar9[0x62] ^ bVar1 | bVar79 ^ bVar2;
        bVar82 = pbVar9[99] ^ bVar1 | bVar81 ^ bVar2;
        bVar84 = pbVar9[100] ^ bVar1 | bVar83 ^ bVar2;
        bVar86 = pbVar9[0x65] ^ bVar1 | bVar85 ^ bVar2;
        bVar88 = pbVar9[0x66] ^ bVar1 | bVar87 ^ bVar2;
        bVar90 = pbVar9[0x67] ^ bVar1 | bVar89 ^ bVar2;
        bVar92 = pbVar9[0x68] ^ bVar1 | bVar91 ^ bVar2;
        bVar94 = pbVar9[0x69] ^ bVar1 | bVar93 ^ bVar2;
        bVar96 = pbVar9[0x6a] ^ bVar1 | bVar95 ^ bVar2;
        bVar98 = pbVar9[0x6b] ^ bVar1 | bVar97 ^ bVar2;
        bVar100 = pbVar9[0x6c] ^ bVar1 | bVar99 ^ bVar2;
        bVar102 = pbVar9[0x6d] ^ bVar1 | bVar101 ^ bVar2;
        bVar104 = pbVar9[0x6e] ^ bVar1 | bVar103 ^ bVar2;
        bVar70 = (bVar71 < bVar34) * bVar71 | (bVar71 >= bVar34) * bVar34;
        bVar75 = (bVar76 < bVar41) * bVar76 | (bVar76 >= bVar41) * bVar41;
        bVar77 = (bVar78 < bVar43) * bVar78 | (bVar78 >= bVar43) * bVar43;
        bVar79 = (bVar80 < bVar45) * bVar80 | (bVar80 >= bVar45) * bVar45;
        bVar81 = (bVar82 < bVar47) * bVar82 | (bVar82 >= bVar47) * bVar47;
        bVar83 = (bVar84 < bVar49) * bVar84 | (bVar84 >= bVar49) * bVar49;
        bVar85 = (bVar86 < bVar51) * bVar86 | (bVar86 >= bVar51) * bVar51;
        bVar87 = (bVar88 < bVar53) * bVar88 | (bVar88 >= bVar53) * bVar53;
        bVar89 = (bVar90 < bVar55) * bVar90 | (bVar90 >= bVar55) * bVar55;
        bVar91 = (bVar92 < bVar57) * bVar92 | (bVar92 >= bVar57) * bVar57;
        bVar93 = (bVar94 < bVar59) * bVar94 | (bVar94 >= bVar59) * bVar59;
        bVar95 = (bVar96 < bVar61) * bVar96 | (bVar96 >= bVar61) * bVar61;
        bVar97 = (bVar98 < bVar63) * bVar98 | (bVar98 >= bVar63) * bVar63;
        bVar99 = (bVar100 < bVar65) * bVar100 | (bVar100 >= bVar65) * bVar65;
        bVar101 = (bVar102 < bVar67) * bVar102 | (bVar102 >= bVar67) * bVar67;
        bVar103 = (bVar104 < bVar69) * bVar104 | (bVar104 >= bVar69) * bVar69;
        bVar34 = pbVar9[0x6f] ^ bVar1 | bVar33 ^ bVar2;
        bVar41 = pbVar9[0x70] ^ bVar1 | bVar40 ^ bVar2;
        bVar43 = pbVar9[0x71] ^ bVar1 | bVar42 ^ bVar2;
        bVar45 = pbVar9[0x72] ^ bVar1 | bVar44 ^ bVar2;
        bVar47 = pbVar9[0x73] ^ bVar1 | bVar46 ^ bVar2;
        bVar49 = pbVar9[0x74] ^ bVar1 | bVar48 ^ bVar2;
        bVar51 = pbVar9[0x75] ^ bVar1 | bVar50 ^ bVar2;
        bVar53 = pbVar9[0x76] ^ bVar1 | bVar52 ^ bVar2;
        bVar55 = pbVar9[0x77] ^ bVar1 | bVar54 ^ bVar2;
        bVar57 = pbVar9[0x78] ^ bVar1 | bVar56 ^ bVar2;
        bVar59 = pbVar9[0x79] ^ bVar1 | bVar58 ^ bVar2;
        bVar61 = pbVar9[0x7a] ^ bVar1 | bVar60 ^ bVar2;
        bVar63 = pbVar9[0x7b] ^ bVar1 | bVar62 ^ bVar2;
        bVar65 = pbVar9[0x7c] ^ bVar1 | bVar64 ^ bVar2;
        bVar67 = pbVar9[0x7d] ^ bVar1 | bVar66 ^ bVar2;
        bVar69 = pbVar9[0x7e] ^ bVar1 | bVar68 ^ bVar2;
        bVar33 = (bVar34 < bVar70) * bVar34 | (bVar34 >= bVar70) * bVar70;
        bVar40 = (bVar41 < bVar75) * bVar41 | (bVar41 >= bVar75) * bVar75;
        bVar42 = (bVar43 < bVar77) * bVar43 | (bVar43 >= bVar77) * bVar77;
        bVar44 = (bVar45 < bVar79) * bVar45 | (bVar45 >= bVar79) * bVar79;
        bVar46 = (bVar47 < bVar81) * bVar47 | (bVar47 >= bVar81) * bVar81;
        bVar48 = (bVar49 < bVar83) * bVar49 | (bVar49 >= bVar83) * bVar83;
        bVar50 = (bVar51 < bVar85) * bVar51 | (bVar51 >= bVar85) * bVar85;
        bVar52 = (bVar53 < bVar87) * bVar53 | (bVar53 >= bVar87) * bVar87;
        bVar54 = (bVar55 < bVar89) * bVar55 | (bVar55 >= bVar89) * bVar89;
        bVar56 = (bVar57 < bVar91) * bVar57 | (bVar57 >= bVar91) * bVar91;
        bVar58 = (bVar59 < bVar93) * bVar59 | (bVar59 >= bVar93) * bVar93;
        bVar60 = (bVar61 < bVar95) * bVar61 | (bVar61 >= bVar95) * bVar95;
        bVar62 = (bVar63 < bVar97) * bVar63 | (bVar63 >= bVar97) * bVar97;
        bVar64 = (bVar65 < bVar99) * bVar65 | (bVar65 >= bVar99) * bVar99;
        bVar66 = (bVar67 < bVar101) * bVar67 | (bVar67 >= bVar101) * bVar101;
        bVar68 = (bVar69 < bVar103) * bVar69 | (bVar69 >= bVar103) * bVar103;
        auVar16[0] = -((byte)((bVar33 < bVar13) * bVar33) == '\0' &&
                      (byte)((bVar33 >= bVar13) * bVar13) == '\0');
        auVar16[1] = -((byte)((bVar40 < bVar18) * bVar40) == '\0' &&
                      (byte)((bVar40 >= bVar18) * bVar18) == '\0');
        auVar16[2] = -((byte)((bVar42 < bVar19) * bVar42) == '\0' &&
                      (byte)((bVar42 >= bVar19) * bVar19) == '\0');
        auVar16[3] = -((byte)((bVar44 < bVar20) * bVar44) == '\0' &&
                      (byte)((bVar44 >= bVar20) * bVar20) == '\0');
        auVar16[4] = -((byte)((bVar46 < bVar21) * bVar46) == '\0' &&
                      (byte)((bVar46 >= bVar21) * bVar21) == '\0');
        auVar16[5] = -((byte)((bVar48 < bVar22) * bVar48) == '\0' &&
                      (byte)((bVar48 >= bVar22) * bVar22) == '\0');
        auVar16[6] = -((byte)((bVar50 < bVar23) * bVar50) == '\0' &&
                      (byte)((bVar50 >= bVar23) * bVar23) == '\0');
        auVar16[7] = -((byte)((bVar52 < bVar24) * bVar52) == '\0' &&
                      (byte)((bVar52 >= bVar24) * bVar24) == '\0');
        auVar16[8] = -((byte)((bVar54 < bVar25) * bVar54) == '\0' &&
                      (byte)((bVar54 >= bVar25) * bVar25) == '\0');
        auVar16[9] = -((byte)((bVar56 < bVar26) * bVar56) == '\0' &&
                      (byte)((bVar56 >= bVar26) * bVar26) == '\0');
        auVar16[10] = -((byte)((bVar58 < bVar27) * bVar58) == '\0' &&
                       (byte)((bVar58 >= bVar27) * bVar27) == '\0');
        auVar16[0xb] = -((byte)((bVar60 < bVar28) * bVar60) == '\0' &&
                        (byte)((bVar60 >= bVar28) * bVar28) == '\0');
        auVar16[0xc] = -((byte)((bVar62 < bVar29) * bVar62) == '\0' &&
                        (byte)((bVar62 >= bVar29) * bVar29) == '\0');
        auVar16[0xd] = -((byte)((bVar64 < bVar30) * bVar64) == '\0' &&
                        (byte)((bVar64 >= bVar30) * bVar30) == '\0');
        auVar16[0xe] = -((byte)((bVar66 < bVar31) * bVar66) == '\0' &&
                        (byte)((bVar66 >= bVar31) * bVar31) == '\0');
        auVar16[0xf] = -((byte)((bVar68 < bVar32) * bVar68) == '\0' &&
                        (byte)((bVar68 >= bVar32) * bVar32) == '\0');
      } while ((((((((((((((((auVar16 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                            (auVar16 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar16 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar16 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar16 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar16 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar16 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar16 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar16 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar16 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar16 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar16 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar16 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar16 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar16 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               -1 < auVar16[0xf]);
      bVar33 = *pbVar6;
      bVar40 = pbVar9[0x41];
      bVar42 = pbVar9[0x42];
      bVar44 = pbVar9[0x43];
      bVar46 = pbVar9[0x44];
      bVar48 = pbVar9[0x45];
      bVar50 = pbVar9[0x46];
      bVar52 = pbVar9[0x47];
      bVar54 = pbVar9[0x48];
      bVar56 = pbVar9[0x49];
      bVar58 = pbVar9[0x4a];
      bVar60 = pbVar9[0x4b];
      bVar62 = pbVar9[0x4c];
      bVar64 = pbVar9[0x4d];
      bVar66 = pbVar9[0x4e];
      bVar68 = pbVar9[0x4f];
      bVar70 = pbVar9[0x60];
      bVar75 = pbVar9[0x61];
      bVar77 = pbVar9[0x62];
      bVar79 = pbVar9[99];
      bVar81 = pbVar9[100];
      bVar83 = pbVar9[0x65];
      bVar85 = pbVar9[0x66];
      bVar87 = pbVar9[0x67];
      bVar89 = pbVar9[0x68];
      bVar91 = pbVar9[0x69];
      bVar93 = pbVar9[0x6a];
      bVar95 = pbVar9[0x6b];
      bVar97 = pbVar9[0x6c];
      bVar99 = pbVar9[0x6d];
      bVar101 = pbVar9[0x6e];
      bVar103 = pbVar9[0x6f];
      bVar13 = pbVar9[0x70];
      bVar18 = pbVar9[0x71];
      bVar19 = pbVar9[0x72];
      bVar20 = pbVar9[0x73];
      bVar21 = pbVar9[0x74];
      bVar22 = pbVar9[0x75];
      bVar23 = pbVar9[0x76];
      bVar24 = pbVar9[0x77];
      bVar25 = pbVar9[0x78];
      bVar26 = pbVar9[0x79];
      bVar27 = pbVar9[0x7a];
      bVar28 = pbVar9[0x7b];
      bVar29 = pbVar9[0x7c];
      bVar30 = pbVar9[0x7d];
      bVar31 = pbVar9[0x7e];
      bVar32 = pbVar9[0x7f];
      auVar111[0] = -((byte)((bVar33 < bVar108) * bVar33) == '\0' &&
                     (byte)((bVar33 >= bVar108) * bVar108) == '\0');
      auVar111[1] = -((byte)((bVar40 < bVar113) * bVar40) == '\0' &&
                     (byte)((bVar40 >= bVar113) * bVar113) == '\0');
      auVar111[2] = -((byte)((bVar42 < bVar114) * bVar42) == '\0' &&
                     (byte)((bVar42 >= bVar114) * bVar114) == '\0');
      auVar111[3] = -((byte)((bVar44 < bVar115) * bVar44) == '\0' &&
                     (byte)((bVar44 >= bVar115) * bVar115) == '\0');
      auVar111[4] = -((byte)((bVar46 < bVar116) * bVar46) == '\0' &&
                     (byte)((bVar46 >= bVar116) * bVar116) == '\0');
      auVar111[5] = -((byte)((bVar48 < bVar117) * bVar48) == '\0' &&
                     (byte)((bVar48 >= bVar117) * bVar117) == '\0');
      auVar111[6] = -((byte)((bVar50 < bVar118) * bVar50) == '\0' &&
                     (byte)((bVar50 >= bVar118) * bVar118) == '\0');
      auVar111[7] = -((byte)((bVar52 < bVar119) * bVar52) == '\0' &&
                     (byte)((bVar52 >= bVar119) * bVar119) == '\0');
      auVar111[8] = -((byte)((bVar54 < bVar120) * bVar54) == '\0' &&
                     (byte)((bVar54 >= bVar120) * bVar120) == '\0');
      auVar111[9] = -((byte)((bVar56 < bVar121) * bVar56) == '\0' &&
                     (byte)((bVar56 >= bVar121) * bVar121) == '\0');
      auVar111[10] = -((byte)((bVar58 < bVar122) * bVar58) == '\0' &&
                      (byte)((bVar58 >= bVar122) * bVar122) == '\0');
      auVar111[0xb] =
           -((byte)((bVar60 < bVar123) * bVar60) == '\0' &&
            (byte)((bVar60 >= bVar123) * bVar123) == '\0');
      auVar111[0xc] =
           -((byte)((bVar62 < bVar124) * bVar62) == '\0' &&
            (byte)((bVar62 >= bVar124) * bVar124) == '\0');
      auVar111[0xd] =
           -((byte)((bVar64 < bVar125) * bVar64) == '\0' &&
            (byte)((bVar64 >= bVar125) * bVar125) == '\0');
      auVar111[0xe] =
           -((byte)((bVar66 < bVar126) * bVar66) == '\0' &&
            (byte)((bVar66 >= bVar126) * bVar126) == '\0');
      auVar111[0xf] =
           -((byte)((bVar68 < bVar127) * bVar68) == '\0' &&
            (byte)((bVar68 >= bVar127) * bVar127) == '\0');
      auVar107[0] = -((byte)((bVar13 < bVar34) * bVar13) == '\0' &&
                     (byte)((bVar13 >= bVar34) * bVar34) == '\0');
      auVar107[1] = -((byte)((bVar18 < bVar41) * bVar18) == '\0' &&
                     (byte)((bVar18 >= bVar41) * bVar41) == '\0');
      auVar107[2] = -((byte)((bVar19 < bVar43) * bVar19) == '\0' &&
                     (byte)((bVar19 >= bVar43) * bVar43) == '\0');
      auVar107[3] = -((byte)((bVar20 < bVar45) * bVar20) == '\0' &&
                     (byte)((bVar20 >= bVar45) * bVar45) == '\0');
      auVar107[4] = -((byte)((bVar21 < bVar47) * bVar21) == '\0' &&
                     (byte)((bVar21 >= bVar47) * bVar47) == '\0');
      auVar107[5] = -((byte)((bVar22 < bVar49) * bVar22) == '\0' &&
                     (byte)((bVar22 >= bVar49) * bVar49) == '\0');
      auVar107[6] = -((byte)((bVar23 < bVar51) * bVar23) == '\0' &&
                     (byte)((bVar23 >= bVar51) * bVar51) == '\0');
      auVar107[7] = -((byte)((bVar24 < bVar53) * bVar24) == '\0' &&
                     (byte)((bVar24 >= bVar53) * bVar53) == '\0');
      auVar107[8] = -((byte)((bVar25 < bVar55) * bVar25) == '\0' &&
                     (byte)((bVar25 >= bVar55) * bVar55) == '\0');
      auVar107[9] = -((byte)((bVar26 < bVar57) * bVar26) == '\0' &&
                     (byte)((bVar26 >= bVar57) * bVar57) == '\0');
      auVar107[10] = -((byte)((bVar27 < bVar59) * bVar27) == '\0' &&
                      (byte)((bVar27 >= bVar59) * bVar59) == '\0');
      auVar107[0xb] =
           -((byte)((bVar28 < bVar61) * bVar28) == '\0' &&
            (byte)((bVar28 >= bVar61) * bVar61) == '\0');
      auVar107[0xc] =
           -((byte)((bVar29 < bVar63) * bVar29) == '\0' &&
            (byte)((bVar29 >= bVar63) * bVar63) == '\0');
      auVar107[0xd] =
           -((byte)((bVar30 < bVar65) * bVar30) == '\0' &&
            (byte)((bVar30 >= bVar65) * bVar65) == '\0');
      auVar107[0xe] =
           -((byte)((bVar31 < bVar67) * bVar31) == '\0' &&
            (byte)((bVar31 >= bVar67) * bVar67) == '\0');
      auVar107[0xf] =
           -((byte)((bVar32 < bVar69) * bVar32) == '\0' &&
            (byte)((bVar32 >= bVar69) * bVar69) == '\0');
      auVar74[0] = -((byte)((bVar70 < bVar71) * bVar70) == '\0' &&
                    (byte)((bVar70 >= bVar71) * bVar71) == '\0');
      auVar74[1] = -((byte)((bVar75 < bVar76) * bVar75) == '\0' &&
                    (byte)((bVar75 >= bVar76) * bVar76) == '\0');
      auVar74[2] = -((byte)((bVar77 < bVar78) * bVar77) == '\0' &&
                    (byte)((bVar77 >= bVar78) * bVar78) == '\0');
      auVar74[3] = -((byte)((bVar79 < bVar80) * bVar79) == '\0' &&
                    (byte)((bVar79 >= bVar80) * bVar80) == '\0');
      auVar74[4] = -((byte)((bVar81 < bVar82) * bVar81) == '\0' &&
                    (byte)((bVar81 >= bVar82) * bVar82) == '\0');
      auVar74[5] = -((byte)((bVar83 < bVar84) * bVar83) == '\0' &&
                    (byte)((bVar83 >= bVar84) * bVar84) == '\0');
      auVar74[6] = -((byte)((bVar85 < bVar86) * bVar85) == '\0' &&
                    (byte)((bVar85 >= bVar86) * bVar86) == '\0');
      auVar74[7] = -((byte)((bVar87 < bVar88) * bVar87) == '\0' &&
                    (byte)((bVar87 >= bVar88) * bVar88) == '\0');
      auVar74[8] = -((byte)((bVar89 < bVar90) * bVar89) == '\0' &&
                    (byte)((bVar89 >= bVar90) * bVar90) == '\0');
      auVar74[9] = -((byte)((bVar91 < bVar92) * bVar91) == '\0' &&
                    (byte)((bVar91 >= bVar92) * bVar92) == '\0');
      auVar74[10] = -((byte)((bVar93 < bVar94) * bVar93) == '\0' &&
                     (byte)((bVar93 >= bVar94) * bVar94) == '\0');
      auVar74[0xb] = -((byte)((bVar95 < bVar96) * bVar95) == '\0' &&
                      (byte)((bVar95 >= bVar96) * bVar96) == '\0');
      auVar74[0xc] = -((byte)((bVar97 < bVar98) * bVar97) == '\0' &&
                      (byte)((bVar97 >= bVar98) * bVar98) == '\0');
      auVar74[0xd] = -((byte)((bVar99 < bVar100) * bVar99) == '\0' &&
                      (byte)((bVar99 >= bVar100) * bVar100) == '\0');
      auVar74[0xe] = -((byte)((bVar101 < bVar102) * bVar101) == '\0' &&
                      (byte)((bVar101 >= bVar102) * bVar102) == '\0');
      auVar74[0xf] = -((byte)((bVar103 < bVar104) * bVar103) == '\0' &&
                      (byte)((bVar103 >= bVar104) * bVar104) == '\0');
      bVar33 = -(pbVar9[0x4f] == bVar1);
      bVar40 = -(pbVar9[0x50] == bVar1);
      bVar42 = -(pbVar9[0x51] == bVar1);
      bVar44 = -(pbVar9[0x52] == bVar1);
      bVar46 = -(pbVar9[0x53] == bVar1);
      bVar48 = -(pbVar9[0x54] == bVar1);
      bVar50 = -(pbVar9[0x55] == bVar1);
      bVar52 = -(pbVar9[0x56] == bVar1);
      bVar54 = -(pbVar9[0x57] == bVar1);
      bVar56 = -(pbVar9[0x58] == bVar1);
      bVar58 = -(pbVar9[0x59] == bVar1);
      bVar60 = -(pbVar9[0x5a] == bVar1);
      bVar62 = -(pbVar9[0x5b] == bVar1);
      bVar64 = -(pbVar9[0x5c] == bVar1);
      bVar66 = -(pbVar9[0x5d] == bVar1);
      bVar68 = -(pbVar9[0x5e] == bVar1);
      bVar70 = -(pbVar9[0x50] == bVar2);
      bVar75 = -(pbVar9[0x51] == bVar2);
      bVar77 = -(pbVar9[0x52] == bVar2);
      bVar79 = -(pbVar9[0x53] == bVar2);
      bVar81 = -(pbVar9[0x54] == bVar2);
      bVar83 = -(pbVar9[0x55] == bVar2);
      bVar85 = -(pbVar9[0x56] == bVar2);
      bVar87 = -(pbVar9[0x57] == bVar2);
      bVar89 = -(pbVar9[0x58] == bVar2);
      bVar91 = -(pbVar9[0x59] == bVar2);
      bVar93 = -(pbVar9[0x5a] == bVar2);
      bVar95 = -(pbVar9[0x5b] == bVar2);
      bVar97 = -(pbVar9[0x5c] == bVar2);
      bVar99 = -(pbVar9[0x5d] == bVar2);
      bVar101 = -(pbVar9[0x5e] == bVar2);
      bVar103 = -(pbVar9[0x5f] == bVar2);
      auVar129[0] = -(pbVar9[0x50] == 0);
      auVar129[1] = -(pbVar9[0x51] == 0);
      auVar129[2] = -(pbVar9[0x52] == 0);
      auVar129[3] = -(pbVar9[0x53] == 0);
      auVar129[4] = -(pbVar9[0x54] == 0);
      auVar129[5] = -(pbVar9[0x55] == 0);
      auVar129[6] = -(pbVar9[0x56] == 0);
      auVar129[7] = -(pbVar9[0x57] == 0);
      auVar129[8] = -(pbVar9[0x58] == 0);
      auVar129[9] = -(pbVar9[0x59] == 0);
      auVar129[10] = -(pbVar9[0x5a] == 0);
      auVar129[0xb] = -(pbVar9[0x5b] == 0);
      auVar129[0xc] = -(pbVar9[0x5c] == 0);
      auVar129[0xd] = -(pbVar9[0x5d] == 0);
      auVar129[0xe] = -(pbVar9[0x5e] == 0);
      auVar129[0xf] = -(pbVar9[0x5f] == 0);
      auVar35[0] = (bVar33 < bVar70) * bVar33 | (bVar33 >= bVar70) * bVar70;
      auVar35[1] = (bVar40 < bVar75) * bVar40 | (bVar40 >= bVar75) * bVar75;
      auVar35[2] = (bVar42 < bVar77) * bVar42 | (bVar42 >= bVar77) * bVar77;
      auVar35[3] = (bVar44 < bVar79) * bVar44 | (bVar44 >= bVar79) * bVar79;
      auVar35[4] = (bVar46 < bVar81) * bVar46 | (bVar46 >= bVar81) * bVar81;
      auVar35[5] = (bVar48 < bVar83) * bVar48 | (bVar48 >= bVar83) * bVar83;
      auVar35[6] = (bVar50 < bVar85) * bVar50 | (bVar50 >= bVar85) * bVar85;
      auVar35[7] = (bVar52 < bVar87) * bVar52 | (bVar52 >= bVar87) * bVar87;
      auVar35[8] = (bVar54 < bVar89) * bVar54 | (bVar54 >= bVar89) * bVar89;
      auVar35[9] = (bVar56 < bVar91) * bVar56 | (bVar56 >= bVar91) * bVar91;
      auVar35[10] = (bVar58 < bVar93) * bVar58 | (bVar58 >= bVar93) * bVar93;
      auVar35[0xb] = (bVar60 < bVar95) * bVar60 | (bVar60 >= bVar95) * bVar95;
      auVar35[0xc] = (bVar62 < bVar97) * bVar62 | (bVar62 >= bVar97) * bVar97;
      auVar35[0xd] = (bVar64 < bVar99) * bVar64 | (bVar64 >= bVar99) * bVar99;
      auVar35[0xe] = (bVar66 < bVar101) * bVar66 | (bVar66 >= bVar101) * bVar101;
      auVar35[0xf] = (bVar68 < bVar103) * bVar68 | (bVar68 >= bVar103) * bVar103;
      auVar129 = auVar129 | auVar35;
      uVar10 = (ulong)(ushort)((ushort)(SUB161(auVar107 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar107 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar107 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar107 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar107 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar107 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar107 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar107 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar107 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar107 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar107 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar107 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar107 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar107 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar107 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar107[0xf] >> 7) << 0xf) << 0x30 |
               (ulong)(ushort)((ushort)(SUB161(auVar111 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar111 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar111 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar111 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar111 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar111 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar111 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar111 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar111 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar111 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar111 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar111 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar111 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar111 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar111 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar111[0xf] >> 7) << 0xf) |
               (ulong)(ushort)((ushort)(SUB161(auVar74 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar74[0xf] >> 7) << 0xf) << 0x20 |
               (ulong)(ushort)((ushort)(SUB161(auVar129 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar129 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar129 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar129 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar129 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar129 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar129 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar129 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar129 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar129 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar129 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar129 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar129 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar129 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar129 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar129[0xf] >> 7) << 0xf) << 0x10;
    } while (uVar10 == 0);
    do {
      lVar7 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
        }
      }
      pbVar9 = pbVar6 + lVar7;
      if (*pbVar9 == 0) {
        return (byte *)0x0;
      }
      lVar7 = 0;
      if (param_2[2] == 0) {
LAB_0074bc73:
        return pbVar9 + -1;
      }
      lVar8 = lVar7;
      if (param_2[2] == pbVar9[1]) {
        do {
          lVar5 = lVar8 + 3;
          if (param_2[lVar5] == 0) goto LAB_0074bc73;
          lVar7 = lVar8 + 1;
          lVar4 = lVar8 + 2;
          lVar8 = lVar7;
        } while (param_2[lVar5] == pbVar9[lVar4]);
      }
      lVar12 = lVar12 + lVar7;
      if ((long)pbVar6 - (long)param_1 < lVar12) {
        pbVar6 = (byte *)FUN_007130f0(pbVar6);
        return pbVar6;
      }
      uVar10 = uVar10 & uVar10 - 1;
    } while (uVar10 != 0);
  } while( true );
}

