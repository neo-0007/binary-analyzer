
byte * __strchrnul_sse2(byte *param_1,byte param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar30;
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
  undefined1 auVar31 [16];
  byte bVar50;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar51;
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
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  byte bVar73;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  byte bVar74;
  byte bVar75;
  byte bVar78;
  byte bVar79;
  byte bVar80;
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
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  
  if (((uint)param_1 & 0xfff) < 0xfc1) {
    auVar6[0] = -(*param_1 == param_2);
    auVar6[1] = -(param_1[1] == param_2);
    auVar6[2] = -(param_1[2] == param_2);
    auVar6[3] = -(param_1[3] == param_2);
    auVar6[4] = -(param_1[4] == param_2);
    auVar6[5] = -(param_1[5] == param_2);
    auVar6[6] = -(param_1[6] == param_2);
    auVar6[7] = -(param_1[7] == param_2);
    auVar6[8] = -(param_1[8] == param_2);
    auVar6[9] = -(param_1[9] == param_2);
    auVar6[10] = -(param_1[10] == param_2);
    auVar6[0xb] = -(param_1[0xb] == param_2);
    auVar6[0xc] = -(param_1[0xc] == param_2);
    auVar6[0xd] = -(param_1[0xd] == param_2);
    auVar6[0xe] = -(param_1[0xe] == param_2);
    auVar6[0xf] = -(param_1[0xf] == param_2);
    auVar52[0] = -(*param_1 == 0);
    auVar52[1] = -(param_1[1] == 0);
    auVar52[2] = -(param_1[2] == 0);
    auVar52[3] = -(param_1[3] == 0);
    auVar52[4] = -(param_1[4] == 0);
    auVar52[5] = -(param_1[5] == 0);
    auVar52[6] = -(param_1[6] == 0);
    auVar52[7] = -(param_1[7] == 0);
    auVar52[8] = -(param_1[8] == 0);
    auVar52[9] = -(param_1[9] == 0);
    auVar52[10] = -(param_1[10] == 0);
    auVar52[0xb] = -(param_1[0xb] == 0);
    auVar52[0xc] = -(param_1[0xc] == 0);
    auVar52[0xd] = -(param_1[0xd] == 0);
    auVar52[0xe] = -(param_1[0xe] == 0);
    auVar52[0xf] = -(param_1[0xf] == 0);
    auVar6 = auVar6 | auVar52;
    uVar3 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
    if (uVar3 != 0) {
      uVar1 = 0;
      if (uVar3 != 0) {
        for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return param_1 + uVar1;
    }
    auVar7[0] = -(param_1[0x10] == param_2);
    auVar7[1] = -(param_1[0x11] == param_2);
    auVar7[2] = -(param_1[0x12] == param_2);
    auVar7[3] = -(param_1[0x13] == param_2);
    auVar7[4] = -(param_1[0x14] == param_2);
    auVar7[5] = -(param_1[0x15] == param_2);
    auVar7[6] = -(param_1[0x16] == param_2);
    auVar7[7] = -(param_1[0x17] == param_2);
    auVar7[8] = -(param_1[0x18] == param_2);
    auVar7[9] = -(param_1[0x19] == param_2);
    auVar7[10] = -(param_1[0x1a] == param_2);
    auVar7[0xb] = -(param_1[0x1b] == param_2);
    auVar7[0xc] = -(param_1[0x1c] == param_2);
    auVar7[0xd] = -(param_1[0x1d] == param_2);
    auVar7[0xe] = -(param_1[0x1e] == param_2);
    auVar7[0xf] = -(param_1[0x1f] == param_2);
    auVar53[0] = -(param_1[0x10] == 0);
    auVar53[1] = -(param_1[0x11] == 0);
    auVar53[2] = -(param_1[0x12] == 0);
    auVar53[3] = -(param_1[0x13] == 0);
    auVar53[4] = -(param_1[0x14] == 0);
    auVar53[5] = -(param_1[0x15] == 0);
    auVar53[6] = -(param_1[0x16] == 0);
    auVar53[7] = -(param_1[0x17] == 0);
    auVar53[8] = -(param_1[0x18] == 0);
    auVar53[9] = -(param_1[0x19] == 0);
    auVar53[10] = -(param_1[0x1a] == 0);
    auVar53[0xb] = -(param_1[0x1b] == 0);
    auVar53[0xc] = -(param_1[0x1c] == 0);
    auVar53[0xd] = -(param_1[0x1d] == 0);
    auVar53[0xe] = -(param_1[0x1e] == 0);
    auVar53[0xf] = -(param_1[0x1f] == 0);
    auVar7 = auVar7 | auVar53;
    auVar8[0] = -(param_1[0x20] == param_2);
    auVar8[1] = -(param_1[0x21] == param_2);
    auVar8[2] = -(param_1[0x22] == param_2);
    auVar8[3] = -(param_1[0x23] == param_2);
    auVar8[4] = -(param_1[0x24] == param_2);
    auVar8[5] = -(param_1[0x25] == param_2);
    auVar8[6] = -(param_1[0x26] == param_2);
    auVar8[7] = -(param_1[0x27] == param_2);
    auVar8[8] = -(param_1[0x28] == param_2);
    auVar8[9] = -(param_1[0x29] == param_2);
    auVar8[10] = -(param_1[0x2a] == param_2);
    auVar8[0xb] = -(param_1[0x2b] == param_2);
    auVar8[0xc] = -(param_1[0x2c] == param_2);
    auVar8[0xd] = -(param_1[0x2d] == param_2);
    auVar8[0xe] = -(param_1[0x2e] == param_2);
    auVar8[0xf] = -(param_1[0x2f] == param_2);
    auVar54[0] = -(param_1[0x20] == 0);
    auVar54[1] = -(param_1[0x21] == 0);
    auVar54[2] = -(param_1[0x22] == 0);
    auVar54[3] = -(param_1[0x23] == 0);
    auVar54[4] = -(param_1[0x24] == 0);
    auVar54[5] = -(param_1[0x25] == 0);
    auVar54[6] = -(param_1[0x26] == 0);
    auVar54[7] = -(param_1[0x27] == 0);
    auVar54[8] = -(param_1[0x28] == 0);
    auVar54[9] = -(param_1[0x29] == 0);
    auVar54[10] = -(param_1[0x2a] == 0);
    auVar54[0xb] = -(param_1[0x2b] == 0);
    auVar54[0xc] = -(param_1[0x2c] == 0);
    auVar54[0xd] = -(param_1[0x2d] == 0);
    auVar54[0xe] = -(param_1[0x2e] == 0);
    auVar54[0xf] = -(param_1[0x2f] == 0);
    auVar8 = auVar8 | auVar54;
    auVar31[0] = -(param_1[0x30] == 0);
    auVar31[1] = -(param_1[0x31] == 0);
    auVar31[2] = -(param_1[0x32] == 0);
    auVar31[3] = -(param_1[0x33] == 0);
    auVar31[4] = -(param_1[0x34] == 0);
    auVar31[5] = -(param_1[0x35] == 0);
    auVar31[6] = -(param_1[0x36] == 0);
    auVar31[7] = -(param_1[0x37] == 0);
    auVar31[8] = -(param_1[0x38] == 0);
    auVar31[9] = -(param_1[0x39] == 0);
    auVar31[10] = -(param_1[0x3a] == 0);
    auVar31[0xb] = -(param_1[0x3b] == 0);
    auVar31[0xc] = -(param_1[0x3c] == 0);
    auVar31[0xd] = -(param_1[0x3d] == 0);
    auVar31[0xe] = -(param_1[0x3e] == 0);
    auVar31[0xf] = -(param_1[0x3f] == 0);
    auVar9[0] = -(param_1[0x30] == param_2);
    auVar9[1] = -(param_1[0x31] == param_2);
    auVar9[2] = -(param_1[0x32] == param_2);
    auVar9[3] = -(param_1[0x33] == param_2);
    auVar9[4] = -(param_1[0x34] == param_2);
    auVar9[5] = -(param_1[0x35] == param_2);
    auVar9[6] = -(param_1[0x36] == param_2);
    auVar9[7] = -(param_1[0x37] == param_2);
    auVar9[8] = -(param_1[0x38] == param_2);
    auVar9[9] = -(param_1[0x39] == param_2);
    auVar9[10] = -(param_1[0x3a] == param_2);
    auVar9[0xb] = -(param_1[0x3b] == param_2);
    auVar9[0xc] = -(param_1[0x3c] == param_2);
    auVar9[0xd] = -(param_1[0x3d] == param_2);
    auVar9[0xe] = -(param_1[0x3e] == param_2);
    auVar9[0xf] = -(param_1[0x3f] == param_2);
    auVar9 = auVar9 | auVar31;
    uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) << 0x20 |
            (ulong)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) << 0x10 |
            (ulong)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) << 0x30;
  }
  else {
    pbVar5 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    auVar33[0] = -(*pbVar5 == param_2);
    auVar33[1] = -(pbVar5[1] == param_2);
    auVar33[2] = -(pbVar5[2] == param_2);
    auVar33[3] = -(pbVar5[3] == param_2);
    auVar33[4] = -(pbVar5[4] == param_2);
    auVar33[5] = -(pbVar5[5] == param_2);
    auVar33[6] = -(pbVar5[6] == param_2);
    auVar33[7] = -(pbVar5[7] == param_2);
    auVar33[8] = -(pbVar5[8] == param_2);
    auVar33[9] = -(pbVar5[9] == param_2);
    auVar33[10] = -(pbVar5[10] == param_2);
    auVar33[0xb] = -(pbVar5[0xb] == param_2);
    auVar33[0xc] = -(pbVar5[0xc] == param_2);
    auVar33[0xd] = -(pbVar5[0xd] == param_2);
    auVar33[0xe] = -(pbVar5[0xe] == param_2);
    auVar33[0xf] = -(pbVar5[0xf] == param_2);
    auVar56[0] = -(*pbVar5 == 0);
    auVar56[1] = -(pbVar5[1] == 0);
    auVar56[2] = -(pbVar5[2] == 0);
    auVar56[3] = -(pbVar5[3] == 0);
    auVar56[4] = -(pbVar5[4] == 0);
    auVar56[5] = -(pbVar5[5] == 0);
    auVar56[6] = -(pbVar5[6] == 0);
    auVar56[7] = -(pbVar5[7] == 0);
    auVar56[8] = -(pbVar5[8] == 0);
    auVar56[9] = -(pbVar5[9] == 0);
    auVar56[10] = -(pbVar5[10] == 0);
    auVar56[0xb] = -(pbVar5[0xb] == 0);
    auVar56[0xc] = -(pbVar5[0xc] == 0);
    auVar56[0xd] = -(pbVar5[0xd] == 0);
    auVar56[0xe] = -(pbVar5[0xe] == 0);
    auVar56[0xf] = -(pbVar5[0xf] == 0);
    auVar33 = auVar33 | auVar56;
    auVar34[0] = -(pbVar5[0x10] == param_2);
    auVar34[1] = -(pbVar5[0x11] == param_2);
    auVar34[2] = -(pbVar5[0x12] == param_2);
    auVar34[3] = -(pbVar5[0x13] == param_2);
    auVar34[4] = -(pbVar5[0x14] == param_2);
    auVar34[5] = -(pbVar5[0x15] == param_2);
    auVar34[6] = -(pbVar5[0x16] == param_2);
    auVar34[7] = -(pbVar5[0x17] == param_2);
    auVar34[8] = -(pbVar5[0x18] == param_2);
    auVar34[9] = -(pbVar5[0x19] == param_2);
    auVar34[10] = -(pbVar5[0x1a] == param_2);
    auVar34[0xb] = -(pbVar5[0x1b] == param_2);
    auVar34[0xc] = -(pbVar5[0x1c] == param_2);
    auVar34[0xd] = -(pbVar5[0x1d] == param_2);
    auVar34[0xe] = -(pbVar5[0x1e] == param_2);
    auVar34[0xf] = -(pbVar5[0x1f] == param_2);
    auVar57[0] = -(pbVar5[0x10] == 0);
    auVar57[1] = -(pbVar5[0x11] == 0);
    auVar57[2] = -(pbVar5[0x12] == 0);
    auVar57[3] = -(pbVar5[0x13] == 0);
    auVar57[4] = -(pbVar5[0x14] == 0);
    auVar57[5] = -(pbVar5[0x15] == 0);
    auVar57[6] = -(pbVar5[0x16] == 0);
    auVar57[7] = -(pbVar5[0x17] == 0);
    auVar57[8] = -(pbVar5[0x18] == 0);
    auVar57[9] = -(pbVar5[0x19] == 0);
    auVar57[10] = -(pbVar5[0x1a] == 0);
    auVar57[0xb] = -(pbVar5[0x1b] == 0);
    auVar57[0xc] = -(pbVar5[0x1c] == 0);
    auVar57[0xd] = -(pbVar5[0x1d] == 0);
    auVar57[0xe] = -(pbVar5[0x1e] == 0);
    auVar57[0xf] = -(pbVar5[0x1f] == 0);
    auVar34 = auVar34 | auVar57;
    auVar35[0] = -(pbVar5[0x20] == param_2);
    auVar35[1] = -(pbVar5[0x21] == param_2);
    auVar35[2] = -(pbVar5[0x22] == param_2);
    auVar35[3] = -(pbVar5[0x23] == param_2);
    auVar35[4] = -(pbVar5[0x24] == param_2);
    auVar35[5] = -(pbVar5[0x25] == param_2);
    auVar35[6] = -(pbVar5[0x26] == param_2);
    auVar35[7] = -(pbVar5[0x27] == param_2);
    auVar35[8] = -(pbVar5[0x28] == param_2);
    auVar35[9] = -(pbVar5[0x29] == param_2);
    auVar35[10] = -(pbVar5[0x2a] == param_2);
    auVar35[0xb] = -(pbVar5[0x2b] == param_2);
    auVar35[0xc] = -(pbVar5[0x2c] == param_2);
    auVar35[0xd] = -(pbVar5[0x2d] == param_2);
    auVar35[0xe] = -(pbVar5[0x2e] == param_2);
    auVar35[0xf] = -(pbVar5[0x2f] == param_2);
    auVar58[0] = -(pbVar5[0x20] == 0);
    auVar58[1] = -(pbVar5[0x21] == 0);
    auVar58[2] = -(pbVar5[0x22] == 0);
    auVar58[3] = -(pbVar5[0x23] == 0);
    auVar58[4] = -(pbVar5[0x24] == 0);
    auVar58[5] = -(pbVar5[0x25] == 0);
    auVar58[6] = -(pbVar5[0x26] == 0);
    auVar58[7] = -(pbVar5[0x27] == 0);
    auVar58[8] = -(pbVar5[0x28] == 0);
    auVar58[9] = -(pbVar5[0x29] == 0);
    auVar58[10] = -(pbVar5[0x2a] == 0);
    auVar58[0xb] = -(pbVar5[0x2b] == 0);
    auVar58[0xc] = -(pbVar5[0x2c] == 0);
    auVar58[0xd] = -(pbVar5[0x2d] == 0);
    auVar58[0xe] = -(pbVar5[0x2e] == 0);
    auVar58[0xf] = -(pbVar5[0x2f] == 0);
    auVar35 = auVar35 | auVar58;
    auVar14[0] = -(pbVar5[0x30] == 0);
    auVar14[1] = -(pbVar5[0x31] == 0);
    auVar14[2] = -(pbVar5[0x32] == 0);
    auVar14[3] = -(pbVar5[0x33] == 0);
    auVar14[4] = -(pbVar5[0x34] == 0);
    auVar14[5] = -(pbVar5[0x35] == 0);
    auVar14[6] = -(pbVar5[0x36] == 0);
    auVar14[7] = -(pbVar5[0x37] == 0);
    auVar14[8] = -(pbVar5[0x38] == 0);
    auVar14[9] = -(pbVar5[0x39] == 0);
    auVar14[10] = -(pbVar5[0x3a] == 0);
    auVar14[0xb] = -(pbVar5[0x3b] == 0);
    auVar14[0xc] = -(pbVar5[0x3c] == 0);
    auVar14[0xd] = -(pbVar5[0x3d] == 0);
    auVar14[0xe] = -(pbVar5[0x3e] == 0);
    auVar14[0xf] = -(pbVar5[0x3f] == 0);
    auVar11[0] = -(param_2 == pbVar5[0x30]);
    auVar11[1] = -(param_2 == pbVar5[0x31]);
    auVar11[2] = -(param_2 == pbVar5[0x32]);
    auVar11[3] = -(param_2 == pbVar5[0x33]);
    auVar11[4] = -(param_2 == pbVar5[0x34]);
    auVar11[5] = -(param_2 == pbVar5[0x35]);
    auVar11[6] = -(param_2 == pbVar5[0x36]);
    auVar11[7] = -(param_2 == pbVar5[0x37]);
    auVar11[8] = -(param_2 == pbVar5[0x38]);
    auVar11[9] = -(param_2 == pbVar5[0x39]);
    auVar11[10] = -(param_2 == pbVar5[0x3a]);
    auVar11[0xb] = -(param_2 == pbVar5[0x3b]);
    auVar11[0xc] = -(param_2 == pbVar5[0x3c]);
    auVar11[0xd] = -(param_2 == pbVar5[0x3d]);
    auVar11[0xe] = -(param_2 == pbVar5[0x3e]);
    auVar11[0xf] = -(param_2 == pbVar5[0x3f]);
    auVar11 = auVar11 | auVar14;
    uVar4 = ((ulong)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) << 0x10 |
             (ulong)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) << 0x20 |
             (ulong)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) |
            (ulong)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) << 0x30) >>
            ((byte)param_1 & 0x3f);
  }
  if (uVar4 == 0) {
    param_1 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    do {
      pbVar5 = param_1;
      param_1 = pbVar5 + 0x40;
      bVar75 = *param_1 ^ param_2;
      bVar79 = pbVar5[0x41] ^ param_2;
      bVar81 = pbVar5[0x42] ^ param_2;
      bVar83 = pbVar5[0x43] ^ param_2;
      bVar85 = pbVar5[0x44] ^ param_2;
      bVar87 = pbVar5[0x45] ^ param_2;
      bVar89 = pbVar5[0x46] ^ param_2;
      bVar91 = pbVar5[0x47] ^ param_2;
      bVar93 = pbVar5[0x48] ^ param_2;
      bVar95 = pbVar5[0x49] ^ param_2;
      bVar97 = pbVar5[0x4a] ^ param_2;
      bVar99 = pbVar5[0x4b] ^ param_2;
      bVar101 = pbVar5[0x4c] ^ param_2;
      bVar103 = pbVar5[0x4d] ^ param_2;
      bVar105 = pbVar5[0x4e] ^ param_2;
      bVar107 = pbVar5[0x4f] ^ param_2;
      bVar12 = pbVar5[0x50] ^ param_2;
      bVar15 = pbVar5[0x51] ^ param_2;
      bVar16 = pbVar5[0x52] ^ param_2;
      bVar17 = pbVar5[0x53] ^ param_2;
      bVar18 = pbVar5[0x54] ^ param_2;
      bVar19 = pbVar5[0x55] ^ param_2;
      bVar20 = pbVar5[0x56] ^ param_2;
      bVar21 = pbVar5[0x57] ^ param_2;
      bVar22 = pbVar5[0x58] ^ param_2;
      bVar23 = pbVar5[0x59] ^ param_2;
      bVar24 = pbVar5[0x5a] ^ param_2;
      bVar25 = pbVar5[0x5b] ^ param_2;
      bVar26 = pbVar5[0x5c] ^ param_2;
      bVar27 = pbVar5[0x5d] ^ param_2;
      bVar28 = pbVar5[0x5e] ^ param_2;
      bVar29 = pbVar5[0x5f] ^ param_2;
      bVar30 = pbVar5[0x60] ^ param_2;
      bVar36 = pbVar5[0x61] ^ param_2;
      bVar37 = pbVar5[0x62] ^ param_2;
      bVar38 = pbVar5[99] ^ param_2;
      bVar39 = pbVar5[100] ^ param_2;
      bVar40 = pbVar5[0x65] ^ param_2;
      bVar41 = pbVar5[0x66] ^ param_2;
      bVar42 = pbVar5[0x67] ^ param_2;
      bVar43 = pbVar5[0x68] ^ param_2;
      bVar44 = pbVar5[0x69] ^ param_2;
      bVar45 = pbVar5[0x6a] ^ param_2;
      bVar46 = pbVar5[0x6b] ^ param_2;
      bVar47 = pbVar5[0x6c] ^ param_2;
      bVar48 = pbVar5[0x6d] ^ param_2;
      bVar49 = pbVar5[0x6e] ^ param_2;
      bVar50 = pbVar5[0x6f] ^ param_2;
      bVar51 = *param_1;
      bVar59 = pbVar5[0x41];
      bVar60 = pbVar5[0x42];
      bVar61 = pbVar5[0x43];
      bVar62 = pbVar5[0x44];
      bVar63 = pbVar5[0x45];
      bVar64 = pbVar5[0x46];
      bVar65 = pbVar5[0x47];
      bVar66 = pbVar5[0x48];
      bVar67 = pbVar5[0x49];
      bVar68 = pbVar5[0x4a];
      bVar69 = pbVar5[0x4b];
      bVar70 = pbVar5[0x4c];
      bVar71 = pbVar5[0x4d];
      bVar72 = pbVar5[0x4e];
      bVar73 = pbVar5[0x4f];
      bVar74 = (bVar51 < bVar75) * bVar51 | (bVar51 >= bVar75) * bVar75;
      bVar78 = (bVar59 < bVar79) * bVar59 | (bVar59 >= bVar79) * bVar79;
      bVar80 = (bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81;
      bVar82 = (bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83;
      bVar84 = (bVar62 < bVar85) * bVar62 | (bVar62 >= bVar85) * bVar85;
      bVar86 = (bVar63 < bVar87) * bVar63 | (bVar63 >= bVar87) * bVar87;
      bVar88 = (bVar64 < bVar89) * bVar64 | (bVar64 >= bVar89) * bVar89;
      bVar90 = (bVar65 < bVar91) * bVar65 | (bVar65 >= bVar91) * bVar91;
      bVar92 = (bVar66 < bVar93) * bVar66 | (bVar66 >= bVar93) * bVar93;
      bVar94 = (bVar67 < bVar95) * bVar67 | (bVar67 >= bVar95) * bVar95;
      bVar96 = (bVar68 < bVar97) * bVar68 | (bVar68 >= bVar97) * bVar97;
      bVar98 = (bVar69 < bVar99) * bVar69 | (bVar69 >= bVar99) * bVar99;
      bVar100 = (bVar70 < bVar101) * bVar70 | (bVar70 >= bVar101) * bVar101;
      bVar102 = (bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103;
      bVar104 = (bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105;
      bVar106 = (bVar73 < bVar107) * bVar73 | (bVar73 >= bVar107) * bVar107;
      bVar75 = pbVar5[0x70] ^ param_2;
      bVar79 = pbVar5[0x71] ^ param_2;
      bVar81 = pbVar5[0x72] ^ param_2;
      bVar83 = pbVar5[0x73] ^ param_2;
      bVar85 = pbVar5[0x74] ^ param_2;
      bVar87 = pbVar5[0x75] ^ param_2;
      bVar89 = pbVar5[0x76] ^ param_2;
      bVar91 = pbVar5[0x77] ^ param_2;
      bVar93 = pbVar5[0x78] ^ param_2;
      bVar95 = pbVar5[0x79] ^ param_2;
      bVar97 = pbVar5[0x7a] ^ param_2;
      bVar99 = pbVar5[0x7b] ^ param_2;
      bVar101 = pbVar5[0x7c] ^ param_2;
      bVar103 = pbVar5[0x7d] ^ param_2;
      bVar105 = pbVar5[0x7e] ^ param_2;
      bVar107 = pbVar5[0x7f] ^ param_2;
      bVar51 = pbVar5[0x50];
      bVar59 = pbVar5[0x51];
      bVar60 = pbVar5[0x52];
      bVar61 = pbVar5[0x53];
      bVar62 = pbVar5[0x54];
      bVar63 = pbVar5[0x55];
      bVar64 = pbVar5[0x56];
      bVar65 = pbVar5[0x57];
      bVar66 = pbVar5[0x58];
      bVar67 = pbVar5[0x59];
      bVar68 = pbVar5[0x5a];
      bVar69 = pbVar5[0x5b];
      bVar70 = pbVar5[0x5c];
      bVar71 = pbVar5[0x5d];
      bVar72 = pbVar5[0x5e];
      bVar73 = pbVar5[0x5f];
      bVar12 = (bVar51 < bVar12) * bVar51 | (bVar51 >= bVar12) * bVar12;
      bVar15 = (bVar59 < bVar15) * bVar59 | (bVar59 >= bVar15) * bVar15;
      bVar16 = (bVar60 < bVar16) * bVar60 | (bVar60 >= bVar16) * bVar16;
      bVar17 = (bVar61 < bVar17) * bVar61 | (bVar61 >= bVar17) * bVar17;
      bVar18 = (bVar62 < bVar18) * bVar62 | (bVar62 >= bVar18) * bVar18;
      bVar19 = (bVar63 < bVar19) * bVar63 | (bVar63 >= bVar19) * bVar19;
      bVar20 = (bVar64 < bVar20) * bVar64 | (bVar64 >= bVar20) * bVar20;
      bVar21 = (bVar65 < bVar21) * bVar65 | (bVar65 >= bVar21) * bVar21;
      bVar22 = (bVar66 < bVar22) * bVar66 | (bVar66 >= bVar22) * bVar22;
      bVar23 = (bVar67 < bVar23) * bVar67 | (bVar67 >= bVar23) * bVar23;
      bVar24 = (bVar68 < bVar24) * bVar68 | (bVar68 >= bVar24) * bVar24;
      bVar25 = (bVar69 < bVar25) * bVar69 | (bVar69 >= bVar25) * bVar25;
      bVar26 = (bVar70 < bVar26) * bVar70 | (bVar70 >= bVar26) * bVar26;
      bVar27 = (bVar71 < bVar27) * bVar71 | (bVar71 >= bVar27) * bVar27;
      bVar28 = (bVar72 < bVar28) * bVar72 | (bVar72 >= bVar28) * bVar28;
      bVar29 = (bVar73 < bVar29) * bVar73 | (bVar73 >= bVar29) * bVar29;
      bVar51 = pbVar5[0x60];
      bVar59 = pbVar5[0x61];
      bVar60 = pbVar5[0x62];
      bVar61 = pbVar5[99];
      bVar62 = pbVar5[100];
      bVar63 = pbVar5[0x65];
      bVar64 = pbVar5[0x66];
      bVar65 = pbVar5[0x67];
      bVar66 = pbVar5[0x68];
      bVar67 = pbVar5[0x69];
      bVar68 = pbVar5[0x6a];
      bVar69 = pbVar5[0x6b];
      bVar70 = pbVar5[0x6c];
      bVar71 = pbVar5[0x6d];
      bVar72 = pbVar5[0x6e];
      bVar73 = pbVar5[0x6f];
      bVar30 = (bVar51 < bVar30) * bVar51 | (bVar51 >= bVar30) * bVar30;
      bVar36 = (bVar59 < bVar36) * bVar59 | (bVar59 >= bVar36) * bVar36;
      bVar37 = (bVar60 < bVar37) * bVar60 | (bVar60 >= bVar37) * bVar37;
      bVar38 = (bVar61 < bVar38) * bVar61 | (bVar61 >= bVar38) * bVar38;
      bVar39 = (bVar62 < bVar39) * bVar62 | (bVar62 >= bVar39) * bVar39;
      bVar40 = (bVar63 < bVar40) * bVar63 | (bVar63 >= bVar40) * bVar40;
      bVar41 = (bVar64 < bVar41) * bVar64 | (bVar64 >= bVar41) * bVar41;
      bVar42 = (bVar65 < bVar42) * bVar65 | (bVar65 >= bVar42) * bVar42;
      bVar43 = (bVar66 < bVar43) * bVar66 | (bVar66 >= bVar43) * bVar43;
      bVar44 = (bVar67 < bVar44) * bVar67 | (bVar67 >= bVar44) * bVar44;
      bVar45 = (bVar68 < bVar45) * bVar68 | (bVar68 >= bVar45) * bVar45;
      bVar46 = (bVar69 < bVar46) * bVar69 | (bVar69 >= bVar46) * bVar46;
      bVar47 = (bVar70 < bVar47) * bVar70 | (bVar70 >= bVar47) * bVar47;
      bVar48 = (bVar71 < bVar48) * bVar71 | (bVar71 >= bVar48) * bVar48;
      bVar49 = (bVar72 < bVar49) * bVar72 | (bVar72 >= bVar49) * bVar49;
      bVar50 = (bVar73 < bVar50) * bVar73 | (bVar73 >= bVar50) * bVar50;
      bVar74 = (bVar12 < bVar74) * bVar12 | (bVar12 >= bVar74) * bVar74;
      bVar78 = (bVar15 < bVar78) * bVar15 | (bVar15 >= bVar78) * bVar78;
      bVar80 = (bVar16 < bVar80) * bVar16 | (bVar16 >= bVar80) * bVar80;
      bVar82 = (bVar17 < bVar82) * bVar17 | (bVar17 >= bVar82) * bVar82;
      bVar84 = (bVar18 < bVar84) * bVar18 | (bVar18 >= bVar84) * bVar84;
      bVar86 = (bVar19 < bVar86) * bVar19 | (bVar19 >= bVar86) * bVar86;
      bVar88 = (bVar20 < bVar88) * bVar20 | (bVar20 >= bVar88) * bVar88;
      bVar90 = (bVar21 < bVar90) * bVar21 | (bVar21 >= bVar90) * bVar90;
      bVar92 = (bVar22 < bVar92) * bVar22 | (bVar22 >= bVar92) * bVar92;
      bVar94 = (bVar23 < bVar94) * bVar23 | (bVar23 >= bVar94) * bVar94;
      bVar96 = (bVar24 < bVar96) * bVar24 | (bVar24 >= bVar96) * bVar96;
      bVar98 = (bVar25 < bVar98) * bVar25 | (bVar25 >= bVar98) * bVar98;
      bVar100 = (bVar26 < bVar100) * bVar26 | (bVar26 >= bVar100) * bVar100;
      bVar102 = (bVar27 < bVar102) * bVar27 | (bVar27 >= bVar102) * bVar102;
      bVar104 = (bVar28 < bVar104) * bVar28 | (bVar28 >= bVar104) * bVar104;
      bVar106 = (bVar29 < bVar106) * bVar29 | (bVar29 >= bVar106) * bVar106;
      bVar51 = pbVar5[0x70];
      bVar59 = pbVar5[0x71];
      bVar60 = pbVar5[0x72];
      bVar61 = pbVar5[0x73];
      bVar62 = pbVar5[0x74];
      bVar63 = pbVar5[0x75];
      bVar64 = pbVar5[0x76];
      bVar65 = pbVar5[0x77];
      bVar66 = pbVar5[0x78];
      bVar67 = pbVar5[0x79];
      bVar68 = pbVar5[0x7a];
      bVar69 = pbVar5[0x7b];
      bVar70 = pbVar5[0x7c];
      bVar71 = pbVar5[0x7d];
      bVar72 = pbVar5[0x7e];
      bVar73 = pbVar5[0x7f];
      bVar51 = (bVar51 < bVar75) * bVar51 | (bVar51 >= bVar75) * bVar75;
      bVar59 = (bVar59 < bVar79) * bVar59 | (bVar59 >= bVar79) * bVar79;
      bVar60 = (bVar60 < bVar81) * bVar60 | (bVar60 >= bVar81) * bVar81;
      bVar61 = (bVar61 < bVar83) * bVar61 | (bVar61 >= bVar83) * bVar83;
      bVar62 = (bVar62 < bVar85) * bVar62 | (bVar62 >= bVar85) * bVar85;
      bVar63 = (bVar63 < bVar87) * bVar63 | (bVar63 >= bVar87) * bVar87;
      bVar64 = (bVar64 < bVar89) * bVar64 | (bVar64 >= bVar89) * bVar89;
      bVar65 = (bVar65 < bVar91) * bVar65 | (bVar65 >= bVar91) * bVar91;
      bVar66 = (bVar66 < bVar93) * bVar66 | (bVar66 >= bVar93) * bVar93;
      bVar67 = (bVar67 < bVar95) * bVar67 | (bVar67 >= bVar95) * bVar95;
      bVar68 = (bVar68 < bVar97) * bVar68 | (bVar68 >= bVar97) * bVar97;
      bVar69 = (bVar69 < bVar99) * bVar69 | (bVar69 >= bVar99) * bVar99;
      bVar70 = (bVar70 < bVar101) * bVar70 | (bVar70 >= bVar101) * bVar101;
      bVar71 = (bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103;
      bVar72 = (bVar72 < bVar105) * bVar72 | (bVar72 >= bVar105) * bVar105;
      bVar73 = (bVar73 < bVar107) * bVar73 | (bVar73 >= bVar107) * bVar107;
      bVar75 = (bVar30 < bVar74) * bVar30 | (bVar30 >= bVar74) * bVar74;
      bVar79 = (bVar36 < bVar78) * bVar36 | (bVar36 >= bVar78) * bVar78;
      bVar81 = (bVar37 < bVar80) * bVar37 | (bVar37 >= bVar80) * bVar80;
      bVar83 = (bVar38 < bVar82) * bVar38 | (bVar38 >= bVar82) * bVar82;
      bVar85 = (bVar39 < bVar84) * bVar39 | (bVar39 >= bVar84) * bVar84;
      bVar87 = (bVar40 < bVar86) * bVar40 | (bVar40 >= bVar86) * bVar86;
      bVar89 = (bVar41 < bVar88) * bVar41 | (bVar41 >= bVar88) * bVar88;
      bVar91 = (bVar42 < bVar90) * bVar42 | (bVar42 >= bVar90) * bVar90;
      bVar93 = (bVar43 < bVar92) * bVar43 | (bVar43 >= bVar92) * bVar92;
      bVar95 = (bVar44 < bVar94) * bVar44 | (bVar44 >= bVar94) * bVar94;
      bVar97 = (bVar45 < bVar96) * bVar45 | (bVar45 >= bVar96) * bVar96;
      bVar99 = (bVar46 < bVar98) * bVar46 | (bVar46 >= bVar98) * bVar98;
      bVar101 = (bVar47 < bVar100) * bVar47 | (bVar47 >= bVar100) * bVar100;
      bVar103 = (bVar48 < bVar102) * bVar48 | (bVar48 >= bVar102) * bVar102;
      bVar105 = (bVar49 < bVar104) * bVar49 | (bVar49 >= bVar104) * bVar104;
      bVar107 = (bVar50 < bVar106) * bVar50 | (bVar50 >= bVar106) * bVar106;
      auVar76[0] = -((byte)((bVar51 < bVar75) * bVar51) == '\0' &&
                    (byte)((bVar51 >= bVar75) * bVar75) == '\0');
      auVar76[1] = -((byte)((bVar59 < bVar79) * bVar59) == '\0' &&
                    (byte)((bVar59 >= bVar79) * bVar79) == '\0');
      auVar76[2] = -((byte)((bVar60 < bVar81) * bVar60) == '\0' &&
                    (byte)((bVar60 >= bVar81) * bVar81) == '\0');
      auVar76[3] = -((byte)((bVar61 < bVar83) * bVar61) == '\0' &&
                    (byte)((bVar61 >= bVar83) * bVar83) == '\0');
      auVar76[4] = -((byte)((bVar62 < bVar85) * bVar62) == '\0' &&
                    (byte)((bVar62 >= bVar85) * bVar85) == '\0');
      auVar76[5] = -((byte)((bVar63 < bVar87) * bVar63) == '\0' &&
                    (byte)((bVar63 >= bVar87) * bVar87) == '\0');
      auVar76[6] = -((byte)((bVar64 < bVar89) * bVar64) == '\0' &&
                    (byte)((bVar64 >= bVar89) * bVar89) == '\0');
      auVar76[7] = -((byte)((bVar65 < bVar91) * bVar65) == '\0' &&
                    (byte)((bVar65 >= bVar91) * bVar91) == '\0');
      auVar76[8] = -((byte)((bVar66 < bVar93) * bVar66) == '\0' &&
                    (byte)((bVar66 >= bVar93) * bVar93) == '\0');
      auVar76[9] = -((byte)((bVar67 < bVar95) * bVar67) == '\0' &&
                    (byte)((bVar67 >= bVar95) * bVar95) == '\0');
      auVar76[10] = -((byte)((bVar68 < bVar97) * bVar68) == '\0' &&
                     (byte)((bVar68 >= bVar97) * bVar97) == '\0');
      auVar76[0xb] = -((byte)((bVar69 < bVar99) * bVar69) == '\0' &&
                      (byte)((bVar69 >= bVar99) * bVar99) == '\0');
      auVar76[0xc] = -((byte)((bVar70 < bVar101) * bVar70) == '\0' &&
                      (byte)((bVar70 >= bVar101) * bVar101) == '\0');
      auVar76[0xd] = -((byte)((bVar71 < bVar103) * bVar71) == '\0' &&
                      (byte)((bVar71 >= bVar103) * bVar103) == '\0');
      auVar76[0xe] = -((byte)((bVar72 < bVar105) * bVar72) == '\0' &&
                      (byte)((bVar72 >= bVar105) * bVar105) == '\0');
      auVar76[0xf] = -((byte)((bVar73 < bVar107) * bVar73) == '\0' &&
                      (byte)((bVar73 >= bVar107) * bVar107) == '\0');
    } while ((((((((((((((((auVar76 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                          (auVar76 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar76 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar76 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar76 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar76 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar76 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar76 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar76 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar76 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar76 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar76 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar76 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar76 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar76 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             -1 < auVar76[0xf]);
    auVar77[0] = -(*param_1 == param_2);
    auVar77[1] = -(pbVar5[0x41] == param_2);
    auVar77[2] = -(pbVar5[0x42] == param_2);
    auVar77[3] = -(pbVar5[0x43] == param_2);
    auVar77[4] = -(pbVar5[0x44] == param_2);
    auVar77[5] = -(pbVar5[0x45] == param_2);
    auVar77[6] = -(pbVar5[0x46] == param_2);
    auVar77[7] = -(pbVar5[0x47] == param_2);
    auVar77[8] = -(pbVar5[0x48] == param_2);
    auVar77[9] = -(pbVar5[0x49] == param_2);
    auVar77[10] = -(pbVar5[0x4a] == param_2);
    auVar77[0xb] = -(pbVar5[0x4b] == param_2);
    auVar77[0xc] = -(pbVar5[0x4c] == param_2);
    auVar77[0xd] = -(pbVar5[0x4d] == param_2);
    auVar77[0xe] = -(pbVar5[0x4e] == param_2);
    auVar77[0xf] = -(pbVar5[0x4f] == param_2);
    auVar10[0] = -(*param_1 == 0);
    auVar10[1] = -(pbVar5[0x41] == 0);
    auVar10[2] = -(pbVar5[0x42] == 0);
    auVar10[3] = -(pbVar5[0x43] == 0);
    auVar10[4] = -(pbVar5[0x44] == 0);
    auVar10[5] = -(pbVar5[0x45] == 0);
    auVar10[6] = -(pbVar5[0x46] == 0);
    auVar10[7] = -(pbVar5[0x47] == 0);
    auVar10[8] = -(pbVar5[0x48] == 0);
    auVar10[9] = -(pbVar5[0x49] == 0);
    auVar10[10] = -(pbVar5[0x4a] == 0);
    auVar10[0xb] = -(pbVar5[0x4b] == 0);
    auVar10[0xc] = -(pbVar5[0x4c] == 0);
    auVar10[0xd] = -(pbVar5[0x4d] == 0);
    auVar10[0xe] = -(pbVar5[0x4e] == 0);
    auVar10[0xf] = -(pbVar5[0x4f] == 0);
    auVar77 = auVar77 | auVar10;
    auVar13[0] = -(bVar12 == 0);
    auVar13[1] = -(bVar15 == 0);
    auVar13[2] = -(bVar16 == 0);
    auVar13[3] = -(bVar17 == 0);
    auVar13[4] = -(bVar18 == 0);
    auVar13[5] = -(bVar19 == 0);
    auVar13[6] = -(bVar20 == 0);
    auVar13[7] = -(bVar21 == 0);
    auVar13[8] = -(bVar22 == 0);
    auVar13[9] = -(bVar23 == 0);
    auVar13[10] = -(bVar24 == 0);
    auVar13[0xb] = -(bVar25 == 0);
    auVar13[0xc] = -(bVar26 == 0);
    auVar13[0xd] = -(bVar27 == 0);
    auVar13[0xe] = -(bVar28 == 0);
    auVar13[0xf] = -(bVar29 == 0);
    auVar32[0] = -(bVar30 == 0);
    auVar32[1] = -(bVar36 == 0);
    auVar32[2] = -(bVar37 == 0);
    auVar32[3] = -(bVar38 == 0);
    auVar32[4] = -(bVar39 == 0);
    auVar32[5] = -(bVar40 == 0);
    auVar32[6] = -(bVar41 == 0);
    auVar32[7] = -(bVar42 == 0);
    auVar32[8] = -(bVar43 == 0);
    auVar32[9] = -(bVar44 == 0);
    auVar32[10] = -(bVar45 == 0);
    auVar32[0xb] = -(bVar46 == 0);
    auVar32[0xc] = -(bVar47 == 0);
    auVar32[0xd] = -(bVar48 == 0);
    auVar32[0xe] = -(bVar49 == 0);
    auVar32[0xf] = -(bVar50 == 0);
    auVar55[0] = -(bVar51 == 0);
    auVar55[1] = -(bVar59 == 0);
    auVar55[2] = -(bVar60 == 0);
    auVar55[3] = -(bVar61 == 0);
    auVar55[4] = -(bVar62 == 0);
    auVar55[5] = -(bVar63 == 0);
    auVar55[6] = -(bVar64 == 0);
    auVar55[7] = -(bVar65 == 0);
    auVar55[8] = -(bVar66 == 0);
    auVar55[9] = -(bVar67 == 0);
    auVar55[10] = -(bVar68 == 0);
    auVar55[0xb] = -(bVar69 == 0);
    auVar55[0xc] = -(bVar70 == 0);
    auVar55[0xd] = -(bVar71 == 0);
    auVar55[0xe] = -(bVar72 == 0);
    auVar55[0xf] = -(bVar73 == 0);
    uVar4 = (ulong)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                           (ushort)(auVar13[0xf] >> 7) << 0xf) << 0x10 |
            (ulong)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
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
                           (ushort)(auVar32[0xf] >> 7) << 0xf) << 0x20 |
            (ulong)(ushort)((ushort)(SUB161(auVar77 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar77[0xf] >> 7) << 0xf) |
            (ulong)(ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar55[0xf] >> 7) << 0xf) << 0x30;
  }
  lVar2 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return param_1 + lVar2;
}

