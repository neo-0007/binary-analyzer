
lhash_st_CONF_VALUE * CONF_load(lhash_st_CONF_VALUE *conf,char *file,long *eline)

{
  BIO *bp;
  lhash_st_CONF_VALUE *plVar1;
  
  bp = BIO_new_file(file,"rb");
  if (bp == (BIO *)0x0) {
    ERR_new();
    plVar1 = (lhash_st_CONF_VALUE *)0x0;
    ERR_set_debug("../crypto/conf/conf_lib.c",0x3a,"CONF_load");
    ERR_set_error(0xe,0x80002,0);
  }
  else {
    plVar1 = CONF_load_bio(conf,bp,eline);
    BIO_free(bp);
  }
  return plVar1;
}

