
ulong rsa_ossl_private_decrypt(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *n;
  uchar *data;
  HMAC_CTX *ctx_00;
  BIGNUM *a;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_dc;
  EVP_MD *local_d0;
  BN_BLINDING *local_c8;
  size_t local_b8;
  BIGNUM *local_a8;
  uint local_90;
  int local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0x20;
  local_8c = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_dc = param_5;
  if (((*(byte *)(param_4 + 0xa4) & 0x20) != 0) && (local_dc = 8, param_5 != 1)) {
    local_dc = param_5;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    ctx_00 = (HMAC_CTX *)0x0;
    data = (uchar *)0x0;
    uVar5 = 0xffffffff;
    local_d0 = (EVP_MD *)0x0;
    local_b8 = 0;
    goto LAB_0055ae74;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  n = BN_CTX_get(ctx);
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  local_b8 = (size_t)iVar2;
  data = (uchar *)CRYPTO_malloc(iVar2,"../crypto/rsa/rsa_ossl.c",0x19a);
  if ((n == (BIGNUM *)0x0) || (data == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x19c,"rsa_ossl_private_decrypt");
    uVar4 = 0xc0100;
LAB_0055b078:
    ERR_set_error(4,uVar4,0);
  }
  else {
    if (iVar2 < param_1) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1a5,"rsa_ossl_private_decrypt");
      uVar4 = 0x6c;
      goto LAB_0055b078;
    }
    if (param_1 < 1) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1aa,"rsa_ossl_private_decrypt");
      uVar4 = 0x6f;
      goto LAB_0055b078;
    }
    ctx_00 = (HMAC_CTX *)BN_bin2bn(param_2,param_1,ret);
    if (ctx_00 == (HMAC_CTX *)0x0) {
LAB_0055b2d8:
      local_d0 = (EVP_MD *)0x0;
      uVar5 = 0xffffffff;
      goto LAB_0055ae74;
    }
    iVar1 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
    if (-1 < iVar1) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1b3,"rsa_ossl_private_decrypt");
      uVar4 = 0x84;
      goto LAB_0055b078;
    }
    uVar3 = *(uint *)(param_4 + 0xa4);
    if ((uVar3 & 2) != 0) {
      ctx_00 = (HMAC_CTX *)
               BN_MONT_CTX_set_locked
                         ((BN_MONT_CTX **)(param_4 + 0xa8),(int)*(undefined8 *)(param_4 + 0xd0),
                          *(BIGNUM **)(param_4 + 0x28),ctx);
      if (ctx_00 == (HMAC_CTX *)0x0) goto LAB_0055b2d8;
      uVar3 = *(uint *)(param_4 + 0xa4);
    }
    local_c8 = (BN_BLINDING *)0x0;
    local_a8 = (BIGNUM *)0x0;
    if ((uVar3 & 0x80) == 0) {
      local_c8 = (BN_BLINDING *)rsa_get_blinding(param_4,&local_8c,ctx);
      if (local_c8 == (BN_BLINDING *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1bf,"rsa_ossl_private_decrypt");
        uVar4 = 0xc0103;
      }
      else {
        if ((local_8c != 0) || (local_a8 = BN_CTX_get(ctx), local_a8 != (BIGNUM *)0x0)) {
          iVar1 = rsa_blinding_convert(local_c8,ret,local_a8,ctx);
          if (iVar1 != 0) {
            uVar3 = *(uint *)(param_4 + 0xa4);
            goto LAB_0055ad7d;
          }
          goto LAB_0055b084;
        }
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1c6,"rsa_ossl_private_decrypt");
        uVar4 = 0xc0100;
      }
      goto LAB_0055b078;
    }
LAB_0055ad7d:
    if ((((uVar3 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
       (((*(long *)(param_4 + 0x40) == 0 ||
         (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
          (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
      a = BN_new();
      if (a == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1d8,"rsa_ossl_private_decrypt");
        uVar4 = 0xc0100;
        local_d0 = (EVP_MD *)0x0;
LAB_0055b414:
        ctx_00 = (HMAC_CTX *)0x0;
        uVar5 = 0xffffffff;
        ERR_set_error(4,uVar4,0);
        goto LAB_0055ae74;
      }
      if (*(long *)(param_4 + 0x38) == 0) {
        ERR_new();
        uVar5 = 0xffffffff;
        ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1dc,"rsa_ossl_private_decrypt");
        ERR_set_error(4,0xb3,0);
        BN_free(a);
        local_d0 = (EVP_MD *)0x0;
        ctx_00 = (HMAC_CTX *)0x0;
        goto LAB_0055ae74;
      }
      BN_with_flags(a,*(long *)(param_4 + 0x38),4);
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                        (n,ret,a,*(undefined8 *)(param_4 + 0x28),ctx);
      if (iVar1 != 0) {
        BN_free(a);
        goto LAB_0055ada0;
      }
LAB_0055b3e8:
      BN_free(a);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(n,ret,param_4);
      if (iVar1 != 0) {
LAB_0055ada0:
        local_d0 = (EVP_MD *)0x0;
        ctx_00 = (HMAC_CTX *)0x0;
        if (local_dc == 1) {
          a = BN_new();
          if (a == (BIGNUM *)0x0) {
            ERR_new();
            uVar4 = 0x1f5;
            ctx_00 = (HMAC_CTX *)0x0;
LAB_0055b4e3:
            uVar5 = 0xffffffff;
            ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar4,"rsa_ossl_private_decrypt");
            ERR_set_error(4,0xc0100,0);
            goto LAB_0055ae74;
          }
          if (*(long *)(param_4 + 0x38) == 0) {
            ERR_new();
            uVar5 = 0xffffffff;
            ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1f9,"rsa_ossl_private_decrypt");
            ERR_set_error(4,0xb3,0);
            ctx_00 = (HMAC_CTX *)0x0;
            BN_free(a);
            local_d0 = (EVP_MD *)0x0;
            goto LAB_0055ae74;
          }
          BN_with_flags(a,*(long *)(param_4 + 0x38),4);
          iVar1 = BN_bn2binpad(a,data,iVar2);
          if (iVar1 < 0) {
            ERR_new();
            ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x1ff,"rsa_ossl_private_decrypt");
            ERR_set_error(4,0xc0103,0);
            goto LAB_0055b3e8;
          }
          BN_free(a);
          local_d0 = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)(param_4 + 8),"sha256",0);
          if (local_d0 == (EVP_MD *)0x0) {
            ERR_new();
            uVar4 = 0x20e;
          }
          else {
            iVar1 = EVP_Digest(data,local_b8,local_88,(uint *)0x0,local_d0,(ENGINE *)0x0);
            if (0 < iVar1) {
              ctx_00 = (HMAC_CTX *)HMAC_CTX_new();
              if (ctx_00 == (HMAC_CTX *)0x0) {
                ERR_new();
                uVar4 = 0x219;
                goto LAB_0055b4e3;
              }
              iVar1 = HMAC_Init_ex(ctx_00,local_88,0x20,local_d0,(ENGINE *)0x0);
              if (iVar1 < 1) {
                ERR_new();
                uVar4 = 0x21e;
              }
              else {
                if (param_1 < iVar2) {
                  memset(data,0,(long)(iVar2 - param_1));
                  iVar1 = HMAC_Update(ctx_00,data,(long)(iVar2 - param_1));
                  if (iVar1 < 1) {
                    ERR_new();
                    uVar4 = 0x225;
                    goto LAB_0055b1f4;
                  }
                }
                iVar1 = HMAC_Update(ctx_00,param_2,(long)param_1);
                if (iVar1 < 1) {
                  ERR_new();
                  uVar4 = 0x22a;
                }
                else {
                  local_90 = 0x20;
                  iVar1 = HMAC_Final(ctx_00,local_68,&local_90);
                  if (0 < iVar1) goto LAB_0055adb7;
                  ERR_new();
                  uVar4 = 0x230;
                }
              }
LAB_0055b1f4:
              uVar5 = 0xffffffff;
              ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar4,"rsa_ossl_private_decrypt");
              ERR_set_error(4,0xc0103,0);
              goto LAB_0055ae74;
            }
            ERR_new();
            uVar4 = 0x213;
          }
          ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar4,"rsa_ossl_private_decrypt");
          uVar4 = 0xc0103;
          goto LAB_0055b414;
        }
LAB_0055adb7:
        if (local_c8 == (BN_BLINDING *)0x0) {
LAB_0055ade9:
          uVar3 = BN_bn2binpad(n,data,iVar2);
          uVar5 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
            if (local_dc == 4) {
              uVar3 = RSA_padding_check_PKCS1_OAEP(param_3,iVar2,data,uVar3,iVar2,(uchar *)0x0,0);
              uVar5 = (ulong)uVar3;
            }
            else if (local_dc < 5) {
              if (local_dc == 1) {
                uVar3 = ossl_rsa_padding_check_PKCS1_type_2
                                  (*(undefined8 *)(param_4 + 8),param_3,iVar2,data,uVar5,iVar2,
                                   local_68);
                uVar5 = (ulong)uVar3;
              }
              else {
                if (local_dc != 3) goto LAB_0055b220;
                memcpy(param_3,data,(long)(int)uVar3);
              }
            }
            else {
              if (local_dc != 8) {
LAB_0055b220:
                ERR_new();
                uVar5 = 0xffffffff;
                ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x24b,"rsa_ossl_private_decrypt");
                ERR_set_error(4,0x76,0);
                goto LAB_0055ae74;
              }
              uVar3 = RSA_padding_check_PKCS1_type_2(param_3,iVar2,data,uVar3,iVar2);
              uVar5 = (ulong)uVar3;
            }
            ERR_new();
            ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x254,"rsa_ossl_private_decrypt");
            ERR_set_error(4,0x72,0);
            err_clear_last_constant_time((uint)(uVar5 >> 0x1f) ^ 1);
            goto LAB_0055ae74;
          }
        }
        else {
          BN_set_flags(n,4);
          iVar1 = BN_BLINDING_invert_ex(n,local_a8,local_c8,ctx);
          if (iVar1 != 0) goto LAB_0055ade9;
        }
        uVar5 = 0xffffffff;
        goto LAB_0055ae74;
      }
    }
  }
LAB_0055b084:
  local_d0 = (EVP_MD *)0x0;
  ctx_00 = (HMAC_CTX *)0x0;
  uVar5 = 0xffffffff;
LAB_0055ae74:
  HMAC_CTX_free(ctx_00);
  EVP_MD_free(local_d0);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(data,local_b8,"../crypto/rsa/rsa_ossl.c",0x25d);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

