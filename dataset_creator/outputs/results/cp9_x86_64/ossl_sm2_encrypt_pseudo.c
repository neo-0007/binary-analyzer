
undefined4
ossl_sm2_encrypt(EC_KEY *param_1,undefined8 param_2,void *param_3,size_t param_4,void *param_5,
                size_t *param_6)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  EC_GROUP *group;
  undefined8 uVar3;
  EC_POINT *q;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong cnt;
  EC_POINT *r;
  BN_CTX *ctx_00;
  BIGNUM *n;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  void *data;
  size_t sVar10;
  EVP_MD *type;
  undefined4 uVar11;
  long in_FS_OFFSET;
  void *local_100;
  EC_POINT *local_f8;
  uchar *local_f0;
  int local_c8;
  void *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  ASN1_STRING *local_58;
  ASN1_OCTET_STRING *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_5;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  group = EC_KEY_get0_group(param_1);
  uVar3 = EC_GROUP_get0_order(group);
  q = EC_KEY_get0_public_key(param_1);
  iVar1 = EVP_MD_get_size(param_2);
  uVar4 = ossl_ec_key_get_libctx(param_1);
  uVar5 = ossl_ec_key_get0_propq(param_1);
  local_50 = (ASN1_OCTET_STRING *)0x0;
  local_58 = (ASN1_STRING *)0x0;
  if ((ctx == (EVP_MD_CTX *)0x0) || (iVar1 < 1)) {
    ERR_new();
    uVar3 = 0x8e;
  }
  else {
    cnt = ec_field_size(group);
    if (cnt != 0) {
      r = EC_POINT_new(group);
      local_f8 = EC_POINT_new(group);
      ctx_00 = (BN_CTX *)BN_CTX_new_ex(uVar4);
      if ((r == (EC_POINT *)0x0 || local_f8 == (EC_POINT *)0x0) || (ctx_00 == (BN_CTX *)0x0)) {
        type = (EVP_MD *)0x0;
        uVar11 = 0;
        ERR_new();
        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x9c,"ossl_sm2_encrypt");
        ERR_set_error(0x35,0xc0100,0);
        data = (void *)0x0;
        local_f0 = (uchar *)0x0;
        local_100 = (void *)0x0;
        goto LAB_0057b87b;
      }
      BN_CTX_start(ctx_00);
      n = BN_CTX_get(ctx_00);
      pBVar6 = BN_CTX_get(ctx_00);
      pBVar7 = BN_CTX_get(ctx_00);
      pBVar8 = BN_CTX_get(ctx_00);
      pBVar9 = BN_CTX_get(ctx_00);
      if (pBVar9 == (BIGNUM *)0x0) {
        type = (EVP_MD *)0x0;
        uVar11 = 0;
        ERR_new();
        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xa8,"ossl_sm2_encrypt");
        ERR_set_error(0x35,0x80003,0);
        local_f0 = (uchar *)0x0;
        local_100 = (void *)0x0;
        data = (void *)0x0;
        goto LAB_0057b87b;
      }
      local_100 = (void *)CRYPTO_zalloc(cnt * 2,"../crypto/sm2/sm2_crypt.c",0xac);
      local_f0 = (uchar *)CRYPTO_zalloc((long)iVar1,"../crypto/sm2/sm2_crypt.c",0xad);
      if ((local_100 == (void *)0x0) || (local_f0 == (uchar *)0x0)) {
        ERR_new();
        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xb0,"ossl_sm2_encrypt");
        uVar3 = 0xc0100;
      }
      else {
        memset(local_70,0,*param_6);
        iVar2 = BN_priv_rand_range_ex(n,uVar3,0);
        if (iVar2 == 0) {
          ERR_new();
          type = (EVP_MD *)0x0;
          ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xb7,"ossl_sm2_encrypt");
          ERR_set_error(0x35,0xc0103,0);
          data = (void *)0x0;
          uVar11 = 0;
          goto LAB_0057b87b;
        }
        iVar2 = EC_POINT_mul(group,r,n,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx_00);
        if ((((iVar2 == 0) ||
             (iVar2 = EC_POINT_get_affine_coordinates(group,r,pBVar6,pBVar8,ctx_00), iVar2 == 0)) ||
            (iVar2 = EC_POINT_mul(group,local_f8,(BIGNUM *)0x0,q,n,ctx_00), iVar2 == 0)) ||
           (iVar2 = EC_POINT_get_affine_coordinates(group,local_f8,pBVar7,pBVar9,ctx_00), iVar2 == 0
           )) {
          ERR_new();
          ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xbf,"ossl_sm2_encrypt");
          uVar3 = 0x80010;
        }
        else {
          iVar2 = BN_bn2binpad(pBVar7,local_100,cnt & 0xffffffff);
          if (-1 < iVar2) {
            iVar2 = BN_bn2binpad(pBVar9,(void *)((long)local_100 + cnt),cnt & 0xffffffff);
            if (-1 < iVar2) {
              data = (void *)CRYPTO_zalloc(param_4,"../crypto/sm2/sm2_crypt.c",0xc9);
              if (data == (void *)0x0) {
                type = (EVP_MD *)0x0;
                uVar11 = 0;
                ERR_new();
                ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xcb,"ossl_sm2_encrypt");
                ERR_set_error(0x35,0xc0100,0);
                goto LAB_0057b87b;
              }
              iVar2 = ossl_ecdh_kdf_X9_63(data,param_4,local_100,cnt * 2,0,0,param_2,uVar4,uVar5);
              if (iVar2 == 0) {
                type = (EVP_MD *)0x0;
                ERR_new();
                ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xd2,"ossl_sm2_encrypt");
                ERR_set_error(0x35,0x80006,0);
                uVar11 = 0;
                goto LAB_0057b87b;
              }
              sVar10 = 0;
              if (param_4 != 0) {
                do {
                  *(byte *)((long)data + sVar10) =
                       *(byte *)((long)data + sVar10) ^ *(byte *)((long)param_3 + sVar10);
                  sVar10 = sVar10 + 1;
                } while (param_4 != sVar10);
              }
              uVar3 = EVP_MD_get0_name(param_2);
              type = (EVP_MD *)EVP_MD_fetch(uVar4,uVar3,uVar5);
              if (type == (EVP_MD *)0x0) {
                ERR_new();
                uVar3 = 0xdb;
LAB_0057be2c:
                ERR_set_debug("../crypto/sm2/sm2_crypt.c",uVar3,"ossl_sm2_encrypt");
                uVar3 = 0xc0103;
              }
              else {
                iVar2 = EVP_DigestInit(ctx,type);
                if (((iVar2 == 0) || (iVar2 = EVP_DigestUpdate(ctx,local_100,cnt), iVar2 == 0)) ||
                   ((iVar2 = EVP_DigestUpdate(ctx,param_3,param_4), iVar2 == 0 ||
                    ((iVar2 = EVP_DigestUpdate(ctx,(void *)((long)local_100 + cnt),cnt), iVar2 == 0
                     || (iVar2 = EVP_DigestFinal(ctx,local_f0,(uint *)0x0), iVar2 == 0)))))) {
                  ERR_new();
                  ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xe3,"ossl_sm2_encrypt");
                  uVar3 = 0x80006;
                }
                else {
                  local_68 = pBVar6;
                  local_60 = pBVar8;
                  local_58 = ASN1_OCTET_STRING_new();
                  local_50 = ASN1_OCTET_STRING_new();
                  if ((local_50 != (ASN1_OCTET_STRING *)0x0) && (local_58 != (ASN1_STRING *)0x0)) {
                    iVar1 = ASN1_OCTET_STRING_set(local_58,local_f0,iVar1);
                    if (iVar1 != 0) {
                      local_c8 = (int)param_4;
                      iVar1 = ASN1_OCTET_STRING_set(local_50,data,local_c8);
                      if (iVar1 != 0) {
                        iVar1 = i2d_SM2_Ciphertext(&local_68,&local_70);
                        if (-1 < iVar1) {
                          uVar11 = 1;
                          *param_6 = (long)iVar1;
                          goto LAB_0057b87b;
                        }
                        ERR_new();
                        uVar3 = 0xf9;
                        goto LAB_0057be2c;
                      }
                    }
                    ERR_new();
                    uVar3 = 0xf2;
                    goto LAB_0057be2c;
                  }
                  ERR_new();
                  ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xed,"ossl_sm2_encrypt");
                  uVar3 = 0xc0100;
                }
              }
              uVar11 = 0;
              ERR_set_error(0x35,uVar3,0);
              goto LAB_0057b87b;
            }
          }
          ERR_new();
          ERR_set_debug("../crypto/sm2/sm2_crypt.c",0xc5,"ossl_sm2_encrypt");
          uVar3 = 0xc0103;
        }
      }
      type = (EVP_MD *)0x0;
      uVar11 = 0;
      ERR_set_error(0x35,uVar3,0);
      data = (void *)0x0;
      goto LAB_0057b87b;
    }
    ERR_new();
    uVar3 = 0x94;
  }
  type = (EVP_MD *)0x0;
  r = (EC_POINT *)0x0;
  ctx_00 = (BN_CTX *)0x0;
  uVar11 = 0;
  ERR_set_debug("../crypto/sm2/sm2_crypt.c",uVar3,"ossl_sm2_encrypt");
  ERR_set_error(0x35,0xc0103,0);
  data = (void *)0x0;
  local_f0 = (uchar *)0x0;
  local_100 = (void *)0x0;
  local_f8 = (EC_POINT *)0x0;
LAB_0057b87b:
  EVP_MD_free(type);
  ASN1_OCTET_STRING_free(local_50);
  ASN1_OCTET_STRING_free(local_58);
  CRYPTO_free(data);
  CRYPTO_free(local_100);
  CRYPTO_free(local_f0);
  EVP_MD_CTX_free(ctx);
  BN_CTX_free(ctx_00);
  EC_POINT_free(r);
  EC_POINT_free(local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar11;
}

