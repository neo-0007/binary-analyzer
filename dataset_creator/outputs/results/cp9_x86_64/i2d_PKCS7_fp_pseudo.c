
int i2d_PKCS7_fp(FILE *fp,PKCS7 *p7)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,p7);
  return iVar1;
}

