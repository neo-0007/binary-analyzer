
void FUN_0056e260(uint *param_1,uint *param_2)

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
  
  uVar4 = param_1[2];
  uVar9 = *param_1;
  uVar3 = param_1[1];
  uVar10 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8;
  uVar5 = uVar10 | uVar4 << 0x18;
  uVar6 = param_1[3];
  uVar7 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  uVar1 = uVar7 + 0x61c88647 + uVar5;
  uVar8 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar12 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8;
  uVar11 = uVar12 | uVar6 << 0x18;
  uVar2 = (uVar8 + 0x9e3779b9) - uVar11;
  *param_2 = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
             *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
             *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
             *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  uVar8 = uVar8 >> 8;
  param_2[1] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar2 & 0xff) * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar2 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4);
  uVar7 = uVar7 >> 8;
  uVar3 = (uVar3 >> 0x18) << 0x18 ^ uVar7;
  uVar2 = (uVar9 >> 0x18) << 0x18 ^ uVar8;
  uVar1 = uVar5 + 0xc3910c8d + uVar3;
  uVar9 = (uVar2 - uVar11) + 0x3c6ef373;
  param_2[2] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[3] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar10 = uVar10 << 8;
  uVar11 = uVar6 & 0xff ^ uVar10;
  uVar12 = uVar12 << 8;
  uVar1 = uVar3 + 0x8722191a + uVar11;
  uVar6 = uVar4 & 0xff ^ uVar12;
  uVar4 = (uVar2 + 0x78dde6e6) - uVar6;
  param_2[4] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[5] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar4 & 0xff) * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar4 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar4 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar5 = uVar8 << 0x18 ^ uVar3 >> 8;
  uVar1 = uVar11 + 0xe443234 + uVar5;
  uVar4 = uVar7 << 0x18 ^ uVar2 >> 8;
  uVar9 = (uVar4 - uVar6) + 0xf1bbcdcc;
  param_2[6] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[7] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar12 = uVar12 >> 0x18 ^ uVar11 << 8;
  uVar8 = uVar10 >> 0x18 ^ uVar6 << 8;
  uVar1 = uVar5 + 0x1c886467 + uVar12;
  uVar9 = (uVar4 + 0xe3779b99) - uVar8;
  param_2[8] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[9] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
               *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
               *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar7 = (uVar3 >> 8) << 0x18 ^ uVar4 >> 8;
  uVar10 = (uVar2 >> 8) << 0x18 ^ uVar5 >> 8;
  uVar1 = uVar12 + 0x3910c8cd + uVar10;
  uVar9 = (uVar7 - uVar8) + 0xc6ef3733;
  param_2[10] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
                *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
                *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0xb] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
                 *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar9 = (uVar6 << 8) >> 0x18 ^ uVar12 << 8;
  uVar2 = (uVar11 << 8) >> 0x18 ^ uVar8 << 8;
  uVar1 = uVar10 + 0x72219199 + uVar9;
  uVar3 = (uVar7 + 0x8dde6e67) - uVar2;
  param_2[0xc] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
                 *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0xd] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
                 *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar11 = (uVar4 >> 8) << 0x18 ^ uVar10 >> 8;
  uVar6 = (uVar5 >> 8) << 0x18 ^ uVar7 >> 8;
  uVar1 = uVar9 + 0xe4432331 + uVar11;
  uVar4 = (uVar6 - uVar2) + 0x1bbcdccf;
  param_2[0xe] = *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
                 *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0xf] = *(uint *)(&DAT_00808ec0 + (ulong)(uVar4 & 0xff) * 4) ^
                 *(uint *)(&DAT_00809ac0 + (ulong)(uVar4 >> 0x18) * 4) ^
                 *(uint *)(&DAT_008092c0 + (long)(int)(uVar4 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_008096c0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar5 = (uVar8 << 8) >> 0x18 ^ uVar9 << 8;
  uVar4 = (uVar12 << 8) >> 0x18 ^ uVar2 << 8;
  uVar1 = uVar11 + 0xc8864662 + uVar5;
  uVar3 = (uVar6 + 0x3779b99e) - uVar4;
  param_2[0x10] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x11] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar12 = (uVar7 >> 8) << 0x18 ^ uVar11 >> 8;
  uVar7 = (uVar10 >> 8) << 0x18 ^ uVar6 >> 8;
  uVar1 = uVar5 + 0x910c8cc4 + uVar12;
  uVar3 = (uVar7 - uVar4) + 0x6ef3733c;
  param_2[0x12] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x13] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar3 = (uVar2 << 8) >> 0x18 ^ uVar5 << 8;
  uVar2 = (uVar9 << 8) >> 0x18 ^ uVar4 << 8;
  uVar1 = uVar12 + 0x22191988 + uVar3;
  uVar9 = (uVar7 + 0xdde6e678) - uVar2;
  param_2[0x14] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x15] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar13 = (uVar6 >> 8) << 0x18 ^ uVar12 >> 8;
  uVar10 = (uVar11 >> 8) << 0x18 ^ uVar7 >> 8;
  uVar1 = uVar3 + 0x4432330f + uVar13;
  uVar9 = (uVar10 - uVar2) + 0xbbcdccf1;
  param_2[0x16] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x17] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar9 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar9 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar9 >> 0x10 & 0xff) * 4);
  uVar8 = (uVar4 << 8) >> 0x18 ^ uVar3 << 8;
  uVar6 = (uVar5 << 8) >> 0x18 ^ uVar2 << 8;
  uVar1 = uVar13 + 0x8864661d + uVar8;
  uVar4 = (uVar10 + 0x779b99e3) - uVar6;
  param_2[0x18] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x19] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar4 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar4 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar4 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  uVar4 = (uVar7 >> 8) << 0x18 ^ uVar13 >> 8;
  uVar1 = uVar8 + 0x10c8cc3a + uVar4;
  uVar9 = (uVar12 >> 8) << 0x18 ^ uVar10 >> 8;
  uVar12 = (uVar9 - uVar6) + 0xef3733c6;
  param_2[0x1a] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x1b] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar12 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar12 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar12 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar12 >> 0x10 & 0xff) * 4);
  uVar12 = (uVar2 << 8) >> 0x18 ^ uVar8 << 8;
  uVar6 = (uVar3 << 8) >> 0x18 ^ uVar6 << 8;
  uVar1 = uVar4 + 0x21919873 + uVar12;
  uVar3 = (uVar9 + 0xde6e678d) - uVar6;
  param_2[0x1c] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x1d] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar3 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar3 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar3 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4);
  uVar1 = uVar12 + 0x432330e5 + ((uVar10 >> 8) << 0x18 ^ uVar4 >> 8);
  uVar4 = (((uVar13 >> 8) << 0x18 ^ uVar9 >> 8) - uVar6) + 0xbcdccf1b;
  param_2[0x1e] =
       *(uint *)(&DAT_00808ec0 + (ulong)(byte)uVar1 * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar1 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar1 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar1 >> 0x10 & 0xff) * 4);
  param_2[0x1f] =
       *(uint *)(&DAT_00808ec0 + (ulong)(uVar4 & 0xff) * 4) ^
       *(uint *)(&DAT_00809ac0 + (ulong)(uVar4 >> 0x18) * 4) ^
       *(uint *)(&DAT_008092c0 + (long)(int)(uVar4 >> 8 & 0xff) * 4) ^
       *(uint *)(&DAT_008096c0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4);
  return;
}

