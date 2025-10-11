
RSA * d2i_RSAPrivateKey(RSA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pRVar1;
}

