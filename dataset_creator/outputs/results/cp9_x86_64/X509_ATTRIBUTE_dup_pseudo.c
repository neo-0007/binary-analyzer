
X509_ATTRIBUTE * X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa)

{
  ASN1_ITEM *it;
  X509_ATTRIBUTE *pXVar1;
  
  it = (ASN1_ITEM *)X509_ATTRIBUTE_it();
  pXVar1 = (X509_ATTRIBUTE *)ASN1_item_dup(it,xa);
  return pXVar1;
}

