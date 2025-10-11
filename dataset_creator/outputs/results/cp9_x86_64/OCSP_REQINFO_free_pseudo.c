
void OCSP_REQINFO_free(OCSP_REQINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

