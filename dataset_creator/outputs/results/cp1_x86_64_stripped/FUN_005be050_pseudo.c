
void FUN_005be050(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_1 ^ *param_2;
  uVar3 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ param_1[1] ^ param_2[1];
  uVar5 = uVar5 ^ param_2[2] ^
          (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312];
  uVar7 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[3];
  uVar3 = (param_2[(ulong)((uVar7 >> 8 & 0xff) + 0x200) + 0x12] ^
          param_2[(ulong)(uVar7 >> 0x18) + 0x12] + param_2[(ulong)(uVar7 >> 0x10 & 0xff) + 0x112]) +
          param_2[(ulong)(uVar7 & 0xff) + 0x312] ^ uVar5 ^ param_2[4];
  uVar5 = (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312] ^ uVar7 ^ param_2[5];
  uVar3 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[6];
  uVar5 = (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312] ^ uVar5 ^ param_2[7];
  uVar3 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[8];
  uVar5 = (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312] ^ uVar5 ^ param_2[9];
  uVar3 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[10];
  uVar5 = (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312] ^ uVar5 ^ param_2[0xb];
  uVar3 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[0xc];
  uVar5 = (param_2[(ulong)(uVar3 >> 0x18) + 0x12] + param_2[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar3 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff) + 0x312] ^ uVar5 ^ param_2[0xd];
  uVar6 = (param_2[(ulong)(uVar5 >> 0x18) + 0x12] + param_2[(ulong)(uVar5 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar5 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar5 & 0xff) + 0x312] ^ uVar3 ^ param_2[0xe];
  uVar3 = param_2[0x10];
  uVar4 = (param_2[(ulong)(uVar6 >> 0x18) + 0x12] + param_2[(ulong)(uVar6 >> 0x10 & 0xff) + 0x112] ^
          param_2[(ulong)((uVar6 >> 8 & 0xff) + 0x200) + 0x12]) +
          param_2[(ulong)(uVar6 & 0xff) + 0x312] ^ uVar5 ^ param_2[0xf];
  uVar5 = param_2[(ulong)(uVar4 >> 0x18) + 0x12];
  uVar7 = param_2[(ulong)(uVar4 >> 0x10 & 0xff) + 0x112];
  uVar1 = param_2[(ulong)((uVar4 >> 8 & 0xff) + 0x200) + 0x12];
  uVar2 = param_2[(ulong)(uVar4 & 0xff) + 0x312];
  *param_1 = param_2[0x11] ^ uVar4;
  param_1[1] = (uVar5 + uVar7 ^ uVar1) + uVar2 ^ uVar6 ^ uVar3;
  return;
}

