
void DES_encrypt2(uint *data,DES_key_schedule *ks,int enc)

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
  
  uVar16 = *(uint *)((long)ks->ks + 0x6c);
  uVar10 = *(uint *)((long)ks->ks + 0x5c);
  uVar11 = *(uint *)((long)ks->ks + 100);
  uVar5 = *(uint *)((long)ks->ks + 0x54);
  uVar20 = *(uint *)((long)ks->ks + 0x4c);
  uVar12 = *(uint *)((long)ks->ks + 0x7c);
  uVar15 = *(uint *)((long)ks->ks + 0x74);
  uVar9 = *(uint *)((long)ks->ks + 0x44);
  uVar4 = *(uint *)((long)ks->ks + 0x3c);
  uVar19 = *(uint *)((long)ks->ks + 0x34);
  uVar8 = *(uint *)((long)ks->ks + 0x2c);
  uVar3 = *(uint *)((long)ks->ks + 0x24);
  uVar18 = *(uint *)((long)ks->ks + 0x1c);
  uVar7 = *(uint *)((long)ks->ks + 0x14);
  uVar14 = *(uint *)((long)ks->ks + 0xc);
  uVar6 = *data >> 0x1d | *data << 3;
  uVar1 = data[1] >> 0x1d | data[1] << 3;
  if (enc == 0) {
    uVar13 = ks->ks[0xf].deslong[0] ^ uVar6;
    uVar12 = uVar12 ^ uVar6;
    uVar2 = uVar12 >> 4;
    uVar1 = uVar1 ^ *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar15 = uVar15 ^ uVar1;
    uVar2 = ks->ks[0xe].deslong[0] ^ uVar1;
    uVar12 = uVar15 >> 4;
    uVar15 = *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x1a) * 4 + 0x600) ^
             uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700)
             ^ *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar15;
    uVar12 = uVar16 >> 4;
    uVar6 = ks->ks[0xd].deslong[0] ^ uVar15;
    uVar1 = *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar12 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar6 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar1;
    uVar16 = uVar11 >> 4;
    uVar12 = ks->ks[0xc].deslong[0] ^ uVar1;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             uVar15 ^ *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar11;
    uVar12 = ks->ks[0xb].deslong[0] ^ uVar11;
    uVar16 = uVar10 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = uVar5 ^ uVar10;
    uVar12 = ks->ks[10].deslong[0] ^ uVar10;
    uVar16 = uVar5 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar12 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar20 = uVar20 ^ uVar5;
    uVar16 = uVar20 >> 4;
    uVar11 = ks->ks[9].deslong[0] ^ uVar5;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = uVar9 ^ uVar11;
    uVar16 = uVar9 >> 4;
    uVar10 = ks->ks[8].deslong[0] ^ uVar11;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar4 = uVar4 ^ uVar10;
    uVar16 = uVar4 >> 4;
    uVar5 = ks->ks[7].deslong[0] ^ uVar10;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar19 = uVar19 ^ uVar20;
    uVar11 = ks->ks[6].deslong[0] ^ uVar20;
    uVar16 = uVar19 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = uVar8 ^ uVar5;
    uVar10 = ks->ks[5].deslong[0] ^ uVar5;
    uVar16 = uVar8 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar20 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar3 = uVar3 ^ uVar10;
    uVar11 = ks->ks[4].deslong[0] ^ uVar10;
    uVar16 = uVar3 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = ks->ks[3].deslong[0] ^ uVar11;
    uVar18 = uVar18 ^ uVar11;
    uVar16 = uVar18 >> 4;
    uVar10 = uVar10 ^ *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar10;
    uVar5 = ks->ks[2].deslong[0] ^ uVar10;
    uVar16 = uVar7 >> 4;
    uVar11 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = ks->ks[1].deslong[0] ^ uVar11;
    uVar14 = uVar14 ^ uVar11;
    uVar16 = uVar14 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar10 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar5 = ks->ks[0].deslong[1] ^ uVar10;
    uVar20 = ks->ks[0].deslong[0] ^ uVar10;
    uVar16 = uVar5 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  else {
    uVar17 = ks->ks[0].deslong[0] ^ uVar6;
    uVar13 = ks->ks[0].deslong[1] ^ uVar6;
    uVar2 = uVar13 >> 4;
    uVar2 = uVar1 ^ *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar17 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 | uVar13 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4 + 0x500);
    uVar14 = uVar14 ^ uVar2;
    uVar13 = ks->ks[1].deslong[0] ^ uVar2;
    uVar1 = uVar14 >> 4;
    uVar6 = uVar6 ^ *(uint *)(DES_SPtrans + (ulong)((uVar1 | uVar14 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar13 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = uVar7 ^ uVar6;
    uVar1 = ks->ks[2].deslong[0] ^ uVar6;
    uVar14 = uVar7 >> 4;
    uVar1 = *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 | uVar7 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar14 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar2 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar14 = ks->ks[3].deslong[0] ^ uVar1;
    uVar18 = uVar18 ^ uVar1;
    uVar7 = uVar18 >> 4;
    uVar14 = *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 | uVar18 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar7 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar6 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar14 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[4].deslong[0] ^ uVar14;
    uVar3 = uVar3 ^ uVar14;
    uVar18 = uVar3 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 | uVar3 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar18 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar1 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[5].deslong[0] ^ uVar18;
    uVar8 = uVar8 ^ uVar18;
    uVar3 = uVar8 >> 4;
    uVar3 = *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 | uVar8 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar14 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar7 = ks->ks[6].deslong[0] ^ uVar3;
    uVar19 = uVar19 ^ uVar3;
    uVar8 = uVar19 >> 4;
    uVar18 = *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 | uVar19 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar8 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar7 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[7].deslong[0] ^ uVar18;
    uVar4 = uVar4 ^ uVar18;
    uVar19 = uVar4 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 | uVar4 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar19 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar3 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[8].deslong[0] ^ uVar19;
    uVar9 = uVar9 ^ uVar19;
    uVar4 = uVar9 >> 4;
    uVar4 = *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 | uVar9 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar4 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar18 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar8 = ks->ks[9].deslong[0] ^ uVar4;
    uVar20 = uVar20 ^ uVar4;
    uVar9 = uVar20 >> 4;
    uVar19 = *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar9 | uVar20 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar19
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar8 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar9 = ks->ks[10].deslong[0] ^ uVar19;
    uVar5 = uVar5 ^ uVar19;
    uVar20 = uVar5 >> 4;
    uVar20 = *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar20 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700) ^ uVar4
             ^ *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = uVar10 ^ uVar20;
    uVar9 = ks->ks[0xb].deslong[0] ^ uVar20;
    uVar5 = uVar10 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 | uVar10 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar5 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar19 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar11 = uVar11 ^ uVar5;
    uVar10 = uVar11 >> 4;
    uVar9 = ks->ks[0xc].deslong[0] ^ uVar5;
    uVar11 = uVar20 ^ *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar11 << 0x1c) >> 0x1a) * 4 + 0x700
                               ) ^
                      *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar9 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar16 = uVar16 ^ uVar11;
    uVar20 = ks->ks[0xd].deslong[0] ^ uVar11;
    uVar10 = uVar16 >> 4;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc) >> 2) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc00) >> 10) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 | uVar16 << 0x1c) >> 0x1a) * 4 + 0x700) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar10 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 2 & 0x3f) * 4) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar20 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar10 = ks->ks[0xe].deslong[0] ^ uVar5;
    uVar15 = uVar15 ^ uVar5;
    uVar16 = uVar15 >> 4;
    uVar10 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar15 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar11 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar10 >> 0x12 & 0x3f) * 4 + 0x400);
    uVar12 = uVar12 ^ uVar10;
    uVar11 = ks->ks[0xf].deslong[0] ^ uVar10;
    uVar16 = uVar12 >> 4;
    uVar16 = *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc) >> 2) * 4 + 0x100) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc00) >> 10) * 4 + 0x300) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 | uVar12 << 0x1c) >> 0x1a) * 4 + 0x700) ^
             *(uint *)(DES_SPtrans + (ulong)((uVar16 & 0xfc0000) >> 0x12) * 4 + 0x500) ^ uVar5 ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x1a) * 4 + 0x600) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 2 & 0x3f) * 4) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 10 & 0x3f) * 4 + 0x200) ^
             *(uint *)(DES_SPtrans + (ulong)(uVar11 >> 0x12 & 0x3f) * 4 + 0x400);
  }
  *data = uVar10 >> 3 | uVar10 << 0x1d;
  data[1] = uVar16 >> 3 | uVar16 << 0x1d;
  return;
}

