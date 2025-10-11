
PKCS7_ENCRYPT * d2i_PKCS7_ENCRYPT(PKCS7_ENCRYPT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENCRYPT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENCRYPT_it();
  pPVar1 = (PKCS7_ENCRYPT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

