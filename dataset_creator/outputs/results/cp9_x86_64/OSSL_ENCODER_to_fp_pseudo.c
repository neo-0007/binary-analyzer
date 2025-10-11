
undefined4 OSSL_ENCODER_to_fp(undefined8 param_1,void *param_2)

{
  undefined4 uVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../crypto/encode_decode/encoder_lib.c",0x47,"bio_from_file");
    ERR_set_error(0x3b,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_2);
    uVar1 = OSSL_ENCODER_to_bio(param_1,bp);
  }
  BIO_free(bp);
  return uVar1;
}

