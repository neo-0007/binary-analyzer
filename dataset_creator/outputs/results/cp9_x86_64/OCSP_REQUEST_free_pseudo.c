
void OCSP_REQUEST_free(OCSP_REQUEST *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

