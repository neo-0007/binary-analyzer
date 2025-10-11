
PKCS7_SIGN_ENVELOPE * d2i_PKCS7_SIGN_ENVELOPE(PKCS7_SIGN_ENVELOPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_SIGN_ENVELOPE *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_SIGN_ENVELOPE_it();
  pPVar1 = (PKCS7_SIGN_ENVELOPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

