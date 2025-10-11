
int i2d_DHparams(DH *a,uchar **pp)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DHparams_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,it);
  return iVar1;
}

