
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * ASN1_NULL_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  pAVar1 = ASN1_item_new(it);
  return (ASN1_NULL *)pAVar1;
}

