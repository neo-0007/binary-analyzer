
void OCSP_REVOKEDINFO_free(OCSP_REVOKEDINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

