
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressRange * IPAddressRange_new(void)

{
  ASN1_ITEM *it;
  IPAddressRange *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressRange_it();
  pIVar1 = (IPAddressRange *)ASN1_item_new(it);
  return pIVar1;
}

