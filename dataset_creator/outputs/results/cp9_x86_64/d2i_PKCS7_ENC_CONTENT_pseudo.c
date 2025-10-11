
PKCS7_ENC_CONTENT * d2i_PKCS7_ENC_CONTENT(PKCS7_ENC_CONTENT **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_ENC_CONTENT *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_ENC_CONTENT_it();
  pPVar1 = (PKCS7_ENC_CONTENT *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

