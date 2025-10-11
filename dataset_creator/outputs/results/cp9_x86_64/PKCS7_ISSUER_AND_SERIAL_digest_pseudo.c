
int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  iVar1 = ASN1_item_digest(it,type,data,md,len);
  return iVar1;
}

