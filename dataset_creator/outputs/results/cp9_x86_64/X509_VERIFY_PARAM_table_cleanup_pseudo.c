
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void X509_VERIFY_PARAM_table_cleanup(void)

{
  OPENSSL_sk_pop_free(param_table,X509_VERIFY_PARAM_free);
  param_table = 0;
  return;
}

