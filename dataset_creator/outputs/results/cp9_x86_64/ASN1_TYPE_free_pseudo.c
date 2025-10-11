
void ASN1_TYPE_free(ASN1_TYPE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

