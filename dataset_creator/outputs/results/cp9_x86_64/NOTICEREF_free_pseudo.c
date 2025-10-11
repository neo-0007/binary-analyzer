
void NOTICEREF_free(NOTICEREF *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}

