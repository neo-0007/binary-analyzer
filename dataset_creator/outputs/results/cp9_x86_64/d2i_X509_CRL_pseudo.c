
X509_CRL * d2i_X509_CRL(X509_CRL **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

