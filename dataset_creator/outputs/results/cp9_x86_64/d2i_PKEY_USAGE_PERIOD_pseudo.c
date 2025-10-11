
PKEY_USAGE_PERIOD * d2i_PKEY_USAGE_PERIOD(PKEY_USAGE_PERIOD **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKEY_USAGE_PERIOD *pPVar1;
  
  it = (ASN1_ITEM *)PKEY_USAGE_PERIOD_it();
  pPVar1 = (PKEY_USAGE_PERIOD *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

