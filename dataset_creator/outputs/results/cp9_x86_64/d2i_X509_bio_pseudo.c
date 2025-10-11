
X509 * d2i_X509_bio(BIO *bp,X509 **x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i_bio(it,bp,x509);
  return pXVar1;
}

