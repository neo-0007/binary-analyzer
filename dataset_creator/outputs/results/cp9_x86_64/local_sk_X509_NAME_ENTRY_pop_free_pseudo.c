
void local_sk_X509_NAME_ENTRY_pop_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,X509_NAME_ENTRY_free);
  return;
}

