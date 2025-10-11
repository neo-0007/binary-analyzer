
PKCS7_RECIP_INFO * d2i_PKCS7_RECIP_INFO(PKCS7_RECIP_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_RECIP_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_RECIP_INFO_it();
  pPVar1 = (PKCS7_RECIP_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

