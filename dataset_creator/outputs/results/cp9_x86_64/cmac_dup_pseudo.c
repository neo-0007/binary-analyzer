
void * cmac_dup(undefined8 *param_1)

{
  int iVar1;
  void *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (ptr = (void *)cmac_new(*param_1), ptr != (void *)0x0)) {
    iVar1 = CMAC_CTX_copy(*(CMAC_CTX **)((long)ptr + 8),(CMAC_CTX *)param_1[1]);
    if ((iVar1 != 0) && (iVar1 = ossl_prov_cipher_copy((long)ptr + 0x10,param_1 + 2), iVar1 != 0)) {
      return ptr;
    }
    CMAC_CTX_free(*(CMAC_CTX **)((long)ptr + 8));
    ossl_prov_cipher_reset((long)ptr + 0x10);
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}

