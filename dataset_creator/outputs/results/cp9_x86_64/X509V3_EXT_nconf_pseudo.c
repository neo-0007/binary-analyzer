
X509_EXTENSION * X509V3_EXT_nconf(CONF *conf,X509V3_CTX *ctx,char *name,char *value)

{
  X509_EXTENSION *pXVar1;
  
  pXVar1 = (X509_EXTENSION *)X509V3_EXT_nconf_int(conf,ctx,0,name,value);
  return pXVar1;
}

