
int ossl_md5_sha1_init(MD5_CTX *param_1)

{
  int iVar1;
  
  iVar1 = MD5_Init(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = SHA1_Init((SHA_CTX *)(param_1 + 1));
  return iVar1;
}

