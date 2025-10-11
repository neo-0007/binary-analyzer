
void SCRYPT_PARAMS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SCRYPT_PARAMS_it();
  ASN1_item_new(it);
  return;
}

