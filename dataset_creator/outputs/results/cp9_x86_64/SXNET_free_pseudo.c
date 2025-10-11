
void SXNET_free(SXNET *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)SXNET_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

