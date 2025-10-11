
int BN_print_fp(FILE *fp,BIGNUM *a)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  iVar1 = 0;
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = BN_print(bp,a);
    BIO_free(bp);
  }
  return iVar1;
}

