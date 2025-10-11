
bool dsa_to_type_specific_pem_encode
               (undefined8 *param_1,undefined8 param_2,void *param_3,long param_4,byte param_5,
               long param_6,undefined8 param_7)

{
  int iVar1;
  BIO *pBVar2;
  char *name;
  code *i2d;
  EVP_CIPHER *enc;
  byte bVar3;
  bool bVar4;
  undefined1 *cb;
  undefined8 *u;
  
  if (param_4 != 0) {
LAB_0045f13a:
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x532,
                  "dsa_to_type_specific_pem_encode");
    ERR_set_error(0x39,0x80106,0);
    return false;
  }
  if ((param_5 & 1) == 0) {
    bVar3 = param_5 & 2;
    if ((param_5 & 2) == 0) {
      if ((param_5 & 0x84) == 0) goto LAB_0045f13a;
      if (param_3 != (void *)0x0) {
        pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
        if (pBVar2 != (BIO *)0x0) {
          iVar1 = PEM_ASN1_write_bio(i2d_DSAparams,"DSA PARAMETERS",pBVar2,param_3,
                                     (EVP_CIPHER *)param_1[2],(uchar *)0x0,0,(undefined1 *)0x0,
                                     (void *)0x0);
          bVar3 = 0 < iVar1;
        }
        BIO_free(pBVar2);
        return (bool)bVar3;
      }
LAB_0045f2e0:
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                    "key2any_encode");
      ERR_set_error(0x39,0xc0102,0);
      return false;
    }
    if (param_3 == (void *)0x0) goto LAB_0045f2e0;
    pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((pBVar2 == (BIO *)0x0) ||
       ((param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0))))
    goto LAB_0045f2d8;
    u = (undefined8 *)0x0;
    i2d = i2d_DSAPublicKey;
    name = "DSA PUBLIC KEY";
    enc = (EVP_CIPHER *)param_1[2];
    cb = (undefined1 *)0x0;
  }
  else {
    if (param_3 == (void *)0x0) goto LAB_0045f2e0;
    pBVar2 = (BIO *)ossl_bio_new_from_core_bio(*param_1);
    if ((pBVar2 == (BIO *)0x0) ||
       ((u = param_1 + 3, param_6 != 0 &&
        (iVar1 = ossl_pw_set_ossl_passphrase_cb(u,param_6,param_7), iVar1 == 0)))) {
LAB_0045f2d8:
      bVar4 = false;
      goto LAB_0045f2c1;
    }
    enc = (EVP_CIPHER *)param_1[2];
    i2d = i2d_DSAPrivateKey;
    name = "DSA PRIVATE KEY";
    cb = PTR_ossl_pw_pem_password_0092df08;
  }
  iVar1 = PEM_ASN1_write_bio(i2d,name,pBVar2,param_3,enc,(uchar *)0x0,0,cb,u);
  bVar4 = 0 < iVar1;
LAB_0045f2c1:
  BIO_free(pBVar2);
  return bVar4;
}

