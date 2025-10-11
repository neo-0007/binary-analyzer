
int i2d_OCSP_SINGLERESP(OCSP_SINGLERESP *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}

