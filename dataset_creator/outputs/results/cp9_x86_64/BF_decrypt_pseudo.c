
void BF_decrypt(uint *data,BF_KEY *key)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *data ^ key->P[0x11];
  uVar3 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          data[1] ^ key->P[0x10];
  uVar5 = uVar5 ^ key->P[0xf] ^
          (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300];
  uVar7 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[0xe];
  uVar3 = (key->S[(uVar7 >> 8 & 0xff) + 0x200] ^
          key->S[uVar7 >> 0x18] + key->S[(ulong)(uVar7 >> 0x10 & 0xff) + 0x100]) +
          key->S[(ulong)(uVar7 & 0xff) + 0x300] ^ uVar5 ^ key->P[0xd];
  uVar5 = (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300] ^
          uVar7 ^ key->P[0xc];
  uVar3 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[0xb];
  uVar5 = (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300] ^
          uVar5 ^ key->P[10];
  uVar3 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[9];
  uVar5 = (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300] ^
          uVar5 ^ key->P[8];
  uVar3 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[7];
  uVar5 = (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300] ^
          uVar5 ^ key->P[6];
  uVar3 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[5];
  uVar5 = (key->S[uVar3 >> 0x18] + key->S[(ulong)(uVar3 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar3 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar3 & 0xff) + 0x300] ^
          uVar5 ^ key->P[4];
  uVar6 = (key->S[uVar5 >> 0x18] + key->S[(ulong)(uVar5 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar5 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar5 & 0xff) + 0x300] ^
          uVar3 ^ key->P[3];
  uVar3 = key->P[1];
  uVar4 = (key->S[uVar6 >> 0x18] + key->S[(ulong)(uVar6 >> 0x10 & 0xff) + 0x100] ^
          key->S[(uVar6 >> 8 & 0xff) + 0x200]) + key->S[(ulong)(uVar6 & 0xff) + 0x300] ^
          uVar5 ^ key->P[2];
  uVar5 = key->S[uVar4 >> 0x18];
  uVar7 = key->S[(ulong)(uVar4 >> 0x10 & 0xff) + 0x100];
  uVar1 = key->S[(uVar4 >> 8 & 0xff) + 0x200];
  uVar2 = key->S[(ulong)(uVar4 & 0xff) + 0x300];
  *data = key->P[0] ^ uVar4;
  data[1] = (uVar5 + uVar7 ^ uVar1) + uVar2 ^ uVar6 ^ uVar3;
  return;
}

