
void SXNETID_free(SXNETID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SXNETID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

