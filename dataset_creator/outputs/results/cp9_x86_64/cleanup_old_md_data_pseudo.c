
void cleanup_old_md_data(EVP_MD_CTX *param_1,int param_2)

{
  int iVar1;
  
  if (param_1->engine != (ENGINE *)0x0) {
    if (*(long *)(param_1->engine + 0x40) != 0) {
      iVar1 = EVP_MD_CTX_test_flags(param_1,2);
      if (iVar1 == 0) {
        (**(code **)(param_1->engine + 0x40))(param_1);
      }
    }
    if ((param_1->pctx != (EVP_PKEY_CTX *)0x0) && (0 < *(int *)(param_1->engine + 0x4c))) {
      iVar1 = EVP_MD_CTX_test_flags(param_1,4);
      if ((iVar1 == 0) || (param_2 != 0)) {
        CRYPTO_clear_free(param_1->pctx,(long)*(int *)(param_1->engine + 0x4c),
                          "../crypto/evp/digest.c",0x25);
        param_1->pctx = (EVP_PKEY_CTX *)0x0;
      }
    }
    return;
  }
  return;
}

