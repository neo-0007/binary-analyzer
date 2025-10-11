
DSA * ossl_b2i_DSA_after_header(long *param_1,int param_2,int param_3)

{
  int iVar1;
  DSA *r;
  BIGNUM *m;
  ulong uVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *p;
  BIGNUM *r_00;
  BN_CTX *ctx;
  uint uVar3;
  long local_50;
  
  uVar3 = param_2 + 7U >> 3;
  local_50 = *param_1;
  r = DSA_new();
  if ((r == (DSA *)0x0) || (m = (BIGNUM *)BN_lebin2bn(local_50,uVar3,0), m == (BIGNUM *)0x0)) {
    r_00 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    m = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    goto LAB_00544d00;
  }
  uVar2 = (ulong)uVar3;
  local_50 = local_50 + uVar2;
  a = (BIGNUM *)BN_lebin2bn(local_50,0x14,0);
  if (a == (BIGNUM *)0x0) {
    r_00 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    goto LAB_00544d00;
  }
  local_50 = local_50 + 0x14;
  a_00 = (BIGNUM *)BN_lebin2bn(local_50,uVar3,0);
  if (a_00 == (BIGNUM *)0x0) {
    r_00 = (BIGNUM *)0x0;
    p = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    goto LAB_00544d00;
  }
  local_50 = local_50 + uVar2;
  if (param_3 == 0) {
    p = (BIGNUM *)BN_lebin2bn(local_50,0x14,0);
    if (p == (BIGNUM *)0x0) {
      r_00 = (BIGNUM *)0x0;
      ctx = (BN_CTX *)0x0;
      goto LAB_00544d00;
    }
    BN_set_flags(p,4);
    r_00 = BN_new();
    if (r_00 != (BIGNUM *)0x0) {
      ctx = BN_CTX_new();
      if ((ctx == (BN_CTX *)0x0) || (iVar1 = BN_mod_exp(r_00,a_00,p,m,ctx), iVar1 == 0))
      goto LAB_00544d00;
      local_50 = local_50 + 0x14;
      BN_CTX_free(ctx);
      goto LAB_00544ca9;
    }
  }
  else {
    r_00 = (BIGNUM *)BN_lebin2bn(local_50,uVar3,0);
    if (r_00 == (BIGNUM *)0x0) {
      p = (BIGNUM *)0x0;
      ctx = (BN_CTX *)0x0;
      goto LAB_00544d00;
    }
    local_50 = local_50 + uVar2;
    p = (BIGNUM *)0x0;
LAB_00544ca9:
    iVar1 = DSA_set0_pqg(r,m,a,a_00);
    if (iVar1 != 0) {
      iVar1 = DSA_set0_key(r,r_00,p);
      if (iVar1 != 0) {
        *param_1 = local_50;
        return r;
      }
      a_00 = (BIGNUM *)0x0;
      a = (BIGNUM *)0x0;
      m = (BIGNUM *)0x0;
    }
  }
  ctx = (BN_CTX *)0x0;
LAB_00544d00:
  ERR_new();
  ERR_set_debug("../crypto/pem/pvkfmt.c",0x1ad,"ossl_b2i_DSA_after_header");
  ERR_set_error(9,0xc0100,0);
  DSA_free(r);
  BN_free(m);
  BN_free(a);
  BN_free(a_00);
  BN_free(r_00);
  BN_free(p);
  BN_CTX_free(ctx);
  return (DSA *)0x0;
}

