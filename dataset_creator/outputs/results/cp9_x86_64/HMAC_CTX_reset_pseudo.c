
undefined8 HMAC_CTX_reset(undefined8 *param_1)

{
  int iVar1;
  
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  iVar1 = hmac_ctx_alloc_mds(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  EVP_MD_CTX_reset(param_1[2]);
  EVP_MD_CTX_reset(param_1[3]);
  EVP_MD_CTX_reset(param_1[1]);
  *param_1 = 0;
  return 0;
}

