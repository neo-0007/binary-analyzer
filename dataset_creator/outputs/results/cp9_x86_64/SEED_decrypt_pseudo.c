
void SEED_decrypt(uchar *s,uchar *d,SEED_KEY_SCHEDULE *ks)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *(uint *)s;
  uVar1 = *(uint *)(s + 4);
  uVar6 = *(uint *)(s + 8);
  uVar3 = *(uint *)(s + 0xc);
  uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar5 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar6 = ks->data[0x1e] ^ uVar8;
  uVar3 = ks->data[0x1f] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ^ uVar3;
  uVar4 = uVar6 + uVar3 ^
          (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
  uVar6 = ks->data[0x1c] ^ uVar4;
  uVar3 = ks->data[0x1d] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = ks->data[0x1a] ^ uVar8;
  uVar3 = ks->data[0x1b] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = ks->data[0x18] ^ uVar4;
  uVar3 = ks->data[0x19] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = ks->data[0x16] ^ uVar8;
  uVar3 = ks->data[0x17] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = ks->data[0x14] ^ uVar4;
  uVar3 = ks->data[0x15] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = ks->data[0x12] ^ uVar8;
  uVar3 = ks->data[0x13] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = ks->data[0x10] ^ uVar4;
  uVar3 = ks->data[0x11] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = ks->data[0xe] ^ uVar8;
  uVar3 = ks->data[0xf] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = ks->data[0xc] ^ uVar4;
  uVar3 = ks->data[0xd] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = ks->data[10] ^ uVar8;
  uVar3 = ks->data[0xb] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = ks->data[8] ^ uVar4;
  uVar3 = ks->data[9] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = ks->data[6] ^ uVar8;
  uVar3 = ks->data[7] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = ks->data[4] ^ uVar4;
  uVar3 = ks->data[5] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = ks->data[2] ^ uVar8;
  uVar3 = ks->data[3] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = ks->data[0] ^ uVar4;
  uVar3 = ks->data[1] ^ uVar1 ^ uVar6;
  uVar2 = *(uint *)(SS + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar3 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar3 >> 0x10 & 0xff) * 4 + 0x800);
  uVar6 = uVar6 + uVar2;
  uVar3 = *(uint *)(SS + (ulong)(byte)uVar6 * 4);
  uVar7 = *(uint *)(SS + (ulong)(uVar6 >> 0x18) * 4 + 0xc00);
  *(uint *)(d + 8) = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
  ;
  uVar3 = uVar3 ^ uVar7 ^ *(uint *)(SS + (long)(int)(uVar6 >> 8 & 0xff) * 4 + 0x400) ^
          *(uint *)(SS + (ulong)(uVar6 >> 0x10 & 0xff) * 4 + 0x800);
  *(uint *)(d + 0xc) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = uVar2 + uVar3;
  uVar6 = *(uint *)(SS + (ulong)(uVar2 >> 0x10 & 0xff) * 4 + 0x800) ^
          *(uint *)(SS + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(SS + (ulong)(uVar2 >> 0x18) * 4 + 0xc00) ^
          *(uint *)(SS + (long)(int)(uVar2 >> 8 & 0xff) * 4 + 0x400);
  uVar8 = uVar3 + uVar6 ^ uVar8;
  uVar5 = uVar5 ^ uVar6;
  *(uint *)d = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  *(uint *)(d + 4) = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
  ;
  return;
}

