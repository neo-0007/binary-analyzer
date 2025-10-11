
int BN_mod_exp_mont(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  ulong *puVar1;
  ulong *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  BIGNUM *pBVar8;
  BIGNUM *a_00;
  BIGNUM *pBVar9;
  long lVar10;
  BIGNUM **ppBVar11;
  int iVar12;
  long in_FS_OFFSET;
  BN_MONT_CTX *local_190;
  uint local_184;
  int local_170;
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = BN_get_flags(p,4);
  if (((iVar4 != 0) || (iVar4 = BN_get_flags(a,4), iVar4 != 0)) ||
     (iVar4 = BN_get_flags(m,4), iVar4 != 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      iVar4 = BN_mod_exp_mont_consttime(r,a,p,m,ctx,m_ctx);
      return iVar4;
    }
    goto LAB_005b18e5;
  }
  iVar4 = BN_is_odd(m);
  if (iVar4 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp.c",0x13c,"BN_mod_exp_mont");
    ERR_set_error(3,0x66,0);
    uVar5 = 0;
  }
  else {
    iVar4 = BN_num_bits(p);
    if (iVar4 == 0) {
      iVar4 = BN_abs_is_word(m,1);
      if (iVar4 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar4 = BN_set_word(r,1);
          return iVar4;
        }
        goto LAB_005b18e5;
      }
      BN_zero_ex(r);
      uVar5 = 1;
    }
    else {
      BN_CTX_start(ctx);
      pBVar8 = BN_CTX_get(ctx);
      a_00 = BN_CTX_get(ctx);
      pBVar9 = BN_CTX_get(ctx);
      local_148[0] = pBVar9;
      if (pBVar9 == (BIGNUM *)0x0) {
        local_190 = (BN_MONT_CTX *)0x0;
        uVar5 = 0;
        goto LAB_005b1560;
      }
      local_190 = m_ctx;
      if (m_ctx == (BN_MONT_CTX *)0x0) {
        local_190 = BN_MONT_CTX_new();
        if (local_190 == (BN_MONT_CTX *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = BN_MONT_CTX_set(local_190,m,ctx);
          if (uVar5 != 0) goto LAB_005b137e;
        }
LAB_005b1630:
        BN_MONT_CTX_free(local_190);
      }
      else {
LAB_005b137e:
        if ((((a->neg != 0) || (iVar6 = BN_ucmp(a,m), -1 < iVar6)) &&
            (uVar5 = BN_nnmod(pBVar9,a,m,ctx), a = pBVar9, uVar5 == 0)) ||
           (uVar5 = bn_to_mont_fixed_top(pBVar9,a,local_190,ctx), uVar5 == 0)) goto LAB_005b1560;
        if (iVar4 < 0x2a0) {
          if (0xef < iVar4) {
            local_170 = 5;
            goto LAB_005b1410;
          }
          if (0x4f < iVar4) {
            local_170 = 4;
            goto LAB_005b1410;
          }
          if (0x17 < iVar4) {
            local_170 = 3;
            goto LAB_005b1410;
          }
          local_170 = 1;
        }
        else {
          local_170 = 6;
LAB_005b1410:
          uVar5 = bn_mul_mont_fixed_top(pBVar8,pBVar9,pBVar9,local_190,ctx);
          if (uVar5 == 0) goto LAB_005b1560;
          ppBVar11 = local_148;
          do {
            pBVar9 = BN_CTX_get(ctx);
            ppBVar11[1] = pBVar9;
            if (pBVar9 == (BIGNUM *)0x0) goto LAB_005b16eb;
            iVar6 = bn_mul_mont_fixed_top(pBVar9,*ppBVar11,pBVar8,local_190);
            if (iVar6 == 0) {
              uVar5 = 0;
              goto LAB_005b1560;
            }
            ppBVar11 = ppBVar11 + 1;
          } while (ppBVar11 != local_148 + (ulong)((1 << ((char)local_170 - 1U & 0x1f)) - 2) + 1);
        }
        iVar6 = m->top;
        if ((long)m->d[(long)iVar6 + -1] < 0) {
          lVar10 = bn_wexpand(a_00,iVar6);
          if (lVar10 != 0) {
            puVar1 = m->d;
            puVar2 = a_00->d;
            *puVar2 = -*puVar1;
            if (1 < iVar6) {
              lVar10 = 1;
              do {
                puVar2[lVar10] = ~puVar1[lVar10];
                lVar10 = lVar10 + 1;
              } while (iVar6 != lVar10);
            }
            a_00->top = iVar6;
            goto LAB_005b14ed;
          }
LAB_005b16eb:
          uVar5 = 0;
        }
        else {
          pBVar8 = BN_value_one();
          uVar5 = bn_to_mont_fixed_top(a_00,pBVar8,local_190,ctx);
          if (uVar5 != 0) {
LAB_005b14ed:
            bVar3 = true;
            iVar4 = iVar4 + -1;
            while( true ) {
              while (iVar6 = BN_is_bit_set(p,iVar4), iVar6 == 0) {
                if ((!bVar3) &&
                   (uVar5 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx), uVar5 == 0))
                goto LAB_005b1560;
                if (iVar4 == 0) goto LAB_005b1531;
                iVar4 = iVar4 + -1;
              }
              if (local_170 == 1) {
                local_184 = 1;
                iVar6 = 0;
              }
              else if (iVar4 < 1) {
                local_184 = 1;
                iVar6 = 0;
              }
              else {
                iVar12 = 1;
                iVar6 = 0;
                local_184 = 1;
                do {
                  iVar7 = BN_is_bit_set(p,iVar4 - iVar12);
                  if (iVar7 != 0) {
                    local_184 = local_184 << ((char)iVar12 - (char)iVar6 & 0x1fU) | 1;
                    iVar6 = iVar12;
                  }
                  iVar12 = iVar12 + 1;
                } while ((local_170 != iVar12) && (iVar12 != iVar4 + 1));
              }
              if (!bVar3) {
                iVar12 = 0;
                do {
                  iVar7 = bn_mul_mont_fixed_top(a_00,a_00,a_00,local_190,ctx);
                  if (iVar7 == 0) {
                    uVar5 = 0;
                    goto LAB_005b1560;
                  }
                  iVar12 = iVar12 + 1;
                } while (iVar6 + 1 != iVar12);
              }
              uVar5 = bn_mul_mont_fixed_top(a_00,a_00,local_148[(int)local_184 >> 1],local_190,ctx);
              if (uVar5 == 0) goto LAB_005b1560;
              iVar4 = iVar4 - (iVar6 + 1);
              if (iVar4 < 0) break;
              bVar3 = false;
            }
LAB_005b1531:
            iVar4 = BN_from_montgomery(r,a_00,local_190,ctx);
            uVar5 = (uint)(iVar4 != 0);
          }
        }
LAB_005b1560:
        if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_005b1630;
      }
      BN_CTX_end(ctx);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_005b18e5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

