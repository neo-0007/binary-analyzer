
RSA * RSAPublicKey_dup(RSA *rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_dup(it,rsa);
  return pRVar1;
}

