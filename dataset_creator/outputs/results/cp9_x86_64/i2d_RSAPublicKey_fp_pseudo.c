
int i2d_RSAPublicKey_fp(FILE *fp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,rsa);
  return iVar1;
}

