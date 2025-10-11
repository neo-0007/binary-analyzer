
void OCSP_RESPBYTES_free(OCSP_RESPBYTES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

