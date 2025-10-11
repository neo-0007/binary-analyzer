
void OCSP_CERTSTATUS_free(OCSP_CERTSTATUS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

