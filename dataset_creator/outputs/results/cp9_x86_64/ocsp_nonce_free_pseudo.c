
void ocsp_nonce_free(ASN1_STRING *a)

{
  ASN1_OCTET_STRING_free(a);
  return;
}

