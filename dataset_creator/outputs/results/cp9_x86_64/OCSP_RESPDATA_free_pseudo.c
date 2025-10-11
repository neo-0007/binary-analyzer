
void OCSP_RESPDATA_free(OCSP_RESPDATA *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

