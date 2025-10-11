
ASN1_BIT_STRING * X509_get0_pubkey_bitstr(X509 *x)

{
  if (x != (X509 *)0x0) {
    return *(ASN1_BIT_STRING **)(x->ex_kusage + 8);
  }
  return (ASN1_BIT_STRING *)0x0;
}

