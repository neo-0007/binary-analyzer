
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NOTICEREF * NOTICEREF_new(void)

{
  ASN1_ITEM *it;
  NOTICEREF *pNVar1;
  
  it = (ASN1_ITEM *)NOTICEREF_it();
  pNVar1 = (NOTICEREF *)ASN1_item_new(it);
  return pNVar1;
}

