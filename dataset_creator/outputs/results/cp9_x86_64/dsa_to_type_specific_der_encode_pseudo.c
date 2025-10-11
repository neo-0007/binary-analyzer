
uint dsa_to_type_specific_der_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *pBVar2;
  char *pcVar3;
  code *pcVar4;
  uint uVar5;
  
  if (param_4 != 0) {
LAB_0045eb1a:
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x51f,
                  "dsa_to_type_specific_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  if ((param_5 & 1) == 0) {
    uVar5 = param_5 & 2;
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_0045eb1a;
      if (param_3 != 0) {
        pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
        if (pBVar2 != (BIO *)0x0) {
          uVar5 = key_to_type_specific_der_bio
                            (pBVar2,param_3,0x74,"DSA PARAMETERS",0,i2d_DSAparams,param_1);
        }
        BIO_free(pBVar2);
        return uVar5;
      }
LAB_0045eca0:
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                    "key2any_encode");
      ERR_set_error(0x39,0xc0102,0);
      return 0;
    }
    if (param_3 == 0) goto LAB_0045eca0;
    pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((pBVar2 == (BIO *)0x0) ||
       ((param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0))))
    goto LAB_0045ec98;
    pcVar4 = i2d_DSAPublicKey;
    pcVar3 = "DSA PUBLIC KEY";
  }
  else {
    if (param_3 == 0) goto LAB_0045eca0;
    pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((pBVar2 == (BIO *)0x0) ||
       ((param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
LAB_0045ec98:
      uVar5 = 0;
      goto LAB_0045ec7e;
    }
    pcVar4 = i2d_DSAPrivateKey;
    pcVar3 = "DSA PRIVATE KEY";
  }
  uVar5 = key_to_type_specific_der_bio(pBVar2,param_3,0x74,pcVar3,prepare_dsa_params,pcVar4,param_1)
  ;
LAB_0045ec7e:
  BIO_free(pBVar2);
  return uVar5;
}

