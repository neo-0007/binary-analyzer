
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

AUTHORITY_INFO_ACCESS * AUTHORITY_INFO_ACCESS_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_INFO_ACCESS_it();
  pAVar1 = ASN1_item_new(it);
  return (AUTHORITY_INFO_ACCESS *)pAVar1;
}

