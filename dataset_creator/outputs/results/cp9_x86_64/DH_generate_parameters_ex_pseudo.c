
int DH_generate_parameters_ex(DH *dh,int prime_len,int generator,BN_GENCB *cb)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  ulong w;
  
  UNRECOVERED_JUMPTABLE = *(code **)&dh[1].priv_key[2].neg;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004c7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  if (10000 < prime_len) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_gen.c",0xa3,"dh_builtin_genparams");
    ERR_set_error(5,0x67,0);
    return 0;
  }
  if (prime_len < 0x200) {
    ERR_new();
    ERR_set_debug("../crypto/dh/dh_gen.c",0xa8,"dh_builtin_genparams");
    ERR_set_error(5,0x7e,0);
    return 0;
  }
  ctx = BN_CTX_new();
  if (ctx != (BN_CTX *)0x0) {
    BN_CTX_start(ctx);
    a = BN_CTX_get(ctx);
    a_00 = BN_CTX_get(ctx);
    if (a_00 != (BIGNUM *)0x0) {
      if (dh->p == (BIGNUM *)0x0) {
        pBVar2 = BN_new();
        dh->p = pBVar2;
        if (pBVar2 == (BIGNUM *)0x0) goto LAB_004c802e;
      }
      if (dh->length == 0) {
        pBVar2 = BN_new();
        dh->length = (long)pBVar2;
        if (pBVar2 == (BIGNUM *)0x0) goto LAB_004c802e;
      }
      if (generator < 2) {
        ERR_new();
        ERR_set_debug("../crypto/dh/dh_gen.c",0xbc,"dh_builtin_genparams");
        ERR_set_error(5,0x65,0);
      }
      else if (generator == 2) {
        iVar1 = BN_set_word(a,0x18);
        if (iVar1 != 0) {
          w = 0x17;
          goto LAB_004c7f1a;
        }
      }
      else if (generator == 5) {
        iVar1 = BN_set_word(a,0x3c);
        if (iVar1 != 0) {
          w = 0x3b;
          goto LAB_004c7f1a;
        }
      }
      else {
        iVar1 = BN_set_word(a,0xc);
        if (iVar1 != 0) {
          w = 0xb;
LAB_004c7f1a:
          iVar1 = BN_set_word(a_00,w);
          if ((((iVar1 != 0) &&
               (iVar1 = BN_generate_prime_ex(dh->p,prime_len,1,a,a_00,cb), iVar1 != 0)) &&
              (iVar1 = BN_GENCB_call(cb,3,0), iVar1 != 0)) &&
             (iVar1 = BN_set_word((BIGNUM *)dh->length,(long)generator), iVar1 != 0)) {
            dh[1].method_mont_p = (BN_MONT_CTX *)((long)&(dh[1].method_mont_p)->ri + 1);
            iVar1 = 1;
            goto LAB_004c8060;
          }
        }
      }
    }
  }
LAB_004c802e:
  iVar1 = 0;
  ERR_new();
  ERR_set_debug("../crypto/dh/dh_gen.c",0xe2,"dh_builtin_genparams");
  ERR_set_error(5,0x80003,0);
LAB_004c8060:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

