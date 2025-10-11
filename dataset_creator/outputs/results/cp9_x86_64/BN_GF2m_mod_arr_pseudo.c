
undefined8 BN_GF2m_mod_arr(long *param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  
  uVar1 = *param_3;
  if (uVar1 == 0) {
    BN_zero_ex();
    return 1;
  }
  if (param_2 == param_1) {
    iVar12 = (int)param_1[1];
    puVar10 = (ulong *)*param_1;
  }
  else {
    lVar6 = bn_wexpand(param_1,(int)param_2[1]);
    if (lVar6 == 0) {
      return 0;
    }
    iVar12 = (int)param_2[1];
    puVar10 = (ulong *)*param_1;
    if (0 < iVar12) {
      lVar6 = *param_2;
      lVar7 = 0;
      do {
        puVar10[lVar7] = *(ulong *)(lVar6 + lVar7 * 8);
        lVar7 = lVar7 + 1;
      } while (iVar12 != lVar7);
    }
    *(int *)(param_1 + 1) = iVar12;
    uVar1 = *param_3;
  }
  uVar9 = uVar1 + 0x3f;
  if (-1 < (int)uVar1) {
    uVar9 = uVar1;
  }
  iVar12 = iVar12 + -1;
  iVar13 = (int)uVar9 >> 6;
  bVar3 = (byte)uVar1;
  bVar8 = (byte)((int)uVar1 >> 0x1f);
  if (iVar13 < iVar12) {
    do {
      while( true ) {
        uVar14 = puVar10[iVar12];
        if (uVar14 != 0) break;
        iVar12 = iVar12 + -1;
LAB_006165b4:
        if (iVar12 <= iVar13) goto LAB_00616670;
      }
      puVar10[iVar12] = 0;
      uVar9 = param_3[1];
      puVar4 = param_3 + 2;
      while (uVar9 != 0) {
        uVar9 = uVar1 - uVar9;
        uVar5 = uVar9 + 0x3f;
        if (-1 < (int)uVar9) {
          uVar5 = uVar9;
        }
        lVar6 = (long)(iVar12 - ((int)uVar5 >> 6));
        puVar10[lVar6] = puVar10[lVar6] ^ uVar14 >> ((byte)uVar9 & 0x3f);
        if ((uVar9 & 0x3f) != 0) {
          bVar2 = (byte)((int)uVar9 >> 0x1f);
          puVar10[lVar6 + -1] =
               puVar10[lVar6 + -1] ^
               uVar14 << (-(((byte)uVar9 + (bVar2 >> 2) & 0x3f) - (bVar2 >> 2)) & 0x3f);
        }
        uVar9 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      puVar10[iVar12 - iVar13] = puVar10[iVar12 - iVar13] ^ uVar14 >> (bVar3 & 0x3f);
      if ((uVar1 & 0x3f) == 0) goto LAB_006165b4;
      puVar10[(long)(iVar12 - iVar13) + -1] =
           puVar10[(long)(iVar12 - iVar13) + -1] ^
           uVar14 << (((bVar8 >> 2) - (bVar3 + (bVar8 >> 2) & 0x3f)) + 0x40 & 0x3f);
    } while (iVar13 < iVar12);
  }
LAB_00616670:
  if (iVar13 == iVar12) {
    bVar8 = ((bVar8 >> 2) - (bVar3 + (bVar8 >> 2) & 0x3f)) + 0x40;
    while( true ) {
      uVar14 = puVar10[iVar13];
      uVar11 = uVar14 >> (bVar3 & 0x3f);
      if (uVar11 == 0) break;
      uVar9 = param_3[1];
      uVar14 = (uVar14 << (bVar8 & 0x3f)) >> (bVar8 & 0x3f);
      if ((uVar1 & 0x3f) == 0) {
        uVar14 = 0;
      }
      puVar10[iVar13] = uVar14;
      *puVar10 = *puVar10 ^ uVar11;
      puVar4 = param_3 + 2;
      while (uVar9 != 0) {
        uVar5 = uVar9 + 0x3f;
        if (-1 < (int)uVar9) {
          uVar5 = uVar9;
        }
        puVar10[(int)uVar5 >> 6] = puVar10[(int)uVar5 >> 6] ^ uVar11 << ((byte)uVar9 & 0x3f);
        if (((uVar9 & 0x3f) != 0) &&
           (bVar2 = (byte)((int)uVar9 >> 0x1f),
           uVar14 = uVar11 >> (-(((byte)uVar9 + (bVar2 >> 2) & 0x3f) - (bVar2 >> 2)) & 0x3f),
           uVar14 != 0)) {
          puVar10[(long)((int)uVar5 >> 6) + 1] = puVar10[(long)((int)uVar5 >> 6) + 1] ^ uVar14;
        }
        uVar9 = *puVar4;
        puVar4 = puVar4 + 1;
      }
    }
  }
  bn_correct_top(param_1);
  return 1;
}

