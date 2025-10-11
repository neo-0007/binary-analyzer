
int i2d_DSAPublicKey(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)local_it_0);
  return iVar1;
}

