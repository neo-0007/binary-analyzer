
X509_REQ_INFO * d2i_X509_REQ_INFO(X509_REQ_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_REQ_INFO *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  pXVar1 = (X509_REQ_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

