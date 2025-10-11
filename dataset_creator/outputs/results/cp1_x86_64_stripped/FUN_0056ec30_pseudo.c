
void FUN_0056ec30(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar6 = param_1[2];
  uVar3 = param_1[3];
  uVar8 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  uVar5 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar6 = *param_3 ^ uVar8;
  uVar3 = param_3[1] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ^ uVar3;
  uVar4 = uVar6 + uVar3 ^
          (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
  uVar6 = param_3[2] ^ uVar4;
  uVar3 = param_3[3] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = param_3[4] ^ uVar8;
  uVar3 = param_3[5] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = param_3[6] ^ uVar4;
  uVar3 = param_3[7] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = param_3[8] ^ uVar8;
  uVar3 = param_3[9] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = param_3[10] ^ uVar4;
  uVar3 = param_3[0xb] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = param_3[0xc] ^ uVar8;
  uVar3 = param_3[0xd] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = param_3[0xe] ^ uVar4;
  uVar3 = param_3[0xf] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar6;
  uVar8 = uVar7 + uVar6 ^ uVar8;
  uVar6 = param_3[0x10] ^ uVar8;
  uVar3 = param_3[0x11] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = param_3[0x12] ^ uVar4;
  uVar3 = param_3[0x13] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = param_3[0x14] ^ uVar8;
  uVar3 = param_3[0x15] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar7 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar7;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar6;
  uVar4 = uVar7 + uVar6 ^ uVar4;
  uVar6 = param_3[0x16] ^ uVar4;
  uVar3 = param_3[0x17] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = param_3[0x18] ^ uVar8;
  uVar3 = param_3[0x19] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = param_3[0x1a] ^ uVar4;
  uVar3 = param_3[0x1b] ^ uVar1 ^ uVar6;
  uVar3 = *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar5 = uVar5 ^ uVar3;
  uVar8 = uVar6 + uVar3 ^ uVar8;
  uVar6 = param_3[0x1c] ^ uVar8;
  uVar3 = param_3[0x1d] ^ uVar5 ^ uVar6;
  uVar3 = *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar6 = uVar6 + uVar3;
  uVar6 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar3 = uVar3 + uVar6;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar3 * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar1 ^ uVar3;
  uVar4 = uVar6 + uVar3 ^ uVar4;
  uVar6 = param_3[0x1f] ^ uVar1 ^ param_3[0x1e] ^ uVar4;
  uVar2 = *(uint *)(&DAT_00808ec0 + (ulong)(uVar6 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  uVar6 = (param_3[0x1e] ^ uVar4) + uVar2;
  uVar3 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar6 * 4);
  uVar7 = *(uint *)(&DAT_00809ac0 + (ulong)(uVar6 >> 0x18) * 4);
  param_2[2] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar3 = uVar3 ^ uVar7 ^ *(uint *)(&DAT_008092c0 + (long)(int)(uVar6 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_008096c0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4);
  param_2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar2 = uVar2 + uVar3;
  uVar6 = *(uint *)(&DAT_008096c0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_00808ec0 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_00809ac0 + (ulong)(uVar2 >> 0x18) * 4) ^
          *(uint *)(&DAT_008092c0 + (long)(int)(uVar2 >> 8 & 0xff) * 4);
  uVar8 = uVar3 + uVar6 ^ uVar8;
  uVar5 = uVar5 ^ uVar6;
  *param_2 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
  param_2[1] = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  return;
}

