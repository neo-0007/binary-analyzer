
void OCSP_ONEREQ_free(OCSP_ONEREQ *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

