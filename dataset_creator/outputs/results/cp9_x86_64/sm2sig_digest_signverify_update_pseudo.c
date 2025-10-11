
bool sm2sig_digest_signverify_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  
  if (param_1 == 0) {
    return false;
  }
  ctx = *(EVP_MD_CTX **)(param_1 + 0x168);
  if (ctx == (EVP_MD_CTX *)0x0) {
    return false;
  }
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    iVar1 = sm2sig_compute_z_digest_part_0(param_1);
    if (iVar1 == 0) {
      return false;
    }
    ctx = *(EVP_MD_CTX **)(param_1 + 0x168);
  }
  iVar1 = EVP_DigestUpdate(ctx,param_2,param_3);
  return iVar1 != 0;
}

