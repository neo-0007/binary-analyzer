
byte * __strlen_sse2(char *param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ushort uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar14;
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
  undefined1 auVar10 [16];
  byte bVar42;
  undefined1 auVar11 [16];
  byte bVar15;
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  byte bVar50;
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
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar68;
  undefined1 auVar53 [16];
  undefined1 auVar69 [16];
  
  if (((ulong)param_1 & 0xfff) < 0xfd0) {
    auVar69[0] = -(*param_1 == '\0');
    auVar69[1] = -(param_1[1] == '\0');
    auVar69[2] = -(param_1[2] == '\0');
    auVar69[3] = -(param_1[3] == '\0');
    auVar69[4] = -(param_1[4] == '\0');
    auVar69[5] = -(param_1[5] == '\0');
    auVar69[6] = -(param_1[6] == '\0');
    auVar69[7] = -(param_1[7] == '\0');
    auVar69[8] = -(param_1[8] == '\0');
    auVar69[9] = -(param_1[9] == '\0');
    auVar69[10] = -(param_1[10] == '\0');
    auVar69[0xb] = -(param_1[0xb] == '\0');
    auVar69[0xc] = -(param_1[0xc] == '\0');
    auVar69[0xd] = -(param_1[0xd] == '\0');
    auVar69[0xe] = -(param_1[0xe] == '\0');
    auVar69[0xf] = -(param_1[0xf] == '\0');
    uVar4 = (ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar1 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return (byte *)(ulong)uVar1;
    }
    uVar6 = (ulong)param_1 & 0xfffffffffffffff0;
    auVar45[0] = -(*(char *)(uVar6 + 0x10) == '\0');
    auVar45[1] = -(*(char *)(uVar6 + 0x11) == '\0');
    auVar45[2] = -(*(char *)(uVar6 + 0x12) == '\0');
    auVar45[3] = -(*(char *)(uVar6 + 0x13) == '\0');
    auVar45[4] = -(*(char *)(uVar6 + 0x14) == '\0');
    auVar45[5] = -(*(char *)(uVar6 + 0x15) == '\0');
    auVar45[6] = -(*(char *)(uVar6 + 0x16) == '\0');
    auVar45[7] = -(*(char *)(uVar6 + 0x17) == '\0');
    auVar45[8] = -(*(char *)(uVar6 + 0x18) == '\0');
    auVar45[9] = -(*(char *)(uVar6 + 0x19) == '\0');
    auVar45[10] = -(*(char *)(uVar6 + 0x1a) == '\0');
    auVar45[0xb] = -(*(char *)(uVar6 + 0x1b) == '\0');
    auVar45[0xc] = -(*(char *)(uVar6 + 0x1c) == '\0');
    auVar45[0xd] = -(*(char *)(uVar6 + 0x1d) == '\0');
    auVar45[0xe] = -(*(char *)(uVar6 + 0x1e) == '\0');
    auVar45[0xf] = -(*(char *)(uVar6 + 0x1f) == '\0');
    auVar48[0] = -(*(char *)(uVar6 + 0x20) == '\0');
    auVar48[1] = -(*(char *)(uVar6 + 0x21) == '\0');
    auVar48[2] = -(*(char *)(uVar6 + 0x22) == '\0');
    auVar48[3] = -(*(char *)(uVar6 + 0x23) == '\0');
    auVar48[4] = -(*(char *)(uVar6 + 0x24) == '\0');
    auVar48[5] = -(*(char *)(uVar6 + 0x25) == '\0');
    auVar48[6] = -(*(char *)(uVar6 + 0x26) == '\0');
    auVar48[7] = -(*(char *)(uVar6 + 0x27) == '\0');
    auVar48[8] = -(*(char *)(uVar6 + 0x28) == '\0');
    auVar48[9] = -(*(char *)(uVar6 + 0x29) == '\0');
    auVar48[10] = -(*(char *)(uVar6 + 0x2a) == '\0');
    auVar48[0xb] = -(*(char *)(uVar6 + 0x2b) == '\0');
    auVar48[0xc] = -(*(char *)(uVar6 + 0x2c) == '\0');
    auVar48[0xd] = -(*(char *)(uVar6 + 0x2d) == '\0');
    auVar48[0xe] = -(*(char *)(uVar6 + 0x2e) == '\0');
    auVar48[0xf] = -(*(char *)(uVar6 + 0x2f) == '\0');
    auVar52[0] = -(*(char *)(uVar6 + 0x30) == '\0');
    auVar52[1] = -(*(char *)(uVar6 + 0x31) == '\0');
    auVar52[2] = -(*(char *)(uVar6 + 0x32) == '\0');
    auVar52[3] = -(*(char *)(uVar6 + 0x33) == '\0');
    auVar52[4] = -(*(char *)(uVar6 + 0x34) == '\0');
    auVar52[5] = -(*(char *)(uVar6 + 0x35) == '\0');
    auVar52[6] = -(*(char *)(uVar6 + 0x36) == '\0');
    auVar52[7] = -(*(char *)(uVar6 + 0x37) == '\0');
    auVar52[8] = -(*(char *)(uVar6 + 0x38) == '\0');
    auVar52[9] = -(*(char *)(uVar6 + 0x39) == '\0');
    auVar52[10] = -(*(char *)(uVar6 + 0x3a) == '\0');
    auVar52[0xb] = -(*(char *)(uVar6 + 0x3b) == '\0');
    auVar52[0xc] = -(*(char *)(uVar6 + 0x3c) == '\0');
    auVar52[0xd] = -(*(char *)(uVar6 + 0x3d) == '\0');
    auVar52[0xe] = -(*(char *)(uVar6 + 0x3e) == '\0');
    auVar52[0xf] = -(*(char *)(uVar6 + 0x3f) == '\0');
    uVar6 = (long)((ulong)(ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
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
                                  (ushort)(auVar45[0xf] >> 7) << 0xf) << 0x10 |
                  (ulong)CONCAT22((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                                  (ushort)(auVar52[0xf] >> 7) << 0xf,
                                  (ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                                  (ushort)(auVar48[0xf] >> 7) << 0xf) << 0x20) >>
            (((byte)param_1 ^ (byte)uVar6) & 0x3f);
    pbVar7 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    if (uVar6 != 0) {
      pbVar7 = (byte *)0x0;
      if (uVar6 != 0) {
        for (; (uVar6 >> (long)pbVar7 & 1) == 0; pbVar7 = pbVar7 + 1) {
        }
      }
      return pbVar7;
    }
  }
  else {
    pbVar7 = (byte *)((ulong)param_1 & 0xffffffffffffffc0);
    auVar10[0] = -(*pbVar7 == 0);
    auVar10[1] = -(pbVar7[1] == 0);
    auVar10[2] = -(pbVar7[2] == 0);
    auVar10[3] = -(pbVar7[3] == 0);
    auVar10[4] = -(pbVar7[4] == 0);
    auVar10[5] = -(pbVar7[5] == 0);
    auVar10[6] = -(pbVar7[6] == 0);
    auVar10[7] = -(pbVar7[7] == 0);
    auVar10[8] = -(pbVar7[8] == 0);
    auVar10[9] = -(pbVar7[9] == 0);
    auVar10[10] = -(pbVar7[10] == 0);
    auVar10[0xb] = -(pbVar7[0xb] == 0);
    auVar10[0xc] = -(pbVar7[0xc] == 0);
    auVar10[0xd] = -(pbVar7[0xd] == 0);
    auVar10[0xe] = -(pbVar7[0xe] == 0);
    auVar10[0xf] = -(pbVar7[0xf] == 0);
    auVar44[0] = -(pbVar7[0x10] == 0);
    auVar44[1] = -(pbVar7[0x11] == 0);
    auVar44[2] = -(pbVar7[0x12] == 0);
    auVar44[3] = -(pbVar7[0x13] == 0);
    auVar44[4] = -(pbVar7[0x14] == 0);
    auVar44[5] = -(pbVar7[0x15] == 0);
    auVar44[6] = -(pbVar7[0x16] == 0);
    auVar44[7] = -(pbVar7[0x17] == 0);
    auVar44[8] = -(pbVar7[0x18] == 0);
    auVar44[9] = -(pbVar7[0x19] == 0);
    auVar44[10] = -(pbVar7[0x1a] == 0);
    auVar44[0xb] = -(pbVar7[0x1b] == 0);
    auVar44[0xc] = -(pbVar7[0x1c] == 0);
    auVar44[0xd] = -(pbVar7[0x1d] == 0);
    auVar44[0xe] = -(pbVar7[0x1e] == 0);
    auVar44[0xf] = -(pbVar7[0x1f] == 0);
    auVar47[0] = -(pbVar7[0x20] == 0);
    auVar47[1] = -(pbVar7[0x21] == 0);
    auVar47[2] = -(pbVar7[0x22] == 0);
    auVar47[3] = -(pbVar7[0x23] == 0);
    auVar47[4] = -(pbVar7[0x24] == 0);
    auVar47[5] = -(pbVar7[0x25] == 0);
    auVar47[6] = -(pbVar7[0x26] == 0);
    auVar47[7] = -(pbVar7[0x27] == 0);
    auVar47[8] = -(pbVar7[0x28] == 0);
    auVar47[9] = -(pbVar7[0x29] == 0);
    auVar47[10] = -(pbVar7[0x2a] == 0);
    auVar47[0xb] = -(pbVar7[0x2b] == 0);
    auVar47[0xc] = -(pbVar7[0x2c] == 0);
    auVar47[0xd] = -(pbVar7[0x2d] == 0);
    auVar47[0xe] = -(pbVar7[0x2e] == 0);
    auVar47[0xf] = -(pbVar7[0x2f] == 0);
    auVar51[0] = -(pbVar7[0x30] == 0);
    auVar51[1] = -(pbVar7[0x31] == 0);
    auVar51[2] = -(pbVar7[0x32] == 0);
    auVar51[3] = -(pbVar7[0x33] == 0);
    auVar51[4] = -(pbVar7[0x34] == 0);
    auVar51[5] = -(pbVar7[0x35] == 0);
    auVar51[6] = -(pbVar7[0x36] == 0);
    auVar51[7] = -(pbVar7[0x37] == 0);
    auVar51[8] = -(pbVar7[0x38] == 0);
    auVar51[9] = -(pbVar7[0x39] == 0);
    auVar51[10] = -(pbVar7[0x3a] == 0);
    auVar51[0xb] = -(pbVar7[0x3b] == 0);
    auVar51[0xc] = -(pbVar7[0x3c] == 0);
    auVar51[0xd] = -(pbVar7[0x3d] == 0);
    auVar51[0xe] = -(pbVar7[0x3e] == 0);
    auVar51[0xf] = -(pbVar7[0x3f] == 0);
    uVar6 = CONCAT44(CONCAT22((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                              (ushort)(auVar51[0xf] >> 7) << 0xf,
                              (ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                              (ushort)(auVar47[0xf] >> 7) << 0xf),
                     CONCAT22((ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                              (ushort)(auVar44[0xf] >> 7) << 0xf,
                              (ushort)(SUB161(auVar10 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar10[0xf] >> 7) << 0xf)) >> ((byte)param_1 & 0x3f);
    if (uVar6 != 0) {
      pbVar7 = (byte *)0x0;
      if (uVar6 != 0) {
        for (; (uVar6 >> (long)pbVar7 & 1) == 0; pbVar7 = pbVar7 + 1) {
        }
      }
      return pbVar7;
    }
    auVar45 = (undefined1  [16])0x0;
    auVar48 = (undefined1  [16])0x0;
    auVar52 = (undefined1  [16])0x0;
  }
  do {
    bVar54 = pbVar7[0x40];
    bVar55 = pbVar7[0x41];
    bVar56 = pbVar7[0x42];
    bVar57 = pbVar7[0x43];
    bVar58 = pbVar7[0x44];
    bVar59 = pbVar7[0x45];
    bVar60 = pbVar7[0x46];
    bVar61 = pbVar7[0x47];
    bVar62 = pbVar7[0x48];
    bVar63 = pbVar7[0x49];
    bVar64 = pbVar7[0x4a];
    bVar65 = pbVar7[0x4b];
    bVar66 = pbVar7[0x4c];
    bVar67 = pbVar7[0x4d];
    bVar68 = pbVar7[0x4e];
    bVar5 = pbVar7[0x4f];
    bVar9 = pbVar7[0x50];
    bVar14 = pbVar7[0x51];
    bVar16 = pbVar7[0x52];
    bVar18 = pbVar7[0x53];
    bVar20 = pbVar7[0x54];
    bVar22 = pbVar7[0x55];
    bVar24 = pbVar7[0x56];
    bVar26 = pbVar7[0x57];
    bVar28 = pbVar7[0x58];
    bVar30 = pbVar7[0x59];
    bVar32 = pbVar7[0x5a];
    bVar34 = pbVar7[0x5b];
    bVar36 = pbVar7[0x5c];
    bVar38 = pbVar7[0x5d];
    bVar40 = pbVar7[0x5e];
    bVar42 = pbVar7[0x5f];
    bVar9 = (bVar9 < bVar54) * bVar9 | (bVar9 >= bVar54) * bVar54;
    bVar14 = (bVar14 < bVar55) * bVar14 | (bVar14 >= bVar55) * bVar55;
    bVar16 = (bVar16 < bVar56) * bVar16 | (bVar16 >= bVar56) * bVar56;
    bVar18 = (bVar18 < bVar57) * bVar18 | (bVar18 >= bVar57) * bVar57;
    bVar20 = (bVar20 < bVar58) * bVar20 | (bVar20 >= bVar58) * bVar58;
    bVar22 = (bVar22 < bVar59) * bVar22 | (bVar22 >= bVar59) * bVar59;
    bVar24 = (bVar24 < bVar60) * bVar24 | (bVar24 >= bVar60) * bVar60;
    bVar26 = (bVar26 < bVar61) * bVar26 | (bVar26 >= bVar61) * bVar61;
    bVar28 = (bVar28 < bVar62) * bVar28 | (bVar28 >= bVar62) * bVar62;
    bVar30 = (bVar30 < bVar63) * bVar30 | (bVar30 >= bVar63) * bVar63;
    bVar32 = (bVar32 < bVar64) * bVar32 | (bVar32 >= bVar64) * bVar64;
    bVar34 = (bVar34 < bVar65) * bVar34 | (bVar34 >= bVar65) * bVar65;
    bVar36 = (bVar36 < bVar66) * bVar36 | (bVar36 >= bVar66) * bVar66;
    bVar38 = (bVar38 < bVar67) * bVar38 | (bVar38 >= bVar67) * bVar67;
    bVar40 = (bVar40 < bVar68) * bVar40 | (bVar40 >= bVar68) * bVar68;
    bVar42 = (bVar42 < bVar5) * bVar42 | (bVar42 >= bVar5) * bVar5;
    bVar54 = pbVar7[0x60];
    bVar55 = pbVar7[0x61];
    bVar56 = pbVar7[0x62];
    bVar57 = pbVar7[99];
    bVar58 = pbVar7[100];
    bVar59 = pbVar7[0x65];
    bVar60 = pbVar7[0x66];
    bVar61 = pbVar7[0x67];
    bVar62 = pbVar7[0x68];
    bVar63 = pbVar7[0x69];
    bVar64 = pbVar7[0x6a];
    bVar65 = pbVar7[0x6b];
    bVar66 = pbVar7[0x6c];
    bVar67 = pbVar7[0x6d];
    bVar68 = pbVar7[0x6e];
    bVar5 = pbVar7[0x6f];
    bVar9 = (bVar54 < bVar9) * bVar54 | (bVar54 >= bVar9) * bVar9;
    bVar14 = (bVar55 < bVar14) * bVar55 | (bVar55 >= bVar14) * bVar14;
    bVar16 = (bVar56 < bVar16) * bVar56 | (bVar56 >= bVar16) * bVar16;
    bVar18 = (bVar57 < bVar18) * bVar57 | (bVar57 >= bVar18) * bVar18;
    bVar20 = (bVar58 < bVar20) * bVar58 | (bVar58 >= bVar20) * bVar20;
    bVar22 = (bVar59 < bVar22) * bVar59 | (bVar59 >= bVar22) * bVar22;
    bVar24 = (bVar60 < bVar24) * bVar60 | (bVar60 >= bVar24) * bVar24;
    bVar26 = (bVar61 < bVar26) * bVar61 | (bVar61 >= bVar26) * bVar26;
    bVar28 = (bVar62 < bVar28) * bVar62 | (bVar62 >= bVar28) * bVar28;
    bVar30 = (bVar63 < bVar30) * bVar63 | (bVar63 >= bVar30) * bVar30;
    bVar32 = (bVar64 < bVar32) * bVar64 | (bVar64 >= bVar32) * bVar32;
    bVar34 = (bVar65 < bVar34) * bVar65 | (bVar65 >= bVar34) * bVar34;
    bVar36 = (bVar66 < bVar36) * bVar66 | (bVar66 >= bVar36) * bVar36;
    bVar38 = (bVar67 < bVar38) * bVar67 | (bVar67 >= bVar38) * bVar38;
    bVar40 = (bVar68 < bVar40) * bVar68 | (bVar68 >= bVar40) * bVar40;
    bVar42 = (bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42;
    bVar54 = pbVar7[0x70];
    bVar55 = pbVar7[0x71];
    bVar56 = pbVar7[0x72];
    bVar57 = pbVar7[0x73];
    bVar58 = pbVar7[0x74];
    bVar59 = pbVar7[0x75];
    bVar60 = pbVar7[0x76];
    bVar61 = pbVar7[0x77];
    bVar62 = pbVar7[0x78];
    bVar63 = pbVar7[0x79];
    bVar64 = pbVar7[0x7a];
    bVar65 = pbVar7[0x7b];
    bVar66 = pbVar7[0x7c];
    bVar67 = pbVar7[0x7d];
    bVar68 = pbVar7[0x7e];
    bVar5 = pbVar7[0x7f];
    bVar50 = auVar52[0];
    auVar11[0] = -((byte)((bVar54 < bVar9) * bVar54 | (bVar54 >= bVar9) * bVar9) == bVar50);
    bVar54 = auVar52[1];
    auVar11[1] = -((byte)((bVar55 < bVar14) * bVar55 | (bVar55 >= bVar14) * bVar14) == bVar54);
    bVar55 = auVar52[2];
    auVar11[2] = -((byte)((bVar56 < bVar16) * bVar56 | (bVar56 >= bVar16) * bVar16) == bVar55);
    bVar56 = auVar52[3];
    auVar11[3] = -((byte)((bVar57 < bVar18) * bVar57 | (bVar57 >= bVar18) * bVar18) == bVar56);
    bVar57 = auVar52[4];
    auVar11[4] = -((byte)((bVar58 < bVar20) * bVar58 | (bVar58 >= bVar20) * bVar20) == bVar57);
    bVar58 = auVar52[5];
    auVar11[5] = -((byte)((bVar59 < bVar22) * bVar59 | (bVar59 >= bVar22) * bVar22) == bVar58);
    bVar59 = auVar52[6];
    auVar11[6] = -((byte)((bVar60 < bVar24) * bVar60 | (bVar60 >= bVar24) * bVar24) == bVar59);
    bVar60 = auVar52[7];
    auVar11[7] = -((byte)((bVar61 < bVar26) * bVar61 | (bVar61 >= bVar26) * bVar26) == bVar60);
    bVar61 = auVar52[8];
    auVar11[8] = -((byte)((bVar62 < bVar28) * bVar62 | (bVar62 >= bVar28) * bVar28) == bVar61);
    bVar62 = auVar52[9];
    auVar11[9] = -((byte)((bVar63 < bVar30) * bVar63 | (bVar63 >= bVar30) * bVar30) == bVar62);
    bVar63 = auVar52[10];
    auVar11[10] = -((byte)((bVar64 < bVar32) * bVar64 | (bVar64 >= bVar32) * bVar32) == bVar63);
    bVar64 = auVar52[0xb];
    auVar11[0xb] = -((byte)((bVar65 < bVar34) * bVar65 | (bVar65 >= bVar34) * bVar34) == bVar64);
    bVar65 = auVar52[0xc];
    auVar11[0xc] = -((byte)((bVar66 < bVar36) * bVar66 | (bVar66 >= bVar36) * bVar36) == bVar65);
    bVar66 = auVar52[0xd];
    auVar11[0xd] = -((byte)((bVar67 < bVar38) * bVar67 | (bVar67 >= bVar38) * bVar38) == bVar66);
    bVar67 = auVar52[0xe];
    auVar11[0xe] = -((byte)((bVar68 < bVar40) * bVar68 | (bVar68 >= bVar40) * bVar40) == bVar67);
    bVar68 = auVar52[0xf];
    bVar3 = (byte)((bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42) == bVar68;
    auVar11[0xf] = -bVar3;
    if ((((((((((((((((auVar11 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar11 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar11 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar11 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar11 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar11 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar11 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar11 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar11 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar11 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar11 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar11 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar11 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar11 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar11 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || bVar3) {
      pbVar8 = pbVar7 + 0x40;
      break;
    }
    pbVar8 = pbVar7 + 0x80;
    bVar5 = *pbVar8;
    bVar9 = pbVar7[0x81];
    bVar14 = pbVar7[0x82];
    bVar16 = pbVar7[0x83];
    bVar18 = pbVar7[0x84];
    bVar20 = pbVar7[0x85];
    bVar22 = pbVar7[0x86];
    bVar24 = pbVar7[0x87];
    bVar26 = pbVar7[0x88];
    bVar28 = pbVar7[0x89];
    bVar30 = pbVar7[0x8a];
    bVar32 = pbVar7[0x8b];
    bVar34 = pbVar7[0x8c];
    bVar36 = pbVar7[0x8d];
    bVar38 = pbVar7[0x8e];
    bVar40 = pbVar7[0x8f];
    bVar42 = pbVar7[0x90];
    bVar15 = pbVar7[0x91];
    bVar17 = pbVar7[0x92];
    bVar19 = pbVar7[0x93];
    bVar21 = pbVar7[0x94];
    bVar23 = pbVar7[0x95];
    bVar25 = pbVar7[0x96];
    bVar27 = pbVar7[0x97];
    bVar29 = pbVar7[0x98];
    bVar31 = pbVar7[0x99];
    bVar33 = pbVar7[0x9a];
    bVar35 = pbVar7[0x9b];
    bVar37 = pbVar7[0x9c];
    bVar39 = pbVar7[0x9d];
    bVar41 = pbVar7[0x9e];
    bVar43 = pbVar7[0x9f];
    bVar42 = (bVar42 < bVar5) * bVar42 | (bVar42 >= bVar5) * bVar5;
    bVar15 = (bVar15 < bVar9) * bVar15 | (bVar15 >= bVar9) * bVar9;
    bVar17 = (bVar17 < bVar14) * bVar17 | (bVar17 >= bVar14) * bVar14;
    bVar19 = (bVar19 < bVar16) * bVar19 | (bVar19 >= bVar16) * bVar16;
    bVar21 = (bVar21 < bVar18) * bVar21 | (bVar21 >= bVar18) * bVar18;
    bVar23 = (bVar23 < bVar20) * bVar23 | (bVar23 >= bVar20) * bVar20;
    bVar25 = (bVar25 < bVar22) * bVar25 | (bVar25 >= bVar22) * bVar22;
    bVar27 = (bVar27 < bVar24) * bVar27 | (bVar27 >= bVar24) * bVar24;
    bVar29 = (bVar29 < bVar26) * bVar29 | (bVar29 >= bVar26) * bVar26;
    bVar31 = (bVar31 < bVar28) * bVar31 | (bVar31 >= bVar28) * bVar28;
    bVar33 = (bVar33 < bVar30) * bVar33 | (bVar33 >= bVar30) * bVar30;
    bVar35 = (bVar35 < bVar32) * bVar35 | (bVar35 >= bVar32) * bVar32;
    bVar37 = (bVar37 < bVar34) * bVar37 | (bVar37 >= bVar34) * bVar34;
    bVar39 = (bVar39 < bVar36) * bVar39 | (bVar39 >= bVar36) * bVar36;
    bVar41 = (bVar41 < bVar38) * bVar41 | (bVar41 >= bVar38) * bVar38;
    bVar43 = (bVar43 < bVar40) * bVar43 | (bVar43 >= bVar40) * bVar40;
    bVar5 = pbVar7[0xa0];
    bVar9 = pbVar7[0xa1];
    bVar14 = pbVar7[0xa2];
    bVar16 = pbVar7[0xa3];
    bVar18 = pbVar7[0xa4];
    bVar20 = pbVar7[0xa5];
    bVar22 = pbVar7[0xa6];
    bVar24 = pbVar7[0xa7];
    bVar26 = pbVar7[0xa8];
    bVar28 = pbVar7[0xa9];
    bVar30 = pbVar7[0xaa];
    bVar32 = pbVar7[0xab];
    bVar34 = pbVar7[0xac];
    bVar36 = pbVar7[0xad];
    bVar38 = pbVar7[0xae];
    bVar40 = pbVar7[0xaf];
    bVar42 = (bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42;
    bVar15 = (bVar9 < bVar15) * bVar9 | (bVar9 >= bVar15) * bVar15;
    bVar17 = (bVar14 < bVar17) * bVar14 | (bVar14 >= bVar17) * bVar17;
    bVar19 = (bVar16 < bVar19) * bVar16 | (bVar16 >= bVar19) * bVar19;
    bVar21 = (bVar18 < bVar21) * bVar18 | (bVar18 >= bVar21) * bVar21;
    bVar23 = (bVar20 < bVar23) * bVar20 | (bVar20 >= bVar23) * bVar23;
    bVar25 = (bVar22 < bVar25) * bVar22 | (bVar22 >= bVar25) * bVar25;
    bVar27 = (bVar24 < bVar27) * bVar24 | (bVar24 >= bVar27) * bVar27;
    bVar29 = (bVar26 < bVar29) * bVar26 | (bVar26 >= bVar29) * bVar29;
    bVar31 = (bVar28 < bVar31) * bVar28 | (bVar28 >= bVar31) * bVar31;
    bVar33 = (bVar30 < bVar33) * bVar30 | (bVar30 >= bVar33) * bVar33;
    bVar35 = (bVar32 < bVar35) * bVar32 | (bVar32 >= bVar35) * bVar35;
    bVar37 = (bVar34 < bVar37) * bVar34 | (bVar34 >= bVar37) * bVar37;
    bVar39 = (bVar36 < bVar39) * bVar36 | (bVar36 >= bVar39) * bVar39;
    bVar41 = (bVar38 < bVar41) * bVar38 | (bVar38 >= bVar41) * bVar41;
    bVar43 = (bVar40 < bVar43) * bVar40 | (bVar40 >= bVar43) * bVar43;
    bVar5 = pbVar7[0xb0];
    bVar9 = pbVar7[0xb1];
    bVar14 = pbVar7[0xb2];
    bVar16 = pbVar7[0xb3];
    bVar18 = pbVar7[0xb4];
    bVar20 = pbVar7[0xb5];
    bVar22 = pbVar7[0xb6];
    bVar24 = pbVar7[0xb7];
    bVar26 = pbVar7[0xb8];
    bVar28 = pbVar7[0xb9];
    bVar30 = pbVar7[0xba];
    bVar32 = pbVar7[0xbb];
    bVar34 = pbVar7[0xbc];
    bVar36 = pbVar7[0xbd];
    bVar38 = pbVar7[0xbe];
    bVar40 = pbVar7[0xbf];
    auVar12[0] = -((byte)((bVar5 < bVar42) * bVar5 | (bVar5 >= bVar42) * bVar42) == bVar50);
    auVar12[1] = -((byte)((bVar9 < bVar15) * bVar9 | (bVar9 >= bVar15) * bVar15) == bVar54);
    auVar12[2] = -((byte)((bVar14 < bVar17) * bVar14 | (bVar14 >= bVar17) * bVar17) == bVar55);
    auVar12[3] = -((byte)((bVar16 < bVar19) * bVar16 | (bVar16 >= bVar19) * bVar19) == bVar56);
    auVar12[4] = -((byte)((bVar18 < bVar21) * bVar18 | (bVar18 >= bVar21) * bVar21) == bVar57);
    auVar12[5] = -((byte)((bVar20 < bVar23) * bVar20 | (bVar20 >= bVar23) * bVar23) == bVar58);
    auVar12[6] = -((byte)((bVar22 < bVar25) * bVar22 | (bVar22 >= bVar25) * bVar25) == bVar59);
    auVar12[7] = -((byte)((bVar24 < bVar27) * bVar24 | (bVar24 >= bVar27) * bVar27) == bVar60);
    auVar12[8] = -((byte)((bVar26 < bVar29) * bVar26 | (bVar26 >= bVar29) * bVar29) == bVar61);
    auVar12[9] = -((byte)((bVar28 < bVar31) * bVar28 | (bVar28 >= bVar31) * bVar31) == bVar62);
    auVar12[10] = -((byte)((bVar30 < bVar33) * bVar30 | (bVar30 >= bVar33) * bVar33) == bVar63);
    auVar12[0xb] = -((byte)((bVar32 < bVar35) * bVar32 | (bVar32 >= bVar35) * bVar35) == bVar64);
    auVar12[0xc] = -((byte)((bVar34 < bVar37) * bVar34 | (bVar34 >= bVar37) * bVar37) == bVar65);
    auVar12[0xd] = -((byte)((bVar36 < bVar39) * bVar36 | (bVar36 >= bVar39) * bVar39) == bVar66);
    auVar12[0xe] = -((byte)((bVar38 < bVar41) * bVar38 | (bVar38 >= bVar41) * bVar41) == bVar67);
    bVar3 = (byte)((bVar40 < bVar43) * bVar40 | (bVar40 >= bVar43) * bVar43) == bVar68;
    auVar12[0xf] = -bVar3;
    pbVar7 = pbVar8;
  } while ((((((((((((((((auVar12 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                        (auVar12 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar12 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar12 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar12 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar12 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar12 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar12 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar12 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar12 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar12 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar12 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar12 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
            (auVar12 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
           (auVar12 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && !bVar3);
  auVar13[0] = -(*pbVar8 == 0);
  auVar13[1] = -(pbVar8[1] == 0);
  auVar13[2] = -(pbVar8[2] == 0);
  auVar13[3] = -(pbVar8[3] == 0);
  auVar13[4] = -(pbVar8[4] == 0);
  auVar13[5] = -(pbVar8[5] == 0);
  auVar13[6] = -(pbVar8[6] == 0);
  auVar13[7] = -(pbVar8[7] == 0);
  auVar13[8] = -(pbVar8[8] == 0);
  auVar13[9] = -(pbVar8[9] == 0);
  auVar13[10] = -(pbVar8[10] == 0);
  auVar13[0xb] = -(pbVar8[0xb] == 0);
  auVar13[0xc] = -(pbVar8[0xc] == 0);
  auVar13[0xd] = -(pbVar8[0xd] == 0);
  auVar13[0xe] = -(pbVar8[0xe] == 0);
  auVar13[0xf] = -(pbVar8[0xf] == 0);
  auVar46[0] = -(auVar45[0] == pbVar8[0x10]);
  auVar46[1] = -(auVar45[1] == pbVar8[0x11]);
  auVar46[2] = -(auVar45[2] == pbVar8[0x12]);
  auVar46[3] = -(auVar45[3] == pbVar8[0x13]);
  auVar46[4] = -(auVar45[4] == pbVar8[0x14]);
  auVar46[5] = -(auVar45[5] == pbVar8[0x15]);
  auVar46[6] = -(auVar45[6] == pbVar8[0x16]);
  auVar46[7] = -(auVar45[7] == pbVar8[0x17]);
  auVar46[8] = -(auVar45[8] == pbVar8[0x18]);
  auVar46[9] = -(auVar45[9] == pbVar8[0x19]);
  auVar46[10] = -(auVar45[10] == pbVar8[0x1a]);
  auVar46[0xb] = -(auVar45[0xb] == pbVar8[0x1b]);
  auVar46[0xc] = -(auVar45[0xc] == pbVar8[0x1c]);
  auVar46[0xd] = -(auVar45[0xd] == pbVar8[0x1d]);
  auVar46[0xe] = -(auVar45[0xe] == pbVar8[0x1e]);
  auVar46[0xf] = -(auVar45[0xf] == pbVar8[0x1f]);
  auVar49[0] = -(auVar48[0] == pbVar8[0x20]);
  auVar49[1] = -(auVar48[1] == pbVar8[0x21]);
  auVar49[2] = -(auVar48[2] == pbVar8[0x22]);
  auVar49[3] = -(auVar48[3] == pbVar8[0x23]);
  auVar49[4] = -(auVar48[4] == pbVar8[0x24]);
  auVar49[5] = -(auVar48[5] == pbVar8[0x25]);
  auVar49[6] = -(auVar48[6] == pbVar8[0x26]);
  auVar49[7] = -(auVar48[7] == pbVar8[0x27]);
  auVar49[8] = -(auVar48[8] == pbVar8[0x28]);
  auVar49[9] = -(auVar48[9] == pbVar8[0x29]);
  auVar49[10] = -(auVar48[10] == pbVar8[0x2a]);
  auVar49[0xb] = -(auVar48[0xb] == pbVar8[0x2b]);
  auVar49[0xc] = -(auVar48[0xc] == pbVar8[0x2c]);
  auVar49[0xd] = -(auVar48[0xd] == pbVar8[0x2d]);
  auVar49[0xe] = -(auVar48[0xe] == pbVar8[0x2e]);
  auVar49[0xf] = -(auVar48[0xf] == pbVar8[0x2f]);
  auVar53[0] = -(bVar50 == pbVar8[0x30]);
  auVar53[1] = -(bVar54 == pbVar8[0x31]);
  auVar53[2] = -(bVar55 == pbVar8[0x32]);
  auVar53[3] = -(bVar56 == pbVar8[0x33]);
  auVar53[4] = -(bVar57 == pbVar8[0x34]);
  auVar53[5] = -(bVar58 == pbVar8[0x35]);
  auVar53[6] = -(bVar59 == pbVar8[0x36]);
  auVar53[7] = -(bVar60 == pbVar8[0x37]);
  auVar53[8] = -(bVar61 == pbVar8[0x38]);
  auVar53[9] = -(bVar62 == pbVar8[0x39]);
  auVar53[10] = -(bVar63 == pbVar8[0x3a]);
  auVar53[0xb] = -(bVar64 == pbVar8[0x3b]);
  auVar53[0xc] = -(bVar65 == pbVar8[0x3c]);
  auVar53[0xd] = -(bVar66 == pbVar8[0x3d]);
  auVar53[0xe] = -(bVar67 == pbVar8[0x3e]);
  auVar53[0xf] = -(bVar68 == pbVar8[0x3f]);
  uVar6 = CONCAT44(CONCAT22((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                            (ushort)(auVar53[0xf] >> 7) << 0xf,
                            (ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                            (ushort)(auVar49[0xf] >> 7) << 0xf),
                   CONCAT22((ushort)(SUB161(auVar46 >> 7,0) & 1) |
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
                            (ushort)(auVar46[0xf] >> 7) << 0xf,
                            (ushort)(SUB161(auVar13 >> 7,0) & 1) |
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
                            (ushort)(auVar13[0xf] >> 7) << 0xf));
  lVar2 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  return pbVar8 + (lVar2 - (long)param_1);
}

