
undefined4
key2any_encode(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
              undefined8 param_5,code *param_6,code *param_7,long param_8,undefined8 param_9,
              undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  undefined4 uVar2;
  BIO *a;
  
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x416,
                  "key2any_encode");
    ERR_set_error(0x39,0xc0102,0);
    return 0;
  }
  if ((param_6 != (code *)0x0) && (iVar1 = (*param_6)(param_3,param_4), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x423,
                  "key2any_encode");
    ERR_set_error(0x39,0x80106,0);
    return 0;
  }
  a = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_2);
  if ((a == (BIO *)0x0) ||
     ((param_8 != 0 &&
      (iVar1 = ossl_pw_set_ossl_passphrase_cb(param_1 + 3,param_8,param_9), iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*param_7)(a,param_3,param_4,param_5,param_10,param_11,param_1);
  }
  BIO_free(a);
  return uVar2;
}

