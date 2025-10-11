
BN_BLINDING * RSA_setup_blinding(RSA *rsa,BN_CTX *ctx)

{
  BIGNUM *a;
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BN_BLINDING *pBVar4;
  BN_CTX *ctx_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *b;
  BIGNUM *pBVar5;
  undefined8 uVar6;
  
  ctx_00 = ctx;
  if ((ctx == (BN_CTX *)0x0) &&
     (ctx_00 = (BN_CTX *)BN_CTX_new_ex(rsa->version), ctx_00 == (BN_CTX *)0x0)) {
    return (BN_BLINDING *)0x0;
  }
  BN_CTX_start(ctx_00);
  pBVar2 = BN_CTX_get(ctx_00);
  if (pBVar2 == (BIGNUM *)0x0) {
    ERR_new();
    uVar6 = 0x84;
    pBVar2 = (BIGNUM *)0x0;
  }
  else {
    pBVar3 = rsa->d;
    pBVar2 = pBVar3;
    if (pBVar3 == (BIGNUM *)0x0) {
      pBVar2 = rsa->p;
      pBVar5 = rsa->q;
      a = rsa->dmp1;
      if ((pBVar2 != (BIGNUM *)0x0 && pBVar5 != (BIGNUM *)0x0) && (a != (BIGNUM *)0x0)) {
        BN_CTX_start(ctx_00);
        r = BN_CTX_get(ctx_00);
        r_00 = BN_CTX_get(ctx_00);
        r_01 = BN_CTX_get(ctx_00);
        if (r_01 != (BIGNUM *)0x0) {
          b = BN_value_one();
          iVar1 = BN_sub(r_00,pBVar5,b);
          if (iVar1 != 0) {
            pBVar5 = BN_value_one();
            iVar1 = BN_sub(r_01,a,pBVar5);
            if ((iVar1 != 0) && (iVar1 = BN_mul(r,r_00,r_01,ctx_00), iVar1 != 0)) {
              pBVar2 = BN_mod_inverse((BIGNUM *)0x0,pBVar2,r,ctx_00);
              BN_CTX_end(ctx_00);
              if (pBVar2 != (BIGNUM *)0x0) goto LAB_00555c7d;
              goto LAB_00555de0;
            }
          }
        }
        BN_CTX_end(ctx_00);
      }
LAB_00555de0:
      ERR_new();
      pBVar4 = (BN_BLINDING *)0x0;
      ERR_set_debug("../crypto/rsa/rsa_crpt.c",0x8b,"RSA_setup_blinding");
      ERR_set_error(4,0x8c,0);
      goto LAB_00555cda;
    }
LAB_00555c7d:
    pBVar3 = BN_new();
    if (pBVar3 != (BIGNUM *)0x0) {
      BN_with_flags(pBVar3,rsa->e,4);
      pBVar4 = BN_BLINDING_create_param
                         ((BN_BLINDING *)0x0,pBVar2,pBVar3,ctx_00,
                          *(bn_mod_exp **)(rsa->engine + 0x30),*(BN_MONT_CTX **)(rsa + 1));
      BN_free(pBVar3);
      pBVar3 = pBVar2;
      if (pBVar4 == (BN_BLINDING *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_crpt.c",0xa1,"RSA_setup_blinding");
        ERR_set_error(4,0x80003,0);
      }
      else {
        BN_BLINDING_set_current_thread(pBVar4);
      }
      goto LAB_00555cda;
    }
    ERR_new();
    uVar6 = 0x96;
  }
  pBVar4 = (BN_BLINDING *)0x0;
  ERR_set_debug("../crypto/rsa/rsa_crpt.c",uVar6,"RSA_setup_blinding");
  ERR_set_error(4,0xc0100,0);
  pBVar3 = pBVar2;
LAB_00555cda:
  BN_CTX_end(ctx_00);
  if (ctx_00 != ctx) {
    BN_CTX_free(ctx_00);
  }
  if (rsa->d != pBVar3) {
    BN_free(pBVar3);
  }
  return pBVar4;
}

