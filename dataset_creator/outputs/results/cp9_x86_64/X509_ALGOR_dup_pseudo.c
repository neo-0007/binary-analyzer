
X509_ALGOR * X509_ALGOR_dup(X509_ALGOR *xn)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_dup(it,xn);
  return pXVar1;
}

