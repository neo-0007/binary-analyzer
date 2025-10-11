
void X509_reject_clear(X509 *x)

{
  if (x[1].altname != (stack_st_GENERAL_NAME *)0x0) {
    OPENSSL_sk_pop_free(((x[1].altname)->stack).data,ASN1_OBJECT_free);
    ((x[1].altname)->stack).data = (char **)0x0;
    return;
  }
  return;
}

