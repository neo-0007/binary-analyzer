
char * FUN_00720840(char *param_1,char param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte bVar25;
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar45;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined1 auVar47 [16];
  byte bVar63;
  undefined1 auVar48 [16];
  int iVar6;
  
  if (param_3 == 0) {
    return (char *)0x0;
  }
  uVar4 = (uint)param_1;
  if ((uVar4 & 0x3f) < 0x31) {
    auVar11[0] = -(*param_1 == param_2);
    auVar11[1] = -(param_1[1] == param_2);
    auVar11[2] = -(param_1[2] == param_2);
    auVar11[3] = -(param_1[3] == param_2);
    auVar11[4] = -(param_1[4] == param_2);
    auVar11[5] = -(param_1[5] == param_2);
    auVar11[6] = -(param_1[6] == param_2);
    auVar11[7] = -(param_1[7] == param_2);
    auVar11[8] = -(param_1[8] == param_2);
    auVar11[9] = -(param_1[9] == param_2);
    auVar11[10] = -(param_1[10] == param_2);
    auVar11[0xb] = -(param_1[0xb] == param_2);
    auVar11[0xc] = -(param_1[0xc] == param_2);
    auVar11[0xd] = -(param_1[0xd] == param_2);
    auVar11[0xe] = -(param_1[0xe] == param_2);
    auVar11[0xf] = -(param_1[0xf] == param_2);
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
    if (uVar2 != 0) goto LAB_00720b20;
    if (param_3 < 0x10 || param_3 - 0x10 == 0) {
      return (char *)0x0;
    }
    param_1 = (char *)((ulong)(param_1 + 0x10) & 0xfffffffffffffff0);
    uVar7 = (param_3 - 0x10) + (ulong)(uVar4 & 0xf);
    uVar8 = uVar7 - 0x40;
    pcVar9 = param_1;
    if (0x3f < uVar7 && uVar8 != 0) goto LAB_007208f0;
  }
  else {
    uVar4 = uVar4 & 0xf;
    param_1 = (char *)((ulong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*param_1 == param_2);
    auVar12[1] = -(param_1[1] == param_2);
    auVar12[2] = -(param_1[2] == param_2);
    auVar12[3] = -(param_1[3] == param_2);
    auVar12[4] = -(param_1[4] == param_2);
    auVar12[5] = -(param_1[5] == param_2);
    auVar12[6] = -(param_1[6] == param_2);
    auVar12[7] = -(param_1[7] == param_2);
    auVar12[8] = -(param_1[8] == param_2);
    auVar12[9] = -(param_1[9] == param_2);
    auVar12[10] = -(param_1[10] == param_2);
    auVar12[0xb] = -(param_1[0xb] == param_2);
    auVar12[0xc] = -(param_1[0xc] == param_2);
    auVar12[0xd] = -(param_1[0xd] == param_2);
    auVar12[0xe] = -(param_1[0xe] == param_2);
    auVar12[0xf] = -(param_1[0xf] == param_2);
    uVar5 = (int)(uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
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
                               (ushort)(auVar12[0xf] >> 7) << 0xf) >> (sbyte)uVar4;
    if (uVar5 != 0) {
      uVar1 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (param_3 <= uVar1) {
        return (char *)0x0;
      }
      return param_1 + (ulong)uVar4 + (ulong)uVar1;
    }
    uVar8 = 0x10 - (ulong)uVar4;
    uVar7 = param_3 - uVar8;
    if (param_3 < uVar8 || uVar7 == 0) {
      return (char *)0x0;
    }
    param_1 = param_1 + 0x10;
    uVar8 = uVar7 - 0x40;
    pcVar9 = param_1;
    if (0x3f < uVar7 && uVar8 != 0) {
LAB_007208f0:
      auVar13[0] = -(*pcVar9 == param_2);
      auVar13[1] = -(pcVar9[1] == param_2);
      auVar13[2] = -(pcVar9[2] == param_2);
      auVar13[3] = -(pcVar9[3] == param_2);
      auVar13[4] = -(pcVar9[4] == param_2);
      auVar13[5] = -(pcVar9[5] == param_2);
      auVar13[6] = -(pcVar9[6] == param_2);
      auVar13[7] = -(pcVar9[7] == param_2);
      auVar13[8] = -(pcVar9[8] == param_2);
      auVar13[9] = -(pcVar9[9] == param_2);
      auVar13[10] = -(pcVar9[10] == param_2);
      auVar13[0xb] = -(pcVar9[0xb] == param_2);
      auVar13[0xc] = -(pcVar9[0xc] == param_2);
      auVar13[0xd] = -(pcVar9[0xd] == param_2);
      auVar13[0xe] = -(pcVar9[0xe] == param_2);
      auVar13[0xf] = -(pcVar9[0xf] == param_2);
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
      param_1 = pcVar9;
      if (uVar2 != 0) goto LAB_00720af0;
      auVar21[0] = -(pcVar9[0x10] == param_2);
      auVar21[1] = -(pcVar9[0x11] == param_2);
      auVar21[2] = -(pcVar9[0x12] == param_2);
      auVar21[3] = -(pcVar9[0x13] == param_2);
      auVar21[4] = -(pcVar9[0x14] == param_2);
      auVar21[5] = -(pcVar9[0x15] == param_2);
      auVar21[6] = -(pcVar9[0x16] == param_2);
      auVar21[7] = -(pcVar9[0x17] == param_2);
      auVar21[8] = -(pcVar9[0x18] == param_2);
      auVar21[9] = -(pcVar9[0x19] == param_2);
      auVar21[10] = -(pcVar9[0x1a] == param_2);
      auVar21[0xb] = -(pcVar9[0x1b] == param_2);
      auVar21[0xc] = -(pcVar9[0x1c] == param_2);
      auVar21[0xd] = -(pcVar9[0x1d] == param_2);
      auVar21[0xe] = -(pcVar9[0x1e] == param_2);
      auVar21[0xf] = -(pcVar9[0x1f] == param_2);
      uVar2 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 != 0) goto LAB_00720b00;
      auVar26[0] = -(pcVar9[0x20] == param_2);
      auVar26[1] = -(pcVar9[0x21] == param_2);
      auVar26[2] = -(pcVar9[0x22] == param_2);
      auVar26[3] = -(pcVar9[0x23] == param_2);
      auVar26[4] = -(pcVar9[0x24] == param_2);
      auVar26[5] = -(pcVar9[0x25] == param_2);
      auVar26[6] = -(pcVar9[0x26] == param_2);
      auVar26[7] = -(pcVar9[0x27] == param_2);
      auVar26[8] = -(pcVar9[0x28] == param_2);
      auVar26[9] = -(pcVar9[0x29] == param_2);
      auVar26[10] = -(pcVar9[0x2a] == param_2);
      auVar26[0xb] = -(pcVar9[0x2b] == param_2);
      auVar26[0xc] = -(pcVar9[0x2c] == param_2);
      auVar26[0xd] = -(pcVar9[0x2d] == param_2);
      auVar26[0xe] = -(pcVar9[0x2e] == param_2);
      auVar26[0xf] = -(pcVar9[0x2f] == param_2);
      uVar2 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 != 0) goto LAB_00720b10;
      auVar47[0] = -(pcVar9[0x30] == param_2);
      auVar47[1] = -(pcVar9[0x31] == param_2);
      auVar47[2] = -(pcVar9[0x32] == param_2);
      auVar47[3] = -(pcVar9[0x33] == param_2);
      auVar47[4] = -(pcVar9[0x34] == param_2);
      auVar47[5] = -(pcVar9[0x35] == param_2);
      auVar47[6] = -(pcVar9[0x36] == param_2);
      auVar47[7] = -(pcVar9[0x37] == param_2);
      auVar47[8] = -(pcVar9[0x38] == param_2);
      auVar47[9] = -(pcVar9[0x39] == param_2);
      auVar47[10] = -(pcVar9[0x3a] == param_2);
      auVar47[0xb] = -(pcVar9[0x3b] == param_2);
      auVar47[0xc] = -(pcVar9[0x3c] == param_2);
      auVar47[0xd] = -(pcVar9[0x3d] == param_2);
      auVar47[0xe] = -(pcVar9[0x3e] == param_2);
      auVar47[0xf] = -(pcVar9[0x3f] == param_2);
      param_1 = pcVar9 + 0x40;
      uVar2 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
      if (uVar2 != 0) {
LAB_00720ae0:
        uVar4 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        return param_1 + ((ulong)uVar4 - 0x10);
      }
      pcVar3 = param_1;
      if (((ulong)param_1 & 0x3f) != 0) {
        bVar10 = uVar8 < 0x40;
        uVar8 = uVar8 - 0x40;
        if (bVar10 || uVar8 == 0) goto LAB_00720a50;
        auVar14[0] = -(*param_1 == param_2);
        auVar14[1] = -(pcVar9[0x41] == param_2);
        auVar14[2] = -(pcVar9[0x42] == param_2);
        auVar14[3] = -(pcVar9[0x43] == param_2);
        auVar14[4] = -(pcVar9[0x44] == param_2);
        auVar14[5] = -(pcVar9[0x45] == param_2);
        auVar14[6] = -(pcVar9[0x46] == param_2);
        auVar14[7] = -(pcVar9[0x47] == param_2);
        auVar14[8] = -(pcVar9[0x48] == param_2);
        auVar14[9] = -(pcVar9[0x49] == param_2);
        auVar14[10] = -(pcVar9[0x4a] == param_2);
        auVar14[0xb] = -(pcVar9[0x4b] == param_2);
        auVar14[0xc] = -(pcVar9[0x4c] == param_2);
        auVar14[0xd] = -(pcVar9[0x4d] == param_2);
        auVar14[0xe] = -(pcVar9[0x4e] == param_2);
        auVar14[0xf] = -(pcVar9[0x4f] == param_2);
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
        if (uVar2 != 0) goto LAB_00720af0;
        auVar22[0] = -(pcVar9[0x50] == param_2);
        auVar22[1] = -(pcVar9[0x51] == param_2);
        auVar22[2] = -(pcVar9[0x52] == param_2);
        auVar22[3] = -(pcVar9[0x53] == param_2);
        auVar22[4] = -(pcVar9[0x54] == param_2);
        auVar22[5] = -(pcVar9[0x55] == param_2);
        auVar22[6] = -(pcVar9[0x56] == param_2);
        auVar22[7] = -(pcVar9[0x57] == param_2);
        auVar22[8] = -(pcVar9[0x58] == param_2);
        auVar22[9] = -(pcVar9[0x59] == param_2);
        auVar22[10] = -(pcVar9[0x5a] == param_2);
        auVar22[0xb] = -(pcVar9[0x5b] == param_2);
        auVar22[0xc] = -(pcVar9[0x5c] == param_2);
        auVar22[0xd] = -(pcVar9[0x5d] == param_2);
        auVar22[0xe] = -(pcVar9[0x5e] == param_2);
        auVar22[0xf] = -(pcVar9[0x5f] == param_2);
        uVar2 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00720b00;
        auVar27[0] = -(pcVar9[0x60] == param_2);
        auVar27[1] = -(pcVar9[0x61] == param_2);
        auVar27[2] = -(pcVar9[0x62] == param_2);
        auVar27[3] = -(pcVar9[99] == param_2);
        auVar27[4] = -(pcVar9[100] == param_2);
        auVar27[5] = -(pcVar9[0x65] == param_2);
        auVar27[6] = -(pcVar9[0x66] == param_2);
        auVar27[7] = -(pcVar9[0x67] == param_2);
        auVar27[8] = -(pcVar9[0x68] == param_2);
        auVar27[9] = -(pcVar9[0x69] == param_2);
        auVar27[10] = -(pcVar9[0x6a] == param_2);
        auVar27[0xb] = -(pcVar9[0x6b] == param_2);
        auVar27[0xc] = -(pcVar9[0x6c] == param_2);
        auVar27[0xd] = -(pcVar9[0x6d] == param_2);
        auVar27[0xe] = -(pcVar9[0x6e] == param_2);
        auVar27[0xf] = -(pcVar9[0x6f] == param_2);
        uVar2 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 != 0) goto LAB_00720b10;
        auVar28[0] = -(pcVar9[0x70] == param_2);
        auVar28[1] = -(pcVar9[0x71] == param_2);
        auVar28[2] = -(pcVar9[0x72] == param_2);
        auVar28[3] = -(pcVar9[0x73] == param_2);
        auVar28[4] = -(pcVar9[0x74] == param_2);
        auVar28[5] = -(pcVar9[0x75] == param_2);
        auVar28[6] = -(pcVar9[0x76] == param_2);
        auVar28[7] = -(pcVar9[0x77] == param_2);
        auVar28[8] = -(pcVar9[0x78] == param_2);
        auVar28[9] = -(pcVar9[0x79] == param_2);
        auVar28[10] = -(pcVar9[0x7a] == param_2);
        auVar28[0xb] = -(pcVar9[0x7b] == param_2);
        auVar28[0xc] = -(pcVar9[0x7c] == param_2);
        auVar28[0xd] = -(pcVar9[0x7d] == param_2);
        auVar28[0xe] = -(pcVar9[0x7e] == param_2);
        auVar28[0xf] = -(pcVar9[0x7f] == param_2);
        uVar2 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
        param_1 = pcVar9 + 0x80;
        if (uVar2 != 0) goto LAB_00720ae0;
        uVar8 = uVar8 + ((uint)param_1 & 0x3f);
        pcVar3 = (char *)((ulong)param_1 & 0xffffffffffffffc0);
      }
      do {
        param_1 = pcVar3;
        bVar10 = uVar8 < 0x40;
        uVar8 = uVar8 - 0x40;
        if (bVar10 || uVar8 == 0) goto LAB_00720a50;
        auVar15[0] = -(*param_1 == param_2);
        auVar15[1] = -(param_1[1] == param_2);
        auVar15[2] = -(param_1[2] == param_2);
        auVar15[3] = -(param_1[3] == param_2);
        auVar15[4] = -(param_1[4] == param_2);
        auVar15[5] = -(param_1[5] == param_2);
        auVar15[6] = -(param_1[6] == param_2);
        auVar15[7] = -(param_1[7] == param_2);
        auVar15[8] = -(param_1[8] == param_2);
        auVar15[9] = -(param_1[9] == param_2);
        auVar15[10] = -(param_1[10] == param_2);
        auVar15[0xb] = -(param_1[0xb] == param_2);
        auVar15[0xc] = -(param_1[0xc] == param_2);
        auVar15[0xd] = -(param_1[0xd] == param_2);
        auVar15[0xe] = -(param_1[0xe] == param_2);
        auVar15[0xf] = -(param_1[0xf] == param_2);
        auVar23[0] = -(param_1[0x10] == param_2);
        auVar23[1] = -(param_1[0x11] == param_2);
        auVar23[2] = -(param_1[0x12] == param_2);
        auVar23[3] = -(param_1[0x13] == param_2);
        auVar23[4] = -(param_1[0x14] == param_2);
        auVar23[5] = -(param_1[0x15] == param_2);
        auVar23[6] = -(param_1[0x16] == param_2);
        auVar23[7] = -(param_1[0x17] == param_2);
        auVar23[8] = -(param_1[0x18] == param_2);
        auVar23[9] = -(param_1[0x19] == param_2);
        auVar23[10] = -(param_1[0x1a] == param_2);
        auVar23[0xb] = -(param_1[0x1b] == param_2);
        auVar23[0xc] = -(param_1[0x1c] == param_2);
        auVar23[0xd] = -(param_1[0x1d] == param_2);
        auVar23[0xe] = -(param_1[0x1e] == param_2);
        auVar23[0xf] = -(param_1[0x1f] == param_2);
        bVar25 = -(param_1[0x20] == param_2);
        bVar31 = -(param_1[0x21] == param_2);
        bVar32 = -(param_1[0x22] == param_2);
        bVar33 = -(param_1[0x23] == param_2);
        bVar34 = -(param_1[0x24] == param_2);
        bVar35 = -(param_1[0x25] == param_2);
        bVar36 = -(param_1[0x26] == param_2);
        bVar37 = -(param_1[0x27] == param_2);
        bVar38 = -(param_1[0x28] == param_2);
        bVar39 = -(param_1[0x29] == param_2);
        bVar40 = -(param_1[0x2a] == param_2);
        bVar41 = -(param_1[0x2b] == param_2);
        bVar42 = -(param_1[0x2c] == param_2);
        bVar43 = -(param_1[0x2d] == param_2);
        bVar44 = -(param_1[0x2e] == param_2);
        bVar45 = -(param_1[0x2f] == param_2);
        bVar46 = -(param_1[0x30] == param_2);
        bVar49 = -(param_1[0x31] == param_2);
        bVar50 = -(param_1[0x32] == param_2);
        bVar51 = -(param_1[0x33] == param_2);
        bVar52 = -(param_1[0x34] == param_2);
        bVar53 = -(param_1[0x35] == param_2);
        bVar54 = -(param_1[0x36] == param_2);
        bVar55 = -(param_1[0x37] == param_2);
        bVar56 = -(param_1[0x38] == param_2);
        bVar57 = -(param_1[0x39] == param_2);
        bVar58 = -(param_1[0x3a] == param_2);
        bVar59 = -(param_1[0x3b] == param_2);
        bVar60 = -(param_1[0x3c] == param_2);
        bVar61 = -(param_1[0x3d] == param_2);
        bVar62 = -(param_1[0x3e] == param_2);
        bVar63 = -(param_1[0x3f] == param_2);
        bVar25 = (bVar25 < auVar15[0]) * auVar15[0] | (bVar25 >= auVar15[0]) * bVar25;
        bVar31 = (bVar31 < auVar15[1]) * auVar15[1] | (bVar31 >= auVar15[1]) * bVar31;
        bVar32 = (bVar32 < auVar15[2]) * auVar15[2] | (bVar32 >= auVar15[2]) * bVar32;
        bVar33 = (bVar33 < auVar15[3]) * auVar15[3] | (bVar33 >= auVar15[3]) * bVar33;
        bVar34 = (bVar34 < auVar15[4]) * auVar15[4] | (bVar34 >= auVar15[4]) * bVar34;
        bVar35 = (bVar35 < auVar15[5]) * auVar15[5] | (bVar35 >= auVar15[5]) * bVar35;
        bVar36 = (bVar36 < auVar15[6]) * auVar15[6] | (bVar36 >= auVar15[6]) * bVar36;
        bVar37 = (bVar37 < auVar15[7]) * auVar15[7] | (bVar37 >= auVar15[7]) * bVar37;
        bVar38 = (bVar38 < auVar15[8]) * auVar15[8] | (bVar38 >= auVar15[8]) * bVar38;
        bVar39 = (bVar39 < auVar15[9]) * auVar15[9] | (bVar39 >= auVar15[9]) * bVar39;
        bVar40 = (bVar40 < auVar15[10]) * auVar15[10] | (bVar40 >= auVar15[10]) * bVar40;
        bVar41 = (bVar41 < auVar15[0xb]) * auVar15[0xb] | (bVar41 >= auVar15[0xb]) * bVar41;
        bVar42 = (bVar42 < auVar15[0xc]) * auVar15[0xc] | (bVar42 >= auVar15[0xc]) * bVar42;
        bVar43 = (bVar43 < auVar15[0xd]) * auVar15[0xd] | (bVar43 >= auVar15[0xd]) * bVar43;
        bVar44 = (bVar44 < auVar15[0xe]) * auVar15[0xe] | (bVar44 >= auVar15[0xe]) * bVar44;
        bVar45 = (bVar45 < auVar15[0xf]) * auVar15[0xf] | (bVar45 >= auVar15[0xf]) * bVar45;
        bVar46 = (bVar46 < auVar23[0]) * auVar23[0] | (bVar46 >= auVar23[0]) * bVar46;
        bVar49 = (bVar49 < auVar23[1]) * auVar23[1] | (bVar49 >= auVar23[1]) * bVar49;
        bVar50 = (bVar50 < auVar23[2]) * auVar23[2] | (bVar50 >= auVar23[2]) * bVar50;
        bVar51 = (bVar51 < auVar23[3]) * auVar23[3] | (bVar51 >= auVar23[3]) * bVar51;
        bVar52 = (bVar52 < auVar23[4]) * auVar23[4] | (bVar52 >= auVar23[4]) * bVar52;
        bVar53 = (bVar53 < auVar23[5]) * auVar23[5] | (bVar53 >= auVar23[5]) * bVar53;
        bVar54 = (bVar54 < auVar23[6]) * auVar23[6] | (bVar54 >= auVar23[6]) * bVar54;
        bVar55 = (bVar55 < auVar23[7]) * auVar23[7] | (bVar55 >= auVar23[7]) * bVar55;
        bVar56 = (bVar56 < auVar23[8]) * auVar23[8] | (bVar56 >= auVar23[8]) * bVar56;
        bVar57 = (bVar57 < auVar23[9]) * auVar23[9] | (bVar57 >= auVar23[9]) * bVar57;
        bVar58 = (bVar58 < auVar23[10]) * auVar23[10] | (bVar58 >= auVar23[10]) * bVar58;
        bVar59 = (bVar59 < auVar23[0xb]) * auVar23[0xb] | (bVar59 >= auVar23[0xb]) * bVar59;
        bVar60 = (bVar60 < auVar23[0xc]) * auVar23[0xc] | (bVar60 >= auVar23[0xc]) * bVar60;
        bVar61 = (bVar61 < auVar23[0xd]) * auVar23[0xd] | (bVar61 >= auVar23[0xd]) * bVar61;
        bVar62 = (bVar62 < auVar23[0xe]) * auVar23[0xe] | (bVar62 >= auVar23[0xe]) * bVar62;
        bVar63 = (bVar63 < auVar23[0xf]) * auVar23[0xf] | (bVar63 >= auVar23[0xf]) * bVar63;
        auVar48[0] = (bVar46 < bVar25) * bVar25 | (bVar46 >= bVar25) * bVar46;
        auVar48[1] = (bVar49 < bVar31) * bVar31 | (bVar49 >= bVar31) * bVar49;
        auVar48[2] = (bVar50 < bVar32) * bVar32 | (bVar50 >= bVar32) * bVar50;
        auVar48[3] = (bVar51 < bVar33) * bVar33 | (bVar51 >= bVar33) * bVar51;
        auVar48[4] = (bVar52 < bVar34) * bVar34 | (bVar52 >= bVar34) * bVar52;
        auVar48[5] = (bVar53 < bVar35) * bVar35 | (bVar53 >= bVar35) * bVar53;
        auVar48[6] = (bVar54 < bVar36) * bVar36 | (bVar54 >= bVar36) * bVar54;
        auVar48[7] = (bVar55 < bVar37) * bVar37 | (bVar55 >= bVar37) * bVar55;
        auVar48[8] = (bVar56 < bVar38) * bVar38 | (bVar56 >= bVar38) * bVar56;
        auVar48[9] = (bVar57 < bVar39) * bVar39 | (bVar57 >= bVar39) * bVar57;
        auVar48[10] = (bVar58 < bVar40) * bVar40 | (bVar58 >= bVar40) * bVar58;
        auVar48[0xb] = (bVar59 < bVar41) * bVar41 | (bVar59 >= bVar41) * bVar59;
        auVar48[0xc] = (bVar60 < bVar42) * bVar42 | (bVar60 >= bVar42) * bVar60;
        auVar48[0xd] = (bVar61 < bVar43) * bVar43 | (bVar61 >= bVar43) * bVar61;
        auVar48[0xe] = (bVar62 < bVar44) * bVar44 | (bVar62 >= bVar44) * bVar62;
        auVar48[0xf] = (bVar63 < bVar45) * bVar45 | (bVar63 >= bVar45) * bVar63;
        pcVar3 = param_1 + 0x40;
      } while ((((((((((((((((auVar48 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                            (auVar48 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar48 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar48 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar48 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar48 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                       (auVar48 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar48 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar48 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar48 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar48 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar48 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar48 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar48 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar48 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               -1 < (char)auVar48[0xf]);
      uVar2 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 != 0) goto LAB_00720af0;
      uVar2 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar4 = (uint)uVar2;
      if (uVar2 == 0) {
        auVar29[0] = -(param_1[0x20] == param_2);
        auVar29[1] = -(param_1[0x21] == param_2);
        auVar29[2] = -(param_1[0x22] == param_2);
        auVar29[3] = -(param_1[0x23] == param_2);
        auVar29[4] = -(param_1[0x24] == param_2);
        auVar29[5] = -(param_1[0x25] == param_2);
        auVar29[6] = -(param_1[0x26] == param_2);
        auVar29[7] = -(param_1[0x27] == param_2);
        auVar29[8] = -(param_1[0x28] == param_2);
        auVar29[9] = -(param_1[0x29] == param_2);
        auVar29[10] = -(param_1[0x2a] == param_2);
        auVar29[0xb] = -(param_1[0x2b] == param_2);
        auVar29[0xc] = -(param_1[0x2c] == param_2);
        auVar29[0xd] = -(param_1[0x2d] == param_2);
        auVar29[0xe] = -(param_1[0x2e] == param_2);
        auVar29[0xf] = -(param_1[0x2f] == param_2);
        auVar18[0] = -(param_2 == param_1[0x30]);
        auVar18[1] = -(param_2 == param_1[0x31]);
        auVar18[2] = -(param_2 == param_1[0x32]);
        auVar18[3] = -(param_2 == param_1[0x33]);
        auVar18[4] = -(param_2 == param_1[0x34]);
        auVar18[5] = -(param_2 == param_1[0x35]);
        auVar18[6] = -(param_2 == param_1[0x36]);
        auVar18[7] = -(param_2 == param_1[0x37]);
        auVar18[8] = -(param_2 == param_1[0x38]);
        auVar18[9] = -(param_2 == param_1[0x39]);
        auVar18[10] = -(param_2 == param_1[0x3a]);
        auVar18[0xb] = -(param_2 == param_1[0x3b]);
        auVar18[0xc] = -(param_2 == param_1[0x3c]);
        auVar18[0xd] = -(param_2 == param_1[0x3d]);
        auVar18[0xe] = -(param_2 == param_1[0x3e]);
        auVar18[0xf] = -(param_2 == param_1[0x3f]);
        uVar2 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
        uVar4 = (uint)uVar2;
        if (uVar2 == 0) {
          uVar2 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
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
                  (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar18[0xf] >> 7) << 0xf;
          uVar4 = 0;
          if (uVar2 != 0) {
            for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return param_1 + (ulong)uVar4 + 0x30;
        }
LAB_00720b10:
        uVar5 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        return param_1 + (ulong)uVar5 + 0x20;
      }
      goto LAB_00720b00;
    }
  }
LAB_00720a50:
  iVar6 = (int)uVar8;
  uVar5 = iVar6 + 0x20;
  if (uVar5 == 0 || SCARRY4(iVar6,0x20) != (int)uVar5 < 0) {
    param_3 = (ulong)(iVar6 + 0x40U);
    auVar17[0] = -(*param_1 == param_2);
    auVar17[1] = -(param_1[1] == param_2);
    auVar17[2] = -(param_1[2] == param_2);
    auVar17[3] = -(param_1[3] == param_2);
    auVar17[4] = -(param_1[4] == param_2);
    auVar17[5] = -(param_1[5] == param_2);
    auVar17[6] = -(param_1[6] == param_2);
    auVar17[7] = -(param_1[7] == param_2);
    auVar17[8] = -(param_1[8] == param_2);
    auVar17[9] = -(param_1[9] == param_2);
    auVar17[10] = -(param_1[10] == param_2);
    auVar17[0xb] = -(param_1[0xb] == param_2);
    auVar17[0xc] = -(param_1[0xc] == param_2);
    auVar17[0xd] = -(param_1[0xd] == param_2);
    auVar17[0xe] = -(param_1[0xe] == param_2);
    auVar17[0xf] = -(param_1[0xf] == param_2);
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
    if (uVar2 == 0) {
      if (iVar6 + 0x40U < 0x10 || iVar6 + 0x30U == 0) {
        return (char *)0x0;
      }
      auVar20[0] = -(param_2 == param_1[0x10]);
      auVar20[1] = -(param_2 == param_1[0x11]);
      auVar20[2] = -(param_2 == param_1[0x12]);
      auVar20[3] = -(param_2 == param_1[0x13]);
      auVar20[4] = -(param_2 == param_1[0x14]);
      auVar20[5] = -(param_2 == param_1[0x15]);
      auVar20[6] = -(param_2 == param_1[0x16]);
      auVar20[7] = -(param_2 == param_1[0x17]);
      auVar20[8] = -(param_2 == param_1[0x18]);
      auVar20[9] = -(param_2 == param_1[0x19]);
      auVar20[10] = -(param_2 == param_1[0x1a]);
      auVar20[0xb] = -(param_2 == param_1[0x1b]);
      auVar20[0xc] = -(param_2 == param_1[0x1c]);
      auVar20[0xd] = -(param_2 == param_1[0x1d]);
      auVar20[0xe] = -(param_2 == param_1[0x1e]);
      auVar20[0xf] = -(param_2 == param_1[0x1f]);
      uVar2 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if ((ulong)(iVar6 + 0x30U) <= (ulong)uVar4) {
          return (char *)0x0;
        }
        return param_1 + (ulong)uVar4 + 0x10;
      }
      return (char *)0x0;
    }
LAB_00720b20:
    uVar4 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (param_3 <= uVar4) {
      return (char *)0x0;
    }
    return param_1 + uVar4;
  }
  auVar16[0] = -(*param_1 == param_2);
  auVar16[1] = -(param_1[1] == param_2);
  auVar16[2] = -(param_1[2] == param_2);
  auVar16[3] = -(param_1[3] == param_2);
  auVar16[4] = -(param_1[4] == param_2);
  auVar16[5] = -(param_1[5] == param_2);
  auVar16[6] = -(param_1[6] == param_2);
  auVar16[7] = -(param_1[7] == param_2);
  auVar16[8] = -(param_1[8] == param_2);
  auVar16[9] = -(param_1[9] == param_2);
  auVar16[10] = -(param_1[10] == param_2);
  auVar16[0xb] = -(param_1[0xb] == param_2);
  auVar16[0xc] = -(param_1[0xc] == param_2);
  auVar16[0xd] = -(param_1[0xd] == param_2);
  auVar16[0xe] = -(param_1[0xe] == param_2);
  auVar16[0xf] = -(param_1[0xf] == param_2);
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
  if (uVar2 != 0) {
LAB_00720af0:
    uVar5 = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    return param_1 + uVar5;
  }
  auVar24[0] = -(param_1[0x10] == param_2);
  auVar24[1] = -(param_1[0x11] == param_2);
  auVar24[2] = -(param_1[0x12] == param_2);
  auVar24[3] = -(param_1[0x13] == param_2);
  auVar24[4] = -(param_1[0x14] == param_2);
  auVar24[5] = -(param_1[0x15] == param_2);
  auVar24[6] = -(param_1[0x16] == param_2);
  auVar24[7] = -(param_1[0x17] == param_2);
  auVar24[8] = -(param_1[0x18] == param_2);
  auVar24[9] = -(param_1[0x19] == param_2);
  auVar24[10] = -(param_1[0x1a] == param_2);
  auVar24[0xb] = -(param_1[0x1b] == param_2);
  auVar24[0xc] = -(param_1[0x1c] == param_2);
  auVar24[0xd] = -(param_1[0x1d] == param_2);
  auVar24[0xe] = -(param_1[0x1e] == param_2);
  auVar24[0xf] = -(param_1[0x1f] == param_2);
  uVar2 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar4 = (uint)uVar2;
  if (uVar2 == 0) {
    auVar30[0] = -(param_1[0x20] == param_2);
    auVar30[1] = -(param_1[0x21] == param_2);
    auVar30[2] = -(param_1[0x22] == param_2);
    auVar30[3] = -(param_1[0x23] == param_2);
    auVar30[4] = -(param_1[0x24] == param_2);
    auVar30[5] = -(param_1[0x25] == param_2);
    auVar30[6] = -(param_1[0x26] == param_2);
    auVar30[7] = -(param_1[0x27] == param_2);
    auVar30[8] = -(param_1[0x28] == param_2);
    auVar30[9] = -(param_1[0x29] == param_2);
    auVar30[10] = -(param_1[0x2a] == param_2);
    auVar30[0xb] = -(param_1[0x2b] == param_2);
    auVar30[0xc] = -(param_1[0x2c] == param_2);
    auVar30[0xd] = -(param_1[0x2d] == param_2);
    auVar30[0xe] = -(param_1[0x2e] == param_2);
    auVar30[0xf] = -(param_1[0x2f] == param_2);
    uVar2 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if ((ulong)uVar5 <= (ulong)uVar4) {
        return (char *)0x0;
      }
      return param_1 + (ulong)uVar4 + 0x20;
    }
    if (iVar6 + 0x10U == 0 || (int)uVar5 < 0x10) {
      return (char *)0x0;
    }
    auVar19[0] = -(param_2 == param_1[0x30]);
    auVar19[1] = -(param_2 == param_1[0x31]);
    auVar19[2] = -(param_2 == param_1[0x32]);
    auVar19[3] = -(param_2 == param_1[0x33]);
    auVar19[4] = -(param_2 == param_1[0x34]);
    auVar19[5] = -(param_2 == param_1[0x35]);
    auVar19[6] = -(param_2 == param_1[0x36]);
    auVar19[7] = -(param_2 == param_1[0x37]);
    auVar19[8] = -(param_2 == param_1[0x38]);
    auVar19[9] = -(param_2 == param_1[0x39]);
    auVar19[10] = -(param_2 == param_1[0x3a]);
    auVar19[0xb] = -(param_2 == param_1[0x3b]);
    auVar19[0xc] = -(param_2 == param_1[0x3c]);
    auVar19[0xd] = -(param_2 == param_1[0x3d]);
    auVar19[0xe] = -(param_2 == param_1[0x3e]);
    auVar19[0xf] = -(param_2 == param_1[0x3f]);
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
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
      if ((ulong)(iVar6 + 0x10U) <= (ulong)uVar4) {
        return (char *)0x0;
      }
      return param_1 + (ulong)uVar4 + 0x30;
    }
    return (char *)0x0;
  }
LAB_00720b00:
  uVar5 = 0;
  if (uVar4 != 0) {
    for (; (uVar4 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  return param_1 + (ulong)uVar5 + 0x10;
}

