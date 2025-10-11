
int NCONF_load_fp(CONF *conf,FILE *fp,long *eline)

{
  int iVar1;
  BIO *bp;
  
  bp = BIO_new_fp(fp,0);
  if (bp != (BIO *)0x0) {
    iVar1 = NCONF_load_bio(conf,bp,eline);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/conf/conf_lib.c",0x10a,"NCONF_load_fp");
  ERR_set_error(0xe,0x80007,0);
  return 0;
}

