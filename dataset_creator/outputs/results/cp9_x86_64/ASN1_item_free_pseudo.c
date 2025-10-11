
void ASN1_item_free(ASN1_VALUE *val,ASN1_ITEM *it)

{
  ASN1_VALUE *local_10 [2];
  
  local_10[0] = val;
  ossl_asn1_item_embed_free(local_10,it,0);
  return;
}

