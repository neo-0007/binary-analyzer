
int ASN1_item_ex_new(ASN1_VALUE **pval,ASN1_ITEM *it)

{
  int iVar1;
  
  iVar1 = asn1_item_embed_new(pval,it,0,0,0);
  return iVar1;
}

