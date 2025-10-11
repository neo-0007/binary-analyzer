
byte * __strrchr_sse2(byte *param_1,byte param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
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
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
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
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  byte *pbVar70;
  byte *pbVar71;
  byte bVar72;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  byte bVar95;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  
  if (((uint)param_1 & 0xfff) < 0xfc1) {
    auVar73[0] = -(*param_1 == param_2);
    auVar73[1] = -(param_1[1] == param_2);
    auVar73[2] = -(param_1[2] == param_2);
    auVar73[3] = -(param_1[3] == param_2);
    auVar73[4] = -(param_1[4] == param_2);
    auVar73[5] = -(param_1[5] == param_2);
    auVar73[6] = -(param_1[6] == param_2);
    auVar73[7] = -(param_1[7] == param_2);
    auVar73[8] = -(param_1[8] == param_2);
    auVar73[9] = -(param_1[9] == param_2);
    auVar73[10] = -(param_1[10] == param_2);
    auVar73[0xb] = -(param_1[0xb] == param_2);
    auVar73[0xc] = -(param_1[0xc] == param_2);
    auVar73[0xd] = -(param_1[0xd] == param_2);
    auVar73[0xe] = -(param_1[0xe] == param_2);
    auVar73[0xf] = -(param_1[0xf] == param_2);
    auVar99[0] = -(*param_1 == 0);
    auVar99[1] = -(param_1[1] == 0);
    auVar99[2] = -(param_1[2] == 0);
    auVar99[3] = -(param_1[3] == 0);
    auVar99[4] = -(param_1[4] == 0);
    auVar99[5] = -(param_1[5] == 0);
    auVar99[6] = -(param_1[6] == 0);
    auVar99[7] = -(param_1[7] == 0);
    auVar99[8] = -(param_1[8] == 0);
    auVar99[9] = -(param_1[9] == 0);
    auVar99[10] = -(param_1[10] == 0);
    auVar99[0xb] = -(param_1[0xb] == 0);
    auVar99[0xc] = -(param_1[0xc] == 0);
    auVar99[0xd] = -(param_1[0xd] == 0);
    auVar99[0xe] = -(param_1[0xe] == 0);
    auVar99[0xf] = -(param_1[0xf] == 0);
    uVar67 = (ulong)(ushort)((ushort)(SUB161(auVar73 >> 7,0) & 1) |
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
                            (ushort)(auVar73[0xf] >> 7) << 0xf);
    uVar68 = (ulong)(ushort)((ushort)(SUB161(auVar99 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar99 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar99 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar99 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar99 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar99 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar99 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar99 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar99 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar99 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar99 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar99 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar99 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar99 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar99 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar99[0xf] >> 7) << 0xf);
    if (uVar68 == 0) {
      auVar103[0] = -(param_1[0x10] == param_2);
      auVar103[1] = -(param_1[0x11] == param_2);
      auVar103[2] = -(param_1[0x12] == param_2);
      auVar103[3] = -(param_1[0x13] == param_2);
      auVar103[4] = -(param_1[0x14] == param_2);
      auVar103[5] = -(param_1[0x15] == param_2);
      auVar103[6] = -(param_1[0x16] == param_2);
      auVar103[7] = -(param_1[0x17] == param_2);
      auVar103[8] = -(param_1[0x18] == param_2);
      auVar103[9] = -(param_1[0x19] == param_2);
      auVar103[10] = -(param_1[0x1a] == param_2);
      auVar103[0xb] = -(param_1[0x1b] == param_2);
      auVar103[0xc] = -(param_1[0x1c] == param_2);
      auVar103[0xd] = -(param_1[0x1d] == param_2);
      auVar103[0xe] = -(param_1[0x1e] == param_2);
      auVar103[0xf] = -(param_1[0x1f] == param_2);
      auVar106[0] = -(param_1[0x10] == 0);
      auVar106[1] = -(param_1[0x11] == 0);
      auVar106[2] = -(param_1[0x12] == 0);
      auVar106[3] = -(param_1[0x13] == 0);
      auVar106[4] = -(param_1[0x14] == 0);
      auVar106[5] = -(param_1[0x15] == 0);
      auVar106[6] = -(param_1[0x16] == 0);
      auVar106[7] = -(param_1[0x17] == 0);
      auVar106[8] = -(param_1[0x18] == 0);
      auVar106[9] = -(param_1[0x19] == 0);
      auVar106[10] = -(param_1[0x1a] == 0);
      auVar106[0xb] = -(param_1[0x1b] == 0);
      auVar106[0xc] = -(param_1[0x1c] == 0);
      auVar106[0xd] = -(param_1[0x1d] == 0);
      auVar106[0xe] = -(param_1[0x1e] == 0);
      auVar106[0xf] = -(param_1[0x1f] == 0);
      auVar100[0] = -(param_1[0x20] == param_2);
      auVar100[1] = -(param_1[0x21] == param_2);
      auVar100[2] = -(param_1[0x22] == param_2);
      auVar100[3] = -(param_1[0x23] == param_2);
      auVar100[4] = -(param_1[0x24] == param_2);
      auVar100[5] = -(param_1[0x25] == param_2);
      auVar100[6] = -(param_1[0x26] == param_2);
      auVar100[7] = -(param_1[0x27] == param_2);
      auVar100[8] = -(param_1[0x28] == param_2);
      auVar100[9] = -(param_1[0x29] == param_2);
      auVar100[10] = -(param_1[0x2a] == param_2);
      auVar100[0xb] = -(param_1[0x2b] == param_2);
      auVar100[0xc] = -(param_1[0x2c] == param_2);
      auVar100[0xd] = -(param_1[0x2d] == param_2);
      auVar100[0xe] = -(param_1[0x2e] == param_2);
      auVar100[0xf] = -(param_1[0x2f] == param_2);
      auVar107[0] = -(param_1[0x20] == 0);
      auVar107[1] = -(param_1[0x21] == 0);
      auVar107[2] = -(param_1[0x22] == 0);
      auVar107[3] = -(param_1[0x23] == 0);
      auVar107[4] = -(param_1[0x24] == 0);
      auVar107[5] = -(param_1[0x25] == 0);
      auVar107[6] = -(param_1[0x26] == 0);
      auVar107[7] = -(param_1[0x27] == 0);
      auVar107[8] = -(param_1[0x28] == 0);
      auVar107[9] = -(param_1[0x29] == 0);
      auVar107[10] = -(param_1[0x2a] == 0);
      auVar107[0xb] = -(param_1[0x2b] == 0);
      auVar107[0xc] = -(param_1[0x2c] == 0);
      auVar107[0xd] = -(param_1[0x2d] == 0);
      auVar107[0xe] = -(param_1[0x2e] == 0);
      auVar107[0xf] = -(param_1[0x2f] == 0);
      auVar96[0] = -(param_1[0x30] == 0);
      auVar96[1] = -(param_1[0x31] == 0);
      auVar96[2] = -(param_1[0x32] == 0);
      auVar96[3] = -(param_1[0x33] == 0);
      auVar96[4] = -(param_1[0x34] == 0);
      auVar96[5] = -(param_1[0x35] == 0);
      auVar96[6] = -(param_1[0x36] == 0);
      auVar96[7] = -(param_1[0x37] == 0);
      auVar96[8] = -(param_1[0x38] == 0);
      auVar96[9] = -(param_1[0x39] == 0);
      auVar96[10] = -(param_1[0x3a] == 0);
      auVar96[0xb] = -(param_1[0x3b] == 0);
      auVar96[0xc] = -(param_1[0x3c] == 0);
      auVar96[0xd] = -(param_1[0x3d] == 0);
      auVar96[0xe] = -(param_1[0x3e] == 0);
      auVar96[0xf] = -(param_1[0x3f] == 0);
      auVar74[0] = -(param_1[0x30] == param_2);
      auVar74[1] = -(param_1[0x31] == param_2);
      auVar74[2] = -(param_1[0x32] == param_2);
      auVar74[3] = -(param_1[0x33] == param_2);
      auVar74[4] = -(param_1[0x34] == param_2);
      auVar74[5] = -(param_1[0x35] == param_2);
      auVar74[6] = -(param_1[0x36] == param_2);
      auVar74[7] = -(param_1[0x37] == param_2);
      auVar74[8] = -(param_1[0x38] == param_2);
      auVar74[9] = -(param_1[0x39] == param_2);
      auVar74[10] = -(param_1[0x3a] == param_2);
      auVar74[0xb] = -(param_1[0x3b] == param_2);
      auVar74[0xc] = -(param_1[0x3c] == param_2);
      auVar74[0xd] = -(param_1[0x3d] == param_2);
      auVar74[0xe] = -(param_1[0x3e] == param_2);
      auVar74[0xf] = -(param_1[0x3f] == param_2);
      uVar67 = (ulong)(ushort)((ushort)(SUB161(auVar103 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar103 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar103 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar103 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar103 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar103 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar103 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar103 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar103 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar103 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar103 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar103 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar103 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar103 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar103 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar103[0xf] >> 7) << 0xf) << 0x10 |
               (ulong)(ushort)((ushort)(SUB161(auVar100 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar100 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar100 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar100 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar100 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar100 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar100 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar100 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar100 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar100 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar100 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar100 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar100 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar100 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar100 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar100[0xf] >> 7) << 0xf) << 0x20 | uVar67 |
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
                              (ushort)(auVar74[0xf] >> 7) << 0xf) << 0x30;
      uVar68 = (ulong)(ushort)((ushort)(SUB161(auVar107 >> 7,0) & 1) |
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
                              (ushort)(auVar107[0xf] >> 7) << 0xf) << 0x20 |
               (ulong)(ushort)((ushort)(SUB161(auVar106 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar106 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar106 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar106 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar106 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar106 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar106 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar106 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar106 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar106 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar106 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar106 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar106 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar106 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar106 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar106[0xf] >> 7) << 0xf) << 0x10 |
               (ulong)(ushort)((ushort)(SUB161(auVar96 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar96 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar96 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar96 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar96 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar96 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar96 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar96 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar96 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar96 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar96 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar96 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar96 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar96 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar96 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar96[0xf] >> 7) << 0xf) << 0x30;
      if (uVar68 == 0) goto LAB_007340f0;
      uVar67 = uVar67 & (uVar68 - 1 ^ uVar68);
      if (uVar67 != 0) {
        lVar1 = 0x3f;
        if (uVar67 != 0) {
          for (; uVar67 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        return param_1 + lVar1;
      }
    }
    else {
      uVar67 = (uVar68 - 1 ^ uVar68) & uVar67;
      if (uVar67 != 0) {
        lVar1 = 0x3f;
        if (uVar67 != 0) {
          for (; uVar67 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        return param_1 + lVar1;
      }
    }
  }
  else {
    pbVar70 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    auVar109[0] = -(*pbVar70 == param_2);
    auVar109[1] = -(pbVar70[1] == param_2);
    auVar109[2] = -(pbVar70[2] == param_2);
    auVar109[3] = -(pbVar70[3] == param_2);
    auVar109[4] = -(pbVar70[4] == param_2);
    auVar109[5] = -(pbVar70[5] == param_2);
    auVar109[6] = -(pbVar70[6] == param_2);
    auVar109[7] = -(pbVar70[7] == param_2);
    auVar109[8] = -(pbVar70[8] == param_2);
    auVar109[9] = -(pbVar70[9] == param_2);
    auVar109[10] = -(pbVar70[10] == param_2);
    auVar109[0xb] = -(pbVar70[0xb] == param_2);
    auVar109[0xc] = -(pbVar70[0xc] == param_2);
    auVar109[0xd] = -(pbVar70[0xd] == param_2);
    auVar109[0xe] = -(pbVar70[0xe] == param_2);
    auVar109[0xf] = -(pbVar70[0xf] == param_2);
    auVar110[0] = -(*pbVar70 == 0);
    auVar110[1] = -(pbVar70[1] == 0);
    auVar110[2] = -(pbVar70[2] == 0);
    auVar110[3] = -(pbVar70[3] == 0);
    auVar110[4] = -(pbVar70[4] == 0);
    auVar110[5] = -(pbVar70[5] == 0);
    auVar110[6] = -(pbVar70[6] == 0);
    auVar110[7] = -(pbVar70[7] == 0);
    auVar110[8] = -(pbVar70[8] == 0);
    auVar110[9] = -(pbVar70[9] == 0);
    auVar110[10] = -(pbVar70[10] == 0);
    auVar110[0xb] = -(pbVar70[0xb] == 0);
    auVar110[0xc] = -(pbVar70[0xc] == 0);
    auVar110[0xd] = -(pbVar70[0xd] == 0);
    auVar110[0xe] = -(pbVar70[0xe] == 0);
    auVar110[0xf] = -(pbVar70[0xf] == 0);
    auVar105[0] = -(pbVar70[0x10] == param_2);
    auVar105[1] = -(pbVar70[0x11] == param_2);
    auVar105[2] = -(pbVar70[0x12] == param_2);
    auVar105[3] = -(pbVar70[0x13] == param_2);
    auVar105[4] = -(pbVar70[0x14] == param_2);
    auVar105[5] = -(pbVar70[0x15] == param_2);
    auVar105[6] = -(pbVar70[0x16] == param_2);
    auVar105[7] = -(pbVar70[0x17] == param_2);
    auVar105[8] = -(pbVar70[0x18] == param_2);
    auVar105[9] = -(pbVar70[0x19] == param_2);
    auVar105[10] = -(pbVar70[0x1a] == param_2);
    auVar105[0xb] = -(pbVar70[0x1b] == param_2);
    auVar105[0xc] = -(pbVar70[0x1c] == param_2);
    auVar105[0xd] = -(pbVar70[0x1d] == param_2);
    auVar105[0xe] = -(pbVar70[0x1e] == param_2);
    auVar105[0xf] = -(pbVar70[0x1f] == param_2);
    auVar111[0] = -(pbVar70[0x10] == 0);
    auVar111[1] = -(pbVar70[0x11] == 0);
    auVar111[2] = -(pbVar70[0x12] == 0);
    auVar111[3] = -(pbVar70[0x13] == 0);
    auVar111[4] = -(pbVar70[0x14] == 0);
    auVar111[5] = -(pbVar70[0x15] == 0);
    auVar111[6] = -(pbVar70[0x16] == 0);
    auVar111[7] = -(pbVar70[0x17] == 0);
    auVar111[8] = -(pbVar70[0x18] == 0);
    auVar111[9] = -(pbVar70[0x19] == 0);
    auVar111[10] = -(pbVar70[0x1a] == 0);
    auVar111[0xb] = -(pbVar70[0x1b] == 0);
    auVar111[0xc] = -(pbVar70[0x1c] == 0);
    auVar111[0xd] = -(pbVar70[0x1d] == 0);
    auVar111[0xe] = -(pbVar70[0x1e] == 0);
    auVar111[0xf] = -(pbVar70[0x1f] == 0);
    auVar102[0] = -(pbVar70[0x20] == param_2);
    auVar102[1] = -(pbVar70[0x21] == param_2);
    auVar102[2] = -(pbVar70[0x22] == param_2);
    auVar102[3] = -(pbVar70[0x23] == param_2);
    auVar102[4] = -(pbVar70[0x24] == param_2);
    auVar102[5] = -(pbVar70[0x25] == param_2);
    auVar102[6] = -(pbVar70[0x26] == param_2);
    auVar102[7] = -(pbVar70[0x27] == param_2);
    auVar102[8] = -(pbVar70[0x28] == param_2);
    auVar102[9] = -(pbVar70[0x29] == param_2);
    auVar102[10] = -(pbVar70[0x2a] == param_2);
    auVar102[0xb] = -(pbVar70[0x2b] == param_2);
    auVar102[0xc] = -(pbVar70[0x2c] == param_2);
    auVar102[0xd] = -(pbVar70[0x2d] == param_2);
    auVar102[0xe] = -(pbVar70[0x2e] == param_2);
    auVar102[0xf] = -(pbVar70[0x2f] == param_2);
    auVar112[0] = -(pbVar70[0x20] == 0);
    auVar112[1] = -(pbVar70[0x21] == 0);
    auVar112[2] = -(pbVar70[0x22] == 0);
    auVar112[3] = -(pbVar70[0x23] == 0);
    auVar112[4] = -(pbVar70[0x24] == 0);
    auVar112[5] = -(pbVar70[0x25] == 0);
    auVar112[6] = -(pbVar70[0x26] == 0);
    auVar112[7] = -(pbVar70[0x27] == 0);
    auVar112[8] = -(pbVar70[0x28] == 0);
    auVar112[9] = -(pbVar70[0x29] == 0);
    auVar112[10] = -(pbVar70[0x2a] == 0);
    auVar112[0xb] = -(pbVar70[0x2b] == 0);
    auVar112[0xc] = -(pbVar70[0x2c] == 0);
    auVar112[0xd] = -(pbVar70[0x2d] == 0);
    auVar112[0xe] = -(pbVar70[0x2e] == 0);
    auVar112[0xf] = -(pbVar70[0x2f] == 0);
    auVar80[0] = -(pbVar70[0x30] == 0);
    auVar80[1] = -(pbVar70[0x31] == 0);
    auVar80[2] = -(pbVar70[0x32] == 0);
    auVar80[3] = -(pbVar70[0x33] == 0);
    auVar80[4] = -(pbVar70[0x34] == 0);
    auVar80[5] = -(pbVar70[0x35] == 0);
    auVar80[6] = -(pbVar70[0x36] == 0);
    auVar80[7] = -(pbVar70[0x37] == 0);
    auVar80[8] = -(pbVar70[0x38] == 0);
    auVar80[9] = -(pbVar70[0x39] == 0);
    auVar80[10] = -(pbVar70[0x3a] == 0);
    auVar80[0xb] = -(pbVar70[0x3b] == 0);
    auVar80[0xc] = -(pbVar70[0x3c] == 0);
    auVar80[0xd] = -(pbVar70[0x3d] == 0);
    auVar80[0xe] = -(pbVar70[0x3e] == 0);
    auVar80[0xf] = -(pbVar70[0x3f] == 0);
    auVar98[0] = -(pbVar70[0x30] == param_2);
    auVar98[1] = -(pbVar70[0x31] == param_2);
    auVar98[2] = -(pbVar70[0x32] == param_2);
    auVar98[3] = -(pbVar70[0x33] == param_2);
    auVar98[4] = -(pbVar70[0x34] == param_2);
    auVar98[5] = -(pbVar70[0x35] == param_2);
    auVar98[6] = -(pbVar70[0x36] == param_2);
    auVar98[7] = -(pbVar70[0x37] == param_2);
    auVar98[8] = -(pbVar70[0x38] == param_2);
    auVar98[9] = -(pbVar70[0x39] == param_2);
    auVar98[10] = -(pbVar70[0x3a] == param_2);
    auVar98[0xb] = -(pbVar70[0x3b] == param_2);
    auVar98[0xc] = -(pbVar70[0x3c] == param_2);
    auVar98[0xd] = -(pbVar70[0x3d] == param_2);
    auVar98[0xe] = -(pbVar70[0x3e] == param_2);
    auVar98[0xf] = -(pbVar70[0x3f] == param_2);
    uVar68 = ((ulong)(ushort)((ushort)(SUB161(auVar111 >> 7,0) & 1) |
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
                             (ushort)(auVar111[0xf] >> 7) << 0xf) << 0x10 |
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
                             (ushort)(auVar112[0xf] >> 7) << 0xf) << 0x20 |
              (ulong)(ushort)((ushort)(SUB161(auVar110 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar110[0xf] >> 7) << 0xf) |
             (ulong)(ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar80[0xf] >> 7) << 0xf) << 0x30) >> ((byte)param_1 & 0x3f);
    uVar67 = ((ulong)(ushort)((ushort)(SUB161(auVar105 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar105 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar105 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar105 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar105 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar105 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar105 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar105 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar105 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar105 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar105 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar105 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar105 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar105 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar105 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar105[0xf] >> 7) << 0xf) << 0x10 |
              (ulong)(ushort)((ushort)(SUB161(auVar102 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar102[0xf] >> 7) << 0xf) << 0x20 |
              (ulong)(ushort)((ushort)(SUB161(auVar109 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar109 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar109 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar109 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar109 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar109 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar109 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar109 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar109 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar109 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar109 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar109 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar109 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar109 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar109 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar109[0xf] >> 7) << 0xf) |
             (ulong)(ushort)((ushort)(SUB161(auVar98 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar98 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar98 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar98 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar98 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar98 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar98 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar98 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar98 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar98 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar98 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar98 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar98 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar98 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar98 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar98[0xf] >> 7) << 0xf) << 0x30) >> ((byte)param_1 & 0x3f);
    if (uVar68 == 0) {
LAB_007340f0:
      pbVar70 = param_1;
      if (uVar67 == 0) {
        uVar67 = 1;
        pbVar70 = (byte *)0x0;
      }
      pbVar71 = (byte *)((ulong)(param_1 + 0x40) & 0xffffffffffffffc0);
      while( true ) {
        bVar3 = pbVar71[0x20];
        bVar4 = pbVar71[0x21];
        bVar5 = pbVar71[0x22];
        bVar6 = pbVar71[0x23];
        bVar7 = pbVar71[0x24];
        bVar8 = pbVar71[0x25];
        bVar9 = pbVar71[0x26];
        bVar10 = pbVar71[0x27];
        bVar11 = pbVar71[0x28];
        bVar12 = pbVar71[0x29];
        bVar13 = pbVar71[0x2a];
        bVar14 = pbVar71[0x2b];
        bVar15 = pbVar71[0x2c];
        bVar16 = pbVar71[0x2d];
        bVar17 = pbVar71[0x2e];
        bVar18 = pbVar71[0x2f];
        bVar19 = pbVar71[0x30];
        bVar20 = pbVar71[0x31];
        bVar21 = pbVar71[0x32];
        bVar22 = pbVar71[0x33];
        bVar23 = pbVar71[0x34];
        bVar24 = pbVar71[0x35];
        bVar25 = pbVar71[0x36];
        bVar26 = pbVar71[0x37];
        bVar27 = pbVar71[0x38];
        bVar28 = pbVar71[0x39];
        bVar29 = pbVar71[0x3a];
        bVar30 = pbVar71[0x3b];
        bVar31 = pbVar71[0x3c];
        bVar32 = pbVar71[0x3d];
        bVar33 = pbVar71[0x3e];
        bVar34 = pbVar71[0x3f];
        bVar35 = pbVar71[0x10];
        bVar36 = pbVar71[0x11];
        bVar37 = pbVar71[0x12];
        bVar38 = pbVar71[0x13];
        bVar39 = pbVar71[0x14];
        bVar40 = pbVar71[0x15];
        bVar41 = pbVar71[0x16];
        bVar42 = pbVar71[0x17];
        bVar43 = pbVar71[0x18];
        bVar44 = pbVar71[0x19];
        bVar45 = pbVar71[0x1a];
        bVar46 = pbVar71[0x1b];
        bVar47 = pbVar71[0x1c];
        bVar48 = pbVar71[0x1d];
        bVar49 = pbVar71[0x1e];
        bVar50 = pbVar71[0x1f];
        bVar72 = (bVar19 < bVar3) * bVar19 | (bVar19 >= bVar3) * bVar3;
        bVar81 = (bVar20 < bVar4) * bVar20 | (bVar20 >= bVar4) * bVar4;
        bVar82 = (bVar21 < bVar5) * bVar21 | (bVar21 >= bVar5) * bVar5;
        bVar83 = (bVar22 < bVar6) * bVar22 | (bVar22 >= bVar6) * bVar6;
        bVar84 = (bVar23 < bVar7) * bVar23 | (bVar23 >= bVar7) * bVar7;
        bVar85 = (bVar24 < bVar8) * bVar24 | (bVar24 >= bVar8) * bVar8;
        bVar86 = (bVar25 < bVar9) * bVar25 | (bVar25 >= bVar9) * bVar9;
        bVar87 = (bVar26 < bVar10) * bVar26 | (bVar26 >= bVar10) * bVar10;
        bVar88 = (bVar27 < bVar11) * bVar27 | (bVar27 >= bVar11) * bVar11;
        bVar89 = (bVar28 < bVar12) * bVar28 | (bVar28 >= bVar12) * bVar12;
        bVar90 = (bVar29 < bVar13) * bVar29 | (bVar29 >= bVar13) * bVar13;
        bVar91 = (bVar30 < bVar14) * bVar30 | (bVar30 >= bVar14) * bVar14;
        bVar92 = (bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15;
        bVar93 = (bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16;
        bVar94 = (bVar33 < bVar17) * bVar33 | (bVar33 >= bVar17) * bVar17;
        bVar95 = (bVar34 < bVar18) * bVar34 | (bVar34 >= bVar18) * bVar18;
        bVar51 = *pbVar71;
        bVar52 = pbVar71[1];
        bVar53 = pbVar71[2];
        bVar54 = pbVar71[3];
        bVar55 = pbVar71[4];
        bVar56 = pbVar71[5];
        bVar57 = pbVar71[6];
        bVar58 = pbVar71[7];
        bVar59 = pbVar71[8];
        bVar60 = pbVar71[9];
        bVar61 = pbVar71[10];
        bVar62 = pbVar71[0xb];
        bVar63 = pbVar71[0xc];
        bVar64 = pbVar71[0xd];
        bVar65 = pbVar71[0xe];
        bVar66 = pbVar71[0xf];
        bVar72 = (bVar35 < bVar72) * bVar35 | (bVar35 >= bVar72) * bVar72;
        bVar81 = (bVar36 < bVar81) * bVar36 | (bVar36 >= bVar81) * bVar81;
        bVar82 = (bVar37 < bVar82) * bVar37 | (bVar37 >= bVar82) * bVar82;
        bVar83 = (bVar38 < bVar83) * bVar38 | (bVar38 >= bVar83) * bVar83;
        bVar84 = (bVar39 < bVar84) * bVar39 | (bVar39 >= bVar84) * bVar84;
        bVar85 = (bVar40 < bVar85) * bVar40 | (bVar40 >= bVar85) * bVar85;
        bVar86 = (bVar41 < bVar86) * bVar41 | (bVar41 >= bVar86) * bVar86;
        bVar87 = (bVar42 < bVar87) * bVar42 | (bVar42 >= bVar87) * bVar87;
        bVar88 = (bVar43 < bVar88) * bVar43 | (bVar43 >= bVar88) * bVar88;
        bVar89 = (bVar44 < bVar89) * bVar44 | (bVar44 >= bVar89) * bVar89;
        bVar90 = (bVar45 < bVar90) * bVar45 | (bVar45 >= bVar90) * bVar90;
        bVar91 = (bVar46 < bVar91) * bVar46 | (bVar46 >= bVar91) * bVar91;
        bVar92 = (bVar47 < bVar92) * bVar47 | (bVar47 >= bVar92) * bVar92;
        bVar93 = (bVar48 < bVar93) * bVar48 | (bVar48 >= bVar93) * bVar93;
        bVar94 = (bVar49 < bVar94) * bVar49 | (bVar49 >= bVar94) * bVar94;
        bVar95 = (bVar50 < bVar95) * bVar50 | (bVar50 >= bVar95) * bVar95;
        auVar75[0] = -((byte)((bVar51 < bVar72) * bVar51) == '\0' &&
                      (byte)((bVar51 >= bVar72) * bVar72) == '\0');
        auVar75[1] = -((byte)((bVar52 < bVar81) * bVar52) == '\0' &&
                      (byte)((bVar52 >= bVar81) * bVar81) == '\0');
        auVar75[2] = -((byte)((bVar53 < bVar82) * bVar53) == '\0' &&
                      (byte)((bVar53 >= bVar82) * bVar82) == '\0');
        auVar75[3] = -((byte)((bVar54 < bVar83) * bVar54) == '\0' &&
                      (byte)((bVar54 >= bVar83) * bVar83) == '\0');
        auVar75[4] = -((byte)((bVar55 < bVar84) * bVar55) == '\0' &&
                      (byte)((bVar55 >= bVar84) * bVar84) == '\0');
        auVar75[5] = -((byte)((bVar56 < bVar85) * bVar56) == '\0' &&
                      (byte)((bVar56 >= bVar85) * bVar85) == '\0');
        auVar75[6] = -((byte)((bVar57 < bVar86) * bVar57) == '\0' &&
                      (byte)((bVar57 >= bVar86) * bVar86) == '\0');
        auVar75[7] = -((byte)((bVar58 < bVar87) * bVar58) == '\0' &&
                      (byte)((bVar58 >= bVar87) * bVar87) == '\0');
        auVar75[8] = -((byte)((bVar59 < bVar88) * bVar59) == '\0' &&
                      (byte)((bVar59 >= bVar88) * bVar88) == '\0');
        auVar75[9] = -((byte)((bVar60 < bVar89) * bVar60) == '\0' &&
                      (byte)((bVar60 >= bVar89) * bVar89) == '\0');
        auVar75[10] = -((byte)((bVar61 < bVar90) * bVar61) == '\0' &&
                       (byte)((bVar61 >= bVar90) * bVar90) == '\0');
        auVar75[0xb] = -((byte)((bVar62 < bVar91) * bVar62) == '\0' &&
                        (byte)((bVar62 >= bVar91) * bVar91) == '\0');
        auVar75[0xc] = -((byte)((bVar63 < bVar92) * bVar63) == '\0' &&
                        (byte)((bVar63 >= bVar92) * bVar92) == '\0');
        auVar75[0xd] = -((byte)((bVar64 < bVar93) * bVar64) == '\0' &&
                        (byte)((bVar64 >= bVar93) * bVar93) == '\0');
        auVar75[0xe] = -((byte)((bVar65 < bVar94) * bVar65) == '\0' &&
                        (byte)((bVar65 >= bVar94) * bVar94) == '\0');
        bVar2 = (byte)((bVar66 < bVar95) * bVar66) == '\0' &&
                (byte)((bVar66 >= bVar95) * bVar95) == '\0';
        auVar75[0xf] = -bVar2;
        auVar76[0] = -(bVar51 == param_2);
        auVar76[1] = -(bVar52 == param_2);
        auVar76[2] = -(bVar53 == param_2);
        auVar76[3] = -(bVar54 == param_2);
        auVar76[4] = -(bVar55 == param_2);
        auVar76[5] = -(bVar56 == param_2);
        auVar76[6] = -(bVar57 == param_2);
        auVar76[7] = -(bVar58 == param_2);
        auVar76[8] = -(bVar59 == param_2);
        auVar76[9] = -(bVar60 == param_2);
        auVar76[10] = -(bVar61 == param_2);
        auVar76[0xb] = -(bVar62 == param_2);
        auVar76[0xc] = -(bVar63 == param_2);
        auVar76[0xd] = -(bVar64 == param_2);
        auVar76[0xe] = -(bVar65 == param_2);
        auVar76[0xf] = -(bVar66 == param_2);
        auVar77[0] = -(bVar35 == param_2);
        auVar77[1] = -(bVar36 == param_2);
        auVar77[2] = -(bVar37 == param_2);
        auVar77[3] = -(bVar38 == param_2);
        auVar77[4] = -(bVar39 == param_2);
        auVar77[5] = -(bVar40 == param_2);
        auVar77[6] = -(bVar41 == param_2);
        auVar77[7] = -(bVar42 == param_2);
        auVar77[8] = -(bVar43 == param_2);
        auVar77[9] = -(bVar44 == param_2);
        auVar77[10] = -(bVar45 == param_2);
        auVar77[0xb] = -(bVar46 == param_2);
        auVar77[0xc] = -(bVar47 == param_2);
        auVar77[0xd] = -(bVar48 == param_2);
        auVar77[0xe] = -(bVar49 == param_2);
        auVar77[0xf] = -(bVar50 == param_2);
        auVar78[0] = -(bVar3 == param_2);
        auVar78[1] = -(bVar4 == param_2);
        auVar78[2] = -(bVar5 == param_2);
        auVar78[3] = -(bVar6 == param_2);
        auVar78[4] = -(bVar7 == param_2);
        auVar78[5] = -(bVar8 == param_2);
        auVar78[6] = -(bVar9 == param_2);
        auVar78[7] = -(bVar10 == param_2);
        auVar78[8] = -(bVar11 == param_2);
        auVar78[9] = -(bVar12 == param_2);
        auVar78[10] = -(bVar13 == param_2);
        auVar78[0xb] = -(bVar14 == param_2);
        auVar78[0xc] = -(bVar15 == param_2);
        auVar78[0xd] = -(bVar16 == param_2);
        auVar78[0xe] = -(bVar17 == param_2);
        auVar78[0xf] = -(bVar18 == param_2);
        auVar79[0] = -(bVar19 == param_2);
        auVar79[1] = -(bVar20 == param_2);
        auVar79[2] = -(bVar21 == param_2);
        auVar79[3] = -(bVar22 == param_2);
        auVar79[4] = -(bVar23 == param_2);
        auVar79[5] = -(bVar24 == param_2);
        auVar79[6] = -(bVar25 == param_2);
        auVar79[7] = -(bVar26 == param_2);
        auVar79[8] = -(bVar27 == param_2);
        auVar79[9] = -(bVar28 == param_2);
        auVar79[10] = -(bVar29 == param_2);
        auVar79[0xb] = -(bVar30 == param_2);
        auVar79[0xc] = -(bVar31 == param_2);
        auVar79[0xd] = -(bVar32 == param_2);
        auVar79[0xe] = -(bVar33 == param_2);
        auVar79[0xf] = -(bVar34 == param_2);
        uVar68 = (ulong)(ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar77[0xf] >> 7) << 0xf) << 0x10 |
                 (ulong)(ushort)((ushort)(SUB161(auVar78 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar78[0xf] >> 7) << 0xf) << 0x20 |
                 (ulong)(ushort)((ushort)(SUB161(auVar76 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar76 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar76 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar76 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar76 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar76 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar76 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar76 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar76 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar76 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar76 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar76 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar76 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar76 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar76 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar76[0xf] >> 7) << 0xf) |
                 (ulong)(ushort)((ushort)(SUB161(auVar79 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar79[0xf] >> 7) << 0xf) << 0x30;
        if ((((((((((((((((auVar75 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar75 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar75 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar75 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar75 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar75 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar75 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar75 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar75 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar75 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar75 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar75 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar75 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar75 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar75 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar2) break;
        if (uVar68 != 0) {
          pbVar70 = pbVar71;
          uVar67 = uVar68;
        }
        pbVar71 = pbVar71 + 0x40;
      }
      auVar104[0] = -(bVar35 == 0);
      auVar104[1] = -(bVar36 == 0);
      auVar104[2] = -(bVar37 == 0);
      auVar104[3] = -(bVar38 == 0);
      auVar104[4] = -(bVar39 == 0);
      auVar104[5] = -(bVar40 == 0);
      auVar104[6] = -(bVar41 == 0);
      auVar104[7] = -(bVar42 == 0);
      auVar104[8] = -(bVar43 == 0);
      auVar104[9] = -(bVar44 == 0);
      auVar104[10] = -(bVar45 == 0);
      auVar104[0xb] = -(bVar46 == 0);
      auVar104[0xc] = -(bVar47 == 0);
      auVar104[0xd] = -(bVar48 == 0);
      auVar104[0xe] = -(bVar49 == 0);
      auVar104[0xf] = -(bVar50 == 0);
      auVar101[0] = -(bVar3 == 0);
      auVar101[1] = -(bVar4 == 0);
      auVar101[2] = -(bVar5 == 0);
      auVar101[3] = -(bVar6 == 0);
      auVar101[4] = -(bVar7 == 0);
      auVar101[5] = -(bVar8 == 0);
      auVar101[6] = -(bVar9 == 0);
      auVar101[7] = -(bVar10 == 0);
      auVar101[8] = -(bVar11 == 0);
      auVar101[9] = -(bVar12 == 0);
      auVar101[10] = -(bVar13 == 0);
      auVar101[0xb] = -(bVar14 == 0);
      auVar101[0xc] = -(bVar15 == 0);
      auVar101[0xd] = -(bVar16 == 0);
      auVar101[0xe] = -(bVar17 == 0);
      auVar101[0xf] = -(bVar18 == 0);
      auVar108[0] = -(bVar51 == 0);
      auVar108[1] = -(bVar52 == 0);
      auVar108[2] = -(bVar53 == 0);
      auVar108[3] = -(bVar54 == 0);
      auVar108[4] = -(bVar55 == 0);
      auVar108[5] = -(bVar56 == 0);
      auVar108[6] = -(bVar57 == 0);
      auVar108[7] = -(bVar58 == 0);
      auVar108[8] = -(bVar59 == 0);
      auVar108[9] = -(bVar60 == 0);
      auVar108[10] = -(bVar61 == 0);
      auVar108[0xb] = -(bVar62 == 0);
      auVar108[0xc] = -(bVar63 == 0);
      auVar108[0xd] = -(bVar64 == 0);
      auVar108[0xe] = -(bVar65 == 0);
      auVar108[0xf] = -(bVar66 == 0);
      auVar97[0] = -(bVar19 == 0);
      auVar97[1] = -(bVar20 == 0);
      auVar97[2] = -(bVar21 == 0);
      auVar97[3] = -(bVar22 == 0);
      auVar97[4] = -(bVar23 == 0);
      auVar97[5] = -(bVar24 == 0);
      auVar97[6] = -(bVar25 == 0);
      auVar97[7] = -(bVar26 == 0);
      auVar97[8] = -(bVar27 == 0);
      auVar97[9] = -(bVar28 == 0);
      auVar97[10] = -(bVar29 == 0);
      auVar97[0xb] = -(bVar30 == 0);
      auVar97[0xc] = -(bVar31 == 0);
      auVar97[0xd] = -(bVar32 == 0);
      auVar97[0xe] = -(bVar33 == 0);
      auVar97[0xf] = -(bVar34 == 0);
      uVar69 = (ulong)(ushort)((ushort)(SUB161(auVar104 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar104 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar104 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar104 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar104 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar104 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar104 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar104 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar104 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar104 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar104 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar104 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar104 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar104 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar104 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar104[0xf] >> 7) << 0xf) << 0x10 |
               (ulong)(ushort)((ushort)(SUB161(auVar101 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar101 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar101 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar101 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar101 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar101 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar101 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar101 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar101 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar101 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar101 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar101 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar101 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar101 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar101 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar101[0xf] >> 7) << 0xf) << 0x20 |
               (ulong)(ushort)((ushort)(SUB161(auVar108 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar108[0xf] >> 7) << 0xf) |
               (ulong)(ushort)((ushort)(SUB161(auVar97 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar97[0xf] >> 7) << 0xf) << 0x30;
      uVar68 = uVar68 & (uVar69 - 1 ^ uVar69);
      if (uVar68 != 0) {
        uVar67 = uVar68;
        pbVar70 = pbVar71;
      }
      lVar1 = 0x3f;
      if (uVar67 != 0) {
        for (; uVar67 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      return pbVar70 + lVar1;
    }
    uVar67 = uVar67 & (uVar68 - 1 ^ uVar68);
    if (uVar67 != 0) {
      lVar1 = 0x3f;
      if (uVar67 != 0) {
        for (; uVar67 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      return param_1 + lVar1;
    }
  }
  return (byte *)0x0;
}

