
int X509V3_EXT_REQ_add_conf(lhash_st_CONF_VALUE *conf,X509V3_CTX *ctx,char *section,X509_REQ *req)

{
  int iVar1;
  CONF *conf_00;
  
  iVar1 = 0;
  conf_00 = NCONF_new((CONF_METHOD *)0x0);
  if (conf_00 != (CONF *)0x0) {
    CONF_set_nconf(conf_00,conf);
    iVar1 = X509V3_EXT_REQ_add_nconf(conf_00,ctx,section,req);
    CONF_set_nconf(conf_00,(lhash_st_CONF_VALUE *)0x0);
    NCONF_free(conf_00);
  }
  return iVar1;
}

