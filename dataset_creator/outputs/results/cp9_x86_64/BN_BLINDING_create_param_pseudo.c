
BN_BLINDING *
BN_BLINDING_create_param
          (BN_BLINDING *b,BIGNUM *e,BIGNUM *m,BN_CTX *ctx,bn_mod_exp *bn_mod_exp,BN_MONT_CTX *m_ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  long lVar3;
  BN_BLINDING *b_00;
  int iVar4;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  b_00 = b;
  if ((b != (BN_BLINDING *)0x0) ||
     (b_00 = BN_BLINDING_new((BIGNUM *)0x0,(BIGNUM *)0x0,m), b_00 != (BN_BLINDING *)0x0)) {
    if (*(long *)b_00 == 0) {
      pBVar2 = BN_new();
      *(BIGNUM **)b_00 = pBVar2;
      if (pBVar2 != (BIGNUM *)0x0) {
        lVar3 = *(long *)(b_00 + 8);
        goto joined_r0x005af080;
      }
    }
    else {
      lVar3 = *(long *)(b_00 + 8);
joined_r0x005af080:
      if (lVar3 == 0) {
        pBVar2 = BN_new();
        *(BIGNUM **)(b_00 + 8) = pBVar2;
        if (pBVar2 == (BIGNUM *)0x0) goto LAB_005aef86;
      }
      pBVar2 = *(BIGNUM **)(b_00 + 0x10);
      if (e != (BIGNUM *)0x0) {
        BN_free(pBVar2);
        pBVar2 = BN_dup(e);
        *(BIGNUM **)(b_00 + 0x10) = pBVar2;
      }
      if (pBVar2 != (BIGNUM *)0x0) {
        if (bn_mod_exp != (bn_mod_exp *)0x0) {
          *(bn_mod_exp **)(b_00 + 0x40) = bn_mod_exp;
        }
        if (m_ctx != (BN_MONT_CTX *)0x0) {
          *(BN_MONT_CTX **)(b_00 + 0x38) = m_ctx;
        }
        iVar4 = 0x21;
        do {
          iVar1 = BN_priv_rand_range_ex(*(long *)b_00,*(long *)(b_00 + 0x18),0,ctx);
          if (iVar1 == 0) goto LAB_005aef86;
          lVar3 = int_bn_mod_inverse(*(long *)(b_00 + 8),*(long *)b_00,*(long *)(b_00 + 0x18),ctx,
                                     &local_44);
          if (lVar3 != 0) {
            if ((*(code **)(b_00 + 0x40) == (code *)0x0) || (*(long *)(b_00 + 0x38) == 0)) {
              iVar4 = BN_mod_exp(*(BIGNUM **)b_00,*(BIGNUM **)b_00,*(BIGNUM **)(b_00 + 0x10),
                                 *(BIGNUM **)(b_00 + 0x18),ctx);
            }
            else {
              iVar4 = (**(code **)(b_00 + 0x40))();
            }
            if ((iVar4 == 0) ||
               ((*(long *)(b_00 + 0x38) != 0 &&
                ((iVar4 = bn_to_mont_fixed_top
                                    (*(long *)(b_00 + 8),*(long *)(b_00 + 8),*(long *)(b_00 + 0x38),
                                     ctx), iVar4 == 0 ||
                 (iVar4 = bn_to_mont_fixed_top
                                    (*(long *)b_00,*(long *)b_00,*(long *)(b_00 + 0x38),ctx),
                 iVar4 == 0)))))) goto LAB_005aef86;
            goto LAB_005aef8b;
          }
          if (local_44 == 0) goto LAB_005aef86;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        ERR_new();
        ERR_set_debug("../crypto/bn/bn_blind.c",0x11e,"BN_BLINDING_create_param");
        ERR_set_error(3,0x71,0);
      }
    }
LAB_005aef86:
    if (b != (BN_BLINDING *)0x0) goto LAB_005aef8b;
  }
  BN_BLINDING_free(b_00);
  b_00 = (BN_BLINDING *)0x0;
LAB_005aef8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return b_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

