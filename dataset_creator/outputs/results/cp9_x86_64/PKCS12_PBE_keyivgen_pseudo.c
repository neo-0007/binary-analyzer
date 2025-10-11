
int PKCS12_PBE_keyivgen(EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,
                       EVP_CIPHER *cipher,EVP_MD *md_type,int en_de)

{
  int iVar1;
  
  iVar1 = PKCS12_PBE_keyivgen_ex();
  return iVar1;
}

