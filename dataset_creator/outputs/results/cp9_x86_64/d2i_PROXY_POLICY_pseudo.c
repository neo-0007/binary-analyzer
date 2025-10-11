
PROXY_POLICY * d2i_PROXY_POLICY(PROXY_POLICY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PROXY_POLICY *pPVar1;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  pPVar1 = (PROXY_POLICY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

