
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRL_DIST_POINTS * CRL_DIST_POINTS_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CRL_DIST_POINTS_it();
  pAVar1 = ASN1_item_new(it);
  return (CRL_DIST_POINTS *)pAVar1;
}

