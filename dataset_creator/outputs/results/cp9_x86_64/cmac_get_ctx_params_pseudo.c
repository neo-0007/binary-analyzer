
ulong cmac_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  EVP_CIPHER_CTX *pEVar3;
  ulong uVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"size");
  if (lVar2 != 0) {
    pEVar3 = CMAC_CTX_get0_cipher_ctx(*(CMAC_CTX **)(param_1 + 8));
    iVar1 = EVP_CIPHER_CTX_get_block_size(pEVar3);
    uVar4 = OSSL_PARAM_set_size_t(lVar2,(long)iVar1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"block-size");
  uVar4 = 1;
  if (lVar2 != 0) {
    pEVar3 = CMAC_CTX_get0_cipher_ctx(*(CMAC_CTX **)(param_1 + 8));
    iVar1 = EVP_CIPHER_CTX_get_block_size(pEVar3);
    iVar1 = OSSL_PARAM_set_size_t(lVar2,(long)iVar1);
    uVar4 = (ulong)(iVar1 != 0);
  }
  return uVar4;
}

