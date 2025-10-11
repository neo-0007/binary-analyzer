
int X509_REVOKED_set_revocationDate(X509_REVOKED *r,ASN1_TIME *tm)

{
  if (r != (X509_REVOKED *)0x0) {
    if ((ASN1_TIME *)r->issuer != tm) {
      tm = ASN1_STRING_dup(tm);
      if (tm != (ASN1_STRING *)0x0) {
        ASN1_TIME_free((ASN1_TIME *)r->issuer);
        r->issuer = (stack_st_GENERAL_NAME *)tm;
      }
    }
    return (int)(tm != (ASN1_STRING *)0x0);
  }
  return 0;
}

