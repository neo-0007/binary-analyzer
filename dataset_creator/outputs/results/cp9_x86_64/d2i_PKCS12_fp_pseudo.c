
PKCS12 * d2i_PKCS12_fp(FILE *fp,PKCS12 **p12)

{
  ASN1_ITEM *it;
  PKCS12 *pPVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  pPVar1 = (PKCS12 *)ASN1_item_d2i_fp(it,fp,p12);
  return pPVar1;
}

