
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CINF * X509_CINF_new(void)

{
  ASN1_ITEM *it;
  X509_CINF *pXVar1;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  pXVar1 = (X509_CINF *)ASN1_item_new(it);
  return pXVar1;
}

