
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIST_POINT_NAME * DIST_POINT_NAME_new(void)

{
  ASN1_ITEM *it;
  DIST_POINT_NAME *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  pDVar1 = (DIST_POINT_NAME *)ASN1_item_new(it);
  return pDVar1;
}

