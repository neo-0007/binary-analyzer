
DH * d2i_DHparams(DH **a,uchar **pp,long length)

{
  ASN1_ITEM *it;
  DH *pDVar1;
  
  it = (ASN1_ITEM *)DHparams_it();
  pDVar1 = (DH *)ASN1_item_d2i((ASN1_VALUE **)a,pp,length,it);
  return pDVar1;
}

