
int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a,EVP_PKEY *r)

{
  NETSCAPE_SPKAC *data;
  ASN1_BIT_STRING *signature;
  ASN1_ITEM *it;
  int iVar1;
  
  data = a->spkac;
  signature = (ASN1_BIT_STRING *)a[1].spkac;
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  iVar1 = ASN1_item_verify(it,(X509_ALGOR *)&a->sig_algor,signature,data,r);
  return iVar1;
}

