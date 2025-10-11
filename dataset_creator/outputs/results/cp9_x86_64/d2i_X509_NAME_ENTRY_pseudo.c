
X509_NAME_ENTRY * d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_NAME_ENTRY *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

