
int i2d_X509_CRL_fp(FILE *fp,X509_CRL *crl)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,crl);
  return iVar1;
}

