
undefined8
bn_div_fixed_top(BIGNUM *param_1,long param_2,long param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  long *plVar1;
  uint uVar2;
  ulong *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  BIGNUM *pBVar13;
  BIGNUM *pBVar14;
  BIGNUM *a;
  BIGNUM *pBVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  ulong *puVar25;
  ulong w;
  ulong *puVar26;
  ulong *puVar27;
  long *local_90;
  long local_48;
  
  BN_CTX_start(param_5);
  if (param_1 == (BIGNUM *)0x0) {
    param_1 = BN_CTX_get(param_5);
  }
  pBVar13 = BN_CTX_get(param_5);
  pBVar14 = BN_CTX_get(param_5);
  a = BN_CTX_get(param_5);
  if ((a != (BIGNUM *)0x0) && (pBVar15 = BN_copy(a,param_4), pBVar15 != (BIGNUM *)0x0)) {
    puVar26 = a->d;
    iVar11 = a->top;
    iVar9 = BN_num_bits_word(puVar26[(long)iVar11 + -1]);
    iVar10 = 0x40 - iVar9;
    if (0 < iVar11) {
      uVar21 = 0;
      puVar25 = puVar26;
      do {
        puVar27 = puVar25 + 1;
        uVar16 = *puVar25 << ((byte)iVar10 & 0x3f) | uVar21;
        uVar21 = *puVar25 >> ((byte)iVar9 & 0x3f) &
                 (-(long)(iVar9 % 0x40) | (ulong)-(long)(iVar9 % 0x40) >> 8);
        *puVar25 = uVar16;
        puVar25 = puVar27;
      } while (puVar26 + (ulong)(iVar11 - 1) + 1 != puVar27);
    }
    a->neg = 0;
    iVar11 = bn_lshift_fixed_top(pBVar14,param_3,iVar10);
    if (iVar11 != 0) {
      iVar11 = a->top;
      iVar9 = pBVar14->top;
      if (iVar11 < iVar9) {
        iVar12 = iVar9 - iVar11;
        local_48 = (long)iVar12 << 3;
        iVar23 = iVar9;
      }
      else {
        iVar23 = iVar11 + 1;
        lVar24 = bn_wexpand(pBVar14);
        if (lVar24 == 0) goto LAB_005af6e0;
        memset(pBVar14->d + iVar9,0,(long)((iVar11 - iVar9) + 1) << 3);
        iVar12 = 1;
        local_48 = 8;
        pBVar14->top = iVar23;
      }
      lVar24 = (long)iVar11;
      uVar16 = 0;
      puVar26 = pBVar14->d;
      uVar21 = a->d[lVar24 + -1];
      if (iVar11 != 1) {
        uVar16 = a->d[lVar24 + -2];
      }
      lVar17 = bn_wexpand(param_1,iVar12);
      if (lVar17 != 0) {
        uVar2 = *(uint *)(param_3 + 0x10);
        param_1->neg = uVar2 ^ param_4->neg;
        param_1->top = iVar12;
        puVar25 = param_1->d;
        lVar17 = bn_wexpand(pBVar13,iVar11 + 1);
        if (lVar17 != 0) {
          puVar27 = puVar26 + (long)iVar23 + -1;
          local_90 = (long *)((long)puVar25 + local_48);
          puVar26 = (ulong *)((long)puVar26 + local_48);
          plVar1 = local_90 + -(long)iVar12;
          do {
            w = 0xffffffffffffffff;
            if (uVar21 != *puVar27) {
              uVar18 = 0;
              if (puVar26 != puVar27) {
                uVar18 = puVar27[-2];
              }
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar21;
              auVar5._8_8_ = *puVar27;
              auVar5._0_8_ = puVar27[-1];
              w = SUB168(auVar5 / auVar4,0);
              uVar19 = SUB168(auVar5 % auVar4,0);
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar16;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = w;
              auVar8 = auVar6 * auVar7;
              if ((uVar19 <= auVar8._8_8_) &&
                 (((uVar18 < auVar8._0_8_ || (uVar19 != auVar8._8_8_)) &&
                  (w = w - 1, !CARRY8(uVar19,uVar21))))) {
                while( true ) {
                  uVar19 = uVar19 + uVar21;
                  uVar22 = auVar8._8_8_ - (ulong)(auVar8._0_8_ < uVar16);
                  uVar20 = auVar8._0_8_ - uVar16;
                  auVar8._8_8_ = uVar22;
                  auVar8._0_8_ = uVar20;
                  if (uVar22 < uVar19) break;
                  if (((uVar22 == uVar19) && (uVar20 <= uVar18)) ||
                     (w = w - 1, CARRY8(uVar19,uVar21))) break;
                }
              }
            }
            puVar26 = puVar26 + -1;
            uVar18 = bn_mul_words(pBVar13->d,a->d,iVar11,w);
            puVar25 = pBVar13->d;
            puVar25[lVar24] = uVar18;
            uVar18 = bn_sub_words(puVar26,puVar26,puVar25,iVar11 + 1);
            if (iVar11 < 1) {
              puVar25 = pBVar13->d;
            }
            else {
              lVar17 = 0;
              puVar3 = a->d;
              puVar25 = pBVar13->d;
              do {
                puVar25[lVar17] = puVar3[lVar17] & -uVar18;
                lVar17 = lVar17 + 1;
              } while (lVar24 != lVar17);
            }
            uVar19 = bn_add_words(puVar26,puVar26,puVar25,iVar11);
            local_90 = local_90 + -1;
            *puVar27 = *puVar27 + uVar19;
            puVar27 = puVar27 + -1;
            *local_90 = w - uVar18;
            if (local_90 == plVar1) {
              pBVar14->neg = uVar2;
              pBVar14->top = iVar11;
              if (param_2 != 0) {
                bn_rshift_fixed_top(param_2,pBVar14,iVar10);
              }
              BN_CTX_end(param_5);
              return 1;
            }
          } while( true );
        }
      }
    }
  }
LAB_005af6e0:
  BN_CTX_end(param_5);
  return 0;
}

