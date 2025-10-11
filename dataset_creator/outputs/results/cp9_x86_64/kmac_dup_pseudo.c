
void * kmac_dup(undefined8 *param_1)

{
  size_t __n;
  undefined8 uVar1;
  size_t __n_00;
  int iVar2;
  void *ptr;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (ptr = (void *)kmac_new(*param_1), ptr != (void *)0x0)) {
    iVar2 = EVP_MD_CTX_copy(*(EVP_MD_CTX **)((long)ptr + 8),(EVP_MD_CTX *)param_1[1]);
    if ((iVar2 != 0) && (iVar2 = ossl_prov_digest_copy((long)ptr + 0x10,param_1 + 2), iVar2 != 0)) {
      __n = param_1[7];
      *(undefined8 *)((long)ptr + 0x28) = param_1[5];
      uVar1 = param_1[6];
      *(size_t *)((long)ptr + 0x38) = __n;
      *(undefined8 *)((long)ptr + 0x30) = uVar1;
      __n_00 = param_1[6];
      *(undefined4 *)((long)ptr + 0x40) = *(undefined4 *)(param_1 + 8);
      memcpy((void *)((long)ptr + 0x44),(void *)((long)param_1 + 0x44),__n_00);
      memcpy((void *)((long)ptr + 0x194),(void *)((long)param_1 + 0x194),__n);
      return ptr;
    }
    EVP_MD_CTX_free(*(undefined8 *)((long)ptr + 8));
    ossl_prov_digest_reset((long)ptr + 0x10);
    OPENSSL_cleanse((void *)((long)ptr + 0x44),*(size_t *)((long)ptr + 0x30));
    OPENSSL_cleanse((void *)((long)ptr + 0x194),*(size_t *)((long)ptr + 0x38));
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}

