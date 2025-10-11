
undefined8
ossl_sm2_decrypt(EC_KEY *param_1,EVP_MD *param_2,undefined8 param_3,undefined8 param_4,void *param_5
                ,size_t *param_6)

{
  uint uVar1;
  void *b;
  long lVar2;
  int iVar3;
  int iVar4;
  EC_GROUP *group;
  ulong cnt;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong cnt_00;
  BN_CTX *ctx;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  void *ptr;
  EC_POINT *r;
  BIGNUM *m;
  ulong uVar10;
  EVP_MD_CTX *local_c8;
  void *local_c0;
  uchar *local_b8;
  undefined8 local_40 [2];
  
  local_40[0] = param_3;
  group = EC_KEY_get0_group(param_1);
  cnt = ec_field_size(group);
  iVar3 = EVP_MD_get_size(param_2);
  uVar5 = ossl_ec_key_get_libctx(param_1);
  uVar6 = ossl_ec_key_get0_propq(param_1);
  if ((cnt == 0) || (iVar3 < 1)) {
    local_c8 = (EVP_MD_CTX *)0x0;
    ptr = (void *)0x0;
    puVar7 = (undefined8 *)0x0;
    r = (EC_POINT *)0x0;
    local_b8 = (uchar *)0x0;
    ctx = (BN_CTX *)0x0;
    local_c0 = (void *)0x0;
    goto LAB_0057c334;
  }
  memset(param_5,0xff,*param_6);
  puVar7 = (undefined8 *)d2i_SM2_Ciphertext(0,local_40,param_4);
  if (puVar7 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x12f,"ossl_sm2_decrypt");
    uVar5 = 100;
LAB_0057c387:
    r = (EC_POINT *)0x0;
    ctx = (BN_CTX *)0x0;
    ERR_set_error(0x35,uVar5,0);
    local_c8 = (EVP_MD_CTX *)0x0;
    ptr = (void *)0x0;
    local_b8 = (uchar *)0x0;
    local_c0 = (void *)0x0;
  }
  else {
    if (*(int *)puVar7[2] != iVar3) {
      ERR_new();
      ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x134,"ossl_sm2_decrypt");
      uVar5 = 0x68;
      goto LAB_0057c387;
    }
    b = *(void **)((int *)puVar7[2] + 2);
    lVar2 = *(long *)((uint *)puVar7[3] + 2);
    uVar1 = *(uint *)puVar7[3];
    cnt_00 = (ulong)(int)uVar1;
    if (*param_6 < cnt_00) {
      ERR_new();
      ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x13c,"ossl_sm2_decrypt");
      uVar5 = 0x6b;
      goto LAB_0057c387;
    }
    ctx = (BN_CTX *)BN_CTX_new_ex(uVar5);
    if (ctx == (BN_CTX *)0x0) {
      ERR_new();
      r = (EC_POINT *)0x0;
      ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x142,"ossl_sm2_decrypt");
      ERR_set_error(0x35,0xc0100,0);
      local_c8 = (EVP_MD_CTX *)0x0;
      ptr = (void *)0x0;
      local_b8 = (uchar *)0x0;
      local_c0 = (void *)0x0;
    }
    else {
      BN_CTX_start(ctx);
      pBVar8 = BN_CTX_get(ctx);
      pBVar9 = BN_CTX_get(ctx);
      if (pBVar9 == (BIGNUM *)0x0) {
        ERR_new();
        r = (EC_POINT *)0x0;
        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x14b,"ossl_sm2_decrypt");
        ERR_set_error(0x35,0x80003,0);
        ptr = (void *)0x0;
        local_b8 = (uchar *)0x0;
        local_c0 = (void *)0x0;
        local_c8 = (EVP_MD_CTX *)0x0;
      }
      else {
        ptr = (void *)CRYPTO_zalloc(cnt_00,"../crypto/sm2/sm2_crypt.c",0x14f);
        local_c0 = (void *)CRYPTO_zalloc(cnt * 2,"../crypto/sm2/sm2_crypt.c",0x150);
        local_b8 = (uchar *)CRYPTO_zalloc((long)iVar3,"../crypto/sm2/sm2_crypt.c",0x151);
        if ((ptr == (void *)0x0 || local_c0 == (void *)0x0) || (local_b8 == (uchar *)0x0)) {
          r = (EC_POINT *)0x0;
          ERR_new();
          ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x154,"ossl_sm2_decrypt");
          ERR_set_error(0x35,0xc0100,0);
          local_c8 = (EVP_MD_CTX *)0x0;
        }
        else {
          r = EC_POINT_new(group);
          if (r == (EC_POINT *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x15a,"ossl_sm2_decrypt");
            uVar5 = 0xc0100;
          }
          else {
            iVar4 = EC_POINT_set_affine_coordinates(group,r,*puVar7,puVar7[1],ctx);
            if (iVar4 != 0) {
              m = EC_KEY_get0_private_key(param_1);
              iVar4 = EC_POINT_mul(group,r,(BIGNUM *)0x0,r,m,ctx);
              if ((iVar4 != 0) &&
                 (iVar4 = EC_POINT_get_affine_coordinates(group,r,pBVar8,pBVar9,ctx), iVar4 != 0)) {
                iVar4 = BN_bn2binpad(pBVar8,local_c0,cnt & 0xffffffff);
                if (-1 < iVar4) {
                  iVar4 = BN_bn2binpad(pBVar9,(void *)((long)local_c0 + cnt),cnt & 0xffffffff);
                  if ((-1 < iVar4) &&
                     (iVar4 = ossl_ecdh_kdf_X9_63(ptr,cnt_00,local_c0,cnt * 2,0,0,param_2,uVar5,
                                                  uVar6), iVar4 != 0)) {
                    uVar10 = 0;
                    if (uVar1 != 0) {
                      do {
                        *(byte *)((long)param_5 + uVar10) =
                             *(byte *)(lVar2 + uVar10) ^ *(byte *)((long)ptr + uVar10);
                        uVar10 = uVar10 + 1;
                      } while (uVar10 != uVar1);
                    }
                    local_c8 = (EVP_MD_CTX *)EVP_MD_CTX_new();
                    if (local_c8 == (EVP_MD_CTX *)0x0) {
                      ERR_new();
                      ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x174,"ossl_sm2_decrypt");
                      ERR_set_error(0x35,0xc0100,0);
                    }
                    else {
                      iVar4 = EVP_DigestInit(local_c8,param_2);
                      if ((((iVar4 == 0) ||
                           (iVar4 = EVP_DigestUpdate(local_c8,local_c0,cnt), iVar4 == 0)) ||
                          (iVar4 = EVP_DigestUpdate(local_c8,param_5,cnt_00), iVar4 == 0)) ||
                         ((iVar4 = EVP_DigestUpdate(local_c8,(void *)((long)local_c0 + cnt),cnt),
                          iVar4 == 0 ||
                          (iVar4 = EVP_DigestFinal(local_c8,local_b8,(uint *)0x0), iVar4 == 0)))) {
                        ERR_new();
                        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x17d,"ossl_sm2_decrypt");
                        ERR_set_error(0x35,0x80006,0);
                      }
                      else {
                        iVar3 = CRYPTO_memcmp(local_b8,b,(long)iVar3);
                        if (iVar3 == 0) {
                          uVar5 = 1;
                          *param_6 = cnt_00;
                          goto LAB_0057c29b;
                        }
                        ERR_new();
                        ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x182,"ossl_sm2_decrypt");
                        ERR_set_error(0x35,0x66,0);
                      }
                    }
                    goto LAB_0057c334;
                  }
                }
                ERR_new();
                ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x16b,"ossl_sm2_decrypt");
                uVar5 = 0xc0103;
                goto LAB_0057c45d;
              }
            }
            ERR_new();
            ERR_set_debug("../crypto/sm2/sm2_crypt.c",0x163,"ossl_sm2_decrypt");
            uVar5 = 0x80010;
          }
LAB_0057c45d:
          ERR_set_error(0x35,uVar5,0);
          local_c8 = (EVP_MD_CTX *)0x0;
        }
      }
    }
  }
LAB_0057c334:
  uVar5 = 0;
  memset(param_5,0,*param_6);
LAB_0057c29b:
  CRYPTO_free(ptr);
  CRYPTO_free(local_c0);
  CRYPTO_free(local_b8);
  EC_POINT_free(r);
  BN_CTX_free(ctx);
  SM2_Ciphertext_free(puVar7);
  EVP_MD_CTX_free(local_c8);
  return uVar5;
}

