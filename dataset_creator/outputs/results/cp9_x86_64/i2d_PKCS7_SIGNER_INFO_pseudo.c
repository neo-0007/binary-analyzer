
int i2d_PKCS7_SIGNER_INFO(PKCS7_SIGNER_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNER_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

