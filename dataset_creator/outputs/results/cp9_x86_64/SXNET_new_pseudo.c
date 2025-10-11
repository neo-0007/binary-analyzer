
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SXNET * SXNET_new(void)

{
  ASN1_ITEM *it;
  SXNET *pSVar1;
  
  it = (ASN1_ITEM *)SXNET_it();
  pSVar1 = (SXNET *)ASN1_item_new(it);
  return pSVar1;
}

