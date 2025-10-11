
EVP_CIPHER * EVP_get_cipherbyname(char *name)

{
  EVP_CIPHER *pEVar1;
  
  pEVar1 = (EVP_CIPHER *)evp_get_cipherbyname_ex(0,name);
  return pEVar1;
}

