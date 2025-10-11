
X509 * d2i_X509(X509 **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

