
X509 * X509_dup(X509 *x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_dup(it,x509);
  return pXVar1;
}

