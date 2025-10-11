
int i2d_PKCS12_bio(BIO *bp,PKCS12 *p12)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,p12);
  return iVar1;
}

