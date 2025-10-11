
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CERT_AUX * X509_CERT_AUX_new(void)

{
  ASN1_ITEM *it;
  X509_CERT_AUX *pXVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  pXVar1 = (X509_CERT_AUX *)ASN1_item_new(it);
  return pXVar1;
}

