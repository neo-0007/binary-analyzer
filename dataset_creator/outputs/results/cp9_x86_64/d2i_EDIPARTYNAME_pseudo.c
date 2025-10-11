
EDIPARTYNAME * d2i_EDIPARTYNAME(EDIPARTYNAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  EDIPARTYNAME *pEVar1;
  
  it = (ASN1_ITEM *)EDIPARTYNAME_it();
  pEVar1 = (EDIPARTYNAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pEVar1;
}

