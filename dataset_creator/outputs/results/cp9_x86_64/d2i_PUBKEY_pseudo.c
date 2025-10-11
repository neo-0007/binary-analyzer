
EVP_PKEY * d2i_PUBKEY(EVP_PKEY **a,uchar **pp,long length)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)d2i_PUBKEY_ex();
  return pEVar1;
}

