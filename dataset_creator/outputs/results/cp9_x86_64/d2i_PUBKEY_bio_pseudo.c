
EVP_PKEY * d2i_PUBKEY_bio(BIO *bp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_bio(EVP_PKEY_new,d2i_PUBKEY,bp,a);
  return pEVar1;
}

