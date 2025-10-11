
void ASN1_NULL_free(ASN1_NULL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

