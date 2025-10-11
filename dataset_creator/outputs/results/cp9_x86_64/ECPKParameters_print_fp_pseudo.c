
int ECPKParameters_print_fp(FILE *fp,EC_GROUP *x,int off)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = ECPKParameters_print(bp,x,off);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/eck_prn.c",0x1b,"ECPKParameters_print_fp");
  ERR_set_error(0x10,0x80007,0);
  return 0;
}

