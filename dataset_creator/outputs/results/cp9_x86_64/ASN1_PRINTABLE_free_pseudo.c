
void ASN1_PRINTABLE_free(ASN1_STRING *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

