
X509_EXTENSION * X509_EXTENSION_dup(X509_EXTENSION *ex)

{
  ASN1_ITEM *it;
  X509_EXTENSION *pXVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSION_it();
  pXVar1 = (X509_EXTENSION *)ASN1_item_dup(it,ex);
  return pXVar1;
}

