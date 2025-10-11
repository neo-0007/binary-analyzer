
EVP_MD * EVP_get_digestbyname(char *name)

{
  EVP_MD *pEVar1;
  
  pEVar1 = (EVP_MD *)evp_get_digestbyname_ex(0,name);
  return pEVar1;
}

