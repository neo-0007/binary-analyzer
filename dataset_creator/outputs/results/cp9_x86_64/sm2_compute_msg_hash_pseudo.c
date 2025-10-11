
BIGNUM * sm2_compute_msg_hash
                   (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   void *param_5,size_t param_6)

{
  int len;
  int iVar1;
  EVP_MD_CTX *ctx;
  undefined8 uVar2;
  undefined8 uVar3;
  uchar *md;
  undefined8 uVar4;
  EVP_MD *type;
  BIGNUM *pBVar5;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  len = EVP_MD_get_size(param_1);
  uVar2 = ossl_ec_key_get_libctx(param_2);
  uVar3 = ossl_ec_key_get0_propq(param_2);
  if (len < 0) {
    type = (EVP_MD *)0x0;
    pBVar5 = (BIGNUM *)0x0;
    md = (uchar *)0x0;
    ERR_new();
    ERR_set_debug("../crypto/sm2/sm2_sign.c",0x9c,"sm2_compute_msg_hash");
    ERR_set_error(0x35,0x66,0);
  }
  else {
    md = (uchar *)CRYPTO_zalloc((long)len,"../crypto/sm2/sm2_sign.c",0xa0);
    if ((ctx == (EVP_MD_CTX *)0x0) || (md == (uchar *)0x0)) {
      ERR_new();
      type = (EVP_MD *)0x0;
      pBVar5 = (BIGNUM *)0x0;
      ERR_set_debug("../crypto/sm2/sm2_sign.c",0xa2,"sm2_compute_msg_hash");
      ERR_set_error(0x35,0xc0100,0);
    }
    else {
      uVar4 = EVP_MD_get0_name(param_1);
      type = (EVP_MD *)EVP_MD_fetch(uVar2,uVar4,uVar3);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        pBVar5 = (BIGNUM *)0x0;
        ERR_set_debug("../crypto/sm2/sm2_sign.c",0xa8,"sm2_compute_msg_hash");
        ERR_set_error(0x35,0xc0103,0);
      }
      else {
        pBVar5 = (BIGNUM *)0x0;
        iVar1 = ossl_sm2_compute_z_digest(md,type,param_3,param_4,param_2);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestInit(ctx,type);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(ctx,md,(long)len);
            if (iVar1 != 0) {
              iVar1 = EVP_DigestUpdate(ctx,param_5,param_6);
              if (iVar1 != 0) {
                iVar1 = EVP_DigestFinal(ctx,md,(uint *)0x0);
                if (iVar1 != 0) {
                  pBVar5 = BN_bin2bn(md,len,(BIGNUM *)0x0);
                  if (pBVar5 == (BIGNUM *)0x0) {
                    ERR_new();
                    ERR_set_debug("../crypto/sm2/sm2_sign.c",0xbc,"sm2_compute_msg_hash");
                    ERR_set_error(0x35,0xc0103,0);
                  }
                  goto LAB_0057d59d;
                }
              }
            }
          }
          ERR_new();
          pBVar5 = (BIGNUM *)0x0;
          ERR_set_debug("../crypto/sm2/sm2_sign.c",0xb6,"sm2_compute_msg_hash");
          ERR_set_error(0x35,0x80006,0);
        }
      }
    }
  }
LAB_0057d59d:
  EVP_MD_free(type);
  CRYPTO_free(md);
  EVP_MD_CTX_free(ctx);
  return pBVar5;
}

