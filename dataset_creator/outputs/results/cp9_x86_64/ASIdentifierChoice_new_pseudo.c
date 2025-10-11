
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASIdentifierChoice * ASIdentifierChoice_new(void)

{
  ASN1_ITEM *it;
  ASIdentifierChoice *pAVar1;
  
  it = (ASN1_ITEM *)ASIdentifierChoice_it();
  pAVar1 = (ASIdentifierChoice *)ASN1_item_new(it);
  return pAVar1;
}

