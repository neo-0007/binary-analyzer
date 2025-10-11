
undefined4
x25519_to_EncryptedPrivateKeyInfo_der_encode
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
          long param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if ((param_4 == 0) && ((param_5 & 1) != 0)) {
    if (param_3 != 0) {
      a = (BIO *)ossl_bio_new_from_core_bio(*param_1);
      if ((a == (BIO *)0x0) ||
         ((param_6 != 0 &&
          (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_6,param_7), iVar1 == 0)))) {
        uVar2 = 0;
      }
      else {
        uVar2 = key_to_epki_der_priv_bio
                          (a,param_3,0x40a,"X25519 PRIVATE KEY",0,ecx_pki_priv_to_der,param_1);
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
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x580,
                "x25519_to_EncryptedPrivateKeyInfo_der_encode");
  ERR_set_error(0x39,0x80106,0);
  return 0;
}

