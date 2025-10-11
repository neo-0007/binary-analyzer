
int X509_NAME_digest(X509_NAME *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  iVar1 = ASN1_item_digest(it,type,data,md,len);
  return iVar1;
}

