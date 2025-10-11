
undefined8 Camellia_Ekeygen(int param_1,uint *param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  
  uVar11 = *param_2;
  uVar18 = param_2[1];
  uVar20 = param_2[2];
  uVar26 = param_2[3];
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
  uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
  uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
  uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
  *(uint *)param_3 = uVar18;
  *(uint *)((long)param_3 + 4) = uVar11;
  *(uint *)(param_3 + 1) = uVar26;
  *(uint *)((long)param_3 + 0xc) = uVar20;
  if (param_1 != 0x80) {
    uVar11 = param_2[4];
    uVar18 = param_2[5];
    if (param_1 == 0xc0) {
      uVar20 = ~uVar11;
      uVar26 = ~uVar18;
    }
    else {
      uVar20 = param_2[6];
      uVar26 = param_2[7];
    }
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
    uVar18 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
    uVar20 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 | uVar20 << 0x18;
    uVar26 = uVar26 >> 0x18 | (uVar26 & 0xff0000) >> 8 | (uVar26 & 0xff00) << 8 | uVar26 << 0x18;
    *(uint *)(param_3 + 4) = uVar18;
    *(uint *)((long)param_3 + 0x24) = uVar11;
    *(uint *)(param_3 + 5) = uVar26;
    *(uint *)((long)param_3 + 0x2c) = uVar20;
    uVar18 = uVar18 ^ (uint)*param_3;
    uVar11 = uVar11 ^ *(uint *)((long)param_3 + 4);
    uVar26 = uVar26 ^ (uint)param_3[1];
    uVar20 = uVar20 ^ *(uint *)((long)param_3 + 0xc);
  }
  uVar2 = DAT_004b9a24;
  uVar8 = DAT_004b9a20;
  uVar1 = DAT_004b9a04 ^ uVar11;
  uVar7 = DAT_004b9a00 ^ uVar18;
  uVar6 = *(uint *)(&DAT_004ba244 + (ulong)(uVar1 >> 8 & 0xff) * 8) ^
          *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar1 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_004b9a40 + (uVar1 >> 0x18)) ^
          *(uint *)(&DAT_004ba240 + (ulong)(uVar1 >> 0x10 & 0xff) * 8);
  uVar1 = *(uint *)(&DAT_004b9a40 + (uVar7 & 0xff)) ^
          *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar7 >> 8 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_004ba244 + (ulong)(uVar7 >> 0x10 & 0xff) * 8) ^
          *(uint *)(&DAT_004ba240 + (ulong)(uVar7 >> 0x18) * 8) ^ uVar6;
  uVar20 = uVar20 ^ uVar1;
  uVar7 = uVar26 ^ uVar1 ^ (uVar6 >> 8 | uVar6 << 0x18);
  uVar26 = DAT_004b9a0c ^ uVar20;
  uVar6 = DAT_004b9a08 ^ uVar7;
  uVar1 = *(uint *)(&DAT_004ba244 + (ulong)(uVar26 >> 8 & 0xff) * 8) ^
          *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar26 & 0xff) * 8 + 4) ^
          *(uint *)(&DAT_004b9a40 + (uVar26 >> 0x18)) ^
          *(uint *)(&DAT_004ba240 + (ulong)(uVar26 >> 0x10 & 0xff) * 8);
  uVar26 = *(uint *)(&DAT_004b9a40 + (uVar6 & 0xff)) ^
           *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar6 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_004ba244 + (ulong)(uVar6 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_004ba240 + (ulong)(uVar6 >> 0x18) * 8) ^ uVar1;
  uVar6 = uVar18 ^ uVar26 ^ (uVar1 >> 8 | uVar1 << 0x18) ^ (uint)*param_3;
  uVar1 = uVar11 ^ uVar26 ^ *(uint *)((long)param_3 + 4);
  uVar11 = DAT_004b9a14 ^ uVar1;
  uVar26 = DAT_004b9a10 ^ uVar6;
  uVar18 = *(uint *)(&DAT_004ba244 + (ulong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_004b9a40 + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_004ba240 + (ulong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&DAT_004b9a40 + (uVar26 & 0xff)) ^
           *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar26 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_004ba244 + (ulong)(uVar26 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_004ba240 + (ulong)(uVar26 >> 0x18) * 8) ^ uVar18;
  uVar26 = uVar20 ^ *(uint *)((long)param_3 + 0xc) ^ uVar11;
  uVar7 = uVar7 ^ (uint)param_3[1] ^ uVar11 ^ (uVar18 >> 8 | uVar18 << 0x18);
  uVar11 = DAT_004b9a1c ^ uVar26;
  uVar20 = DAT_004b9a18 ^ uVar7;
  uVar18 = *(uint *)(&DAT_004ba244 + (ulong)(uVar11 >> 8 & 0xff) * 8) ^
           *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar11 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_004b9a40 + (uVar11 >> 0x18)) ^
           *(uint *)(&DAT_004ba240 + (ulong)(uVar11 >> 0x10 & 0xff) * 8);
  uVar11 = *(uint *)(&DAT_004b9a40 + (uVar20 & 0xff)) ^
           *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar20 >> 8 & 0xff) * 8 + 4) ^
           *(uint *)(&DAT_004ba244 + (ulong)(uVar20 >> 0x10 & 0xff) * 8) ^
           *(uint *)(&DAT_004ba240 + (ulong)(uVar20 >> 0x18) * 8) ^ uVar18;
  uVar1 = uVar1 ^ uVar11;
  uVar11 = uVar6 ^ uVar11 ^ (uVar18 >> 8 | uVar18 << 0x18);
  if (param_1 == 0x80) {
    param_3[2] = CONCAT44(uVar1,uVar11);
    param_3[3] = CONCAT44(uVar26,uVar7);
    uVar3 = *param_3 << 0xf;
    uVar4 = uVar3 | param_3[1] >> 0x31;
    uVar9 = param_3[1] << 0xf;
    uVar10 = uVar9 | *param_3 >> 0x31;
    param_3[4] = uVar4;
    param_3[5] = uVar10;
    uVar12 = CONCAT44(uVar1,uVar11) << 0xf;
    uVar13 = uVar12 | uVar26 >> 0x11;
    uVar21 = CONCAT44(uVar26,uVar7) << 0xf;
    uVar22 = uVar21 | uVar1 >> 0x11;
    param_3[6] = uVar13;
    param_3[7] = uVar22;
    uVar13 = uVar13 << 0xf;
    uVar14 = uVar13 | uVar21 >> 0x31;
    uVar22 = uVar22 << 0xf;
    uVar23 = uVar22 | uVar12 >> 0x31;
    param_3[8] = uVar14;
    param_3[9] = uVar23;
    uVar4 = uVar4 << 0x1e;
    uVar9 = uVar4 | uVar9 >> 0x22;
    uVar10 = uVar10 << 0x1e;
    uVar12 = uVar10 | uVar3 >> 0x22;
    param_3[10] = uVar9;
    param_3[0xb] = uVar12;
    uVar14 = uVar14 << 0xf;
    uVar22 = uVar14 | uVar22 >> 0x31;
    uVar23 = uVar23 << 0xf;
    param_3[0xc] = uVar22;
    uVar9 = uVar9 << 0xf;
    uVar12 = uVar12 << 0xf;
    uVar21 = uVar12 | uVar4 >> 0x31;
    param_3[0xd] = uVar21;
    uVar22 = uVar22 << 0xf;
    uVar15 = uVar22 | uVar23 >> 0x31;
    uVar13 = (uVar23 | uVar13 >> 0x31) << 0xf;
    uVar14 = uVar13 | uVar14 >> 0x31;
    param_3[0xe] = uVar15;
    param_3[0xf] = uVar14;
    uVar3 = (uVar9 | uVar10 >> 0x31) << 0x11;
    uVar4 = uVar3 | uVar12 >> 0x2f;
    uVar21 = uVar21 << 0x11;
    uVar10 = uVar21 | uVar9 >> 0x2f;
    param_3[0x10] = uVar4;
    param_3[0x11] = uVar10;
    uVar4 = uVar4 << 0x11;
    uVar9 = uVar4 | uVar21 >> 0x2f;
    uVar10 = uVar10 << 0x11;
    uVar3 = uVar10 | uVar3 >> 0x2f;
    param_3[0x12] = uVar9;
    param_3[0x13] = uVar3;
    uVar15 = uVar15 << 0x22;
    uVar12 = uVar15 | uVar13 >> 0x1e;
    uVar14 = uVar14 << 0x22;
    uVar21 = uVar14 | uVar22 >> 0x1e;
    param_3[0x14] = uVar12;
    param_3[0x15] = uVar21;
    param_3[0x16] = uVar9 << 0x11 | uVar10 >> 0x2f;
    param_3[0x17] = uVar3 << 0x11 | uVar4 >> 0x2f;
    param_3[0x18] = uVar12 << 0x11 | uVar14 >> 0x2f;
    param_3[0x19] = uVar21 << 0x11 | uVar15 >> 0x2f;
    uVar5 = 3;
  }
  else {
    *(uint *)(param_3 + 6) = uVar11;
    *(uint *)((long)param_3 + 0x34) = uVar1;
    *(uint *)(param_3 + 7) = uVar7;
    *(uint *)((long)param_3 + 0x3c) = uVar26;
    uVar11 = uVar11 ^ (uint)param_3[4];
    uVar1 = uVar1 ^ *(uint *)((long)param_3 + 0x24);
    uVar2 = uVar2 ^ uVar1;
    uVar8 = uVar8 ^ uVar11;
    uVar20 = *(uint *)(&DAT_004ba244 + (ulong)(uVar2 >> 8 & 0xff) * 8) ^
             *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar2 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_004b9a40 + (uVar2 >> 0x18)) ^
             *(uint *)(&DAT_004ba240 + (ulong)(uVar2 >> 0x10 & 0xff) * 8);
    uVar18 = *(uint *)(&DAT_004b9a40 + (uVar8 & 0xff)) ^
             *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar8 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_004ba244 + (ulong)(uVar8 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_004ba240 + (ulong)(uVar8 >> 0x18) * 8) ^ uVar20;
    uVar8 = uVar26 ^ *(uint *)((long)param_3 + 0x2c) ^ uVar18;
    uVar2 = uVar7 ^ (uint)param_3[5] ^ uVar18 ^ (uVar20 >> 8 | uVar20 << 0x18);
    uVar18 = DAT_004b9a2c ^ uVar8;
    uVar26 = DAT_004b9a28 ^ uVar2;
    uVar20 = *(uint *)(&DAT_004ba244 + (ulong)(uVar18 >> 8 & 0xff) * 8) ^
             *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar18 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_004b9a40 + (uVar18 >> 0x18)) ^
             *(uint *)(&DAT_004ba240 + (ulong)(uVar18 >> 0x10 & 0xff) * 8);
    uVar18 = *(uint *)(&DAT_004b9a40 + (uVar26 & 0xff)) ^
             *(uint *)((long)&DAT_004b9a40 + (ulong)(uVar26 >> 8 & 0xff) * 8 + 4) ^
             *(uint *)(&DAT_004ba244 + (ulong)(uVar26 >> 0x10 & 0xff) * 8) ^
             *(uint *)(&DAT_004ba240 + (ulong)(uVar26 >> 0x18) * 8) ^ uVar20;
    uVar1 = uVar1 ^ uVar18;
    uVar16 = CONCAT44(uVar1,uVar11 ^ uVar18 ^ (uVar20 >> 8 | uVar20 << 0x18));
    uVar24 = CONCAT44(uVar8,uVar2);
    param_3[2] = uVar16;
    param_3[3] = uVar24;
    uVar10 = param_3[4] << 0xf;
    uVar19 = param_3[5] >> 0x31;
    uVar27 = param_3[4] >> 0x31;
    uVar12 = uVar10 | uVar19;
    uVar13 = param_3[5] << 0xf;
    uVar14 = uVar13 | uVar27;
    param_3[4] = uVar12;
    param_3[5] = uVar14;
    uVar23 = param_3[6] << 0xf;
    uVar28 = uVar23 | param_3[7] >> 0x31;
    uVar29 = param_3[7] << 0xf;
    uVar30 = uVar29 | param_3[6] >> 0x31;
    param_3[6] = uVar28;
    param_3[7] = uVar30;
    uVar12 = uVar12 << 0xf;
    uVar21 = uVar12 | uVar13 >> 0x31;
    uVar14 = uVar14 << 0xf;
    uVar22 = uVar14 | uVar10 >> 0x31;
    param_3[8] = uVar21;
    param_3[9] = uVar22;
    uVar16 = uVar16 << 0x1e;
    uVar17 = uVar16 | uVar8 >> 2;
    uVar24 = uVar24 << 0x1e;
    uVar25 = uVar24 | uVar1 >> 2;
    param_3[10] = uVar17;
    param_3[0xb] = uVar25;
    uVar3 = *param_3 << 0x2d;
    uVar4 = uVar3 | param_3[1] >> 0x13;
    uVar9 = param_3[1] << 0x2d;
    uVar15 = uVar9 | *param_3 >> 0x13;
    param_3[0xc] = uVar4;
    param_3[0xd] = uVar15;
    uVar28 = uVar28 << 0x1e;
    uVar29 = uVar28 | uVar29 >> 0x22;
    uVar30 = uVar30 << 0x1e;
    uVar31 = uVar30 | uVar23 >> 0x22;
    param_3[0xe] = uVar29;
    param_3[0xf] = uVar31;
    uVar4 = uVar4 << 0xf;
    uVar9 = uVar4 | uVar9 >> 0x31;
    uVar15 = uVar15 << 0xf;
    uVar23 = uVar15 | uVar3 >> 0x31;
    param_3[0x10] = uVar9;
    param_3[0x11] = uVar23;
    uVar14 = uVar14 >> 0x22;
    uVar12 = uVar12 >> 0x22;
    param_3[0x12] = uVar21 << 0x1e | uVar14;
    param_3[0x13] = uVar22 << 0x1e | uVar12;
    uVar24 = uVar24 >> 0x22;
    uVar16 = uVar16 >> 0x22;
    uVar21 = uVar17 << 0x1e | uVar24;
    uVar22 = uVar25 << 0x1e | uVar16;
    param_3[0x14] = uVar21;
    param_3[0x15] = uVar22;
    uVar9 = uVar9 << 0x11;
    uVar3 = uVar9 | uVar15 >> 0x2f;
    uVar23 = uVar23 << 0x11;
    uVar4 = uVar23 | uVar4 >> 0x2f;
    param_3[0x16] = uVar3;
    param_3[0x17] = uVar4;
    uVar29 = uVar29 << 0x20;
    uVar15 = uVar29 | uVar30 >> 0x20;
    uVar31 = uVar31 << 0x20;
    uVar17 = uVar31 | uVar28 >> 0x20;
    param_3[0x18] = uVar15;
    param_3[0x19] = uVar17;
    param_3[0x1a] = uVar14 << 0x22 | (uVar13 & 0x7ffff | uVar27) << 0xf | uVar10 >> 0x31;
    param_3[0x1b] = uVar12 << 0x22 | (uVar10 & 0x7ffff | uVar19) << 0xf | uVar13 >> 0x31;
    param_3[0x1c] = uVar15 << 0x11 | uVar31 >> 0x2f;
    param_3[0x1d] = uVar17 << 0x11 | uVar29 >> 0x2f;
    param_3[0x1e] = uVar3 << 0x22 | uVar23 >> 0x1e;
    param_3[0x1f] = uVar4 << 0x22 | uVar9 >> 0x1e;
    param_3[0x20] = uVar24 << 0x33 | uVar22 >> 0xd;
    param_3[0x21] = uVar16 << 0x33 | uVar21 >> 0xd;
    uVar5 = 4;
  }
  return uVar5;
}

