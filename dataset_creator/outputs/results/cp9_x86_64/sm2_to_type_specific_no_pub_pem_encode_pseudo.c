
bool sm2_to_type_specific_no_pub_pem_encode
               (undefined8 *param_1,undefined8 param_2,void *param_3,long param_4,byte param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *bp;
  char *name;
  code *i2d;
  EVP_CIPHER *enc;
  bool bVar2;
  undefined1 *cb;
  undefined8 *u;
  
  if (param_4 != 0) {
LAB_0045e2ef:
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x537,
                  "sm2_to_type_specific_no_pub_pem_encode");
    ERR_set_error(0x39,0x80106,0);
    return false;
  }
  bVar2 = (bool)(param_5 & 1);
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x84) == 0) goto LAB_0045e2ef;
    if (param_3 == (void *)0x0) goto LAB_0045e410;
    bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if (bp == (BIO *)0x0) goto LAB_0045e380;
    u = (undefined8 *)0x0;
    i2d = i2d_ECParameters;
    name = "SM2 PARAMETERS";
    enc = (EVP_CIPHER *)param_1[2];
    cb = (undefined1 *)0x0;
  }
  else {
    if (param_3 == (void *)0x0) {
LAB_0045e410:
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                    "key2any_encode");
      ERR_set_error(0x39,0xc0102,0);
      return false;
    }
    bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((bp == (BIO *)0x0) ||
       ((u = param_1 + 3, param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(u,param_6,param_7), iVar1 == 0)))) {
      bVar2 = false;
      goto LAB_0045e380;
    }
    enc = (EVP_CIPHER *)param_1[2];
    i2d = i2d_ECPrivateKey;
    name = "SM2 PRIVATE KEY";
    cb = PTR_ossl_pw_pem_password_0092df08;
  }
  iVar1 = PEM_ASN1_write_bio(i2d,name,bp,param_3,enc,(uchar *)0x0,0,cb,u);
  bVar2 = 0 < iVar1;
LAB_0045e380:
  BIO_free(bp);
  return bVar2;
}

