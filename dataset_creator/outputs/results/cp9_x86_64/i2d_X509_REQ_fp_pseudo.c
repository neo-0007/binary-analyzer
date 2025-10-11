
int i2d_X509_REQ_fp(FILE *fp,X509_REQ *req)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,req);
  return iVar1;
}

