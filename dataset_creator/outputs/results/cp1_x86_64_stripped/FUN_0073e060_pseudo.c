
byte * FUN_0073e060(ulong param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
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
  char *pcVar19;
  byte *pbVar20;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  ulong uVar25;
  byte bVar26;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte bVar46;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  byte bVar55;
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar74;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  byte *pbVar21;
  
  if (param_2 == 0) {
    return (byte *)0x0;
  }
  pbVar24 = (byte *)(param_2 + param_1);
  if ((param_1 & 0xfff) < 0xfd0) {
    pcVar19 = (char *)(param_1 & 0xfffffffffffffff0);
    auVar27[0] = -(*pcVar19 == '\0');
    auVar27[1] = -(pcVar19[1] == '\0');
    auVar27[2] = -(pcVar19[2] == '\0');
    auVar27[3] = -(pcVar19[3] == '\0');
    auVar27[4] = -(pcVar19[4] == '\0');
    auVar27[5] = -(pcVar19[5] == '\0');
    auVar27[6] = -(pcVar19[6] == '\0');
    auVar27[7] = -(pcVar19[7] == '\0');
    auVar27[8] = -(pcVar19[8] == '\0');
    auVar27[9] = -(pcVar19[9] == '\0');
    auVar27[10] = -(pcVar19[10] == '\0');
    auVar27[0xb] = -(pcVar19[0xb] == '\0');
    auVar27[0xc] = -(pcVar19[0xc] == '\0');
    auVar27[0xd] = -(pcVar19[0xd] == '\0');
    auVar27[0xe] = -(pcVar19[0xe] == '\0');
    auVar27[0xf] = -(pcVar19[0xf] == '\0');
    auVar48[0] = -(pcVar19[0x10] == '\0');
    auVar48[1] = -(pcVar19[0x11] == '\0');
    auVar48[2] = -(pcVar19[0x12] == '\0');
    auVar48[3] = -(pcVar19[0x13] == '\0');
    auVar48[4] = -(pcVar19[0x14] == '\0');
    auVar48[5] = -(pcVar19[0x15] == '\0');
    auVar48[6] = -(pcVar19[0x16] == '\0');
    auVar48[7] = -(pcVar19[0x17] == '\0');
    auVar48[8] = -(pcVar19[0x18] == '\0');
    auVar48[9] = -(pcVar19[0x19] == '\0');
    auVar48[10] = -(pcVar19[0x1a] == '\0');
    auVar48[0xb] = -(pcVar19[0x1b] == '\0');
    auVar48[0xc] = -(pcVar19[0x1c] == '\0');
    auVar48[0xd] = -(pcVar19[0x1d] == '\0');
    auVar48[0xe] = -(pcVar19[0x1e] == '\0');
    auVar48[0xf] = -(pcVar19[0x1f] == '\0');
    auVar52[0] = -(pcVar19[0x20] == '\0');
    auVar52[1] = -(pcVar19[0x21] == '\0');
    auVar52[2] = -(pcVar19[0x22] == '\0');
    auVar52[3] = -(pcVar19[0x23] == '\0');
    auVar52[4] = -(pcVar19[0x24] == '\0');
    auVar52[5] = -(pcVar19[0x25] == '\0');
    auVar52[6] = -(pcVar19[0x26] == '\0');
    auVar52[7] = -(pcVar19[0x27] == '\0');
    auVar52[8] = -(pcVar19[0x28] == '\0');
    auVar52[9] = -(pcVar19[0x29] == '\0');
    auVar52[10] = -(pcVar19[0x2a] == '\0');
    auVar52[0xb] = -(pcVar19[0x2b] == '\0');
    auVar52[0xc] = -(pcVar19[0x2c] == '\0');
    auVar52[0xd] = -(pcVar19[0x2d] == '\0');
    auVar52[0xe] = -(pcVar19[0x2e] == '\0');
    auVar52[0xf] = -(pcVar19[0x2f] == '\0');
    auVar57[0] = -(pcVar19[0x30] == '\0');
    auVar57[1] = -(pcVar19[0x31] == '\0');
    auVar57[2] = -(pcVar19[0x32] == '\0');
    auVar57[3] = -(pcVar19[0x33] == '\0');
    auVar57[4] = -(pcVar19[0x34] == '\0');
    auVar57[5] = -(pcVar19[0x35] == '\0');
    auVar57[6] = -(pcVar19[0x36] == '\0');
    auVar57[7] = -(pcVar19[0x37] == '\0');
    auVar57[8] = -(pcVar19[0x38] == '\0');
    auVar57[9] = -(pcVar19[0x39] == '\0');
    auVar57[10] = -(pcVar19[0x3a] == '\0');
    auVar57[0xb] = -(pcVar19[0x3b] == '\0');
    auVar57[0xc] = -(pcVar19[0x3c] == '\0');
    auVar57[0xd] = -(pcVar19[0x3d] == '\0');
    auVar57[0xe] = -(pcVar19[0x3e] == '\0');
    auVar57[0xf] = -(pcVar19[0x3f] == '\0');
    uVar22 = CONCAT44(CONCAT22((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar57[0xf] >> 7) << 0xf,
                               (ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                               (ushort)(auVar52[0xf] >> 7) << 0xf),
                      CONCAT22((ushort)(SUB161(auVar48 >> 7,0) & 1) |
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
                               (ushort)(auVar48[0xf] >> 7) << 0xf,
                               (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar27[0xf] >> 7) << 0xf));
    uVar25 = (long)pbVar24 - (long)pcVar19;
    uVar23 = param_1 ^ (ulong)pcVar19;
    if ((uVar25 & 0xffffffffffffffc0) != 0) {
      uVar22 = (long)uVar22 >> ((byte)(param_1 ^ (ulong)pcVar19) & 0x3f);
      pbVar20 = (byte *)(param_1 & 0xffffffffffffffc0);
      if (uVar22 != 0) {
        pbVar24 = (byte *)0x0;
        if (uVar22 != 0) {
          for (; (uVar22 >> (long)pbVar24 & 1) == 0; pbVar24 = pbVar24 + 1) {
          }
        }
        return pbVar24;
      }
      goto LAB_0073e1a0;
    }
LAB_0073e173:
    uVar22 = (long)(uVar22 | 1L << (uVar25 & 0x3f)) >> ((byte)uVar23 & 0x3f);
    if (uVar22 != 0) {
      pbVar24 = (byte *)0x0;
      if (uVar22 != 0) {
        for (; (uVar22 >> (long)pbVar24 & 1) == 0; pbVar24 = pbVar24 + 1) {
        }
      }
      return pbVar24;
    }
  }
  else {
    pcVar19 = (char *)(param_1 & 0xffffffffffffffc0);
    auVar28[0] = -(*pcVar19 == '\0');
    auVar28[1] = -(pcVar19[1] == '\0');
    auVar28[2] = -(pcVar19[2] == '\0');
    auVar28[3] = -(pcVar19[3] == '\0');
    auVar28[4] = -(pcVar19[4] == '\0');
    auVar28[5] = -(pcVar19[5] == '\0');
    auVar28[6] = -(pcVar19[6] == '\0');
    auVar28[7] = -(pcVar19[7] == '\0');
    auVar28[8] = -(pcVar19[8] == '\0');
    auVar28[9] = -(pcVar19[9] == '\0');
    auVar28[10] = -(pcVar19[10] == '\0');
    auVar28[0xb] = -(pcVar19[0xb] == '\0');
    auVar28[0xc] = -(pcVar19[0xc] == '\0');
    auVar28[0xd] = -(pcVar19[0xd] == '\0');
    auVar28[0xe] = -(pcVar19[0xe] == '\0');
    auVar28[0xf] = -(pcVar19[0xf] == '\0');
    auVar47[0] = -(pcVar19[0x10] == '\0');
    auVar47[1] = -(pcVar19[0x11] == '\0');
    auVar47[2] = -(pcVar19[0x12] == '\0');
    auVar47[3] = -(pcVar19[0x13] == '\0');
    auVar47[4] = -(pcVar19[0x14] == '\0');
    auVar47[5] = -(pcVar19[0x15] == '\0');
    auVar47[6] = -(pcVar19[0x16] == '\0');
    auVar47[7] = -(pcVar19[0x17] == '\0');
    auVar47[8] = -(pcVar19[0x18] == '\0');
    auVar47[9] = -(pcVar19[0x19] == '\0');
    auVar47[10] = -(pcVar19[0x1a] == '\0');
    auVar47[0xb] = -(pcVar19[0x1b] == '\0');
    auVar47[0xc] = -(pcVar19[0x1c] == '\0');
    auVar47[0xd] = -(pcVar19[0x1d] == '\0');
    auVar47[0xe] = -(pcVar19[0x1e] == '\0');
    auVar47[0xf] = -(pcVar19[0x1f] == '\0');
    auVar51[0] = -(pcVar19[0x20] == '\0');
    auVar51[1] = -(pcVar19[0x21] == '\0');
    auVar51[2] = -(pcVar19[0x22] == '\0');
    auVar51[3] = -(pcVar19[0x23] == '\0');
    auVar51[4] = -(pcVar19[0x24] == '\0');
    auVar51[5] = -(pcVar19[0x25] == '\0');
    auVar51[6] = -(pcVar19[0x26] == '\0');
    auVar51[7] = -(pcVar19[0x27] == '\0');
    auVar51[8] = -(pcVar19[0x28] == '\0');
    auVar51[9] = -(pcVar19[0x29] == '\0');
    auVar51[10] = -(pcVar19[0x2a] == '\0');
    auVar51[0xb] = -(pcVar19[0x2b] == '\0');
    auVar51[0xc] = -(pcVar19[0x2c] == '\0');
    auVar51[0xd] = -(pcVar19[0x2d] == '\0');
    auVar51[0xe] = -(pcVar19[0x2e] == '\0');
    auVar51[0xf] = -(pcVar19[0x2f] == '\0');
    auVar56[0] = -(pcVar19[0x30] == '\0');
    auVar56[1] = -(pcVar19[0x31] == '\0');
    auVar56[2] = -(pcVar19[0x32] == '\0');
    auVar56[3] = -(pcVar19[0x33] == '\0');
    auVar56[4] = -(pcVar19[0x34] == '\0');
    auVar56[5] = -(pcVar19[0x35] == '\0');
    auVar56[6] = -(pcVar19[0x36] == '\0');
    auVar56[7] = -(pcVar19[0x37] == '\0');
    auVar56[8] = -(pcVar19[0x38] == '\0');
    auVar56[9] = -(pcVar19[0x39] == '\0');
    auVar56[10] = -(pcVar19[0x3a] == '\0');
    auVar56[0xb] = -(pcVar19[0x3b] == '\0');
    auVar56[0xc] = -(pcVar19[0x3c] == '\0');
    auVar56[0xd] = -(pcVar19[0x3d] == '\0');
    auVar56[0xe] = -(pcVar19[0x3e] == '\0');
    auVar56[0xf] = -(pcVar19[0x3f] == '\0');
    uVar22 = CONCAT44(CONCAT22((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar56[0xf] >> 7) << 0xf,
                               (ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                               (ushort)(auVar51[0xf] >> 7) << 0xf),
                      CONCAT22((ushort)(SUB161(auVar47 >> 7,0) & 1) |
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
                               (ushort)(auVar47[0xf] >> 7) << 0xf,
                               (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
                               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar28[0xf] >> 7) << 0xf));
    uVar25 = (long)pbVar24 - (long)pcVar19;
    uVar23 = param_1;
    if ((uVar25 & 0xffffffffffffffc0) == 0) goto LAB_0073e173;
    uVar22 = (long)uVar22 >> ((byte)param_1 & 0x3f);
    if (uVar22 != 0) {
      pbVar24 = (byte *)0x0;
      if (uVar22 != 0) {
        for (; (uVar22 >> (long)pbVar24 & 1) == 0; pbVar24 = pbVar24 + 1) {
        }
      }
      return pbVar24;
    }
  }
  auVar48 = (undefined1  [16])0x0;
  auVar52 = (undefined1  [16])0x0;
  auVar57 = (undefined1  [16])0x0;
  pbVar20 = (byte *)(param_1 & 0xffffffffffffffc0);
LAB_0073e1a0:
  do {
    pbVar21 = pbVar20;
    pbVar20 = pbVar21 + 0x40;
    bVar55 = auVar57[0];
    bVar60 = auVar57[1];
    bVar61 = auVar57[2];
    bVar62 = auVar57[3];
    bVar63 = auVar57[4];
    bVar64 = auVar57[5];
    bVar65 = auVar57[6];
    bVar66 = auVar57[7];
    bVar67 = auVar57[8];
    bVar68 = auVar57[9];
    bVar69 = auVar57[10];
    bVar70 = auVar57[0xb];
    bVar71 = auVar57[0xc];
    bVar72 = auVar57[0xd];
    bVar73 = auVar57[0xe];
    bVar74 = auVar57[0xf];
    if ((byte *)((ulong)pbVar24 & 0xffffffffffffffc0) == pbVar20) {
      if (pbVar24 != pbVar20) {
        auVar30[0] = -(*pbVar20 == 0);
        auVar30[1] = -(pbVar21[0x41] == 0);
        auVar30[2] = -(pbVar21[0x42] == 0);
        auVar30[3] = -(pbVar21[0x43] == 0);
        auVar30[4] = -(pbVar21[0x44] == 0);
        auVar30[5] = -(pbVar21[0x45] == 0);
        auVar30[6] = -(pbVar21[0x46] == 0);
        auVar30[7] = -(pbVar21[0x47] == 0);
        auVar30[8] = -(pbVar21[0x48] == 0);
        auVar30[9] = -(pbVar21[0x49] == 0);
        auVar30[10] = -(pbVar21[0x4a] == 0);
        auVar30[0xb] = -(pbVar21[0x4b] == 0);
        auVar30[0xc] = -(pbVar21[0x4c] == 0);
        auVar30[0xd] = -(pbVar21[0x4d] == 0);
        auVar30[0xe] = -(pbVar21[0x4e] == 0);
        auVar30[0xf] = -(pbVar21[0x4f] == 0);
        auVar49[0] = -(auVar48[0] == pbVar21[0x50]);
        auVar49[1] = -(auVar48[1] == pbVar21[0x51]);
        auVar49[2] = -(auVar48[2] == pbVar21[0x52]);
        auVar49[3] = -(auVar48[3] == pbVar21[0x53]);
        auVar49[4] = -(auVar48[4] == pbVar21[0x54]);
        auVar49[5] = -(auVar48[5] == pbVar21[0x55]);
        auVar49[6] = -(auVar48[6] == pbVar21[0x56]);
        auVar49[7] = -(auVar48[7] == pbVar21[0x57]);
        auVar49[8] = -(auVar48[8] == pbVar21[0x58]);
        auVar49[9] = -(auVar48[9] == pbVar21[0x59]);
        auVar49[10] = -(auVar48[10] == pbVar21[0x5a]);
        auVar49[0xb] = -(auVar48[0xb] == pbVar21[0x5b]);
        auVar49[0xc] = -(auVar48[0xc] == pbVar21[0x5c]);
        auVar49[0xd] = -(auVar48[0xd] == pbVar21[0x5d]);
        auVar49[0xe] = -(auVar48[0xe] == pbVar21[0x5e]);
        auVar49[0xf] = -(auVar48[0xf] == pbVar21[0x5f]);
        auVar53[0] = -(auVar52[0] == pbVar21[0x60]);
        auVar53[1] = -(auVar52[1] == pbVar21[0x61]);
        auVar53[2] = -(auVar52[2] == pbVar21[0x62]);
        auVar53[3] = -(auVar52[3] == pbVar21[99]);
        auVar53[4] = -(auVar52[4] == pbVar21[100]);
        auVar53[5] = -(auVar52[5] == pbVar21[0x65]);
        auVar53[6] = -(auVar52[6] == pbVar21[0x66]);
        auVar53[7] = -(auVar52[7] == pbVar21[0x67]);
        auVar53[8] = -(auVar52[8] == pbVar21[0x68]);
        auVar53[9] = -(auVar52[9] == pbVar21[0x69]);
        auVar53[10] = -(auVar52[10] == pbVar21[0x6a]);
        auVar53[0xb] = -(auVar52[0xb] == pbVar21[0x6b]);
        auVar53[0xc] = -(auVar52[0xc] == pbVar21[0x6c]);
        auVar53[0xd] = -(auVar52[0xd] == pbVar21[0x6d]);
        auVar53[0xe] = -(auVar52[0xe] == pbVar21[0x6e]);
        auVar53[0xf] = -(auVar52[0xf] == pbVar21[0x6f]);
        auVar58[0] = -(bVar55 == pbVar21[0x70]);
        auVar58[1] = -(bVar60 == pbVar21[0x71]);
        auVar58[2] = -(bVar61 == pbVar21[0x72]);
        auVar58[3] = -(bVar62 == pbVar21[0x73]);
        auVar58[4] = -(bVar63 == pbVar21[0x74]);
        auVar58[5] = -(bVar64 == pbVar21[0x75]);
        auVar58[6] = -(bVar65 == pbVar21[0x76]);
        auVar58[7] = -(bVar66 == pbVar21[0x77]);
        auVar58[8] = -(bVar67 == pbVar21[0x78]);
        auVar58[9] = -(bVar68 == pbVar21[0x79]);
        auVar58[10] = -(bVar69 == pbVar21[0x7a]);
        auVar58[0xb] = -(bVar70 == pbVar21[0x7b]);
        auVar58[0xc] = -(bVar71 == pbVar21[0x7c]);
        auVar58[0xd] = -(bVar72 == pbVar21[0x7d]);
        auVar58[0xe] = -(bVar73 == pbVar21[0x7e]);
        auVar58[0xf] = -(bVar74 == pbVar21[0x7f]);
        uVar22 = CONCAT44(CONCAT22((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar58[0xf] >> 7) << 0xf,
                                   (ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                                   (ushort)(auVar53[0xf] >> 7) << 0xf),
                          CONCAT22((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                                   (ushort)(auVar49[0xf] >> 7) << 0xf,
                                   (ushort)(SUB161(auVar30 >> 7,0) & 1) |
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
                                   (ushort)(auVar30[0xf] >> 7) << 0xf));
      }
      uVar22 = uVar22 | 1L << ((ulong)pbVar24 & 0x3f);
      lVar1 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      return pbVar20 + (lVar1 - param_1);
    }
    bVar3 = *pbVar20;
    bVar4 = pbVar21[0x41];
    bVar5 = pbVar21[0x42];
    bVar6 = pbVar21[0x43];
    bVar7 = pbVar21[0x44];
    bVar8 = pbVar21[0x45];
    bVar9 = pbVar21[0x46];
    bVar10 = pbVar21[0x47];
    bVar11 = pbVar21[0x48];
    bVar12 = pbVar21[0x49];
    bVar13 = pbVar21[0x4a];
    bVar14 = pbVar21[0x4b];
    bVar15 = pbVar21[0x4c];
    bVar16 = pbVar21[0x4d];
    bVar17 = pbVar21[0x4e];
    bVar18 = pbVar21[0x4f];
    bVar26 = pbVar21[0x50];
    bVar32 = pbVar21[0x51];
    bVar33 = pbVar21[0x52];
    bVar34 = pbVar21[0x53];
    bVar35 = pbVar21[0x54];
    bVar36 = pbVar21[0x55];
    bVar37 = pbVar21[0x56];
    bVar38 = pbVar21[0x57];
    bVar39 = pbVar21[0x58];
    bVar40 = pbVar21[0x59];
    bVar41 = pbVar21[0x5a];
    bVar42 = pbVar21[0x5b];
    bVar43 = pbVar21[0x5c];
    bVar44 = pbVar21[0x5d];
    bVar45 = pbVar21[0x5e];
    bVar46 = pbVar21[0x5f];
    bVar26 = (bVar26 < bVar3) * bVar26 | (bVar26 >= bVar3) * bVar3;
    bVar32 = (bVar32 < bVar4) * bVar32 | (bVar32 >= bVar4) * bVar4;
    bVar33 = (bVar33 < bVar5) * bVar33 | (bVar33 >= bVar5) * bVar5;
    bVar34 = (bVar34 < bVar6) * bVar34 | (bVar34 >= bVar6) * bVar6;
    bVar35 = (bVar35 < bVar7) * bVar35 | (bVar35 >= bVar7) * bVar7;
    bVar36 = (bVar36 < bVar8) * bVar36 | (bVar36 >= bVar8) * bVar8;
    bVar37 = (bVar37 < bVar9) * bVar37 | (bVar37 >= bVar9) * bVar9;
    bVar38 = (bVar38 < bVar10) * bVar38 | (bVar38 >= bVar10) * bVar10;
    bVar39 = (bVar39 < bVar11) * bVar39 | (bVar39 >= bVar11) * bVar11;
    bVar40 = (bVar40 < bVar12) * bVar40 | (bVar40 >= bVar12) * bVar12;
    bVar41 = (bVar41 < bVar13) * bVar41 | (bVar41 >= bVar13) * bVar13;
    bVar42 = (bVar42 < bVar14) * bVar42 | (bVar42 >= bVar14) * bVar14;
    bVar43 = (bVar43 < bVar15) * bVar43 | (bVar43 >= bVar15) * bVar15;
    bVar44 = (bVar44 < bVar16) * bVar44 | (bVar44 >= bVar16) * bVar16;
    bVar45 = (bVar45 < bVar17) * bVar45 | (bVar45 >= bVar17) * bVar17;
    bVar46 = (bVar46 < bVar18) * bVar46 | (bVar46 >= bVar18) * bVar18;
    bVar3 = pbVar21[0x60];
    bVar4 = pbVar21[0x61];
    bVar5 = pbVar21[0x62];
    bVar6 = pbVar21[99];
    bVar7 = pbVar21[100];
    bVar8 = pbVar21[0x65];
    bVar9 = pbVar21[0x66];
    bVar10 = pbVar21[0x67];
    bVar11 = pbVar21[0x68];
    bVar12 = pbVar21[0x69];
    bVar13 = pbVar21[0x6a];
    bVar14 = pbVar21[0x6b];
    bVar15 = pbVar21[0x6c];
    bVar16 = pbVar21[0x6d];
    bVar17 = pbVar21[0x6e];
    bVar18 = pbVar21[0x6f];
    bVar26 = (bVar3 < bVar26) * bVar3 | (bVar3 >= bVar26) * bVar26;
    bVar32 = (bVar4 < bVar32) * bVar4 | (bVar4 >= bVar32) * bVar32;
    bVar33 = (bVar5 < bVar33) * bVar5 | (bVar5 >= bVar33) * bVar33;
    bVar34 = (bVar6 < bVar34) * bVar6 | (bVar6 >= bVar34) * bVar34;
    bVar35 = (bVar7 < bVar35) * bVar7 | (bVar7 >= bVar35) * bVar35;
    bVar36 = (bVar8 < bVar36) * bVar8 | (bVar8 >= bVar36) * bVar36;
    bVar37 = (bVar9 < bVar37) * bVar9 | (bVar9 >= bVar37) * bVar37;
    bVar38 = (bVar10 < bVar38) * bVar10 | (bVar10 >= bVar38) * bVar38;
    bVar39 = (bVar11 < bVar39) * bVar11 | (bVar11 >= bVar39) * bVar39;
    bVar40 = (bVar12 < bVar40) * bVar12 | (bVar12 >= bVar40) * bVar40;
    bVar41 = (bVar13 < bVar41) * bVar13 | (bVar13 >= bVar41) * bVar41;
    bVar42 = (bVar14 < bVar42) * bVar14 | (bVar14 >= bVar42) * bVar42;
    bVar43 = (bVar15 < bVar43) * bVar15 | (bVar15 >= bVar43) * bVar43;
    bVar44 = (bVar16 < bVar44) * bVar16 | (bVar16 >= bVar44) * bVar44;
    bVar45 = (bVar17 < bVar45) * bVar17 | (bVar17 >= bVar45) * bVar45;
    bVar46 = (bVar18 < bVar46) * bVar18 | (bVar18 >= bVar46) * bVar46;
    bVar3 = pbVar21[0x70];
    bVar4 = pbVar21[0x71];
    bVar5 = pbVar21[0x72];
    bVar6 = pbVar21[0x73];
    bVar7 = pbVar21[0x74];
    bVar8 = pbVar21[0x75];
    bVar9 = pbVar21[0x76];
    bVar10 = pbVar21[0x77];
    bVar11 = pbVar21[0x78];
    bVar12 = pbVar21[0x79];
    bVar13 = pbVar21[0x7a];
    bVar14 = pbVar21[0x7b];
    bVar15 = pbVar21[0x7c];
    bVar16 = pbVar21[0x7d];
    bVar17 = pbVar21[0x7e];
    bVar18 = pbVar21[0x7f];
    auVar29[0] = -((byte)((bVar3 < bVar26) * bVar3 | (bVar3 >= bVar26) * bVar26) == bVar55);
    auVar29[1] = -((byte)((bVar4 < bVar32) * bVar4 | (bVar4 >= bVar32) * bVar32) == bVar60);
    auVar29[2] = -((byte)((bVar5 < bVar33) * bVar5 | (bVar5 >= bVar33) * bVar33) == bVar61);
    auVar29[3] = -((byte)((bVar6 < bVar34) * bVar6 | (bVar6 >= bVar34) * bVar34) == bVar62);
    auVar29[4] = -((byte)((bVar7 < bVar35) * bVar7 | (bVar7 >= bVar35) * bVar35) == bVar63);
    auVar29[5] = -((byte)((bVar8 < bVar36) * bVar8 | (bVar8 >= bVar36) * bVar36) == bVar64);
    auVar29[6] = -((byte)((bVar9 < bVar37) * bVar9 | (bVar9 >= bVar37) * bVar37) == bVar65);
    auVar29[7] = -((byte)((bVar10 < bVar38) * bVar10 | (bVar10 >= bVar38) * bVar38) == bVar66);
    auVar29[8] = -((byte)((bVar11 < bVar39) * bVar11 | (bVar11 >= bVar39) * bVar39) == bVar67);
    auVar29[9] = -((byte)((bVar12 < bVar40) * bVar12 | (bVar12 >= bVar40) * bVar40) == bVar68);
    auVar29[10] = -((byte)((bVar13 < bVar41) * bVar13 | (bVar13 >= bVar41) * bVar41) == bVar69);
    auVar29[0xb] = -((byte)((bVar14 < bVar42) * bVar14 | (bVar14 >= bVar42) * bVar42) == bVar70);
    auVar29[0xc] = -((byte)((bVar15 < bVar43) * bVar15 | (bVar15 >= bVar43) * bVar43) == bVar71);
    auVar29[0xd] = -((byte)((bVar16 < bVar44) * bVar16 | (bVar16 >= bVar44) * bVar44) == bVar72);
    auVar29[0xe] = -((byte)((bVar17 < bVar45) * bVar17 | (bVar17 >= bVar45) * bVar45) == bVar73);
    auVar29[0xf] = -((byte)((bVar18 < bVar46) * bVar18 | (bVar18 >= bVar46) * bVar46) == bVar74);
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
    uVar22 = (ulong)uVar2;
  } while (uVar2 == 0);
  auVar31[0] = -(*pbVar20 == 0);
  auVar31[1] = -(pbVar21[0x41] == 0);
  auVar31[2] = -(pbVar21[0x42] == 0);
  auVar31[3] = -(pbVar21[0x43] == 0);
  auVar31[4] = -(pbVar21[0x44] == 0);
  auVar31[5] = -(pbVar21[0x45] == 0);
  auVar31[6] = -(pbVar21[0x46] == 0);
  auVar31[7] = -(pbVar21[0x47] == 0);
  auVar31[8] = -(pbVar21[0x48] == 0);
  auVar31[9] = -(pbVar21[0x49] == 0);
  auVar31[10] = -(pbVar21[0x4a] == 0);
  auVar31[0xb] = -(pbVar21[0x4b] == 0);
  auVar31[0xc] = -(pbVar21[0x4c] == 0);
  auVar31[0xd] = -(pbVar21[0x4d] == 0);
  auVar31[0xe] = -(pbVar21[0x4e] == 0);
  auVar31[0xf] = -(pbVar21[0x4f] == 0);
  auVar50[0] = -(auVar48[0] == pbVar21[0x50]);
  auVar50[1] = -(auVar48[1] == pbVar21[0x51]);
  auVar50[2] = -(auVar48[2] == pbVar21[0x52]);
  auVar50[3] = -(auVar48[3] == pbVar21[0x53]);
  auVar50[4] = -(auVar48[4] == pbVar21[0x54]);
  auVar50[5] = -(auVar48[5] == pbVar21[0x55]);
  auVar50[6] = -(auVar48[6] == pbVar21[0x56]);
  auVar50[7] = -(auVar48[7] == pbVar21[0x57]);
  auVar50[8] = -(auVar48[8] == pbVar21[0x58]);
  auVar50[9] = -(auVar48[9] == pbVar21[0x59]);
  auVar50[10] = -(auVar48[10] == pbVar21[0x5a]);
  auVar50[0xb] = -(auVar48[0xb] == pbVar21[0x5b]);
  auVar50[0xc] = -(auVar48[0xc] == pbVar21[0x5c]);
  auVar50[0xd] = -(auVar48[0xd] == pbVar21[0x5d]);
  auVar50[0xe] = -(auVar48[0xe] == pbVar21[0x5e]);
  auVar50[0xf] = -(auVar48[0xf] == pbVar21[0x5f]);
  auVar54[0] = -(auVar52[0] == pbVar21[0x60]);
  auVar54[1] = -(auVar52[1] == pbVar21[0x61]);
  auVar54[2] = -(auVar52[2] == pbVar21[0x62]);
  auVar54[3] = -(auVar52[3] == pbVar21[99]);
  auVar54[4] = -(auVar52[4] == pbVar21[100]);
  auVar54[5] = -(auVar52[5] == pbVar21[0x65]);
  auVar54[6] = -(auVar52[6] == pbVar21[0x66]);
  auVar54[7] = -(auVar52[7] == pbVar21[0x67]);
  auVar54[8] = -(auVar52[8] == pbVar21[0x68]);
  auVar54[9] = -(auVar52[9] == pbVar21[0x69]);
  auVar54[10] = -(auVar52[10] == pbVar21[0x6a]);
  auVar54[0xb] = -(auVar52[0xb] == pbVar21[0x6b]);
  auVar54[0xc] = -(auVar52[0xc] == pbVar21[0x6c]);
  auVar54[0xd] = -(auVar52[0xd] == pbVar21[0x6d]);
  auVar54[0xe] = -(auVar52[0xe] == pbVar21[0x6e]);
  auVar54[0xf] = -(auVar52[0xf] == pbVar21[0x6f]);
  auVar59[0] = -(bVar55 == pbVar21[0x70]);
  auVar59[1] = -(bVar60 == pbVar21[0x71]);
  auVar59[2] = -(bVar61 == pbVar21[0x72]);
  auVar59[3] = -(bVar62 == pbVar21[0x73]);
  auVar59[4] = -(bVar63 == pbVar21[0x74]);
  auVar59[5] = -(bVar64 == pbVar21[0x75]);
  auVar59[6] = -(bVar65 == pbVar21[0x76]);
  auVar59[7] = -(bVar66 == pbVar21[0x77]);
  auVar59[8] = -(bVar67 == pbVar21[0x78]);
  auVar59[9] = -(bVar68 == pbVar21[0x79]);
  auVar59[10] = -(bVar69 == pbVar21[0x7a]);
  auVar59[0xb] = -(bVar70 == pbVar21[0x7b]);
  auVar59[0xc] = -(bVar71 == pbVar21[0x7c]);
  auVar59[0xd] = -(bVar72 == pbVar21[0x7d]);
  auVar59[0xe] = -(bVar73 == pbVar21[0x7e]);
  auVar59[0xf] = -(bVar74 == pbVar21[0x7f]);
  uVar23 = CONCAT44(CONCAT22((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar59[0xf] >> 7) << 0xf,
                             (ushort)(SUB161(auVar54 >> 7,0) & 1) |
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
                             (ushort)(auVar54[0xf] >> 7) << 0xf),
                    CONCAT22((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                             (ushort)(auVar50[0xf] >> 7) << 0xf,
                             (ushort)(SUB161(auVar31 >> 7,0) & 1) |
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
                             (ushort)(auVar31[0xf] >> 7) << 0xf));
  lVar1 = 0;
  if (uVar23 != 0) {
    for (; (uVar23 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
    }
  }
  return pbVar20 + (lVar1 - param_1);
}

