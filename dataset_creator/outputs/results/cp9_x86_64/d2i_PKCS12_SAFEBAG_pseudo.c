
PKCS12_SAFEBAG * d2i_PKCS12_SAFEBAG(PKCS12_SAFEBAG **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS12_SAFEBAG *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_SAFEBAG_it();
  pPVar1 = (PKCS12_SAFEBAG *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}

