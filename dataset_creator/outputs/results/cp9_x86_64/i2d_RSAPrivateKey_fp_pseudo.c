
int i2d_RSAPrivateKey_fp(FILE *fp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,rsa);
  return iVar1;
}

