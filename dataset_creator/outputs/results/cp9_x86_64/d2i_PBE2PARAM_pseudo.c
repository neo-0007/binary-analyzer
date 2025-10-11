
PBE2PARAM * d2i_PBE2PARAM(PBE2PARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBE2PARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBE2PARAM_it();
  pPVar1 = (PBE2PARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

