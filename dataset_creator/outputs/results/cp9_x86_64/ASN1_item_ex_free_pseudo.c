
void ASN1_item_ex_free(ASN1_VALUE **pval,ASN1_ITEM *it)

{
  ossl_asn1_item_embed_free(pval,it,0);
  return;
}

