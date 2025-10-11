
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressOrRange * IPAddressOrRange_new(void)

{
  ASN1_ITEM *it;
  IPAddressOrRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressOrRange_it();
  pIVar1 = (IPAddressOrRange *)ASN1_item_new(it);
  return pIVar1;
}

