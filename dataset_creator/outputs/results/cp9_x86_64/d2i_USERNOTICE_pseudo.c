
USERNOTICE * d2i_USERNOTICE(USERNOTICE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  USERNOTICE *pUVar1;
  
  it = (ASN1_ITEM *)USERNOTICE_it();
  pUVar1 = (USERNOTICE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pUVar1;
}

