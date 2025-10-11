
int ECParameters_print_fp(FILE *fp,EC_KEY *key)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = ECParameters_print(bp,key);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/eck_prn.c",0x39,"ECParameters_print_fp");
  ERR_set_error(0x10,0x80020,0);
  return 0;
}

