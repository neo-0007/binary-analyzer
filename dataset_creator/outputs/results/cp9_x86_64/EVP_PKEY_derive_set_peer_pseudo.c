
int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx,EVP_PKEY *peer)

{
  int iVar1;
  
  iVar1 = EVP_PKEY_derive_set_peer_ex(ctx,peer,1);
  return iVar1;
}

