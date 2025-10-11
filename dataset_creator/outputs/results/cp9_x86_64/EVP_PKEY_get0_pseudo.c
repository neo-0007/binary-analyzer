
void * EVP_PKEY_get0(EVP_PKEY *pkey)

{
  if ((pkey != (EVP_PKEY *)0x0) && (*(long *)&pkey[1].save_parameters == 0)) {
    return (pkey->pkey).ptr;
  }
  return (void *)0x0;
}

