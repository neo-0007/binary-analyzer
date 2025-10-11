
void pkey_dh_cleanup(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x98);
  if (ptr != (void *)0x0) {
    CRYPTO_free(*(void **)((long)ptr + 0x40));
    ASN1_OBJECT_free(*(ASN1_OBJECT **)((long)ptr + 0x30));
    CRYPTO_free(ptr);
    return;
  }
  return;
}

