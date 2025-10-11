
int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj,char *pass,int passlen,ASN1_TYPE *param,
                      EVP_CIPHER_CTX *ctx,int en_de)

{
  int iVar1;
  
  iVar1 = EVP_PBE_CipherInit_ex();
  return iVar1;
}

