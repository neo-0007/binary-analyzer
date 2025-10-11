
PKCS12 * d2i_PKCS12(PKCS12 **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  pPVar1 = (PKCS12 *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

