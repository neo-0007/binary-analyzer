
undefined4
rsa_ossl_public_encrypt(int param_1,uchar *param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  uchar *to;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  undefined8 uVar7;
  long local_68;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x56,"rsa_ossl_public_encrypt");
    ERR_set_error(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x28),*(BIGNUM **)(param_4 + 0x30));
  if (iVar1 < 1) {
    ERR_new();
    uVar7 = 0x5b;
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
    if ((iVar1 < 0xc01) || (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x30)), iVar1 < 0x41)) {
      ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
      if (ctx == (BN_CTX *)0x0) {
        local_68 = 0;
        to = (uchar *)0x0;
        uVar3 = 0xffffffff;
      }
      else {
        BN_CTX_start(ctx);
        ret = BN_CTX_get(ctx);
        pBVar4 = BN_CTX_get(ctx);
        iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
        iVar1 = iVar2 + 0xe;
        if (-1 < iVar2 + 7) {
          iVar1 = iVar2 + 7;
        }
        iVar1 = iVar1 >> 3;
        local_68 = (long)iVar1;
        to = (uchar *)CRYPTO_malloc(iVar1,"../crypto/rsa/rsa_ossl.c",0x6d);
        if ((pBVar4 == (BIGNUM *)0x0) || (to == (uchar *)0x0)) {
          ERR_new();
          ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x6f,"rsa_ossl_public_encrypt");
          uVar3 = 0xffffffff;
          ERR_set_error(4,0xc0100,0);
        }
        else {
          if (param_5 == 3) {
            iVar2 = RSA_padding_add_none(to,iVar1,param_2,param_1);
          }
          else if (param_5 == 4) {
            iVar2 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                              (*(undefined8 *)(param_4 + 8),to,iVar1,param_2,param_1,0,0,0,0);
          }
          else {
            if (param_5 != 1) {
              ERR_new();
              ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x81,"rsa_ossl_public_encrypt");
              uVar3 = 0xffffffff;
              ERR_set_error(4,0x76,0);
              goto LAB_0055a947;
            }
            iVar2 = ossl_rsa_padding_add_PKCS1_type_2_ex
                              (*(undefined8 *)(param_4 + 8),to,iVar1,param_2,param_1);
          }
          uVar3 = 0xffffffff;
          if ((0 < iVar2) && (pBVar5 = BN_bin2bn(to,iVar1,ret), pBVar5 != (BIGNUM *)0x0)) {
            iVar2 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
            if (iVar2 < 0) {
              pBVar5 = *(BIGNUM **)(param_4 + 0x28);
              if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
                pBVar6 = BN_MONT_CTX_set_locked
                                   ((BN_MONT_CTX **)(param_4 + 0xa8),
                                    (int)*(undefined8 *)(param_4 + 0xd0),pBVar5,ctx);
                if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_0055a947;
                pBVar5 = *(BIGNUM **)(param_4 + 0x28);
              }
              uVar3 = 0xffffffff;
              iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                (pBVar4,ret,*(undefined8 *)(param_4 + 0x30),pBVar5,ctx,
                                 *(undefined8 *)(param_4 + 0xa8));
              if (iVar2 != 0) {
                uVar3 = BN_bn2binpad(pBVar4,param_3,iVar1);
              }
            }
            else {
              ERR_new();
              ERR_set_debug("../crypto/rsa/rsa_ossl.c",0x8c,"rsa_ossl_public_encrypt");
              ERR_set_error(4,0x84,0);
            }
          }
        }
      }
LAB_0055a947:
      BN_CTX_end(ctx);
      BN_CTX_free(ctx);
      CRYPTO_clear_free(to,local_68,"../crypto/rsa/rsa_ossl.c",0xa1);
      return uVar3;
    }
    ERR_new();
    uVar7 = 0x62;
  }
  ERR_set_debug("../crypto/rsa/rsa_ossl.c",uVar7,"rsa_ossl_public_encrypt");
  ERR_set_error(4,0x65,0);
  return 0xffffffff;
}

