
X509_CERT_AUX * d2i_X509_CERT_AUX(X509_CERT_AUX **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_CERT_AUX *pXVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  pXVar1 = (X509_CERT_AUX *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}

