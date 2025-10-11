
X509_ALGOR * d2i_X509_ALGOR(X509_ALGOR **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

