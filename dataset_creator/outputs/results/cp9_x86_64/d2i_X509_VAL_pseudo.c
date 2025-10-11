
X509_VAL * d2i_X509_VAL(X509_VAL **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_VAL *pXVar1;
  
  it = (ASN1_ITEM *)X509_VAL_it();
  pXVar1 = (X509_VAL *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

