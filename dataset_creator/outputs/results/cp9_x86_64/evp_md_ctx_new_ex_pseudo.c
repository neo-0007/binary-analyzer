
long evp_md_ctx_new_ex(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  EVP_PKEY_CTX *ctx;
  
  lVar2 = EVP_MD_CTX_new();
  if (lVar2 != 0) {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_3,param_1,param_4);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
LAB_00519012:
        EVP_MD_CTX_set_pkey_ctx(lVar2,ctx);
        return lVar2;
      }
      iVar1 = EVP_PKEY_CTX_set1_id(ctx,*(undefined8 *)(param_2 + 2),*param_2);
      if (0 < iVar1) goto LAB_00519012;
      goto LAB_00519062;
    }
  }
  ERR_new();
  ctx = (EVP_PKEY_CTX *)0x0;
  ERR_set_debug("../crypto/evp/digest.c",0x71,"evp_md_ctx_new_ex");
  ERR_set_error(0xd,0xc0100,0);
LAB_00519062:
  EVP_PKEY_CTX_free(ctx);
  EVP_MD_CTX_free(lVar2);
  return 0;
}

