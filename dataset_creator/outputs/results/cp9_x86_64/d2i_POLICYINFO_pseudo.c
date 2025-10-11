
POLICYINFO * d2i_POLICYINFO(POLICYINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  POLICYINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  pPVar1 = (POLICYINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

