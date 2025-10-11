
int CONF_dump_fp(lhash_st_CONF_VALUE *conf,FILE *out)

{
  int iVar1;
  BIO *out_00;
  
  out_00 = BIO_new_fp(out,0);
  if (out_00 != (BIO *)0x0) {
    iVar1 = CONF_dump_bio(conf,out_00);
    BIO_free(out_00);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/conf/conf_lib.c",0x9d,"CONF_dump_fp");
  ERR_set_error(0xe,0x80007,0);
  return 0;
}

