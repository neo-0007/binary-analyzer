
EVP_PKEY_CTX * EVP_PKEY_CTX_new(EVP_PKEY *pkey,ENGINE *e)

{
  EVP_PKEY_CTX *pEVar1;
  
  pEVar1 = (EVP_PKEY_CTX *)int_ctx_new(0,pkey,e,0,0,0xffffffff);
  return pEVar1;
}

