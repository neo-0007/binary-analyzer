
void OSSL_LIB_CTX_free(void *param_1)

{
  int iVar1;
  
  iVar1 = ossl_lib_ctx_is_default();
  if (iVar1 == 0) {
    if ((*(byte *)((long)param_1 + 0x1c0) & 1) != 0) {
      ossl_provider_deinit_child(param_1);
    }
    context_deinit_part_0(param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

