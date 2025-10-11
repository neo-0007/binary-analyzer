
void DES_encrypt1(uint *data,DES_key_schedule *ks,int enc)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  
  uVar17 = *(uint *)((long)ks->ks + 0x6c);
  uVar10 = *(uint *)((long)ks->ks + 0x5c);
  uVar5 = (data[1] >> 4 ^ *data) & 0xf0f0f0f;
  uVar11 = *(uint *)((long)ks->ks + 100);
  uVar12 = *data ^ uVar5;
  uVar4 = *(uint *)((long)ks->ks + 0x54);
  uVar6 = uVar5 << 4 ^ data[1];
  uVar5 = *(uint *)((long)ks->ks + 0x4c);
  uVar13 = *(uint *)((long)ks->ks + 0x7c);
  uVar1 = (uVar12 >> 0x10 ^ uVar6) & 0xffff;
  uVar6 = uVar6 ^ uVar1;
  uVar16 = *(uint *)((long)ks->ks + 0x74);
  uVar12 = uVar1 << 0x10 ^ uVar12;
  uVar1 = (uVar6 >> 2 ^ uVar12) & 0x33333333;
  uVar12 = uVar12 ^ uVar1;
  uVar6 = uVar1 << 2 ^ uVar6;
  uVar1 = (uVar12 >> 8 ^ uVar6) & 0xff00ff;
  uVar6 = uVar6 ^ uVar1;
  uVar12 = uVar1 << 8 ^ uVar12;
  uVar1 = (uVar6 >> 1 ^ uVar12) & 0x55555555;
  uVar12 = uVar12 ^ uVar1;
  uVar6 = uVar1 * 2 ^ uVar6;
  uVar1 = *(uint *)((long)ks->ks + 0x44);
  uVar3 = *(uint *)((long)ks->ks + 0x3c);
  uVar20 = *(uint *)((long)ks->ks + 0x34);
  uVar9 = *(uint *)((long)ks->ks + 0x2c);
  uVar2 = *(uint *)((long)ks->ks + 0x24);
  uVar19 = *(uint *)((long)ks->ks + 0x1c);
  uVar8 = *(uint *)((long)ks->ks + 0x14);
  uVar15 = *(uint *)((long)ks->ks + 0xc);
  uVar7 = uVar12 >> 0x1d | uVar12 << 3;
  uVar12 = uVar6 >> 0x1d | uVar6 << 3;
  if (enc == 0) {
    uVar14 = ks->ks[0xf].deslong[0] ^ uVar7;
    uVar13 = uVar13 ^ uVar7;
    uVar6 = uVar13 >> 4;
    uVar12 = uVar12 ^ *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar6 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar16 = uVar16 ^ uVar12;
    uVar6 = ks->ks[0xe].deslong[0] ^ uVar12;
    uVar13 = uVar16 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x1a) * 4 + 0x600) ^
             uVar7 ^ *(uint *)(DES_SPtrans + (ulong)((uVar13 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700)
             ^ *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar17 = uVar17 ^ uVar16;
    uVar13 = uVar17 >> 4;
    uVar6 = ks->ks[0xd].deslong[0] ^ uVar16;
    uVar12 = *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 | uVar17 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar13 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar12;
    uVar17 = uVar11 >> 4;
    uVar13 = ks->ks[0xc].deslong[0] ^ uVar12;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             uVar16 ^ *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar11;
    uVar13 = ks->ks[0xb].deslong[0] ^ uVar11;
    uVar17 = uVar10 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = uVar4 ^ uVar10;
    uVar13 = ks->ks[10].deslong[0] ^ uVar10;
    uVar17 = uVar4 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = uVar5 ^ uVar4;
    uVar17 = uVar5 >> 4;
    uVar11 = ks->ks[9].deslong[0] ^ uVar4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar1 = uVar1 ^ uVar11;
    uVar17 = uVar1 >> 4;
    uVar10 = ks->ks[8].deslong[0] ^ uVar11;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar1 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar3 = uVar3 ^ uVar10;
    uVar17 = uVar3 >> 4;
    uVar4 = ks->ks[7].deslong[0] ^ uVar10;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar20 = uVar20 ^ uVar5;
    uVar11 = ks->ks[6].deslong[0] ^ uVar5;
    uVar17 = uVar20 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = uVar9 ^ uVar4;
    uVar10 = ks->ks[5].deslong[0] ^ uVar4;
    uVar17 = uVar9 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar2 = uVar2 ^ uVar10;
    uVar11 = ks->ks[4].deslong[0] ^ uVar10;
    uVar17 = uVar2 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = ks->ks[3].deslong[0] ^ uVar11;
    uVar19 = uVar19 ^ uVar11;
    uVar17 = uVar19 >> 4;
    uVar10 = uVar10 ^ *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = uVar8 ^ uVar10;
    uVar4 = ks->ks[2].deslong[0] ^ uVar10;
    uVar17 = uVar8 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = ks->ks[1].deslong[0] ^ uVar11;
    uVar15 = uVar15 ^ uVar11;
    uVar17 = uVar15 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar4 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = ks->ks[0].deslong[1] ^ uVar10;
    uVar5 = ks->ks[0].deslong[0] ^ uVar10;
    uVar17 = uVar4 >> 4;
    uVar17 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  else {
    uVar18 = ks->ks[0].deslong[0] ^ uVar7;
    uVar14 = ks->ks[0].deslong[1] ^ uVar7;
    uVar6 = uVar14 >> 4;
    uVar6 = uVar12 ^ *(uint *)(DES_SPtrans + (ulong)(uVar18 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar18 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar18 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar18 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar6 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar6 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar15 = uVar15 ^ uVar6;
    uVar14 = ks->ks[1].deslong[0] ^ uVar6;
    uVar12 = uVar15 >> 4;
    uVar7 = uVar7 ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700)
            ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = uVar8 ^ uVar7;
    uVar12 = ks->ks[2].deslong[0] ^ uVar7;
    uVar15 = uVar8 >> 4;
    uVar12 = *(uint *)(DES_SPtrans + (ulong)((uVar15 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar15 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar15 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar15 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar6 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar15 = ks->ks[3].deslong[0] ^ uVar12;
    uVar19 = uVar19 ^ uVar12;
    uVar8 = uVar19 >> 4;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar7 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar15 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[4].deslong[0] ^ uVar15;
    uVar2 = uVar2 ^ uVar15;
    uVar19 = uVar2 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar12 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[5].deslong[0] ^ uVar19;
    uVar9 = uVar9 ^ uVar19;
    uVar2 = uVar9 >> 4;
    uVar2 = *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar15 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[6].deslong[0] ^ uVar2;
    uVar20 = uVar20 ^ uVar2;
    uVar9 = uVar20 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar19 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[7].deslong[0] ^ uVar19;
    uVar3 = uVar3 ^ uVar19;
    uVar20 = uVar3 >> 4;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar2 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[8].deslong[0] ^ uVar20;
    uVar1 = uVar1 ^ uVar20;
    uVar3 = uVar1 >> 4;
    uVar3 = *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 | uVar1 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar19 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[9].deslong[0] ^ uVar3;
    uVar5 = uVar5 ^ uVar3;
    uVar1 = uVar5 >> 4;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar1 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar20
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar1 = ks->ks[10].deslong[0] ^ uVar20;
    uVar4 = uVar4 ^ uVar20;
    uVar5 = uVar4 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar5;
    uVar1 = ks->ks[0xb].deslong[0] ^ uVar5;
    uVar4 = uVar10 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar20 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar4;
    uVar10 = uVar11 >> 4;
    uVar1 = ks->ks[0xc].deslong[0] ^ uVar4;
    uVar11 = uVar5 ^ *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
                     *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
                     *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700)
                     ^ *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar17 = uVar17 ^ uVar11;
    uVar5 = ks->ks[0xd].deslong[0] ^ uVar11;
    uVar10 = uVar17 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar17 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = ks->ks[0xe].deslong[0] ^ uVar4;
    uVar16 = uVar16 ^ uVar4;
    uVar17 = uVar16 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar13 = uVar13 ^ uVar10;
    uVar11 = ks->ks[0xf].deslong[0] ^ uVar10;
    uVar17 = uVar13 >> 4;
    uVar17 = *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar17 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar4 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  uVar11 = uVar17 >> 3 | uVar17 << 0x1d;
  uVar10 = uVar10 >> 3 | uVar10 << 0x1d;
  uVar17 = (uVar11 >> 1 ^ uVar10) & 0x55555555;
  uVar10 = uVar10 ^ uVar17;
  uVar11 = uVar17 * 2 ^ uVar11;
  uVar17 = (uVar10 >> 8 ^ uVar11) & 0xff00ff;
  uVar11 = uVar11 ^ uVar17;
  uVar10 = uVar17 << 8 ^ uVar10;
  uVar17 = (uVar11 >> 2 ^ uVar10) & 0x33333333;
  uVar10 = uVar10 ^ uVar17;
  uVar11 = uVar17 << 2 ^ uVar11;
  uVar17 = (uVar10 >> 0x10 ^ uVar11) & 0xffff;
  uVar11 = uVar11 ^ uVar17;
  uVar10 = uVar10 ^ uVar17 << 0x10;
  uVar17 = (uVar11 >> 4 ^ uVar10) & 0xf0f0f0f;
  *data = uVar10 ^ uVar17;
  data[1] = uVar17 << 4 ^ uVar11;
  return;
}

