
int HMAC_CTX_copy(HMAC_CTX *dctx,HMAC_CTX *sctx)

{
  int iVar1;
  EVP_MD *pEVar2;
  
  iVar1 = hmac_ctx_alloc_mds();
  if (iVar1 != 0) {
    iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).engine,
                               (EVP_MD_CTX *)(sctx->md_ctx).engine);
    if (iVar1 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).flags,
                                 (EVP_MD_CTX *)(sctx->md_ctx).flags);
      if (iVar1 != 0) {
        iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).digest,
                                   (EVP_MD_CTX *)(sctx->md_ctx).digest);
        if (iVar1 != 0) {
          pEVar2 = sctx->md;
          iVar1 = 1;
          goto LAB_00537778;
        }
      }
    }
  }
  EVP_MD_CTX_reset((dctx->md_ctx).engine);
  EVP_MD_CTX_reset((dctx->md_ctx).flags);
  EVP_MD_CTX_reset((dctx->md_ctx).digest);
  pEVar2 = (EVP_MD *)0x0;
  iVar1 = 0;
LAB_00537778:
  dctx->md = pEVar2;
  return iVar1;
}

