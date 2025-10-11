
ECDSA_SIG * sm2_sig_gen(EC_KEY *param_1,BIGNUM *param_2)

{
  int iVar1;
  BIGNUM *a;
  EC_GROUP *group;
  BIGNUM *m;
  undefined8 uVar2;
  EC_POINT *r;
  BN_CTX *ctx;
  BIGNUM *n;
  BIGNUM *r_00;
  BIGNUM *b;
  BIGNUM *r_01;
  BIGNUM *r_02;
  BIGNUM *b_00;
  ECDSA_SIG *pEVar3;
  BIGNUM *local_60;
  
  a = EC_KEY_get0_private_key(param_1);
  group = EC_KEY_get0_group(param_1);
  m = (BIGNUM *)EC_GROUP_get0_order(group);
  uVar2 = ossl_ec_key_get_libctx(param_1);
  r = EC_POINT_new(group);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
  if ((r == (EC_POINT *)0x0) || (ctx == (BN_CTX *)0x0)) {
    ERR_new();
    uVar2 = 0xd8;
LAB_0057ca41:
    r_02 = (BIGNUM *)0x0;
    ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
    ERR_set_error(0x35,0xc0100,0);
    local_60 = (BIGNUM *)0x0;
  }
  else {
    BN_CTX_start(ctx);
    n = BN_CTX_get(ctx);
    r_00 = BN_CTX_get(ctx);
    b = BN_CTX_get(ctx);
    r_01 = BN_CTX_get(ctx);
    if (r_01 == (BIGNUM *)0x0) {
      ERR_new();
      uVar2 = 0xe2;
      goto LAB_0057ca41;
    }
    r_02 = BN_new();
    local_60 = BN_new();
    if ((r_02 == (BIGNUM *)0x0) || (local_60 == (BIGNUM *)0x0)) {
      ERR_new();
      uVar2 = 0xee;
    }
    else {
      do {
        do {
          do {
            iVar1 = BN_priv_rand_range_ex(n,m,0);
            if (iVar1 == 0) {
              ERR_new();
              uVar2 = 0xfd;
LAB_0057c9f9:
              ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
              ERR_set_error(0x35,0xc0103,0);
              goto LAB_0057ca18;
            }
            iVar1 = EC_POINT_mul(group,r,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
            if (iVar1 == 0) {
LAB_0057c9e8:
              ERR_new();
              uVar2 = 0x105;
              goto LAB_0057c9f9;
            }
            iVar1 = EC_POINT_get_affine_coordinates(group,r,b,0,ctx);
            if (iVar1 == 0) goto LAB_0057c9e8;
            iVar1 = BN_mod_add(r_02,param_2,b,m,ctx);
            if (iVar1 == 0) goto LAB_0057c9e8;
            iVar1 = BN_is_zero(r_02);
          } while (iVar1 != 0);
          iVar1 = BN_add(r_00,r_02,n);
          if (iVar1 == 0) {
            ERR_new();
            uVar2 = 0x10e;
            goto LAB_0057c9f9;
          }
          iVar1 = BN_cmp(r_00,m);
        } while (iVar1 == 0);
        b_00 = BN_value_one();
        iVar1 = BN_add(local_60,a,b_00);
        if (iVar1 == 0) {
LAB_0057caa8:
          ERR_new();
          ERR_set_debug("../crypto/sm2/sm2_sign.c",0x11a,"sm2_sig_gen");
          ERR_set_error(0x35,0x80003,0);
          goto LAB_0057ca18;
        }
        iVar1 = ossl_ec_group_do_inverse_ord(group,local_60,local_60,ctx);
        if (iVar1 == 0) goto LAB_0057caa8;
        iVar1 = BN_mod_mul(r_01,a,r_02,m,ctx);
        if (iVar1 == 0) goto LAB_0057caa8;
        iVar1 = BN_sub(r_01,n,r_01);
        if (iVar1 == 0) goto LAB_0057caa8;
        iVar1 = BN_mod_mul(local_60,local_60,r_01,m,ctx);
        if (iVar1 == 0) goto LAB_0057caa8;
        iVar1 = BN_is_zero(local_60);
      } while (iVar1 != 0);
      pEVar3 = ECDSA_SIG_new();
      if (pEVar3 != (ECDSA_SIG *)0x0) {
        ECDSA_SIG_set0(pEVar3,r_02,local_60);
        goto LAB_0057c9c1;
      }
      ERR_new();
      uVar2 = 0x124;
    }
    ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_gen");
    ERR_set_error(0x35,0xc0100,0);
  }
LAB_0057ca18:
  pEVar3 = (ECDSA_SIG *)0x0;
  BN_free(r_02);
  BN_free(local_60);
LAB_0057c9c1:
  BN_CTX_free(ctx);
  EC_POINT_free(r);
  return pEVar3;
}

