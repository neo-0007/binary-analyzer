
void async_fibre_free(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}

