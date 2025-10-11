
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

AUTHORITY_KEYID * AUTHORITY_KEYID_new(void)

{
  ASN1_ITEM *it;
  AUTHORITY_KEYID *pAVar1;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  pAVar1 = (AUTHORITY_KEYID *)ASN1_item_new(it);
  return pAVar1;
}

