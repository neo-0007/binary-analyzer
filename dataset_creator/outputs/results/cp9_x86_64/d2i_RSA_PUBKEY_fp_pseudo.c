
RSA * d2i_RSA_PUBKEY_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)ASN1_d2i_fp(RSA_new,d2i_RSA_PUBKEY,fp,rsa);
  return pRVar1;
}

