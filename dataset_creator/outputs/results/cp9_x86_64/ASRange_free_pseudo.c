
void ASRange_free(ASRange *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASRange_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

