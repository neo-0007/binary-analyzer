
int i2d_X509_CERT_AUX(X509_CERT_AUX *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CERT_AUX_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

