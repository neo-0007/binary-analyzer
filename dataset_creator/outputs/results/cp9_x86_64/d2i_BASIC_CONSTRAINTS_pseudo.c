
BASIC_CONSTRAINTS * d2i_BASIC_CONSTRAINTS(BASIC_CONSTRAINTS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  BASIC_CONSTRAINTS *pBVar1;
  
  it = (ASN1_ITEM *)BASIC_CONSTRAINTS_it();
  pBVar1 = (BASIC_CONSTRAINTS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pBVar1;
}

