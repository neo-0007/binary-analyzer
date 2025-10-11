
SXNET * d2i_SXNET(SXNET **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  SXNET *pSVar1;
  
  it = (ASN1_ITEM *)SXNET_it();
  pSVar1 = (SXNET *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pSVar1;
}

