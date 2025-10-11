
uint ossl_ecdsa_simple_verify_sig(uchar *param_1,int param_2,undefined8 *param_3,EC_KEY *param_4)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *q;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  BIGNUM *ret;
  BIGNUM *m;
  BIGNUM *b_00;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  EC_POINT *local_68;
  
  if ((((param_4 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_4), group == (EC_GROUP *)0x0)
       ) || (q = EC_KEY_get0_public_key(param_4), q == (EC_POINT *)0x0)) ||
     (param_3 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x172,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x7c,0);
    return 0xffffffff;
  }
  iVar1 = EC_KEY_can_sign(param_4);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x177,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x9f,0);
    return 0xffffffff;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 0x58));
  if (ctx == (BN_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x17d,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0xc0100,0);
    return 0xffffffff;
  }
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  b = BN_CTX_get(ctx);
  ret = BN_CTX_get(ctx);
  m = BN_CTX_get(ctx);
  if (m == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x186,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x80003,0);
    uVar2 = 0xffffffff;
    local_68 = (EC_POINT *)0x0;
    goto LAB_004eaacd;
  }
  b_00 = (BIGNUM *)EC_GROUP_get0_order(group);
  if (b_00 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x18c,"ossl_ecdsa_simple_verify_sig");
    uVar4 = 0x80010;
  }
  else {
    iVar1 = BN_is_zero(*param_3);
    if ((((iVar1 != 0) || (iVar1 = BN_is_negative(*param_3), iVar1 != 0)) ||
        ((iVar1 = BN_ucmp((BIGNUM *)*param_3,b_00), -1 < iVar1 ||
         ((iVar1 = BN_is_zero(param_3[1]), iVar1 != 0 ||
          (iVar1 = BN_is_negative(param_3[1]), iVar1 != 0)))))) ||
       (iVar1 = BN_ucmp((BIGNUM *)param_3[1],b_00), -1 < iVar1)) {
      ERR_new();
      ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x193,"ossl_ecdsa_simple_verify_sig");
      ERR_set_error(0x10,0x9c,0);
      local_68 = (EC_POINT *)0x0;
      uVar2 = 0;
      goto LAB_004eaacd;
    }
    iVar1 = ossl_ec_group_do_inverse_ord(group,b,param_3[1],ctx);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x199;
    }
    else {
      uVar2 = BN_num_bits(b_00);
      if ((int)uVar2 < param_2 * 8) {
        iVar1 = (int)(uVar2 + 7) / 8;
        pBVar3 = BN_bin2bn(param_1,iVar1,ret);
        if (pBVar3 == (BIGNUM *)0x0) {
LAB_004eae23:
          ERR_new();
          uVar4 = 0x1a4;
        }
        else {
          if ((iVar1 * 8 <= (int)uVar2) || (iVar1 = BN_rshift(ret,ret,8 - (uVar2 & 7)), iVar1 != 0))
          goto LAB_004eacb1;
          ERR_new();
          uVar4 = 0x1a9;
        }
      }
      else {
        pBVar3 = BN_bin2bn(param_1,param_2,ret);
        if (pBVar3 == (BIGNUM *)0x0) goto LAB_004eae23;
LAB_004eacb1:
        iVar1 = BN_mod_mul(r,ret,b,b_00,ctx);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0x1ae;
        }
        else {
          iVar1 = BN_mod_mul(b,(BIGNUM *)*param_3,b,b_00,ctx);
          if (iVar1 != 0) {
            local_68 = EC_POINT_new(group);
            if (local_68 != (EC_POINT *)0x0) {
              iVar1 = EC_POINT_mul(group,local_68,r,q,b,ctx);
              if (iVar1 == 0) {
                ERR_new();
                ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x1bc,"ossl_ecdsa_simple_verify_sig");
                uVar4 = 0x80010;
              }
              else {
                iVar1 = EC_POINT_get_affine_coordinates(group,local_68,m,0,ctx);
                if (iVar1 == 0) {
                  ERR_new();
                  ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x1c1,"ossl_ecdsa_simple_verify_sig");
                  uVar4 = 0x80010;
                }
                else {
                  iVar1 = BN_nnmod(r,m,b_00,ctx);
                  if (iVar1 != 0) {
                    iVar1 = BN_ucmp(r,(BIGNUM *)*param_3);
                    uVar2 = (uint)(iVar1 == 0);
                    goto LAB_004eaacd;
                  }
                  ERR_new();
                  ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x1c6,"ossl_ecdsa_simple_verify_sig");
                  uVar4 = 0x80003;
                }
              }
              ERR_set_error(0x10,uVar4,0);
              uVar2 = 0xffffffff;
              goto LAB_004eaacd;
            }
            ERR_new();
            ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x1b8,"ossl_ecdsa_simple_verify_sig");
            uVar4 = 0xc0100;
            goto LAB_004eadec;
          }
          ERR_new();
          uVar4 = 0x1b3;
        }
      }
    }
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar4,"ossl_ecdsa_simple_verify_sig");
    uVar4 = 0x80003;
  }
LAB_004eadec:
  ERR_set_error(0x10,uVar4,0);
  local_68 = (EC_POINT *)0x0;
  uVar2 = 0xffffffff;
LAB_004eaacd:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  EC_POINT_free(local_68);
  return uVar2;
}

