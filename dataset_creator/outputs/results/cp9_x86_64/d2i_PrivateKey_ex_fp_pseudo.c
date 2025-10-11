
undefined8
d2i_PrivateKey_ex_fp(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../crypto/x509/x_all.c",0x294,"d2i_PrivateKey_ex_fp");
    ERR_set_error(0xb,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = d2i_PrivateKey_ex_bio(bp,param_2,param_3,param_4);
    BIO_free(bp);
  }
  return uVar1;
}

