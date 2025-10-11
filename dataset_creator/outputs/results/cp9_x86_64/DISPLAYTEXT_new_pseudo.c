
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * DISPLAYTEXT_new(void)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_new(it);
  return pAVar1;
}

