
int EVP_PKEY_set_type(EVP_PKEY *pkey,int type)

{
  int iVar1;
  
  iVar1 = pkey_set_type(pkey,0,type,0,0xffffffff,0);
  return iVar1;
}

