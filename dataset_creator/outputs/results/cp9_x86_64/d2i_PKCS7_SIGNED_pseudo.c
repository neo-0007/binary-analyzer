
PKCS7_SIGNED * d2i_PKCS7_SIGNED(PKCS7_SIGNED **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_SIGNED *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGNED_it();
  pPVar1 = (PKCS7_SIGNED *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

