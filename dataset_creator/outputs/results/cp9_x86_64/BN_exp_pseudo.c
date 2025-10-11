
int BN_exp(BIGNUM *r,BIGNUM *a,BIGNUM *p,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a_00;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  uint uVar6;
  
  iVar1 = BN_get_flags(p,4);
  if ((iVar1 != 0) || (iVar1 = BN_get_flags(a,4), iVar1 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/bn/bn_exp.c",0x30,"BN_exp");
    ERR_set_error(3,0xc0101,0);
    return 0;
  }
  BN_CTX_start(ctx);
  if ((a == r) || (pBVar5 = r, p == r)) {
    pBVar5 = BN_CTX_get(ctx);
  }
  a_00 = BN_CTX_get(ctx);
  uVar6 = 0;
  if (((pBVar5 != (BIGNUM *)0x0) && (a_00 != (BIGNUM *)0x0)) &&
     (pBVar4 = BN_copy(a_00,a), pBVar4 != (BIGNUM *)0x0)) {
    iVar1 = BN_num_bits(p);
    iVar2 = BN_is_odd(p);
    if (iVar2 == 0) {
      iVar2 = BN_set_word(pBVar5,1);
      if (iVar2 == 0) goto LAB_005afd98;
    }
    else {
      pBVar4 = BN_copy(pBVar5,a);
      if (pBVar4 == (BIGNUM *)0x0) goto LAB_005afd98;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      do {
        iVar3 = BN_sqr(a_00,a_00,ctx);
        if ((iVar3 == 0) ||
           ((iVar3 = BN_is_bit_set(p,iVar2), iVar3 != 0 &&
            (iVar3 = BN_mul(pBVar5,pBVar5,a_00,ctx), iVar3 == 0)))) goto LAB_005afd98;
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
    }
    uVar6 = 1;
    if (pBVar5 != r) {
      pBVar5 = BN_copy(r,pBVar5);
      uVar6 = (uint)(pBVar5 != (BIGNUM *)0x0);
    }
  }
LAB_005afd98:
  BN_CTX_end(ctx);
  return uVar6;
}

