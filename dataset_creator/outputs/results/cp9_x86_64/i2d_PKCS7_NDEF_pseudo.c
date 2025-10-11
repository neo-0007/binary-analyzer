
int i2d_PKCS7_NDEF(PKCS7 *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

