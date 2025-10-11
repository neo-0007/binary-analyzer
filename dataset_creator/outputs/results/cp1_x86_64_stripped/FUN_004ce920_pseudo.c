
void FUN_004ce920(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar3 = *param_1 ^ uVar1;
  uVar2 = uVar1 << 4 ^ param_1[1];
  uVar1 = (uVar3 >> 0x10 ^ uVar2) & 0xffff;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar1 << 0x10 ^ uVar3;
  uVar1 = (uVar2 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar1 << 2 ^ uVar2;
  uVar1 = (uVar3 >> 8 ^ uVar2) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar1 << 8 ^ uVar3;
  uVar1 = (uVar2 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar1 * 2 ^ uVar2;
  uVar3 = uVar3 >> 0x1d | uVar3 << 3;
  uVar1 = uVar2 >> 0x1d | uVar2 << 3;
  if (param_3 == 0) {
    uVar4 = param_2[0x1e] ^ uVar3;
    uVar6 = param_2[0x1f] ^ uVar3;
    uVar2 = uVar6 >> 4;
    uVar2 = uVar1 ^ *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar2 | uVar6 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4);
    uVar4 = param_2[0x1d] ^ uVar2;
    uVar6 = param_2[0x1c] ^ uVar2;
    uVar1 = uVar4 >> 4;
    uVar4 = *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            uVar3 ^ *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0x1b] ^ uVar4;
    uVar1 = uVar3 >> 4;
    uVar6 = param_2[0x1a] ^ uVar4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar3 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar2 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0x19] ^ uVar6;
    uVar1 = uVar3 >> 4;
    uVar2 = param_2[0x18] ^ uVar6;
    uVar4 = *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar3 << 0x1c) >> 0x1a) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0x17] ^ uVar4;
    uVar2 = param_2[0x16] ^ uVar4;
    uVar1 = uVar3 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar3 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0x15] ^ uVar3;
    uVar6 = param_2[0x14] ^ uVar3;
    uVar1 = uVar2 >> 4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0x13] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar4 = param_2[0x12] ^ uVar6;
    uVar4 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0x11] ^ uVar4;
    uVar1 = uVar3 >> 4;
    uVar2 = param_2[0x10] ^ uVar4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar3 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0xf] ^ uVar3;
    uVar1 = uVar2 >> 4;
    uVar6 = param_2[0xe] ^ uVar3;
    uVar5 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0xd] ^ uVar5;
    uVar4 = param_2[0xc] ^ uVar5;
    uVar1 = uVar2 >> 4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0xb] ^ uVar6;
    uVar3 = param_2[10] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar5 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[9] ^ uVar3;
    uVar4 = param_2[8] ^ uVar3;
    uVar1 = uVar2 >> 4;
    uVar2 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar6 = param_2[6] ^ uVar2;
    uVar4 = param_2[7] ^ uVar2;
    uVar1 = uVar4 >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar4 = param_2[5] ^ uVar3;
    uVar6 = param_2[4] ^ uVar3;
    uVar1 = uVar4 >> 4;
    uVar2 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar2 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar6 = param_2[2] ^ uVar2;
    uVar4 = param_2[3] ^ uVar2;
    uVar1 = uVar4 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar4 = param_2[1] ^ uVar3;
    uVar6 = *param_2 ^ uVar3;
    uVar1 = uVar4 >> 4;
    uVar1 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar2 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
  }
  else {
    uVar6 = *param_2 ^ uVar3;
    uVar4 = param_2[1] ^ uVar3;
    uVar2 = uVar4 >> 4;
    uVar2 = uVar1 ^ *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar2 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4);
    uVar4 = param_2[3] ^ uVar2;
    uVar6 = param_2[2] ^ uVar2;
    uVar1 = uVar4 >> 4;
    uVar6 = uVar3 ^ *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[5] ^ uVar6;
    uVar4 = param_2[4] ^ uVar6;
    uVar1 = uVar3 >> 4;
    uVar4 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar3 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar2 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[6] ^ uVar4;
    uVar2 = param_2[7] ^ uVar4;
    uVar1 = uVar2 >> 4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[8] ^ uVar6;
    uVar2 = param_2[9] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[10] ^ uVar3;
    uVar4 = param_2[0xb] ^ uVar3;
    uVar1 = uVar4 >> 4;
    uVar4 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0xc] ^ uVar4;
    uVar6 = param_2[0xd] ^ uVar4;
    uVar1 = uVar6 >> 4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar6 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0xe] ^ uVar6;
    uVar2 = param_2[0xf] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0x10] ^ uVar3;
    uVar4 = param_2[0x11] ^ uVar3;
    uVar1 = uVar4 >> 4;
    uVar4 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0x12] ^ uVar4;
    uVar6 = param_2[0x13] ^ uVar4;
    uVar1 = uVar6 >> 4;
    uVar6 = *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar6 << 0x1c) >> 0x1a) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
    uVar3 = param_2[0x14] ^ uVar6;
    uVar2 = param_2[0x15] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar3 = *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^ uVar4 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4);
    uVar2 = param_2[0x17] ^ uVar3;
    uVar4 = param_2[0x16] ^ uVar3;
    uVar1 = uVar2 >> 4;
    uVar2 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar4 = param_2[0x19] ^ uVar2;
    uVar1 = uVar4 >> 4;
    uVar6 = param_2[0x18] ^ uVar2;
    uVar3 = uVar3 ^ *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
                    *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
                    *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
                    *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar6 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar6 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar6 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar6 >> 0x12 & 0x3f) * 4);
    uVar6 = param_2[0x1b] ^ uVar3;
    uVar4 = param_2[0x1a] ^ uVar3;
    uVar1 = uVar6 >> 4;
    uVar6 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar6 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar2 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar4 = param_2[0x1c] ^ uVar6;
    uVar2 = param_2[0x1d] ^ uVar6;
    uVar1 = uVar2 >> 4;
    uVar3 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar2 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar3 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4);
    uVar4 = param_2[0x1f] ^ uVar3;
    uVar2 = param_2[0x1e] ^ uVar3;
    uVar1 = uVar4 >> 4;
    uVar1 = *(uint *)(&DAT_007ea200 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_007ea400 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_007ea800 + (ulong)((uVar1 | uVar4 << 0x1c) >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea600 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^ uVar6 ^
            *(uint *)(&DAT_007ea700 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_007ea100 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea300 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_007ea500 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4);
  }
  uVar2 = uVar1 >> 3 | uVar1 << 0x1d;
  uVar3 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar1 = (uVar2 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar1 * 2 ^ uVar2;
  uVar1 = (uVar3 >> 8 ^ uVar2) & 0xff00ff;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar1 << 8 ^ uVar3;
  uVar1 = (uVar2 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar1;
  uVar2 = uVar1 << 2 ^ uVar2;
  uVar1 = (uVar3 >> 0x10 ^ uVar2) & 0xffff;
  uVar2 = uVar2 ^ uVar1;
  uVar3 = uVar3 ^ uVar1 << 0x10;
  uVar1 = (uVar2 >> 4 ^ uVar3) & 0xf0f0f0f;
  *param_1 = uVar3 ^ uVar1;
  param_1[1] = uVar1 << 4 ^ uVar2;
  return;
}

