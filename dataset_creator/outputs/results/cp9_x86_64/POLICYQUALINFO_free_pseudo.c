
void POLICYQUALINFO_free(POLICYQUALINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICYQUALINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

