
void X509V3_set_nconf(X509V3_CTX *ctx,CONF *conf)

{
  if (ctx != (X509V3_CTX *)0x0) {
    ctx->db = conf;
    ctx->db_meth = (X509V3_CONF_METHOD *)nconf_method;
    return;
  }
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_conf.c",0x1b7,"X509V3_set_nconf");
  ERR_set_error(0x22,0xc0102,0);
  return;
}

