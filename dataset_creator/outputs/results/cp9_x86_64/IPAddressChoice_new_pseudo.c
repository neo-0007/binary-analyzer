
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressChoice * IPAddressChoice_new(void)

{
  ASN1_ITEM *it;
  IPAddressChoice *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressChoice_it();
  pIVar1 = (IPAddressChoice *)ASN1_item_new(it);
  return pIVar1;
}

