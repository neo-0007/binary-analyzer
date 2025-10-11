
RSA * d2i_RSAPublicKey_bio(BIO *bp,RSA **rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i_bio(it,bp,rsa);
  return pRVar1;
}

