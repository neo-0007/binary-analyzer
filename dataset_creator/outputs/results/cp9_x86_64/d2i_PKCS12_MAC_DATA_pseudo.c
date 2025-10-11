
PKCS12_MAC_DATA * d2i_PKCS12_MAC_DATA(PKCS12_MAC_DATA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_MAC_DATA *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_MAC_DATA_it();
  pPVar1 = (PKCS12_MAC_DATA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

