
void ASIdentifierChoice_free(ASIdentifierChoice *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASIdentifierChoice_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

