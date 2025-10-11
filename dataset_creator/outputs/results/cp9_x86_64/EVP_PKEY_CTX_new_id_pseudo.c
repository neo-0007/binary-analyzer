
EVP_PKEY_CTX * EVP_PKEY_CTX_new_id(int id,ENGINE *e)

{
  EVP_PKEY_CTX *pEVar1;
  
  pEVar1 = (EVP_PKEY_CTX *)int_ctx_new(0,0,e,0,0,id);
  return pEVar1;
}

