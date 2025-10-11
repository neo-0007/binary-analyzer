
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DIST_POINT * DIST_POINT_new(void)

{
  ASN1_ITEM *it;
  DIST_POINT *pDVar1;
  
  it = (ASN1_ITEM *)DIST_POINT_it();
  pDVar1 = (DIST_POINT *)ASN1_item_new(it);
  return pDVar1;
}

