
void rsa_freectx_part_0(long param_1)

{
  int iVar1;
  void *ptr;
  
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x28));
  EVP_MD_free(*(undefined8 *)(param_1 + 0x20));
  EVP_MD_free(*(undefined8 *)(param_1 + 0x70));
  CRYPTO_free(*(void **)(param_1 + 8));
  ptr = *(void **)(param_1 + 0xb8);
  if (ptr != (void *)0x0) {
    iVar1 = RSA_size(*(RSA **)(param_1 + 0x10));
    OPENSSL_cleanse(*(void **)(param_1 + 0xb8),(long)iVar1);
    ptr = *(void **)(param_1 + 0xb8);
  }
  CRYPTO_free(ptr);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  RSA_free(*(RSA **)(param_1 + 0x10));
  CRYPTO_clear_free(param_1,0xc0,"../providers/implementations/signature/rsa_sig.c",0x3d1);
  return;
}

