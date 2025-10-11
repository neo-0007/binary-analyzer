
int i2d_PKCS12_fp(FILE *fp,PKCS12 *p12)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,p12);
  return iVar1;
}

