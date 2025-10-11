
X509 * d2i_X509_fp(FILE *fp,X509 **x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i_fp(it,fp,x509);
  return pXVar1;
}

