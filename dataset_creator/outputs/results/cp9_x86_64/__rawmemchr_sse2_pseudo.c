
char * __rawmemchr_sse2(char *param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte bVar34;
  undefined1 auVar19 [16];
  byte bVar35;
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
  undefined1 auVar36 [16];
  byte bVar52;
  undefined1 auVar37 [16];
  
  if (((ulong)param_1 & 0x3f) < 0x31) {
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
    uVar2 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf;
    uVar4 = (uint)uVar2;
    if (uVar2 != 0) goto LAB_00717340;
    pcVar5 = (char *)((ulong)(param_1 + 0x10) & 0xfffffffffffffff0);
  }
  else {
    pcVar5 = (char *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar7[0] = -(*pcVar5 == param_2);
    auVar7[1] = -(pcVar5[1] == param_2);
    auVar7[2] = -(pcVar5[2] == param_2);
    auVar7[3] = -(pcVar5[3] == param_2);
    auVar7[4] = -(pcVar5[4] == param_2);
    auVar7[5] = -(pcVar5[5] == param_2);
    auVar7[6] = -(pcVar5[6] == param_2);
    auVar7[7] = -(pcVar5[7] == param_2);
    auVar7[8] = -(pcVar5[8] == param_2);
    auVar7[9] = -(pcVar5[9] == param_2);
    auVar7[10] = -(pcVar5[10] == param_2);
    auVar7[0xb] = -(pcVar5[0xb] == param_2);
    auVar7[0xc] = -(pcVar5[0xc] == param_2);
    auVar7[0xd] = -(pcVar5[0xd] == param_2);
    auVar7[0xe] = -(pcVar5[0xe] == param_2);
    auVar7[0xf] = -(pcVar5[0xf] == param_2);
    uVar4 = (int)(uint)(ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
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
                               (ushort)(auVar7[0xf] >> 7) << 0xf) >> (sbyte)((ulong)param_1 & 0xf);
    if (uVar4 != 0) {
      uVar1 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return pcVar5 + ((ulong)param_1 & 0xf) + (ulong)uVar1;
    }
    pcVar5 = pcVar5 + 0x10;
  }
  auVar8[0] = -(*pcVar5 == param_2);
  auVar8[1] = -(pcVar5[1] == param_2);
  auVar8[2] = -(pcVar5[2] == param_2);
  auVar8[3] = -(pcVar5[3] == param_2);
  auVar8[4] = -(pcVar5[4] == param_2);
  auVar8[5] = -(pcVar5[5] == param_2);
  auVar8[6] = -(pcVar5[6] == param_2);
  auVar8[7] = -(pcVar5[7] == param_2);
  auVar8[8] = -(pcVar5[8] == param_2);
  auVar8[9] = -(pcVar5[9] == param_2);
  auVar8[10] = -(pcVar5[10] == param_2);
  auVar8[0xb] = -(pcVar5[0xb] == param_2);
  auVar8[0xc] = -(pcVar5[0xc] == param_2);
  auVar8[0xd] = -(pcVar5[0xd] == param_2);
  auVar8[0xe] = -(pcVar5[0xe] == param_2);
  auVar8[0xf] = -(pcVar5[0xf] == param_2);
  uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf;
  uVar4 = (uint)uVar2;
  param_1 = pcVar5;
  if (uVar2 == 0) {
    auVar12[0] = -(pcVar5[0x10] == param_2);
    auVar12[1] = -(pcVar5[0x11] == param_2);
    auVar12[2] = -(pcVar5[0x12] == param_2);
    auVar12[3] = -(pcVar5[0x13] == param_2);
    auVar12[4] = -(pcVar5[0x14] == param_2);
    auVar12[5] = -(pcVar5[0x15] == param_2);
    auVar12[6] = -(pcVar5[0x16] == param_2);
    auVar12[7] = -(pcVar5[0x17] == param_2);
    auVar12[8] = -(pcVar5[0x18] == param_2);
    auVar12[9] = -(pcVar5[0x19] == param_2);
    auVar12[10] = -(pcVar5[0x1a] == param_2);
    auVar12[0xb] = -(pcVar5[0x1b] == param_2);
    auVar12[0xc] = -(pcVar5[0x1c] == param_2);
    auVar12[0xd] = -(pcVar5[0x1d] == param_2);
    auVar12[0xe] = -(pcVar5[0x1e] == param_2);
    auVar12[0xf] = -(pcVar5[0x1f] == param_2);
    uVar2 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf;
    uVar4 = (uint)uVar2;
    if (uVar2 != 0) {
LAB_00717350:
      uVar1 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      return param_1 + (ulong)uVar1 + 0x10;
    }
    auVar16[0] = -(pcVar5[0x20] == param_2);
    auVar16[1] = -(pcVar5[0x21] == param_2);
    auVar16[2] = -(pcVar5[0x22] == param_2);
    auVar16[3] = -(pcVar5[0x23] == param_2);
    auVar16[4] = -(pcVar5[0x24] == param_2);
    auVar16[5] = -(pcVar5[0x25] == param_2);
    auVar16[6] = -(pcVar5[0x26] == param_2);
    auVar16[7] = -(pcVar5[0x27] == param_2);
    auVar16[8] = -(pcVar5[0x28] == param_2);
    auVar16[9] = -(pcVar5[0x29] == param_2);
    auVar16[10] = -(pcVar5[0x2a] == param_2);
    auVar16[0xb] = -(pcVar5[0x2b] == param_2);
    auVar16[0xc] = -(pcVar5[0x2c] == param_2);
    auVar16[0xd] = -(pcVar5[0x2d] == param_2);
    auVar16[0xe] = -(pcVar5[0x2e] == param_2);
    auVar16[0xf] = -(pcVar5[0x2f] == param_2);
    uVar2 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    uVar4 = (uint)uVar2;
    if (uVar2 == 0) {
      auVar36[0] = -(pcVar5[0x30] == param_2);
      auVar36[1] = -(pcVar5[0x31] == param_2);
      auVar36[2] = -(pcVar5[0x32] == param_2);
      auVar36[3] = -(pcVar5[0x33] == param_2);
      auVar36[4] = -(pcVar5[0x34] == param_2);
      auVar36[5] = -(pcVar5[0x35] == param_2);
      auVar36[6] = -(pcVar5[0x36] == param_2);
      auVar36[7] = -(pcVar5[0x37] == param_2);
      auVar36[8] = -(pcVar5[0x38] == param_2);
      auVar36[9] = -(pcVar5[0x39] == param_2);
      auVar36[10] = -(pcVar5[0x3a] == param_2);
      auVar36[0xb] = -(pcVar5[0x3b] == param_2);
      auVar36[0xc] = -(pcVar5[0x3c] == param_2);
      auVar36[0xd] = -(pcVar5[0x3d] == param_2);
      auVar36[0xe] = -(pcVar5[0x3e] == param_2);
      auVar36[0xf] = -(pcVar5[0x3f] == param_2);
      param_1 = pcVar5 + 0x40;
      uVar2 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      if (uVar2 != 0) {
LAB_00717330:
        uVar4 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        return param_1 + ((ulong)uVar4 - 0x10);
      }
      pcVar3 = param_1;
      if (((ulong)param_1 & 0x3f) != 0) {
        auVar9[0] = -(*param_1 == param_2);
        auVar9[1] = -(pcVar5[0x41] == param_2);
        auVar9[2] = -(pcVar5[0x42] == param_2);
        auVar9[3] = -(pcVar5[0x43] == param_2);
        auVar9[4] = -(pcVar5[0x44] == param_2);
        auVar9[5] = -(pcVar5[0x45] == param_2);
        auVar9[6] = -(pcVar5[0x46] == param_2);
        auVar9[7] = -(pcVar5[0x47] == param_2);
        auVar9[8] = -(pcVar5[0x48] == param_2);
        auVar9[9] = -(pcVar5[0x49] == param_2);
        auVar9[10] = -(pcVar5[0x4a] == param_2);
        auVar9[0xb] = -(pcVar5[0x4b] == param_2);
        auVar9[0xc] = -(pcVar5[0x4c] == param_2);
        auVar9[0xd] = -(pcVar5[0x4d] == param_2);
        auVar9[0xe] = -(pcVar5[0x4e] == param_2);
        auVar9[0xf] = -(pcVar5[0x4f] == param_2);
        uVar2 = (ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00717340;
        auVar13[0] = -(pcVar5[0x50] == param_2);
        auVar13[1] = -(pcVar5[0x51] == param_2);
        auVar13[2] = -(pcVar5[0x52] == param_2);
        auVar13[3] = -(pcVar5[0x53] == param_2);
        auVar13[4] = -(pcVar5[0x54] == param_2);
        auVar13[5] = -(pcVar5[0x55] == param_2);
        auVar13[6] = -(pcVar5[0x56] == param_2);
        auVar13[7] = -(pcVar5[0x57] == param_2);
        auVar13[8] = -(pcVar5[0x58] == param_2);
        auVar13[9] = -(pcVar5[0x59] == param_2);
        auVar13[10] = -(pcVar5[0x5a] == param_2);
        auVar13[0xb] = -(pcVar5[0x5b] == param_2);
        auVar13[0xc] = -(pcVar5[0x5c] == param_2);
        auVar13[0xd] = -(pcVar5[0x5d] == param_2);
        auVar13[0xe] = -(pcVar5[0x5e] == param_2);
        auVar13[0xf] = -(pcVar5[0x5f] == param_2);
        uVar2 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00717350;
        auVar17[0] = -(pcVar5[0x60] == param_2);
        auVar17[1] = -(pcVar5[0x61] == param_2);
        auVar17[2] = -(pcVar5[0x62] == param_2);
        auVar17[3] = -(pcVar5[99] == param_2);
        auVar17[4] = -(pcVar5[100] == param_2);
        auVar17[5] = -(pcVar5[0x65] == param_2);
        auVar17[6] = -(pcVar5[0x66] == param_2);
        auVar17[7] = -(pcVar5[0x67] == param_2);
        auVar17[8] = -(pcVar5[0x68] == param_2);
        auVar17[9] = -(pcVar5[0x69] == param_2);
        auVar17[10] = -(pcVar5[0x6a] == param_2);
        auVar17[0xb] = -(pcVar5[0x6b] == param_2);
        auVar17[0xc] = -(pcVar5[0x6c] == param_2);
        auVar17[0xd] = -(pcVar5[0x6d] == param_2);
        auVar17[0xe] = -(pcVar5[0x6e] == param_2);
        auVar17[0xf] = -(pcVar5[0x6f] == param_2);
        uVar2 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00717360;
        auVar18[0] = -(pcVar5[0x70] == param_2);
        auVar18[1] = -(pcVar5[0x71] == param_2);
        auVar18[2] = -(pcVar5[0x72] == param_2);
        auVar18[3] = -(pcVar5[0x73] == param_2);
        auVar18[4] = -(pcVar5[0x74] == param_2);
        auVar18[5] = -(pcVar5[0x75] == param_2);
        auVar18[6] = -(pcVar5[0x76] == param_2);
        auVar18[7] = -(pcVar5[0x77] == param_2);
        auVar18[8] = -(pcVar5[0x78] == param_2);
        auVar18[9] = -(pcVar5[0x79] == param_2);
        auVar18[10] = -(pcVar5[0x7a] == param_2);
        auVar18[0xb] = -(pcVar5[0x7b] == param_2);
        auVar18[0xc] = -(pcVar5[0x7c] == param_2);
        auVar18[0xd] = -(pcVar5[0x7d] == param_2);
        auVar18[0xe] = -(pcVar5[0x7e] == param_2);
        auVar18[0xf] = -(pcVar5[0x7f] == param_2);
        uVar2 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
        param_1 = pcVar5 + 0x80;
        if (uVar2 != 0) goto LAB_00717330;
        pcVar3 = (char *)((ulong)param_1 & 0xffffffffffffffc0);
      }
      do {
        param_1 = pcVar3;
        auVar10[0] = -(*param_1 == param_2);
        auVar10[1] = -(param_1[1] == param_2);
        auVar10[2] = -(param_1[2] == param_2);
        auVar10[3] = -(param_1[3] == param_2);
        auVar10[4] = -(param_1[4] == param_2);
        auVar10[5] = -(param_1[5] == param_2);
        auVar10[6] = -(param_1[6] == param_2);
        auVar10[7] = -(param_1[7] == param_2);
        auVar10[8] = -(param_1[8] == param_2);
        auVar10[9] = -(param_1[9] == param_2);
        auVar10[10] = -(param_1[10] == param_2);
        auVar10[0xb] = -(param_1[0xb] == param_2);
        auVar10[0xc] = -(param_1[0xc] == param_2);
        auVar10[0xd] = -(param_1[0xd] == param_2);
        auVar10[0xe] = -(param_1[0xe] == param_2);
        auVar10[0xf] = -(param_1[0xf] == param_2);
        auVar14[0] = -(param_1[0x10] == param_2);
        auVar14[1] = -(param_1[0x11] == param_2);
        auVar14[2] = -(param_1[0x12] == param_2);
        auVar14[3] = -(param_1[0x13] == param_2);
        auVar14[4] = -(param_1[0x14] == param_2);
        auVar14[5] = -(param_1[0x15] == param_2);
        auVar14[6] = -(param_1[0x16] == param_2);
        auVar14[7] = -(param_1[0x17] == param_2);
        auVar14[8] = -(param_1[0x18] == param_2);
        auVar14[9] = -(param_1[0x19] == param_2);
        auVar14[10] = -(param_1[0x1a] == param_2);
        auVar14[0xb] = -(param_1[0x1b] == param_2);
        auVar14[0xc] = -(param_1[0x1c] == param_2);
        auVar14[0xd] = -(param_1[0x1d] == param_2);
        auVar14[0xe] = -(param_1[0x1e] == param_2);
        auVar14[0xf] = -(param_1[0x1f] == param_2);
        bVar15 = -(param_1[0x20] == param_2);
        bVar20 = -(param_1[0x21] == param_2);
        bVar21 = -(param_1[0x22] == param_2);
        bVar22 = -(param_1[0x23] == param_2);
        bVar23 = -(param_1[0x24] == param_2);
        bVar24 = -(param_1[0x25] == param_2);
        bVar25 = -(param_1[0x26] == param_2);
        bVar26 = -(param_1[0x27] == param_2);
        bVar27 = -(param_1[0x28] == param_2);
        bVar28 = -(param_1[0x29] == param_2);
        bVar29 = -(param_1[0x2a] == param_2);
        bVar30 = -(param_1[0x2b] == param_2);
        bVar31 = -(param_1[0x2c] == param_2);
        bVar32 = -(param_1[0x2d] == param_2);
        bVar33 = -(param_1[0x2e] == param_2);
        bVar34 = -(param_1[0x2f] == param_2);
        bVar35 = -(param_1[0x30] == param_2);
        bVar38 = -(param_1[0x31] == param_2);
        bVar39 = -(param_1[0x32] == param_2);
        bVar40 = -(param_1[0x33] == param_2);
        bVar41 = -(param_1[0x34] == param_2);
        bVar42 = -(param_1[0x35] == param_2);
        bVar43 = -(param_1[0x36] == param_2);
        bVar44 = -(param_1[0x37] == param_2);
        bVar45 = -(param_1[0x38] == param_2);
        bVar46 = -(param_1[0x39] == param_2);
        bVar47 = -(param_1[0x3a] == param_2);
        bVar48 = -(param_1[0x3b] == param_2);
        bVar49 = -(param_1[0x3c] == param_2);
        bVar50 = -(param_1[0x3d] == param_2);
        bVar51 = -(param_1[0x3e] == param_2);
        bVar52 = -(param_1[0x3f] == param_2);
        bVar15 = (bVar15 < auVar10[0]) * auVar10[0] | (bVar15 >= auVar10[0]) * bVar15;
        bVar20 = (bVar20 < auVar10[1]) * auVar10[1] | (bVar20 >= auVar10[1]) * bVar20;
        bVar21 = (bVar21 < auVar10[2]) * auVar10[2] | (bVar21 >= auVar10[2]) * bVar21;
        bVar22 = (bVar22 < auVar10[3]) * auVar10[3] | (bVar22 >= auVar10[3]) * bVar22;
        bVar23 = (bVar23 < auVar10[4]) * auVar10[4] | (bVar23 >= auVar10[4]) * bVar23;
        bVar24 = (bVar24 < auVar10[5]) * auVar10[5] | (bVar24 >= auVar10[5]) * bVar24;
        bVar25 = (bVar25 < auVar10[6]) * auVar10[6] | (bVar25 >= auVar10[6]) * bVar25;
        bVar26 = (bVar26 < auVar10[7]) * auVar10[7] | (bVar26 >= auVar10[7]) * bVar26;
        bVar27 = (bVar27 < auVar10[8]) * auVar10[8] | (bVar27 >= auVar10[8]) * bVar27;
        bVar28 = (bVar28 < auVar10[9]) * auVar10[9] | (bVar28 >= auVar10[9]) * bVar28;
        bVar29 = (bVar29 < auVar10[10]) * auVar10[10] | (bVar29 >= auVar10[10]) * bVar29;
        bVar30 = (bVar30 < auVar10[0xb]) * auVar10[0xb] | (bVar30 >= auVar10[0xb]) * bVar30;
        bVar31 = (bVar31 < auVar10[0xc]) * auVar10[0xc] | (bVar31 >= auVar10[0xc]) * bVar31;
        bVar32 = (bVar32 < auVar10[0xd]) * auVar10[0xd] | (bVar32 >= auVar10[0xd]) * bVar32;
        bVar33 = (bVar33 < auVar10[0xe]) * auVar10[0xe] | (bVar33 >= auVar10[0xe]) * bVar33;
        bVar34 = (bVar34 < auVar10[0xf]) * auVar10[0xf] | (bVar34 >= auVar10[0xf]) * bVar34;
        bVar35 = (bVar35 < auVar14[0]) * auVar14[0] | (bVar35 >= auVar14[0]) * bVar35;
        bVar38 = (bVar38 < auVar14[1]) * auVar14[1] | (bVar38 >= auVar14[1]) * bVar38;
        bVar39 = (bVar39 < auVar14[2]) * auVar14[2] | (bVar39 >= auVar14[2]) * bVar39;
        bVar40 = (bVar40 < auVar14[3]) * auVar14[3] | (bVar40 >= auVar14[3]) * bVar40;
        bVar41 = (bVar41 < auVar14[4]) * auVar14[4] | (bVar41 >= auVar14[4]) * bVar41;
        bVar42 = (bVar42 < auVar14[5]) * auVar14[5] | (bVar42 >= auVar14[5]) * bVar42;
        bVar43 = (bVar43 < auVar14[6]) * auVar14[6] | (bVar43 >= auVar14[6]) * bVar43;
        bVar44 = (bVar44 < auVar14[7]) * auVar14[7] | (bVar44 >= auVar14[7]) * bVar44;
        bVar45 = (bVar45 < auVar14[8]) * auVar14[8] | (bVar45 >= auVar14[8]) * bVar45;
        bVar46 = (bVar46 < auVar14[9]) * auVar14[9] | (bVar46 >= auVar14[9]) * bVar46;
        bVar47 = (bVar47 < auVar14[10]) * auVar14[10] | (bVar47 >= auVar14[10]) * bVar47;
        bVar48 = (bVar48 < auVar14[0xb]) * auVar14[0xb] | (bVar48 >= auVar14[0xb]) * bVar48;
        bVar49 = (bVar49 < auVar14[0xc]) * auVar14[0xc] | (bVar49 >= auVar14[0xc]) * bVar49;
        bVar50 = (bVar50 < auVar14[0xd]) * auVar14[0xd] | (bVar50 >= auVar14[0xd]) * bVar50;
        bVar51 = (bVar51 < auVar14[0xe]) * auVar14[0xe] | (bVar51 >= auVar14[0xe]) * bVar51;
        bVar52 = (bVar52 < auVar14[0xf]) * auVar14[0xf] | (bVar52 >= auVar14[0xf]) * bVar52;
        auVar37[0] = (bVar35 < bVar15) * bVar15 | (bVar35 >= bVar15) * bVar35;
        auVar37[1] = (bVar38 < bVar20) * bVar20 | (bVar38 >= bVar20) * bVar38;
        auVar37[2] = (bVar39 < bVar21) * bVar21 | (bVar39 >= bVar21) * bVar39;
        auVar37[3] = (bVar40 < bVar22) * bVar22 | (bVar40 >= bVar22) * bVar40;
        auVar37[4] = (bVar41 < bVar23) * bVar23 | (bVar41 >= bVar23) * bVar41;
        auVar37[5] = (bVar42 < bVar24) * bVar24 | (bVar42 >= bVar24) * bVar42;
        auVar37[6] = (bVar43 < bVar25) * bVar25 | (bVar43 >= bVar25) * bVar43;
        auVar37[7] = (bVar44 < bVar26) * bVar26 | (bVar44 >= bVar26) * bVar44;
        auVar37[8] = (bVar45 < bVar27) * bVar27 | (bVar45 >= bVar27) * bVar45;
        auVar37[9] = (bVar46 < bVar28) * bVar28 | (bVar46 >= bVar28) * bVar46;
        auVar37[10] = (bVar47 < bVar29) * bVar29 | (bVar47 >= bVar29) * bVar47;
        auVar37[0xb] = (bVar48 < bVar30) * bVar30 | (bVar48 >= bVar30) * bVar48;
        auVar37[0xc] = (bVar49 < bVar31) * bVar31 | (bVar49 >= bVar31) * bVar49;
        auVar37[0xd] = (bVar50 < bVar32) * bVar32 | (bVar50 >= bVar32) * bVar50;
        auVar37[0xe] = (bVar51 < bVar33) * bVar33 | (bVar51 >= bVar33) * bVar51;
        auVar37[0xf] = (bVar52 < bVar34) * bVar34 | (bVar52 >= bVar34) * bVar52;
        pcVar3 = param_1 + 0x40;
      } while ((((((((((((((((auVar37 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                            (auVar37 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar37 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar37 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar37 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar37 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar37 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar37 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar37 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar37 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar37 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar37 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar37 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar37 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar37 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               -1 < (char)auVar37[0xf]);
      uVar2 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 != 0) goto LAB_00717340;
      uVar2 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 != 0) goto LAB_00717350;
      auVar19[0] = -(param_1[0x20] == param_2);
      auVar19[1] = -(param_1[0x21] == param_2);
      auVar19[2] = -(param_1[0x22] == param_2);
      auVar19[3] = -(param_1[0x23] == param_2);
      auVar19[4] = -(param_1[0x24] == param_2);
      auVar19[5] = -(param_1[0x25] == param_2);
      auVar19[6] = -(param_1[0x26] == param_2);
      auVar19[7] = -(param_1[0x27] == param_2);
      auVar19[8] = -(param_1[0x28] == param_2);
      auVar19[9] = -(param_1[0x29] == param_2);
      auVar19[10] = -(param_1[0x2a] == param_2);
      auVar19[0xb] = -(param_1[0x2b] == param_2);
      auVar19[0xc] = -(param_1[0x2c] == param_2);
      auVar19[0xd] = -(param_1[0x2d] == param_2);
      auVar19[0xe] = -(param_1[0x2e] == param_2);
      auVar19[0xf] = -(param_1[0x2f] == param_2);
      auVar11[0] = -(param_2 == param_1[0x30]);
      auVar11[1] = -(param_2 == param_1[0x31]);
      auVar11[2] = -(param_2 == param_1[0x32]);
      auVar11[3] = -(param_2 == param_1[0x33]);
      auVar11[4] = -(param_2 == param_1[0x34]);
      auVar11[5] = -(param_2 == param_1[0x35]);
      auVar11[6] = -(param_2 == param_1[0x36]);
      auVar11[7] = -(param_2 == param_1[0x37]);
      auVar11[8] = -(param_2 == param_1[0x38]);
      auVar11[9] = -(param_2 == param_1[0x39]);
      auVar11[10] = -(param_2 == param_1[0x3a]);
      auVar11[0xb] = -(param_2 == param_1[0x3b]);
      auVar11[0xc] = -(param_2 == param_1[0x3c]);
      auVar11[0xd] = -(param_2 == param_1[0x3d]);
      auVar11[0xe] = -(param_2 == param_1[0x3e]);
      auVar11[0xf] = -(param_2 == param_1[0x3f]);
      uVar2 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 == 0) {
        uVar2 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
                (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf;
        uVar4 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        return param_1 + (ulong)uVar4 + 0x30;
      }
    }
LAB_00717360:
    uVar1 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    return param_1 + (ulong)uVar1 + 0x20;
  }
LAB_00717340:
  uVar1 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return param_1 + uVar1;
}

