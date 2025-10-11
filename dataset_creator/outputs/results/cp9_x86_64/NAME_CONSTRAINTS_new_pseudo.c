
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NAME_CONSTRAINTS * NAME_CONSTRAINTS_new(void)

{
  ASN1_ITEM *it;
  NAME_CONSTRAINTS *pNVar1;
  
  it = (ASN1_ITEM *)NAME_CONSTRAINTS_it();
  pNVar1 = (NAME_CONSTRAINTS *)ASN1_item_new(it);
  return pNVar1;
}

