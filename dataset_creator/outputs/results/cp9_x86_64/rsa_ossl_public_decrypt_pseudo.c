
int rsa_ossl_public_decrypt(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *r;
  uchar *f;
  BIGNUM *pBVar4;
  BN_MONT_CTX *pBVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x26b,"rsa_ossl_public_decrypt");
    ERR_set_error(4,0x69,0);
    return -1;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x28),*(BIGNUM **)(param_4 + 0x30));
  if (iVar1 < 1) {
    ERR_new();
    uVar8 = 0x270;
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
    if ((iVar1 < 0xc01) || (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x30)), iVar1 < 0x41)) {
      ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
      if (ctx == (BN_CTX *)0x0) {
        f = (uchar *)0x0;
        lVar7 = 0;
        iVar1 = -1;
      }
      else {
        BN_CTX_start(ctx);
        ret = BN_CTX_get(ctx);
        r = BN_CTX_get(ctx);
        iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
        iVar2 = iVar1 + 7;
        if (iVar1 + 7 < 0) {
          iVar2 = iVar1 + 0xe;
        }
        iVar2 = iVar2 >> 3;
        lVar7 = (long)iVar2;
        f = (uchar *)CRYPTO_malloc(iVar2,"../crypto/rsa/rsa_ossl.c",0x282);
        if ((r == (BIGNUM *)0x0) || (f == (uchar *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x284,"rsa_ossl_public_decrypt");
          iVar1 = -1;
          ERR_set_error(4,0xc0100,0);
        }
        else if (iVar2 < param_1) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x28d,"rsa_ossl_public_decrypt");
          iVar1 = -1;
          ERR_set_error(4,0x6c,0);
        }
        else {
          iVar1 = -1;
          pBVar4 = BN_bin2bn(param_2,param_1,ret);
          if (pBVar4 != (BIGNUM *)0x0) {
            iVar3 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
            if (iVar3 < 0) {
              pBVar4 = *(BIGNUM **)(param_4 + 0x28);
              if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
                pBVar5 = BN_MONT_CTX_set_locked
                                   ((BN_MONT_CTX **)(param_4 + 0xa8),
                                    (int)*(undefined8 *)(param_4 + 0xd0),pBVar4,ctx);
                if (pBVar5 == (BN_MONT_CTX *)0x0) goto LAB_0055a4e8;
                pBVar4 = *(BIGNUM **)(param_4 + 0x28);
              }
              iVar1 = -1;
              iVar3 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                (r,ret,*(undefined8 *)(param_4 + 0x30),pBVar4,ctx,
                                 *(undefined8 *)(param_4 + 0xa8));
              if (iVar3 != 0) {
                if (param_5 == 5) {
                  puVar6 = (undefined8 *)bn_get_words(r);
                  if ((((uint)*puVar6 & 0xf) != 0xc) &&
                     (iVar3 = BN_sub(r,*(BIGNUM **)(param_4 + 0x28),r), iVar3 == 0))
                  goto LAB_0055a4e8;
                  iVar1 = -1;
                  iVar3 = BN_bn2binpad(r,f,iVar2);
                  if (iVar3 < 0) goto LAB_0055a4e8;
                  iVar1 = RSA_padding_check_X931(param_3,iVar2,f,iVar3,iVar2);
                }
                else {
                  iVar1 = BN_bn2binpad(r,f,iVar2);
                  if (iVar1 < 0) {
                    iVar1 = -1;
                    goto LAB_0055a4e8;
                  }
                  if (param_5 == 3) {
                    memcpy(param_3,f,(long)iVar1);
                    goto LAB_0055a4e8;
                  }
                  if (param_5 != 1) {
                    ERR_new();
                    ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x2b5,"rsa_ossl_public_decrypt");
                    iVar1 = -1;
                    ERR_set_error(4,0x76,0);
                    goto LAB_0055a4e8;
                  }
                  iVar1 = RSA_padding_check_PKCS1_type_1(param_3,iVar2,f,iVar1,iVar2);
                }
                if (iVar1 < 0) {
                  ERR_new();
                  ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x2b9,"rsa_ossl_public_decrypt");
                  ERR_set_error(4,0x72,0);
                }
              }
            }
            else {
              ERR_new();
              ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x295,"rsa_ossl_public_decrypt");
              ERR_set_error(4,0x84,0);
            }
          }
        }
      }
LAB_0055a4e8:
      BN_CTX_end(ctx);
      BN_CTX_free(ctx);
      CRYPTO_clear_free(f,lVar7,"../crypto/rsa/rsa_ossl.c",0x2be);
      return iVar1;
    }
    ERR_new();
    uVar8 = 0x277;
  }
  ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar8,"rsa_ossl_public_decrypt");
  ERR_set_error(4,0x65,0);
  return -1;
}

