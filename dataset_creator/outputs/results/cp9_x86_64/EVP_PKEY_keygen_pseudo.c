
int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx,EVP_PKEY **ppkey)

{
  int iVar1;
  
  if (*(int *)ctx == 4) {
    iVar1 = EVP_PKEY_generate();
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/pmeth_gn.c",0x10f,"EVP_PKEY_keygen");
  ERR_set_error(6,0x97,0);
  return -1;
}

