
int rsa_encrypt(undefined8 *param_1,uchar *param_2,long *param_3,undefined8 param_4,uchar *param_5,
               int param_6)

{
  RSA *rsa;
  int iVar1;
  int iVar2;
  long lVar3;
  uchar *from;
  undefined8 uVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  rsa = (RSA *)param_1[1];
  if (param_2 == (uchar *)0x0) {
    iVar1 = RSA_size(rsa);
    lVar3 = (long)iVar1;
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0x97,"rsa_encrypt");
      ERR_set_error(0x39,0x9e,0);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 2) == 4) {
      iVar1 = RSA_size(rsa);
      from = (uchar *)CRYPTO_malloc(iVar1,"../providers/implementations/asymciphers/rsa_enc.c",0xa2)
      ;
      if (from == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0xa3,"rsa_encrypt");
        ERR_set_error(0x39,0xc0100,0);
        return 0;
      }
      if (param_1[3] == 0) {
        CRYPTO_free(from);
        uVar4 = EVP_MD_fetch(*param_1,"SHA-1",0);
        param_1[3] = uVar4;
        ERR_new();
        ERR_set_debug("../providers/implementations/asymciphers/rsa_enc.c",0xa9,"rsa_encrypt");
        ERR_set_error(0x39,0xc0103,0);
        return 0;
      }
      iVar2 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                        (*param_1,from,iVar1,param_5,param_6,param_1[5],param_1[6],param_1[3],
                         param_1[4]);
      if (iVar2 == 0) {
        CRYPTO_free(from);
        return 0;
      }
      iVar1 = RSA_public_encrypt(iVar1,from,param_2,(RSA *)param_1[1],3);
      CRYPTO_free(from);
    }
    else {
      iVar1 = RSA_public_encrypt(param_6,param_5,param_2,rsa,*(int *)(param_1 + 2));
    }
    if (iVar1 < 0) {
      return iVar1;
    }
    lVar3 = (long)iVar1;
  }
  *param_3 = lVar3;
  return 1;
}

