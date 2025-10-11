
void PROXY_POLICY_free(PROXY_POLICY *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PROXY_POLICY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

