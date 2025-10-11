
PKCS12_BAGS * d2i_PKCS12_BAGS(PKCS12_BAGS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_BAGS *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_BAGS_it();
  pPVar1 = (PKCS12_BAGS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

