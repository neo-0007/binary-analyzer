
int i2d_X509_fp(FILE *fp,X509 *x509)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,x509);
  return iVar1;
}

