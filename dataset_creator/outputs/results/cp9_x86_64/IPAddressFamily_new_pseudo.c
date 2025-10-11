
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

IPAddressFamily * IPAddressFamily_new(void)

{
  ASN1_ITEM *it;
  IPAddressFamily *pIVar1;
  
  it = (ASN1_ITEM *)IPAddressFamily_it();
  pIVar1 = (IPAddressFamily *)ASN1_item_new(it);
  return pIVar1;
}

