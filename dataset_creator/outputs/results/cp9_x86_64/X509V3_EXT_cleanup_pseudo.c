
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509V3_EXT_cleanup(void)

{
  OPENSSL_sk_pop_free(ext_list,ext_list_free);
  ext_list = 0;
  return;
}

