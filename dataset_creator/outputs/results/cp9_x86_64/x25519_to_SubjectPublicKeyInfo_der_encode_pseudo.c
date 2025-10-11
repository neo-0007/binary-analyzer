
undefined4
x25519_to_SubjectPublicKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  X509_PUBKEY *a_00;
  
  if ((param_4 == 0) && ((param_5 & 2) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        a_00 = (X509_PUBKEY *)key_to_pubkey(param_3,0x40a,0,0xffffffff,ecx_spki_pub_to_der);
        if (a_00 != (X509_PUBKEY *)0x0) {
          uVar2 = i2d_X509_PUBKEY_bio(a,a_00);
        }
        X509_PUBKEY_free(a_00);
      }
      BIO_free(a);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                  "key2any_encode");
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x584,
                "x25519_to_SubjectPublicKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}

