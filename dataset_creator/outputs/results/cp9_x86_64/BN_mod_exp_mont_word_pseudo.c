
int BN_mod_exp_mont_word(BIGNUM *r,ulong a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  BIGNUM *a_00;
  BIGNUM *rem;
  ulong w;
  ulong w_00;
  BIGNUM *pBVar9;
  bool bVar10;
  ulong local_70;
  BN_MONT_CTX *local_60;
  
  iVar6 = BN_get_flags(p,4);
  if ((iVar6 != 0) || (iVar6 = BN_get_flags(m,4), iVar6 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp.c",0x48c,"BN_mod_exp_mont_word");
    ERR_set_error(3,0xc0101,0);
    return 0;
  }
  iVar6 = BN_is_odd(m);
  if (iVar6 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp.c",0x494,"BN_mod_exp_mont_word");
    ERR_set_error(3,0x66,0);
    return 0;
  }
  local_70 = a;
  if (m->top == 1) {
    local_70 = a % *m->d;
  }
  iVar6 = BN_num_bits(p);
  if (iVar6 == 0) {
    iVar6 = BN_abs_is_word(m,1);
    if (iVar6 == 0) {
      iVar6 = BN_set_word(r,1);
      return iVar6;
    }
LAB_005b1b61:
    BN_zero_ex(r);
    return 1;
  }
  if (local_70 == 0) goto LAB_005b1b61;
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  rem = BN_CTX_get(ctx);
  if (rem == (BIGNUM *)0x0) {
    local_60 = (BN_MONT_CTX *)0x0;
    uVar8 = 0;
LAB_005b1b08:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_005b1b14;
  }
  else {
    local_60 = m_ctx;
    if (m_ctx != (BN_MONT_CTX *)0x0) {
LAB_005b1a1d:
      iVar6 = iVar6 + -2;
      if (iVar6 < 0) {
        if (local_70 == 1) {
LAB_005b1c85:
          iVar6 = BN_set_word(r,1);
          uVar8 = (uint)(iVar6 != 0);
        }
        else {
LAB_005b1c40:
          uVar8 = BN_set_word(a_00,local_70);
          if (uVar8 != 0) {
            iVar6 = BN_to_montgomery(a_00,a_00,local_60,ctx);
            if (iVar6 != 0) goto LAB_005b1ae6;
            uVar8 = 0;
          }
        }
      }
      else {
        bVar5 = true;
        w_00 = local_70;
        do {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = w_00;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = w_00;
          w = SUB168(auVar1 * auVar3,0);
          if (SUB168(auVar1 * auVar3,8) == 0) {
            pBVar9 = rem;
            if (!bVar5) goto LAB_005b1ca8;
          }
          else {
            if (bVar5) {
              uVar8 = BN_set_word(a_00,w_00);
              if (uVar8 == 0) goto LAB_005b1b08;
              uVar8 = BN_to_montgomery(a_00,a_00,local_60,ctx);
              pBVar9 = a_00;
            }
            else {
              uVar8 = BN_mul_word(a_00,w_00);
              if (uVar8 == 0) goto LAB_005b1b08;
              uVar8 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx);
              pBVar9 = rem;
              rem = a_00;
            }
            a_00 = pBVar9;
            if (uVar8 == 0) goto LAB_005b1b08;
            w = 1;
LAB_005b1ca8:
            uVar8 = BN_mod_mul_montgomery(a_00,a_00,a_00,local_60,ctx);
            if (uVar8 == 0) goto LAB_005b1b08;
            bVar5 = false;
            pBVar9 = rem;
          }
          iVar7 = BN_is_bit_set(p,iVar6);
          rem = pBVar9;
          w_00 = w;
          if ((iVar7 != 0) &&
             (auVar2._8_8_ = 0, auVar2._0_8_ = local_70, auVar4._8_8_ = 0, auVar4._0_8_ = w,
             w_00 = SUB168(auVar2 * auVar4,0), SUB168(auVar2 * auVar4,8) != 0)) {
            if (bVar5) {
              uVar8 = BN_set_word(a_00,w);
              if ((uVar8 == 0) || (uVar8 = BN_to_montgomery(a_00,a_00,local_60,ctx), uVar8 == 0))
              goto LAB_005b1b08;
              bVar5 = false;
              w_00 = local_70;
            }
            else {
              uVar8 = BN_mul_word(a_00,w);
              if ((uVar8 == 0) ||
                 (uVar8 = BN_div((BIGNUM *)0x0,pBVar9,a_00,m,ctx), rem = a_00, a_00 = pBVar9,
                 w_00 = local_70, uVar8 == 0)) goto LAB_005b1b08;
            }
          }
          bVar10 = iVar6 != 0;
          iVar6 = iVar6 + -1;
        } while (bVar10);
        if (w_00 == 1) {
          if (bVar5) goto LAB_005b1c85;
        }
        else {
          local_70 = w_00;
          if (bVar5) goto LAB_005b1c40;
          uVar8 = BN_mul_word(a_00,w_00);
          if ((uVar8 == 0) || (uVar8 = BN_div((BIGNUM *)0x0,rem,a_00,m,ctx), a_00 = rem, uVar8 == 0)
             ) goto LAB_005b1b08;
        }
LAB_005b1ae6:
        iVar6 = BN_from_montgomery(r,a_00,local_60,ctx);
        uVar8 = (uint)(iVar6 != 0);
      }
      goto LAB_005b1b08;
    }
    local_60 = BN_MONT_CTX_new();
    if (local_60 == (BN_MONT_CTX *)0x0) {
      uVar8 = 0;
    }
    else {
      iVar7 = BN_MONT_CTX_set(local_60,m,ctx);
      if (iVar7 != 0) goto LAB_005b1a1d;
      uVar8 = 0;
    }
  }
  BN_MONT_CTX_free(local_60);
LAB_005b1b14:
  BN_CTX_end(ctx);
  return uVar8;
}

