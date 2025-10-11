
X509_SIG * d2i_X509_SIG(X509_SIG **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_SIG *pXVar1;
  
  it = (ASN1_ITEM *)X509_SIG_it();
  pXVar1 = (X509_SIG *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

