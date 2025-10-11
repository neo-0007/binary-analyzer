
undefined4
ecdsa_sign_setup(EC_KEY *param_1,BN_CTX *param_2,undefined8 *param_3,undefined8 *param_4,
                long param_5,int param_6)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  long lVar4;
  BN_CTX *ctx;
  undefined8 uVar5;
  undefined4 uVar6;
  EC_POINT *local_48;
  
  if ((param_1 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_1), group == (EC_GROUP *)0x0))
  {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x58,"ecdsa_sign_setup");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  pBVar3 = EC_KEY_get0_private_key(param_1);
  if (pBVar3 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x5c,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x7d,0);
    return 0;
  }
  iVar1 = EC_KEY_can_sign(param_1);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x61,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x9f,0);
    return 0;
  }
  ctx = param_2;
  if ((param_2 == (BN_CTX *)0x0) &&
     (ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0x58)), ctx == (BN_CTX *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x67,"ecdsa_sign_setup");
    ERR_set_error(0x10,0xc0100,0);
    return 0;
  }
  a = (BIGNUM *)BN_secure_new();
  a_00 = BN_new();
  a_01 = BN_new();
  if ((a == (BIGNUM *)0x0 || a_00 == (BIGNUM *)0x0) || (a_01 == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdsa_ossl.c",0x70,"ecdsa_sign_setup");
    ERR_set_error(0x10,0xc0100,0);
    local_48 = (EC_POINT *)0x0;
  }
  else {
    local_48 = EC_POINT_new(group);
    if (local_48 == (EC_POINT *)0x0) {
      ERR_new();
      uVar5 = 0x74;
LAB_004e9f21:
      ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar5,"ecdsa_sign_setup");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      a_02 = (BIGNUM *)EC_GROUP_get0_order(group);
      iVar1 = BN_num_bits(a_02);
      iVar2 = BN_set_bit(a,iVar1);
      if (((iVar2 != 0) && (iVar2 = BN_set_bit(a_00,iVar1), iVar2 != 0)) &&
         (iVar1 = BN_set_bit(a_01,iVar1), iVar1 != 0)) {
        lVar4 = (long)param_6;
        do {
          do {
            if (param_5 == 0) {
              iVar1 = BN_priv_rand_range_ex(a,a_02,0);
              if (iVar1 == 0) {
                ERR_new();
                uVar5 = 0x8b;
LAB_004e9d6c:
                ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar5,"ecdsa_sign_setup");
                ERR_set_error(0x10,0x9e,0);
                goto LAB_004e9e49;
              }
            }
            else {
              iVar1 = BN_generate_dsa_nonce(a,a_02,pBVar3,param_5,lVar4,ctx,lVar4);
              if (iVar1 == 0) {
                ERR_new();
                uVar5 = 0x86;
                goto LAB_004e9d6c;
              }
            }
            iVar1 = BN_is_zero(a);
          } while (iVar1 != 0);
          iVar1 = EC_POINT_mul(group,local_48,a,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0x93;
            goto LAB_004e9f21;
          }
          iVar1 = EC_POINT_get_affine_coordinates(group,local_48,a_01,0);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0x98;
            goto LAB_004e9f21;
          }
          iVar1 = BN_nnmod(a_00,a_01,a_02,ctx);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0x9d;
            goto LAB_004ea05b;
          }
          iVar1 = BN_is_zero(a_00);
        } while (iVar1 != 0);
        iVar1 = ossl_ec_group_do_inverse_ord(group,a,a,ctx);
        if (iVar1 != 0) {
          BN_clear_free((BIGNUM *)*param_4);
          BN_clear_free((BIGNUM *)*param_3);
          *param_4 = a_00;
          *param_3 = a;
          uVar6 = 1;
          goto LAB_004e9e5e;
        }
        ERR_new();
        uVar5 = 0xa4;
LAB_004ea05b:
        ERR_set_debug("../crypto/ec/ecdsa_ossl.c",uVar5,"ecdsa_sign_setup");
        ERR_set_error(0x10,0x80003,0);
      }
    }
  }
LAB_004e9e49:
  uVar6 = 0;
  BN_clear_free(a);
  BN_clear_free(a_00);
LAB_004e9e5e:
  if (ctx != param_2) {
    BN_CTX_free(ctx);
  }
  EC_POINT_free(local_48);
  BN_clear_free(a_01);
  return uVar6;
}

