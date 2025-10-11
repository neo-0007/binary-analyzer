
PKCS7_DIGEST * d2i_PKCS7_DIGEST(PKCS7_DIGEST **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS7_DIGEST *pPVar1;
  
  it = (ASN1_ITEM *)PKCS7_DIGEST_it();
  pPVar1 = (PKCS7_DIGEST *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

