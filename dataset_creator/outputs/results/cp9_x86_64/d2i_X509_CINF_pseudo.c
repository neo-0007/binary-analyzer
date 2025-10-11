
X509_CINF * d2i_X509_CINF(X509_CINF **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_CINF *pXVar1;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  pXVar1 = (X509_CINF *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

