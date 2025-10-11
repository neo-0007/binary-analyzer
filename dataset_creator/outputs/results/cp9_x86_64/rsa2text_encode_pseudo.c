
undefined4
rsa2text_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  BIO *a;
  
  if (param_4 == 0) {
    a = (BIO *)ossl_bio_new_from_core_bio();
    if (a != (BIO *)0x0) {
      uVar1 = rsa_to_text(a,param_3,param_5);
      BIO_free(a);
      return uVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x378,
                  "rsa2text_encode");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}

