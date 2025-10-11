
void CERTIFICATEPOLICIES_free(CERTIFICATEPOLICIES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CERTIFICATEPOLICIES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

