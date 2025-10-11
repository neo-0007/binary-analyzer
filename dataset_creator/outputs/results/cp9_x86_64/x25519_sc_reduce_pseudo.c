
void x25519_sc_reduce(byte *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  
  uVar12 = (ulong)((uint)(((ulong)param_1[0x31] << 0x10 | (ulong)param_1[0x30] << 8 |
                          (ulong)param_1[0x2f]) >> 2) & 0x1fffff);
  uVar14 = (ulong)(*(uint *)(param_1 + 0x31) >> 7 & 0x1fffff);
  uVar10 = (ulong)(*(uint *)(param_1 + 0x39) >> 6 & 0x1fffff);
  uVar1 = (ulong)(*(uint *)(param_1 + 0x34) >> 4 & 0x1fffff);
  uVar8 = (ulong)(*(uint *)(param_1 + 0x3c) >> 3);
  uVar3 = (ulong)((uint)(((ulong)param_1[0x39] << 0x10 | (ulong)param_1[0x38] << 8 |
                         (ulong)param_1[0x37]) >> 1) & 0x1fffff);
  lVar9 = uVar8 * -0xa6f7d +
          (ulong)((uint)param_1[0x2b] << 8 | (param_1[0x2c] & 0x1f) << 0x10 | (uint)param_1[0x2a]);
  lVar4 = uVar3 * -0xa6f7d +
          uVar10 * 0x215d1 + uVar8 * -0xf39ad + (ulong)(*(uint *)(param_1 + 0x24) >> 6 & 0x1fffff);
  lVar5 = uVar12 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0xf) >> 6 & 0x1fffff);
  lVar15 = uVar14 * -0xa6f7d +
           uVar8 * 0x72d18 + (ulong)(*(uint *)(param_1 + 0x1f) >> 4 & 0x1fffff) + uVar10 * 0x9fb67 +
           uVar3 * -0xf39ad + uVar1 * 0x215d1;
  lVar31 = uVar14 * 0x72d18 +
           uVar1 * 0xa2c13 +
           (ulong)((uint)param_1[0x16] << 8 | (param_1[0x17] & 0x1f) << 0x10 | (uint)param_1[0x15])
           + uVar12 * 0x9fb67;
  lVar26 = uVar12 * 0x215d1 +
           uVar1 * 0x9fb67 +
           uVar3 * 0x72d18 +
           uVar10 * 0xa2c13 +
           (ulong)((uint)(((ulong)param_1[0x1b] << 8 | (ulong)param_1[0x1c] << 0x10 |
                          (ulong)param_1[0x1a]) >> 2) & 0x1fffff) + uVar14 * -0xf39ad;
  lVar16 = lVar5 + 0x100000 >> 0x15;
  lVar29 = uVar12 * 0x72d18 +
           (((ulong)param_1[0x14] << 0x10 | (ulong)param_1[0x13] << 8 | (ulong)param_1[0x12]) >> 3)
           + uVar14 * 0xa2c13 + lVar16;
  lVar17 = lVar31 + 0x100000 >> 0x15;
  lVar7 = uVar3 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0x17) >> 5 & 0x1fffff) + uVar1 * 0x72d18 +
          uVar14 * 0x9fb67 + uVar12 * -0xf39ad + lVar17;
  lVar18 = lVar26 + 0x100000 >> 0x15;
  lVar13 = uVar12 * -0xa6f7d +
           uVar14 * 0x215d1 +
           uVar10 * 0x72d18 + uVar8 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0x1c) >> 7 & 0x1fffff) +
           uVar3 * 0x9fb67 + uVar1 * -0xf39ad + lVar18;
  lVar19 = lVar15 + 0x100000 >> 0x15;
  lVar2 = uVar1 * -0xa6f7d +
          uVar3 * 0x215d1 +
          uVar8 * 0x9fb67 +
          (ulong)((uint)(((ulong)param_1[0x23] << 8 | (ulong)param_1[0x24] << 0x10 |
                         (ulong)param_1[0x22]) >> 1) & 0x1fffff) + uVar10 * -0xf39ad + lVar19;
  lVar20 = lVar4 + 0x100000 >> 0x15;
  lVar11 = uVar10 * -0xa6f7d +
           uVar8 * 0x215d1 +
           (((ulong)param_1[0x29] << 0x10 | (ulong)param_1[0x28] << 8 | (ulong)param_1[0x27]) >> 3)
           + lVar20;
  lVar21 = lVar9 + 0x100000 >> 0x15;
  lVar6 = (ulong)(*(uint *)(param_1 + 0x2c) >> 5 & 0x1fffff) + lVar21;
  lVar22 = lVar29 + 0x100000 >> 0x15;
  lVar23 = lVar7 + 0x100000 >> 0x15;
  lVar24 = lVar13 + 0x100000 >> 0x15;
  lVar19 = lVar15 + lVar19 * -0x200000 + lVar24;
  lVar25 = lVar2 + 0x100000 >> 0x15;
  lVar15 = lVar4 + lVar20 * -0x200000 + lVar25;
  lVar2 = lVar2 + lVar25 * -0x200000;
  lVar4 = lVar11 + 0x100000 >> 0x15;
  lVar9 = lVar9 + lVar21 * -0x200000 + lVar4;
  lVar11 = lVar11 + lVar4 * -0x200000;
  lVar28 = lVar6 * -0xa6f7d + lVar26 + lVar18 * -0x200000 + lVar23;
  lVar17 = lVar11 * -0xa6f7d +
           lVar9 * 0x215d1 + lVar31 + lVar17 * -0x200000 + lVar22 + lVar6 * -0xf39ad;
  lVar33 = lVar19 * 0xa2c13 +
           (ulong)((uint)param_1[1] << 8 | (param_1[2] & 0x1f) << 0x10 | (uint)*param_1);
  lVar4 = lVar2 * -0xa6f7d +
          lVar15 * 0x215d1 +
          lVar5 + lVar16 * -0x200000 + lVar6 * 0x72d18 + lVar9 * 0x9fb67 + lVar11 * -0xf39ad;
  lVar30 = lVar15 * 0xa2c13 +
           (ulong)((uint)(((ulong)param_1[6] << 8 | (ulong)param_1[7] << 0x10 | (ulong)param_1[5])
                         >> 2) & 0x1fffff) + lVar2 * 0x72d18 + lVar19 * 0x9fb67;
  lVar27 = lVar19 * 0x215d1 +
           lVar9 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 10) >> 4 & 0x1fffff) + lVar11 * 0x72d18 +
           lVar15 * 0x9fb67 + lVar2 * -0xf39ad;
  lVar16 = lVar33 + 0x100000 >> 0x15;
  lVar5 = lVar2 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 2) >> 5 & 0x1fffff) + lVar19 * 0x72d18 +
          lVar16;
  lVar18 = lVar30 + 0x100000 >> 0x15;
  lVar32 = lVar11 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 7) >> 7 & 0x1fffff) + lVar15 * 0x72d18 +
           lVar2 * 0x9fb67 + lVar19 * -0xf39ad + lVar18;
  lVar21 = lVar27 + 0x100000 >> 0x15;
  lVar2 = lVar19 * -0xa6f7d +
          lVar2 * 0x215d1 +
          lVar6 * 0xa2c13 +
          (ulong)((uint)(((ulong)param_1[0xe] << 8 | (ulong)param_1[0xf] << 0x10 |
                         (ulong)param_1[0xd]) >> 1) & 0x1fffff) + lVar9 * 0x72d18 + lVar11 * 0x9fb67
          + lVar15 * -0xf39ad + lVar21;
  lVar25 = lVar4 + 0x100000 >> 0x15;
  lVar15 = lVar15 * -0xa6f7d +
           lVar11 * 0x215d1 + lVar29 + lVar22 * -0x200000 + lVar6 * 0x9fb67 + lVar9 * -0xf39ad +
           lVar25;
  lVar11 = lVar17 + 0x100000 >> 0x15;
  lVar9 = lVar9 * -0xa6f7d + lVar6 * 0x215d1 + lVar7 + lVar23 * -0x200000 + lVar11;
  lVar29 = lVar28 + 0x100000 >> 0x15;
  lVar13 = lVar13 + lVar24 * -0x200000 + lVar29;
  uVar1 = lVar13 + 0x100000;
  lVar20 = lVar5 + 0x100000 >> 0x15;
  lVar22 = lVar32 + 0x100000 >> 0x15;
  lVar23 = lVar2 + 0x100000 >> 0x15;
  lVar26 = lVar15 + 0x100000 >> 0x15;
  lVar31 = lVar9 + 0x100000 >> 0x15;
  lVar24 = (long)uVar1 >> 0x15;
  lVar7 = lVar24 * 0xa2c13 + lVar33 + lVar16 * -0x200000;
  lVar19 = lVar7 >> 0x15;
  lVar6 = lVar5 + lVar20 * -0x200000 + lVar24 * 0x72d18 + lVar19;
  lVar16 = lVar6 >> 0x15;
  lVar33 = lVar30 + lVar18 * -0x200000 + lVar20 + lVar24 * 0x9fb67 + lVar16;
  lVar18 = lVar33 >> 0x15;
  lVar32 = lVar32 + lVar22 * -0x200000 + lVar24 * -0xf39ad + lVar18;
  lVar20 = lVar32 >> 0x15;
  lVar30 = lVar27 + lVar21 * -0x200000 + lVar22 + lVar24 * 0x215d1 + lVar20;
  lVar21 = lVar30 >> 0x15;
  lVar27 = lVar24 * -0xa6f7d + lVar2 + lVar23 * -0x200000 + lVar21;
  lVar22 = lVar27 >> 0x15;
  lVar2 = lVar4 + lVar25 * -0x200000 + lVar23 + lVar22;
  lVar23 = lVar2 >> 0x15;
  lVar4 = lVar15 + lVar26 * -0x200000 + lVar23;
  lVar24 = lVar4 >> 0x15;
  lVar11 = lVar17 + lVar11 * -0x200000 + lVar26 + lVar24;
  lVar25 = lVar11 >> 0x15;
  lVar9 = lVar9 + lVar31 * -0x200000 + lVar25;
  lVar26 = lVar9 >> 0x15;
  lVar31 = lVar28 + lVar29 * -0x200000 + lVar31 + lVar26;
  lVar29 = lVar31 >> 0x15;
  lVar17 = (lVar13 - (uVar1 & 0xffffffffffe00000)) + lVar29;
  lVar13 = lVar17 >> 0x15;
  lVar5 = lVar7 + lVar19 * -0x200000 + lVar13 * 0xa2c13;
  lVar7 = lVar5 >> 0x15;
  lVar15 = lVar6 + lVar16 * -0x200000 + lVar13 * 0x72d18 + lVar7;
  lVar5 = lVar5 + lVar7 * -0x200000;
  lVar6 = lVar15 >> 0x15;
  *(short *)param_1 = (short)lVar5;
  lVar18 = lVar33 + lVar18 * -0x200000 + lVar13 * 0x9fb67 + lVar6;
  lVar15 = lVar15 + lVar6 * -0x200000;
  lVar6 = lVar18 >> 0x15;
  lVar20 = lVar32 + lVar20 * -0x200000 + lVar13 * -0xf39ad + lVar6;
  lVar18 = lVar18 + lVar6 * -0x200000;
  lVar7 = lVar20 >> 0x15;
  lVar6 = lVar30 + lVar21 * -0x200000 + lVar13 * 0x215d1 + lVar7;
  lVar20 = lVar20 + lVar7 * -0x200000;
  lVar7 = lVar6 >> 0x15;
  lVar13 = lVar13 * -0xa6f7d + lVar27 + lVar22 * -0x200000 + lVar7;
  lVar6 = lVar6 + lVar7 * -0x200000;
  lVar7 = lVar13 >> 0x15;
  lVar2 = lVar2 + lVar23 * -0x200000 + lVar7;
  lVar13 = lVar13 + lVar7 * -0x200000;
  lVar7 = lVar2 >> 0x15;
  lVar4 = lVar4 + lVar24 * -0x200000 + lVar7;
  lVar2 = lVar2 + lVar7 * -0x200000;
  lVar7 = lVar4 >> 0x15;
  lVar11 = lVar11 + lVar25 * -0x200000 + lVar7;
  lVar4 = lVar4 + lVar7 * -0x200000;
  lVar19 = lVar11 >> 0x15;
  lVar7 = lVar9 + lVar26 * -0x200000 + lVar19;
  lVar11 = lVar11 + lVar19 * -0x200000;
  lVar9 = lVar7 >> 0x15;
  *(short *)(param_1 + 0x15) = (short)lVar11;
  lVar16 = lVar31 + lVar29 * -0x200000 + lVar9;
  lVar7 = lVar7 + lVar9 * -0x200000;
  lVar19 = lVar16 >> 0x15;
  lVar9 = (ulong)((uint)lVar17 & 0x1fffff) + lVar19;
  lVar16 = lVar16 + lVar19 * -0x200000;
  param_1[2] = (byte)((ulong)lVar5 >> 0x10) | (char)lVar15 * ' ';
  param_1[3] = (byte)(lVar15 >> 3);
  param_1[4] = (byte)(lVar15 >> 0xb);
  param_1[5] = (byte)(lVar15 >> 0x13) | (char)lVar18 * '\x04';
  param_1[6] = (byte)(lVar18 >> 6);
  param_1[7] = (byte)(lVar18 >> 0xe) | (char)lVar20 * -0x80;
  param_1[8] = (byte)(lVar20 >> 1);
  param_1[9] = (byte)(lVar20 >> 9);
  param_1[10] = (byte)(lVar20 >> 0x11) | (char)lVar6 * '\x10';
  param_1[0xb] = (byte)(lVar6 >> 4);
  param_1[0xc] = (byte)(lVar6 >> 0xc);
  param_1[0xd] = (byte)(lVar6 >> 0x14) | (char)lVar13 * '\x02';
  param_1[0xe] = (byte)(lVar13 >> 7);
  param_1[0xf] = (byte)(lVar13 >> 0xf) | (char)lVar2 * '@';
  param_1[0x10] = (byte)(lVar2 >> 2);
  param_1[0x11] = (byte)(lVar2 >> 10);
  param_1[0x12] = (byte)(lVar2 >> 0x12) | (char)lVar4 * '\b';
  param_1[0x14] = (byte)(lVar4 >> 0xd);
  param_1[0x13] = (byte)(lVar4 >> 5);
  param_1[0x17] = (byte)((ulong)lVar11 >> 0x10) | (char)lVar7 * ' ';
  param_1[0x18] = (byte)(lVar7 >> 3);
  param_1[0x19] = (byte)(lVar7 >> 0xb);
  param_1[0x1a] = (byte)(lVar7 >> 0x13) | (char)lVar16 * '\x04';
  param_1[0x1b] = (byte)(lVar16 >> 6);
  param_1[0x1c] = (byte)(lVar16 >> 0xe) | (char)lVar9 * -0x80;
  param_1[0x1d] = (byte)(lVar9 >> 1);
  param_1[0x1f] = (byte)(lVar9 >> 0x11);
  param_1[0x1e] = (byte)(lVar9 >> 9);
  return;
}

