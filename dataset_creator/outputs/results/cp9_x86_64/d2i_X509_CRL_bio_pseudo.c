
X509_CRL * d2i_X509_CRL_bio(BIO *bp,X509_CRL **crl)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_d2i_bio(it,bp,crl);
  return pXVar1;
}

