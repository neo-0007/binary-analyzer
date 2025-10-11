
int i2d_RSAPublicKey_bio(BIO *bp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,rsa);
  return iVar1;
}

