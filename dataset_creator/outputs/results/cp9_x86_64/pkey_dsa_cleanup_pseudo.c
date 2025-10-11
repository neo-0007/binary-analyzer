
void pkey_dsa_cleanup(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x98));
  return;
}

