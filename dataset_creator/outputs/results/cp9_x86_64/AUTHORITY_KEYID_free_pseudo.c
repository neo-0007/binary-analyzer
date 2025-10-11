
void AUTHORITY_KEYID_free(AUTHORITY_KEYID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)AUTHORITY_KEYID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

