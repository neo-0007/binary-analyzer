
X509_NAME * d2i_X509_NAME(X509_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

