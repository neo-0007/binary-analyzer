
int i2d_X509_CRL_bio(BIO *bp,X509_CRL *crl)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,crl);
  return iVar1;
}

