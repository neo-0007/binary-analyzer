
bool BN_GF2m_mod_inv(BIGNUM *param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  uint uVar1;
  ulong *puVar2;
  BIGNUM *pBVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  size_t __n;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  bool bVar24;
  bool bVar25;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  BIGNUM *local_78;
  uint local_6c;
  
  BN_CTX_start(param_4);
  pBVar10 = BN_CTX_get(param_4);
  if (pBVar10 != (BIGNUM *)0x0) {
    do {
      iVar6 = BN_num_bits(param_3);
      iVar6 = BN_priv_rand_ex(pBVar10,iVar6 + -1,0xffffffff,0,0,param_4);
      if (iVar6 == 0) goto LAB_00617740;
      iVar6 = BN_is_zero(pBVar10);
    } while (iVar6 != 0);
    bVar25 = false;
    iVar6 = BN_GF2m_mod_mul(param_1,param_2,pBVar10,param_3,param_4);
    if (iVar6 != 0) {
      BN_CTX_start(param_4);
      local_88 = BN_CTX_get(param_4);
      local_80 = BN_CTX_get(param_4);
      local_90 = BN_CTX_get(param_4);
      local_78 = BN_CTX_get(param_4);
      if ((((local_78 != (BIGNUM *)0x0) &&
           (iVar6 = BN_GF2m_mod(local_90,param_1,param_3), iVar6 != 0)) &&
          (iVar6 = BN_is_zero(local_90), iVar6 == 0)) &&
         (pBVar11 = BN_copy(local_78,param_3), pBVar11 != (BIGNUM *)0x0)) {
        iVar7 = BN_num_bits(local_90);
        iVar8 = BN_num_bits(local_78);
        iVar6 = param_3->top;
        lVar12 = bn_wexpand(local_90);
        if (lVar12 != 0) {
          puVar19 = local_90->d;
          iVar9 = local_90->top;
          if (iVar9 < iVar6) {
            memset(puVar19 + iVar9,0,(ulong)(uint)((iVar6 + -1) - iVar9) * 8 + 8);
          }
          local_90->top = iVar6;
          lVar12 = bn_wexpand(local_88);
          if (lVar12 != 0) {
            puVar23 = local_88->d;
            *puVar23 = 1;
            if (iVar6 < 2) {
              local_88->top = iVar6;
              lVar12 = bn_wexpand(local_80);
              if (lVar12 != 0) {
                puVar13 = local_80->d;
                if (iVar6 == 1) {
                  local_6c = 0;
                  goto LAB_00617907;
                }
                local_6c = iVar6 - 1;
                goto LAB_0061793b;
              }
            }
            else {
              local_6c = iVar6 - 1;
              memset(puVar23 + 1,0,(ulong)local_6c << 3);
              local_88->top = iVar6;
              lVar12 = bn_wexpand(local_80);
              if (lVar12 != 0) {
                puVar13 = local_80->d;
LAB_00617907:
                __n = (ulong)local_6c * 8 + 8;
                if (iVar6 < 1) {
                  __n = 8;
                }
                puVar13 = (ulong *)memset(puVar13,0,__n);
LAB_0061793b:
                local_80->top = iVar6;
                puVar17 = local_78->d;
LAB_00617980:
                while (iVar9 = iVar7, pBVar3 = local_78, pBVar11 = local_80, uVar14 = *puVar19,
                      iVar9 != 0) {
                  if ((uVar14 & 1) != 0) {
                    if (iVar9 < 0x41) goto LAB_00617ab0;
                    goto LAB_006179a0;
                  }
                  puVar2 = param_3->d;
                  uVar22 = -(ulong)((uint)*puVar23 & 1);
                  uVar21 = *puVar2 & uVar22 ^ *puVar23;
                  puVar16 = puVar23;
                  puVar20 = puVar19;
                  if (1 < iVar6) {
                    lVar12 = 1;
                    uVar18 = uVar14;
                    do {
                      uVar14 = puVar19[lVar12];
                      puVar19[lVar12 + -1] = uVar18 >> 1 | uVar14 << 0x3f;
                      uVar18 = uVar21 >> 1;
                      uVar21 = puVar2[lVar12] & uVar22 ^ puVar23[lVar12];
                      puVar23[lVar12 + -1] = uVar18 | uVar21 << 0x3f;
                      lVar12 = lVar12 + 1;
                      uVar18 = uVar14;
                    } while ((ulong)(iVar6 - 2) + 2 != lVar12);
                    puVar16 = puVar23 + (int)local_6c;
                    puVar20 = puVar19 + (int)local_6c;
                  }
                  *puVar20 = uVar14 >> 1;
                  *puVar16 = uVar21 >> 1;
                  iVar7 = iVar9 + -1;
                }
                if (uVar14 == 0) {
                  BN_CTX_end(param_4);
                  goto LAB_00617740;
                }
LAB_00617ab0:
                if (uVar14 != 1) {
LAB_006179a0:
                  if (iVar9 < iVar8) {
                    ppuVar4 = &local_90->d;
                    ppuVar5 = &local_88->d;
                    puVar19 = puVar17;
                    puVar23 = puVar13;
                    if (iVar6 < 1) {
                      pBVar11 = local_78;
                      local_78 = local_90;
                      pBVar3 = local_80;
                      local_80 = local_88;
                      puVar13 = *ppuVar5;
                      puVar17 = *ppuVar4;
                      iVar7 = iVar8;
                      iVar8 = iVar9;
                      local_90 = pBVar11;
                      local_88 = pBVar3;
                      goto LAB_00617980;
                    }
                    local_78 = local_90;
                    local_90 = pBVar3;
                    local_80 = local_88;
                    local_88 = pBVar11;
                    puVar13 = *ppuVar5;
                    puVar17 = *ppuVar4;
                    iVar7 = iVar8;
                    iVar8 = iVar9;
LAB_00617a01:
                    uVar14 = 0;
                    do {
                      puVar19[uVar14] = puVar19[uVar14] ^ puVar17[uVar14];
                      puVar23[uVar14] = puVar23[uVar14] ^ puVar13[uVar14];
                      bVar24 = uVar14 != local_6c;
                      uVar14 = uVar14 + 1;
                      iVar9 = iVar7;
                    } while (bVar24);
                  }
                  else {
                    iVar7 = iVar9;
                    if (0 < iVar6) goto LAB_00617a01;
                  }
                  iVar7 = iVar9;
                  if (iVar9 == iVar8) {
                    iVar7 = iVar8 + 0x3e;
                    if (-1 < iVar8 + -1) {
                      iVar7 = iVar8 + -1;
                    }
                    iVar7 = iVar7 >> 6;
                    lVar12 = (long)iVar7;
                    uVar14 = puVar19[lVar12];
                    if (uVar14 == 0) {
                      if (iVar7 != 0) {
                        uVar1 = iVar7 - 1;
                        lVar15 = (long)(int)uVar1;
                        do {
                          uVar14 = puVar19[lVar15];
                          iVar7 = (int)lVar15;
                          if (uVar14 != 0) goto LAB_00617a89;
                          lVar15 = lVar15 + -1;
                        } while (lVar15 != (lVar12 + -2) - (ulong)uVar1);
                        iVar7 = 0;
                      }
                    }
                    else {
LAB_00617a89:
                      iVar7 = iVar7 << 6;
                    }
                    iVar9 = BN_num_bits_word(uVar14);
                    iVar7 = iVar9 + iVar7;
                  }
                  goto LAB_00617980;
                }
                bn_correct_top(local_88);
                pBVar11 = BN_copy(param_1,local_88);
                if (pBVar11 != (BIGNUM *)0x0) {
                  BN_CTX_end(param_4);
                  iVar6 = BN_GF2m_mod_mul(param_1,param_1,pBVar10,param_3,param_4);
                  bVar25 = iVar6 != 0;
                  goto LAB_00617743;
                }
              }
            }
          }
        }
      }
      BN_CTX_end(param_4);
      goto LAB_00617743;
    }
  }
LAB_00617740:
  bVar25 = false;
LAB_00617743:
  BN_CTX_end(param_4);
  return bVar25;
}

