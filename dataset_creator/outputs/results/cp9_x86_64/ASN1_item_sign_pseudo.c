
int ASN1_item_sign(ASN1_ITEM *it,X509_ALGOR *algor1,X509_ALGOR *algor2,ASN1_BIT_STRING *signature,
                  void *data,EVP_PKEY *pkey,EVP_MD *type)

{
  int iVar1;
  
  iVar1 = ASN1_item_sign_ex();
  return iVar1;
}

