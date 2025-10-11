
undefined4
ossl_sm2_compute_z_digest
          (uchar *param_1,EVP_MD *param_2,void *param_3,ulong param_4,EC_KEY *param_5)

{
  int iVar1;
  EC_GROUP *group;
  EVP_MD_CTX *ctx;
  undefined8 uVar2;
  BN_CTX *ctx_00;
  BIGNUM *a;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  size_t cnt;
  void *d;
  EC_POINT *pEVar9;
  int iVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  group = EC_KEY_get0_group(param_5);
  local_41 = 0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar2 = ossl_ec_key_get_libctx(param_5);
  ctx_00 = (BN_CTX *)BN_CTX_new_ex(uVar2);
  if ((ctx == (EVP_MD_CTX *)0x0) || (ctx_00 == (BN_CTX *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/sm2/sm2_sign.c",0x31,"ossl_sm2_compute_z_digest");
    uVar2 = 0xc0100;
LAB_0057d107:
    d = (void *)0x0;
    uVar11 = 0;
    ERR_set_error(0x35,uVar2,0);
    goto LAB_0057d119;
  }
  a = BN_CTX_get(ctx_00);
  pBVar3 = BN_CTX_get(ctx_00);
  pBVar4 = BN_CTX_get(ctx_00);
  pBVar5 = BN_CTX_get(ctx_00);
  pBVar6 = BN_CTX_get(ctx_00);
  pBVar7 = BN_CTX_get(ctx_00);
  pBVar8 = BN_CTX_get(ctx_00);
  if (pBVar8 == (BIGNUM *)0x0) {
    ERR_new();
    uVar11 = 0;
    ERR_set_debug("../crypto/sm2/sm2_sign.c",0x3e,"ossl_sm2_compute_z_digest");
    ERR_set_error(0x35,0xc0100,0);
    d = (void *)0x0;
    goto LAB_0057d119;
  }
  iVar1 = EVP_DigestInit(ctx,param_2);
  if (iVar1 == 0) {
    ERR_new();
    uVar2 = 0x43;
  }
  else {
    if (0x1ffe < param_4) {
      ERR_new();
      ERR_set_debug("../crypto/sm2/sm2_sign.c",0x4b,"ossl_sm2_compute_z_digest");
      uVar2 = 0x6f;
      goto LAB_0057d107;
    }
    iVar10 = (int)param_4 * 8;
    local_41 = (undefined1)((uint)iVar10 >> 8);
    iVar1 = EVP_DigestUpdate(ctx,&local_41,1);
    if (iVar1 == 0) {
      ERR_new();
      uVar2 = 0x53;
    }
    else {
      local_41 = (undefined1)iVar10;
      iVar1 = EVP_DigestUpdate(ctx,&local_41,1);
      if (iVar1 != 0) {
        if (param_4 != 0) {
          iVar1 = EVP_DigestUpdate(ctx,param_3,param_4);
          if (iVar1 == 0) {
            ERR_new();
            uVar2 = 0x5d;
            goto LAB_0057d171;
          }
        }
        iVar1 = EC_GROUP_get_curve(group,a,pBVar3,pBVar4,ctx_00);
        if (iVar1 == 0) {
          ERR_new();
          d = (void *)0x0;
          ERR_set_debug("../crypto/sm2/sm2_sign.c",0x62,"ossl_sm2_compute_z_digest");
          ERR_set_error(0x35,0x80010,0);
          uVar11 = 0;
        }
        else {
          iVar10 = BN_num_bits(a);
          iVar1 = iVar10 + 7;
          if (iVar10 + 7 < 0) {
            iVar1 = iVar10 + 0xe;
          }
          iVar1 = iVar1 >> 3;
          cnt = (size_t)iVar1;
          d = (void *)CRYPTO_zalloc(cnt,"../crypto/sm2/sm2_sign.c",0x67);
          if (d == (void *)0x0) {
            ERR_new();
            d = (void *)0x0;
            ERR_set_debug("../crypto/sm2/sm2_sign.c",0x69,"ossl_sm2_compute_z_digest");
            ERR_set_error(0x35,0xc0100,0);
            uVar11 = 0;
          }
          else {
            iVar10 = BN_bn2binpad(pBVar3,d,iVar1);
            if (-1 < iVar10) {
              iVar10 = EVP_DigestUpdate(ctx,d,cnt);
              if (iVar10 != 0) {
                iVar10 = BN_bn2binpad(pBVar4,d,iVar1);
                if (-1 < iVar10) {
                  iVar10 = EVP_DigestUpdate(ctx,d,cnt);
                  if (iVar10 != 0) {
                    pEVar9 = EC_GROUP_get0_generator(group);
                    iVar10 = EC_POINT_get_affine_coordinates(group,pEVar9,pBVar5,pBVar6,ctx_00);
                    if (iVar10 != 0) {
                      iVar10 = BN_bn2binpad(pBVar5,d,iVar1);
                      if (-1 < iVar10) {
                        iVar10 = EVP_DigestUpdate(ctx,d,cnt);
                        if (iVar10 != 0) {
                          iVar10 = BN_bn2binpad(pBVar6,d,iVar1);
                          if (-1 < iVar10) {
                            iVar10 = EVP_DigestUpdate(ctx,d,cnt);
                            if (iVar10 != 0) {
                              pEVar9 = EC_KEY_get0_public_key(param_5);
                              iVar10 = EC_POINT_get_affine_coordinates
                                                 (group,pEVar9,pBVar7,pBVar8,ctx_00);
                              if (iVar10 != 0) {
                                iVar10 = BN_bn2binpad(pBVar7,d,iVar1);
                                if (-1 < iVar10) {
                                  iVar10 = EVP_DigestUpdate(ctx,d,cnt);
                                  if (iVar10 != 0) {
                                    iVar1 = BN_bn2binpad(pBVar8,d,iVar1);
                                    if (-1 < iVar1) {
                                      iVar1 = EVP_DigestUpdate(ctx,d,cnt);
                                      if (iVar1 != 0) {
                                        iVar1 = EVP_DigestFinal(ctx,param_1,(uint *)0x0);
                                        if (iVar1 != 0) {
                                          uVar11 = 1;
                                          goto LAB_0057d119;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            ERR_new();
            uVar11 = 0;
            ERR_set_debug("../crypto/sm2/sm2_sign.c",0x80,"ossl_sm2_compute_z_digest");
            ERR_set_error(0x35,0xc0103,0);
          }
        }
        goto LAB_0057d119;
      }
      ERR_new();
      uVar2 = 0x58;
    }
  }
LAB_0057d171:
  uVar11 = 0;
  d = (void *)0x0;
  ERR_set_debug("../crypto/sm2/sm2_sign.c",uVar2,"ossl_sm2_compute_z_digest");
  ERR_set_error(0x35,0x80006,0);
LAB_0057d119:
  CRYPTO_free(d);
  BN_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

