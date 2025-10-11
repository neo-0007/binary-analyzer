
void pkey_rsa_cleanup(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x98);
  if (ptr != (void *)0x0) {
    BN_free(*(BIGNUM **)((long)ptr + 8));
    CRYPTO_free(*(void **)((long)ptr + 0x38));
    CRYPTO_free(*(void **)((long)ptr + 0x40));
    CRYPTO_free(ptr);
    return;
  }
  return;
}

