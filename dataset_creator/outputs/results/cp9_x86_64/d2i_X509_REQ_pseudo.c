
X509_REQ * d2i_X509_REQ(X509_REQ **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

