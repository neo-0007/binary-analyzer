
PKCS8_PRIV_KEY_INFO * d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

