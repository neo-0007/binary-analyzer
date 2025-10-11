
void DIST_POINT_NAME_free(DIST_POINT_NAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DIST_POINT_NAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

