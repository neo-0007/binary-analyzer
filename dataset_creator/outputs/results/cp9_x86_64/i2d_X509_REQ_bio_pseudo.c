
int i2d_X509_REQ_bio(BIO *bp,X509_REQ *req)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,req);
  return iVar1;
}

