
void NAME_CONSTRAINTS_free(NAME_CONSTRAINTS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NAME_CONSTRAINTS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

