
void ossl_aria_encrypt(byte *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if ((param_2 != (uint *)0x0 && param_3 != (uint *)0x0) && (param_1 != (byte *)0x0)) {
    uVar1 = param_3[0x44];
    if (((uVar1 & 0xfffffffd) == 0xc) || (uVar1 == 0x10)) {
      uVar5 = (uint)param_1[3] ^ *param_3 ^ (uint)*param_1 << 0x18;
      uVar6 = uVar5 ^ (uint)param_1[1] << 0x10;
      uVar7 = uVar6 ^ (uint)param_1[2] << 8;
      uVar14 = (uint)param_1[7] ^ param_3[1] ^ (uint)param_1[4] << 0x18;
      uVar15 = uVar14 ^ (uint)param_1[5] << 0x10;
      uVar16 = uVar15 ^ (uint)param_1[6] << 8;
      uVar9 = (uint)param_1[0xb] ^ param_3[2] ^ (uint)param_1[8] << 0x18;
      uVar10 = uVar9 ^ (uint)param_1[9] << 0x10;
      uVar11 = uVar10 ^ (uint)param_1[10] << 8;
      uVar2 = (uint)param_1[0xf] ^ param_3[3] ^ (uint)param_1[0xc] << 0x18;
      uVar3 = uVar2 ^ (uint)param_1[0xd] << 0x10;
      uVar4 = uVar3 ^ (uint)param_1[0xe] << 8;
      uVar9 = *(uint *)(S1 + (ulong)(uVar9 >> 0x18) * 4) ^
              *(uint *)(X2 + (ulong)(uVar11 & 0xff) * 4) ^
              *(uint *)(S2 + (ulong)(uVar10 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (long)(int)(uVar11 >> 8 & 0xff) * 4);
      uVar10 = *(uint *)(S1 + (ulong)(uVar14 >> 0x18) * 4) ^
               *(uint *)(X2 + (ulong)(uVar16 & 0xff) * 4) ^
               *(uint *)(S2 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(X1 + (long)(int)(uVar16 >> 8 & 0xff) * 4) ^ uVar9;
      uVar5 = *(uint *)(S1 + (ulong)(uVar5 >> 0x18) * 4) ^ *(uint *)(X2 + (ulong)(uVar7 & 0xff) * 4)
              ^ *(uint *)(S2 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (long)(int)(uVar7 >> 8 & 0xff) * 4) ^ uVar10;
      uVar2 = *(uint *)(S1 + (ulong)(uVar2 >> 0x18) * 4) ^ *(uint *)(X2 + (ulong)(uVar4 & 0xff) * 4)
              ^ *(uint *)(S2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(X1 + (long)(int)(uVar4 >> 8 & 0xff) * 4);
      uVar3 = uVar2 ^ uVar10;
      uVar9 = uVar9 ^ uVar2 ^ uVar5;
      uVar2 = uVar9 << 0x10 | uVar9 >> 0x10;
      uVar9 = (((uVar10 ^ uVar9) & 0xff00ff) << 8 | (uVar10 ^ uVar9) >> 8 & 0xff00ff) ^ uVar2;
      uVar5 = uVar5 ^ uVar9;
      uVar4 = uVar3 >> 8 & 0xff00 ^ uVar3 << 0x18 ^ uVar3 >> 0x18 ^ (uVar3 & 0xff00) << 8;
      puVar8 = param_3 + 8;
      uVar3 = uVar2 ^ uVar4 ^ uVar5;
      uVar2 = uVar9 ^ uVar4 ^ param_3[7];
      uVar5 = uVar5 ^ param_3[4];
      uVar9 = param_3[5] ^ uVar9 ^ uVar3;
      uVar3 = uVar3 ^ param_3[6];
      if (uVar1 != 2) {
        uVar12 = (ulong)(uVar1 - 4 >> 1);
        puVar13 = puVar8;
        do {
          uVar1 = *(uint *)(X1 + (ulong)(uVar3 >> 0x18) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar3 & 0xff) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(S1 + (long)(int)(uVar3 >> 8 & 0xff) * 4);
          uVar3 = *(uint *)(X1 + (ulong)(uVar9 >> 0x18) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar9 & 0xff) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(S1 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^ uVar1;
          uVar9 = *(uint *)(X1 + (ulong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(S1 + (long)(int)(uVar2 >> 8 & 0xff) * 4);
          uVar2 = uVar9 ^ uVar3;
          uVar5 = *(uint *)(X1 + (ulong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar5 & 0xff) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(S1 + (long)(int)(uVar5 >> 8 & 0xff) * 4) ^ uVar3;
          uVar1 = uVar1 ^ uVar9 ^ uVar5;
          uVar3 = uVar3 ^ uVar1;
          uVar9 = (uVar2 & 0xff00ff) << 8 | uVar2 >> 8 & 0xff00ff;
          uVar3 = uVar3 >> 8 & 0xff00 ^
                  uVar3 << 0x18 ^ uVar3 >> 0x18 ^ uVar1 ^ (uVar3 & 0xff00) << 8;
          uVar2 = (uVar5 << 0x10 | uVar5 >> 0x10) ^ uVar3;
          uVar5 = uVar3 ^ uVar9 ^ puVar13[3];
          uVar1 = uVar1 ^ uVar9 ^ uVar2;
          uVar2 = uVar2 ^ *puVar13;
          uVar9 = puVar13[1] ^ uVar3 ^ uVar1;
          uVar1 = uVar1 ^ puVar13[2];
          uVar1 = *(uint *)(S1 + (ulong)(uVar1 >> 0x18) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar1 & 0xff) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(X1 + (long)(int)(uVar1 >> 8 & 0xff) * 4);
          uVar4 = *(uint *)(S1 + (ulong)(uVar9 >> 0x18) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar9 & 0xff) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(X1 + (long)(int)(uVar9 >> 8 & 0xff) * 4) ^ uVar1;
          uVar9 = *(uint *)(S1 + (ulong)(uVar5 >> 0x18) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar5 & 0xff) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(X1 + (long)(int)(uVar5 >> 8 & 0xff) * 4);
          uVar5 = *(uint *)(S1 + (ulong)(uVar2 >> 0x18) * 4) ^
                  *(uint *)(X2 + (ulong)(uVar2 & 0xff) * 4) ^
                  *(uint *)(S2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(X1 + (long)(int)(uVar2 >> 8 & 0xff) * 4) ^ uVar4;
          uVar3 = uVar9 ^ uVar4;
          uVar1 = uVar1 ^ uVar9 ^ uVar5;
          uVar9 = uVar1 << 0x10 | uVar1 >> 0x10;
          uVar2 = (((uVar4 ^ uVar1) & 0xff00ff) << 8 | (uVar4 ^ uVar1) >> 8 & 0xff00ff) ^ uVar9;
          uVar5 = uVar5 ^ uVar2;
          uVar1 = uVar3 >> 8 & 0xff00 ^ uVar3 << 0x18 ^ uVar3 >> 0x18 ^ (uVar3 & 0xff00) << 8;
          uVar3 = uVar9 ^ uVar1 ^ uVar5;
          uVar5 = uVar5 ^ puVar13[4];
          uVar9 = puVar13[5] ^ uVar2 ^ uVar3;
          uVar2 = uVar2 ^ uVar1 ^ puVar13[7];
          uVar3 = uVar3 ^ puVar13[6];
          puVar13 = puVar13 + 8;
        } while (puVar13 != param_3 + (uVar12 + 2) * 8);
        puVar8 = puVar8 + (uVar12 + 1) * 8;
      }
      uVar4 = ((uint)(byte)S2[(ulong)(uVar9 & 0xff) * 4] |
               *(int *)(X1 + (ulong)(uVar9 >> 0x18) * 4) << 0x18 |
               (*(uint *)(S1 + (long)(int)(uVar9 >> 8 & 0xff) * 4) & 0xff) << 8 |
              (*(uint *)(X2 + (ulong)(uVar9 >> 0x10 & 0xff) * 4) & 0xff00) << 8) ^ puVar8[1];
      uVar3 = ((uint)(byte)S2[(ulong)(uVar3 & 0xff) * 4] |
               *(int *)(X1 + (ulong)(uVar3 >> 0x18) * 4) << 0x18 |
               (*(uint *)(S1 + (long)(int)(uVar3 >> 8 & 0xff) * 4) & 0xff) << 8 |
              (*(uint *)(X2 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff00) << 8) ^ puVar8[2];
      uVar9 = *puVar8 ^ ((*(uint *)(X2 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
                        *(int *)(X1 + (ulong)(uVar5 >> 0x18) * 4) << 0x18 |
                        (uint)(byte)S2[(ulong)(uVar5 & 0xff) * 4] |
                        (*(uint *)(S1 + (long)(int)(uVar5 >> 8 & 0xff) * 4) & 0xff) << 8);
      uVar1 = ((*(uint *)(X2 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
              (uint)(byte)S2[(ulong)(uVar2 & 0xff) * 4] |
              *(int *)(X1 + (ulong)(uVar2 >> 0x18) * 4) << 0x18 |
              (*(uint *)(S1 + (long)(int)(uVar2 >> 8 & 0xff) * 4) & 0xff) << 8) ^ puVar8[3];
      *param_2 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      param_2[1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      param_2[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      param_2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    }
    return;
  }
  return;
}

