
int BN_div_recp(BIGNUM *dv,BIGNUM *rem,BIGNUM *m,BN_RECP_CTX *recp,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *r;
  
  BN_CTX_start(ctx);
  if (dv == (BIGNUM *)0x0) {
    dv = BN_CTX_get(ctx);
  }
  if (rem == (BIGNUM *)0x0) {
    rem = BN_CTX_get(ctx);
  }
  pBVar3 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  if (r != (BIGNUM *)0x0) {
    iVar1 = BN_ucmp(m,&recp->N);
    if (iVar1 < 0) {
      BN_zero_ex(dv);
      pBVar3 = BN_copy(rem,m);
      if (pBVar3 != (BIGNUM *)0x0) {
        BN_CTX_end(ctx);
        return 1;
      }
      BN_CTX_end(ctx);
      return 0;
    }
    iVar2 = BN_num_bits(m);
    iVar1 = recp->num_bits * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    if (recp->shift != iVar1) {
      iVar2 = BN_reciprocal(&recp->Nr,&recp->N,iVar1,ctx);
      recp->shift = iVar2;
    }
    if ((((iVar2 != -1) && (iVar2 = BN_rshift(pBVar3,m,recp->num_bits), iVar2 != 0)) &&
        (iVar2 = BN_mul(r,pBVar3,&recp->Nr,ctx), iVar2 != 0)) &&
       (iVar1 = BN_rshift(dv,r,iVar1 - recp->num_bits), iVar1 != 0)) {
      dv->neg = 0;
      iVar1 = BN_mul(r,&recp->N,dv,ctx);
      if ((iVar1 != 0) && (iVar1 = BN_usub(rem,m,r), iVar1 != 0)) {
        rem->neg = 0;
        iVar1 = 4;
        while( true ) {
          iVar2 = BN_ucmp(rem,&recp->N);
          if (iVar2 < 0) {
            iVar2 = BN_is_zero(rem);
            iVar1 = 0;
            if (iVar2 == 0) {
              iVar1 = m->neg;
            }
            rem->neg = iVar1;
            dv->neg = m->neg ^ (recp->N).neg;
            iVar1 = 1;
            goto LAB_005b724b;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) break;
          iVar2 = BN_usub(rem,rem,&recp->N);
          if ((iVar2 == 0) || (iVar2 = BN_add_word(dv,1), iVar2 == 0)) goto LAB_005b7248;
        }
        ERR_new();
        ERR_set_debug("../crypto/bn/bn_recp.c",0x95,"BN_div_recp");
        ERR_set_error(3,0x65,0);
      }
    }
  }
LAB_005b7248:
  iVar1 = 0;
LAB_005b724b:
  BN_CTX_end(ctx);
  return iVar1;
}

