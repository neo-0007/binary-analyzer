
undefined4
ossl_ecdh_simple_compute_key(undefined8 *param_1,ulong *param_2,EC_POINT *param_3,EC_KEY *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BN_CTX *ctx;
  BIGNUM *cofactor;
  BIGNUM *b;
  EC_GROUP *group;
  EC_POINT *r;
  void *__s;
  size_t __n;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 0x58));
  if (ctx == (BN_CTX *)0x0) {
    __s = (void *)0x0;
    cofactor = (BIGNUM *)0x0;
    r = (EC_POINT *)0x0;
    uVar6 = 0;
    goto LAB_004e9992;
  }
  BN_CTX_start(ctx);
  cofactor = BN_CTX_get(ctx);
  if (cofactor == (BIGNUM *)0x0) {
    __s = (void *)0x0;
    r = (EC_POINT *)0x0;
    uVar6 = 0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x42,"ossl_ecdh_simple_compute_key");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004e9992;
  }
  b = EC_KEY_get0_private_key(param_4);
  if (b == (BIGNUM *)0x0) {
    r = (EC_POINT *)0x0;
    uVar6 = 0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x48,"ossl_ecdh_simple_compute_key");
    ERR_set_error(0x10,0x7d,0);
    __s = (void *)0x0;
    goto LAB_004e9992;
  }
  group = EC_KEY_get0_group(param_4);
  uVar1 = EC_KEY_get_flags(param_4);
  if (((uVar1 & 0x1000) != 0) &&
     ((iVar2 = EC_GROUP_get_cofactor(group,cofactor,(BN_CTX *)0x0), iVar2 == 0 ||
      (iVar2 = BN_mul(cofactor,cofactor,b,ctx), b = cofactor, iVar2 == 0)))) {
    __s = (void *)0x0;
    uVar6 = 0;
    r = (EC_POINT *)0x0;
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x55,"ossl_ecdh_simple_compute_key");
    ERR_set_error(0x10,0xc0100,0);
    goto LAB_004e9992;
  }
  r = EC_POINT_new(group);
  if (r == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x5c,"ossl_ecdh_simple_compute_key");
    uVar5 = 0xc0100;
LAB_004e9b27:
    __s = (void *)0x0;
    uVar6 = 0;
    ERR_set_error(0x10,uVar5,0);
  }
  else {
    iVar2 = EC_POINT_mul(group,r,(BIGNUM *)0x0,param_3,b,ctx);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 0x61;
    }
    else {
      iVar2 = EC_POINT_get_affine_coordinates(group,r,cofactor,0,ctx);
      if (iVar2 != 0) {
        iVar3 = EC_GROUP_get_degree(group);
        iVar2 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar2 = iVar3 + 7;
        }
        iVar4 = BN_num_bits(cofactor);
        iVar3 = iVar4 + 7;
        if (iVar4 + 7 < 0) {
          iVar3 = iVar4 + 0xe;
        }
        uVar7 = (ulong)(iVar2 >> 3);
        iVar3 = iVar3 >> 3;
        if ((ulong)(long)iVar3 <= uVar7) {
          __s = CRYPTO_malloc(iVar2 >> 3,"../crypto/ec/ecdh_ossl.c",0x79);
          if (__s == (void *)0x0) {
            ERR_new();
            uVar6 = 0;
            ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x7a,"ossl_ecdh_simple_compute_key");
            ERR_set_error(0x10,0xc0100,0);
          }
          else {
            __n = uVar7 - (long)iVar3;
            memset(__s,0,__n);
            iVar2 = BN_bn2bin(cofactor,(uchar *)((long)__s + __n));
            if (iVar3 == iVar2) {
              *param_1 = __s;
              __s = (void *)0x0;
              *param_2 = uVar7;
              uVar6 = 1;
            }
            else {
              ERR_new();
              uVar6 = 0;
              ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x80,"ossl_ecdh_simple_compute_key");
              ERR_set_error(0x10,0x80003,0);
            }
          }
          goto LAB_004e9992;
        }
        ERR_new();
        ERR_set_debug("../crypto/ec/ecdh_ossl.c",0x76,"ossl_ecdh_simple_compute_key");
        uVar5 = 0xc0103;
        goto LAB_004e9b27;
      }
      ERR_new();
      uVar5 = 0x6b;
    }
    uVar6 = 0;
    __s = (void *)0x0;
    ERR_set_debug("../crypto/ec/ecdh_ossl.c",uVar5,"ossl_ecdh_simple_compute_key");
    ERR_set_error(0x10,0x9b,0);
  }
LAB_004e9992:
  BN_clear(cofactor);
  EC_POINT_clear_free(r);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_free(__s);
  return uVar6;
}

