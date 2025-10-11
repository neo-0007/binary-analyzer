
void ISSUER_SIGN_TOOL_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ISSUER_SIGN_TOOL_it();
  ASN1_item_new(it);
  return;
}

