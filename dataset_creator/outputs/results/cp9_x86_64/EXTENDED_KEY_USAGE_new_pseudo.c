
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EXTENDED_KEY_USAGE * EXTENDED_KEY_USAGE_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)EXTENDED_KEY_USAGE_it();
  pAVar1 = ASN1_item_new(it);
  return (EXTENDED_KEY_USAGE *)pAVar1;
}

