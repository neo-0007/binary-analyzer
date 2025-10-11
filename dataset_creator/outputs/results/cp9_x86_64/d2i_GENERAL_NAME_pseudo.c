
GENERAL_NAME * d2i_GENERAL_NAME(GENERAL_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  GENERAL_NAME *pGVar1;
  
  it = (ASN1_ITEM *)GENERAL_NAME_it();
  pGVar1 = (GENERAL_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pGVar1;
}

