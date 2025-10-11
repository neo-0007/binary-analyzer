
PBEPARAM * d2i_PBEPARAM(PBEPARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBEPARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  pPVar1 = (PBEPARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

