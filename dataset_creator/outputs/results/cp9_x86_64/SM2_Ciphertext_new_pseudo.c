
void SM2_Ciphertext_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SM2_Ciphertext_it();
  ASN1_item_new(it);
  return;
}

