
void POLICYINFO_free(POLICYINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)POLICYINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

