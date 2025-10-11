
X509_NAME * X509_NAME_dup(X509_NAME *xn)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_dup(it,xn);
  return pXVar1;
}

