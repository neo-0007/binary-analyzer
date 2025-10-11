
X509_EXTENSIONS * d2i_X509_EXTENSIONS(X509_EXTENSIONS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)X509_EXTENSIONS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (X509_EXTENSIONS *)pAVar1;
}

