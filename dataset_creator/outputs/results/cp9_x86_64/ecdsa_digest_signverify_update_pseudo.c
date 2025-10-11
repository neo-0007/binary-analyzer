
int ecdsa_digest_signverify_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(EVP_MD_CTX **)(param_1 + 0x178) != (EVP_MD_CTX *)0x0)) {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x178),param_2,param_3);
    return iVar1;
  }
  return 0;
}

