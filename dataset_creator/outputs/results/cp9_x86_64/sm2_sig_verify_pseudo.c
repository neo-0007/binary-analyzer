
bool sm2_sig_verify(EC_KEY *param_1,undefined8 param_2,BIGNUM *param_3)

{
  int iVar1;
  EC_GROUP *group;
  BIGNUM *a;
  undefined8 uVar2;
  BN_CTX *ctx;
  EC_POINT *r;
  BIGNUM *r_00;
  BIGNUM *b;
  BIGNUM *pBVar3;
  EC_POINT *q;
  long in_FS_OFFSET;
  bool bVar4;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  group = EC_KEY_get0_group(param_1);
  a = (BIGNUM *)EC_GROUP_get0_order(group);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  uVar2 = ossl_ec_key_get_libctx(param_1);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar2);
  r = EC_POINT_new(group);
  if ((ctx == (BN_CTX *)0x0) || (r == (EC_POINT *)0x0)) {
    ERR_new();
    uVar2 = 0x149;
  }
  else {
    BN_CTX_start(ctx);
    r_00 = BN_CTX_get(ctx);
    b = BN_CTX_get(ctx);
    if (b != (BIGNUM *)0x0) {
      ECDSA_SIG_get0(param_2,&local_50,&local_48);
      pBVar3 = BN_value_one();
      iVar1 = BN_cmp(local_50,pBVar3);
      if (iVar1 < 0) {
LAB_0057cd30:
        ERR_new();
        uVar2 = 0x165;
      }
      else {
        pBVar3 = BN_value_one();
        iVar1 = BN_cmp(local_48,pBVar3);
        if (iVar1 < 0) goto LAB_0057cd30;
        iVar1 = BN_cmp(a,local_50);
        if (iVar1 < 1) goto LAB_0057cd30;
        iVar1 = BN_cmp(a,local_48);
        if (iVar1 < 1) goto LAB_0057cd30;
        iVar1 = BN_mod_add(r_00,local_50,local_48,a,ctx);
        if (iVar1 == 0) {
          ERR_new();
          uVar2 = 0x16a;
LAB_0057ce21:
          bVar4 = false;
          ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
          ERR_set_error(0x35,0x80003,0);
          goto LAB_0057cd63;
        }
        iVar1 = BN_is_zero(r_00);
        if (iVar1 == 0) {
          q = EC_KEY_get0_public_key(param_1);
          iVar1 = EC_POINT_mul(group,r,local_48,q,r_00,ctx);
          if (iVar1 != 0) {
            iVar1 = EC_POINT_get_affine_coordinates(group,r,b,0,ctx);
            if (iVar1 != 0) {
              iVar1 = BN_mod_add(r_00,param_3,b,a,ctx);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(local_50,r_00);
                bVar4 = iVar1 == 0;
                goto LAB_0057cd63;
              }
              ERR_new();
              uVar2 = 0x17a;
              goto LAB_0057ce21;
            }
          }
          ERR_new();
          ERR_set_debug("../crypto/sm2/sm2_sign.c",0x175,"sm2_sig_verify");
          ERR_set_error(0x35,0x80010,0);
          bVar4 = false;
          goto LAB_0057cd63;
        }
        ERR_new();
        uVar2 = 0x16f;
      }
      bVar4 = false;
      ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
      ERR_set_error(0x35,0x65,0);
      goto LAB_0057cd63;
    }
    ERR_new();
    uVar2 = 0x151;
  }
  bVar4 = false;
  ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"sm2_sig_verify");
  ERR_set_error(0x35,0xc0100,0);
LAB_0057cd63:
  EC_POINT_free(r);
  BN_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

