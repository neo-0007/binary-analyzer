
uint sm2_to_type_specific_no_pub_der_encode
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *a;
  char *pcVar2;
  code *pcVar3;
  code *pcVar4;
  uint uVar5;
  
  if (param_4 != 0) {
LAB_0045dcef:
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x524,
                  "sm2_to_type_specific_no_pub_der_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  uVar5 = param_5 & 1;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_0045dcef;
    if (param_3 == 0) goto LAB_0045ddf0;
    a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if (a == (BIO *)0x0) goto LAB_0045dd74;
    pcVar4 = i2d_ECParameters;
    pcVar3 = (code *)0x0;
    pcVar2 = "SM2 PARAMETERS";
  }
  else {
    if (param_3 == 0) {
LAB_0045ddf0:
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                    "key2any_encode");
      ERR_set_error(0x39,0xc0102,0);
      return 0;
    }
    a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((a == (BIO *)0x0) ||
       ((param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
      uVar5 = 0;
      goto LAB_0045dd74;
    }
    pcVar4 = i2d_ECPrivateKey;
    pcVar3 = prepare_ec_params;
    pcVar2 = "SM2 PRIVATE KEY";
  }
  uVar5 = key_to_type_specific_der_bio(a,param_3,0x494,pcVar2,pcVar3,pcVar4,param_1);
LAB_0045dd74:
  BIO_free(a);
  return uVar5;
}

