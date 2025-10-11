
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ISSUING_DIST_POINT * ISSUING_DIST_POINT_new(void)

{
  ASN1_ITEM *it;
  ISSUING_DIST_POINT *pIVar1;
  
  it = (ASN1_ITEM *)ISSUING_DIST_POINT_it();
  pIVar1 = (ISSUING_DIST_POINT *)ASN1_item_new(it);
  return pIVar1;
}

