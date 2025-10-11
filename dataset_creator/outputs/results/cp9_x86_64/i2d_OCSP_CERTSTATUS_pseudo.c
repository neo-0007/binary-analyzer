
int i2d_OCSP_CERTSTATUS(OCSP_CERTSTATUS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

