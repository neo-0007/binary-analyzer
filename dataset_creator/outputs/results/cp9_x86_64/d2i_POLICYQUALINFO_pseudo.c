
POLICYQUALINFO * d2i_POLICYQUALINFO(POLICYQUALINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  POLICYQUALINFO *pPVar1;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  pPVar1 = (POLICYQUALINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

