
int EVP_CIPHER_param_to_asn1(EVP_CIPHER_CTX *c,ASN1_TYPE *type)

{
  int iVar1;
  
  iVar1 = evp_cipher_param_to_asn1_ex(c,type,0);
  return iVar1;
}

