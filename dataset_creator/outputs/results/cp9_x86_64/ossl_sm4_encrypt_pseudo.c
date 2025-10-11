
void ossl_sm4_encrypt(uint *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  uVar5 = *param_1;
  uVar7 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = param_1[3];
  uVar8 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar9 = uVar7 ^ uVar8 ^ *param_3 ^ uVar6;
  uVar3 = (uint)(byte)(&SM4_S)[uVar9 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar9 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar9 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar9 >> 8 & 0xff)] << 8;
  uVar9 = (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar9 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) ^ uVar4
          ^ (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12) ^
          (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar9 & 0xff] << 0x18);
  uVar5 = uVar6 ^ uVar7 ^ param_3[1] ^ uVar9;
  uVar3 = (uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar5 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar5 >> 8 & 0xff)] << 8;
  uVar8 = uVar8 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12) ^
          (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] << 0x18);
  uVar5 = param_3[2] ^ uVar6 ^ uVar9 ^ uVar8;
  uVar3 = (uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar5 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar5 >> 8 & 0xff)] << 8;
  uVar7 = uVar7 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12) ^
          (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] << 0x18);
  uVar5 = uVar9 ^ uVar8 ^ param_3[3] ^ uVar7;
  uVar3 = (uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar5 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar5 >> 8 & 0xff)] << 8;
  uVar5 = uVar6 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12) ^
          (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] << 0x18);
  uVar3 = param_3[4] ^ uVar8 ^ uVar7 ^ uVar5;
  uVar9 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar9 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = param_3[5] ^ uVar7 ^ uVar5 ^ uVar9;
  uVar6 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar8 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = param_3[6] ^ uVar5 ^ uVar9 ^ uVar6;
  uVar3 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar7 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = uVar9 ^ uVar6 ^ param_3[7] ^ uVar3;
  uVar4 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar5 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[8] ^ uVar6 ^ uVar3 ^ uVar4;
  uVar5 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar9 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar9 = param_3[9] ^ uVar3 ^ uVar4 ^ uVar5;
  uVar6 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar6 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) << 0x18);
  uVar9 = param_3[10] ^ uVar4 ^ uVar5 ^ uVar6;
  uVar3 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) >> 0x18) ^
          uVar3 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) << 0x18);
  uVar9 = uVar5 ^ uVar6 ^ param_3[0xb] ^ uVar3;
  uVar7 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar9 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar4 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar9 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = param_3[0xc] ^ uVar6 ^ uVar3 ^ uVar7;
  uVar5 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar5 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = param_3[0xd] ^ uVar3 ^ uVar7 ^ uVar5;
  uVar9 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar6 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = param_3[0xe] ^ uVar7 ^ uVar5 ^ uVar9;
  uVar6 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar3 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = uVar5 ^ uVar9 ^ param_3[0xf] ^ uVar6;
  uVar7 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          uVar7 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = param_3[0x10] ^ uVar9 ^ uVar6 ^ uVar7;
  uVar4 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar5 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = param_3[0x11] ^ uVar6 ^ uVar7 ^ uVar4;
  uVar3 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar9 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[0x12] ^ uVar7 ^ uVar4 ^ uVar3;
  uVar6 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          uVar6 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = uVar4 ^ uVar3 ^ param_3[0x13] ^ uVar6;
  uVar9 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar7 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[0x14] ^ uVar3 ^ uVar6 ^ uVar9;
  uVar8 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar4 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = param_3[0x15] ^ uVar6 ^ uVar9 ^ uVar8;
  uVar4 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar3 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = param_3[0x16] ^ uVar9 ^ uVar8 ^ uVar4;
  uVar7 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          uVar6 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar3 = uVar8 ^ uVar4 ^ param_3[0x17] ^ uVar7;
  uVar3 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar3 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar9 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar3 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[0x18] ^ uVar4 ^ uVar7 ^ uVar3;
  uVar9 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          uVar8 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[0x19] ^ uVar7 ^ uVar3 ^ uVar9;
  uVar6 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar5 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar4 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar5 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = param_3[0x1a] ^ uVar3 ^ uVar9 ^ uVar6;
  uVar8 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          uVar7 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar4 = uVar9 ^ uVar6 ^ param_3[0x1b] ^ uVar8;
  uVar7 = (*(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) << 0x10 |
          *(uint *)(SM4_SBOX_T + (long)(int)(uVar4 >> 8 & 0xff) * 4) >> 0x10) ^
          uVar3 ^ *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x18) * 4) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) << 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 & 0xff) * 4) >> 0x18) ^
          (*(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) >> 8 |
          *(uint *)(SM4_SBOX_T + (ulong)(uVar4 >> 0x10 & 0xff) * 4) << 0x18);
  uVar5 = param_3[0x1c] ^ uVar6 ^ uVar8 ^ uVar7;
  uVar3 = (uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar5 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar5 >> 8 & 0xff)] << 8;
  uVar4 = (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar5 & 0xff] << 0x18) ^
          uVar9 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar5 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  uVar3 = param_3[0x1d] ^ uVar8 ^ uVar7 ^ uVar4;
  uVar5 = (uint)(byte)(&SM4_S)[uVar3 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar3 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar9 = uVar5 | (uint)(byte)(&SM4_S)[(int)(uVar3 >> 8 & 0xff)] << 8;
  uVar6 = uVar6 ^ uVar9 ^ (uVar9 << 2 | ((uint)(byte)(&SM4_S)[uVar3 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar9 << 10 | uVar5 >> 0x16) ^ (uVar9 >> 0xe | uVar9 << 0x12) ^
          (uVar9 >> 8 | (uint)(byte)(&SM4_S)[uVar3 & 0xff] << 0x18);
  uVar3 = param_3[0x1e] ^ uVar7 ^ uVar4 ^ uVar6;
  bVar1 = (&SM4_S)[uVar3 >> 0x18];
  bVar2 = (&SM4_S)[uVar3 & 0xff];
  uVar5 = (uint)bVar1 << 0x18 | (uint)bVar2 | (uint)(byte)(&SM4_S)[uVar3 >> 0x10 & 0xff] << 0x10;
  uVar9 = uVar5 | (uint)(byte)(&SM4_S)[(int)(uVar3 >> 8 & 0xff)] << 8;
  uVar3 = param_3[0x1f];
  param_2[2] = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  param_2[3] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar5 = (uVar9 >> 8 | (uint)bVar2 << 0x18) ^
          uVar8 ^ uVar9 ^ (uVar9 << 2 | ((uint)bVar1 << 0x18) >> 0x1e) ^
          (uVar9 << 10 | uVar5 >> 0x16) ^ (uVar9 >> 0xe | uVar9 << 0x12);
  uVar9 = uVar4 ^ uVar6 ^ uVar3 ^ uVar5;
  param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar3 = (uint)(byte)(&SM4_S)[uVar9 >> 0x18] << 0x18 | (uint)(byte)(&SM4_S)[uVar9 & 0xff] |
          (uint)(byte)(&SM4_S)[uVar9 >> 0x10 & 0xff] << 0x10;
  uVar4 = uVar3 | (uint)(byte)(&SM4_S)[(int)(uVar9 >> 8 & 0xff)] << 8;
  uVar3 = (uVar4 >> 8 | (uint)(byte)(&SM4_S)[uVar9 & 0xff] << 0x18) ^
          uVar7 ^ uVar4 ^ (uVar4 << 2 | ((uint)(byte)(&SM4_S)[uVar9 >> 0x18] << 0x18) >> 0x1e) ^
          (uVar4 << 10 | uVar3 >> 0x16) ^ (uVar4 >> 0xe | uVar4 << 0x12);
  *param_2 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  return;
}

