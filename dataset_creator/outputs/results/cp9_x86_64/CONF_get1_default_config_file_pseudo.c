
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * CONF_get1_default_config_file(void)

{
  char *pcVar1;
  size_t sVar2;
  char *buf;
  
  pcVar1 = (char *)ossl_safe_getenv("OPENSSL_CONF");
  if (pcVar1 != (char *)0x0) {
    pcVar1 = CRYPTO_strdup(pcVar1,"../crypto/conf/conf_mod.c",0x226);
    return pcVar1;
  }
  pcVar1 = X509_get_default_cert_area();
  sVar2 = strlen(pcVar1);
  buf = (char *)CRYPTO_malloc((int)(sVar2 + 0xd),"../crypto/conf/conf_mod.c",0x22d);
  if (buf != (char *)0x0) {
    BIO_snprintf(buf,sVar2 + 0xd,"%s%s%s",pcVar1,0x8198dc,"openssl.cnf");
  }
  return buf;
}

