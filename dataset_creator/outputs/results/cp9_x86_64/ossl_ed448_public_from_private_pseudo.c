
bool ossl_ed448_public_from_private(void)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_derive_public_key();
  return iVar1 == -1;
}

