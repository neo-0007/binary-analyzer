
PKCS7_ENVELOPE * d2i_PKCS7_ENVELOPE(PKCS7_ENVELOPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENVELOPE_it();
  pPVar1 = (PKCS7_ENVELOPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

