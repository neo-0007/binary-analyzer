
int BN_mod_exp2_mont(BIGNUM *r,BIGNUM *a1,BIGNUM *p1,BIGNUM *a2,BIGNUM *p2,BIGNUM *m,BN_CTX *ctx,
                    BN_MONT_CTX *m_ctx)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int n;
  int iVar6;
  int iVar7;
  BIGNUM *pBVar8;
  BIGNUM *r_00;
  BIGNUM *pBVar9;
  BIGNUM *rem;
  BIGNUM **ppBVar10;
  int iVar11;
  int n_00;
  long in_FS_OFFSET;
  bool bVar12;
  BIGNUM *local_298;
  int local_28c;
  BN_MONT_CTX *local_288;
  int local_260;
  BIGNUM *local_248 [32];
  BIGNUM *local_148 [33];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_is_odd(m);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp2.c",0x24,"BN_mod_exp2_mont");
    ERR_set_error(3,0x66,0);
    uVar4 = 0;
  }
  else {
    local_28c = BN_num_bits(p1);
    iVar2 = BN_num_bits(p2);
    if (iVar2 == 0 && local_28c == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar2 = BN_set_word(r,1);
        return iVar2;
      }
      goto LAB_005b2ebb;
    }
    BN_CTX_start(ctx);
    pBVar8 = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    pBVar9 = BN_CTX_get(ctx);
    local_248[0] = pBVar9;
    rem = BN_CTX_get(ctx);
    local_148[0] = rem;
    if (rem == (BIGNUM *)0x0) {
      local_288 = (BN_MONT_CTX *)0x0;
      uVar4 = 0;
      goto LAB_005b2b70;
    }
    local_288 = m_ctx;
    if (m_ctx == (BN_MONT_CTX *)0x0) {
      local_288 = BN_MONT_CTX_new();
      if (local_288 == (BN_MONT_CTX *)0x0) {
        uVar4 = 0;
      }
      else {
        iVar3 = BN_MONT_CTX_set(local_288,m,ctx);
        if (iVar3 != 0) goto LAB_005b26f8;
        uVar4 = 0;
      }
LAB_005b2c4a:
      BN_MONT_CTX_free(local_288);
    }
    else {
LAB_005b26f8:
      local_260 = 6;
      if (((local_28c < 0x2a0) && (local_260 = 5, local_28c < 0xf0)) &&
         (local_260 = 4, local_28c < 0x50)) {
        local_260 = (0x17 < local_28c) + 1 + (uint)(0x17 < local_28c);
      }
      iVar3 = 6;
      if (((iVar2 < 0x2a0) && (iVar3 = 5, iVar2 < 0xf0)) && (iVar3 = 4, iVar2 < 0x50)) {
        iVar3 = (0x17 < iVar2) + 1 + (uint)(0x17 < iVar2);
      }
      if (((a1->neg == 0) && (iVar5 = BN_ucmp(a1,m), iVar5 < 0)) ||
         (uVar4 = BN_div((BIGNUM *)0x0,pBVar9,a1,m,ctx), a1 = pBVar9, uVar4 != 0)) {
        iVar5 = BN_is_zero(a1);
        if (iVar5 == 0) {
          uVar4 = BN_to_montgomery(pBVar9,a1,local_288,ctx);
          if (uVar4 != 0) {
            if (local_260 != 1) {
              uVar4 = BN_mod_mul_montgomery(pBVar8,pBVar9,pBVar9,local_288,ctx);
              if (uVar4 == 0) goto LAB_005b2b70;
              ppBVar10 = local_248;
              do {
                pBVar9 = BN_CTX_get(ctx);
                ppBVar10[1] = pBVar9;
                if (pBVar9 == (BIGNUM *)0x0) goto LAB_005b2d40;
                uVar4 = BN_mod_mul_montgomery(pBVar9,*ppBVar10,pBVar8,local_288,ctx);
                if (uVar4 == 0) goto LAB_005b2b70;
                ppBVar10 = ppBVar10 + 1;
              } while (ppBVar10 != local_248 + (ulong)((1 << ((char)local_260 - 1U & 0x1f)) - 2) + 1
                      );
            }
            if (((a2->neg == 0) && (iVar5 = BN_ucmp(a2,m), local_298 = a2, iVar5 < 0)) ||
               (uVar4 = BN_div((BIGNUM *)0x0,rem,a2,m,ctx), local_298 = rem, uVar4 != 0)) {
              iVar5 = BN_is_zero(local_298);
              if (iVar5 != 0) goto LAB_005b2b60;
              uVar4 = BN_to_montgomery(rem,local_298,local_288,ctx);
              if (uVar4 != 0) {
                if (iVar3 != 1) {
                  uVar4 = BN_mod_mul_montgomery(pBVar8,rem,rem,local_288,ctx);
                  if (uVar4 == 0) goto LAB_005b2b70;
                  ppBVar10 = local_148;
                  do {
                    pBVar9 = BN_CTX_get(ctx);
                    ppBVar10[1] = pBVar9;
                    if (pBVar9 == (BIGNUM *)0x0) goto LAB_005b2d40;
                    uVar4 = BN_mod_mul_montgomery(pBVar9,*ppBVar10,pBVar8,local_288,ctx);
                    if (uVar4 == 0) goto LAB_005b2b70;
                    ppBVar10 = ppBVar10 + 1;
                  } while (local_148 + (ulong)((1 << ((char)iVar3 - 1U & 0x1f)) - 2) + 1 != ppBVar10
                          );
                }
                pBVar8 = BN_value_one();
                uVar4 = BN_to_montgomery(r_00,pBVar8,local_288,ctx);
                if (uVar4 != 0) {
                  if (local_28c < iVar2) {
                    local_28c = iVar2;
                  }
                  iVar2 = local_28c + -1;
                  if (-1 < iVar2) {
                    local_28c = local_28c + -2;
                    iVar5 = 0;
                    iVar6 = 0;
                    n_00 = 0;
                    bVar1 = true;
                    n = 0;
                    do {
                      bVar12 = true;
                      if (iVar5 == 0) {
                        iVar5 = BN_is_bit_set(p1,iVar2);
                        if (iVar5 != 0) {
                          n_00 = (1 - local_260) + iVar2;
                          while (iVar5 = BN_is_bit_set(p1,n_00), iVar5 == 0) {
                            n_00 = n_00 + 1;
                          }
                          if (local_28c < n_00) {
                            bVar12 = true;
                            iVar5 = 1;
                          }
                          else {
                            iVar5 = 1;
                            iVar11 = local_28c;
                            do {
                              iVar7 = BN_is_bit_set(p1,iVar11);
                              iVar5 = (iVar5 * 2 + 1) - (uint)(iVar7 == 0);
                              iVar11 = iVar11 + -1;
                            } while (n_00 <= iVar11);
                            bVar12 = iVar5 != 0;
                          }
                          goto LAB_005b2a20;
                        }
                        iVar5 = 0;
                        if (iVar6 == 0) {
                          iVar5 = BN_is_bit_set(p2,iVar2);
                          if (iVar5 == 0) {
                            iVar5 = 0;
                            goto LAB_005b2b00;
                          }
                          iVar5 = 0;
                          bVar12 = false;
                          goto LAB_005b2de0;
                        }
LAB_005b2a44:
                        if (iVar2 == n) {
                          uVar4 = BN_mod_mul_montgomery
                                            (r_00,r_00,local_148[iVar6 >> 1],local_288,ctx);
                          if (uVar4 == 0) goto LAB_005b2b70;
                          if (iVar2 != 0) {
                            iVar6 = 0;
                            goto LAB_005b2a85;
                          }
                          break;
                        }
LAB_005b2b00:
                        if (iVar2 == 0) break;
                        if (!bVar1) goto LAB_005b2a85;
                      }
                      else {
LAB_005b2a20:
                        bVar12 = (bool)(n_00 == iVar2 & bVar12);
                        if (iVar6 != 0) {
LAB_005b2a32:
                          if (bVar12) {
                            uVar4 = BN_mod_mul_montgomery
                                              (r_00,r_00,local_248[iVar5 >> 1],local_288,ctx);
                            if (uVar4 == 0) goto LAB_005b2b70;
                            bVar1 = false;
                            iVar5 = 0;
                          }
                          if (iVar6 != 0) goto LAB_005b2a44;
                          goto LAB_005b2b00;
                        }
                        iVar6 = BN_is_bit_set(p2,iVar2);
                        if (iVar6 != 0) {
LAB_005b2de0:
                          n = (1 - iVar3) + iVar2;
                          while (iVar6 = BN_is_bit_set(p2,n), iVar6 == 0) {
                            n = n + 1;
                          }
                          iVar6 = 1;
                          if (n <= local_28c) {
                            iVar6 = 1;
                            iVar11 = local_28c;
                            do {
                              iVar7 = BN_is_bit_set(p2,iVar11);
                              iVar6 = (iVar6 * 2 + 1) - (uint)(iVar7 == 0);
                              iVar11 = iVar11 + -1;
                            } while (n <= iVar11);
                          }
                          goto LAB_005b2a32;
                        }
                        iVar6 = 0;
                        if (!bVar12) goto LAB_005b2b00;
                        uVar4 = BN_mod_mul_montgomery(r_00,r_00,local_248[iVar5 >> 1],local_288,ctx)
                        ;
                        if (uVar4 == 0) goto LAB_005b2b70;
                        if (iVar2 == 0) break;
                        iVar5 = 0;
LAB_005b2a85:
                        uVar4 = BN_mod_mul_montgomery(r_00,r_00,r_00,local_288,ctx);
                        if (uVar4 == 0) goto LAB_005b2b70;
                        bVar1 = false;
                      }
                      iVar2 = iVar2 + -1;
                      local_28c = local_28c + -1;
                    } while( true );
                  }
                  iVar2 = BN_from_montgomery(r,r_00,local_288,ctx);
                  uVar4 = (uint)(iVar2 != 0);
                }
              }
            }
          }
        }
        else {
LAB_005b2b60:
          BN_zero_ex(r);
          uVar4 = 1;
        }
      }
LAB_005b2b70:
      if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_005b2c4a;
    }
    BN_CTX_end(ctx);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_005b2ebb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
LAB_005b2d40:
  uVar4 = 0;
  goto LAB_005b2b70;
}

