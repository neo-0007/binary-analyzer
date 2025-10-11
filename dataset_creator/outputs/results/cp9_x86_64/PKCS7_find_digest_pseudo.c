
BIO * PKCS7_find_digest(long *param_1,BIO *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  BIO *bp;
  
  while( true ) {
    bp = BIO_find_type(param_2,0x208);
    if (bp == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2b1,"PKCS7_find_digest");
      ERR_set_error(0x21,0x6c,0);
      return (BIO *)0x0;
    }
    BIO_ctrl(bp,0x78,0,param_1);
    if (*param_1 == 0) break;
    uVar2 = EVP_MD_CTX_get0_md();
    iVar1 = EVP_MD_get_type(uVar2);
    if (iVar1 == param_3) {
      return bp;
    }
    param_2 = BIO_next(bp);
  }
  ERR_new();
  ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2b6,"PKCS7_find_digest");
  ERR_set_error(0x21,0xc0103,0);
  return (BIO *)0x0;
}

