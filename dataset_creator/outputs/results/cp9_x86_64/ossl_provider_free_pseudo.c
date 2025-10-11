
void ossl_provider_free(byte *param_1)

{
  byte *pbVar1;
  
  if (param_1 == (byte *)0x0) {
    return;
  }
  LOCK();
  pbVar1 = param_1 + 0x10;
  *(int *)pbVar1 = *(int *)pbVar1 + -1;
  UNLOCK();
  if (*(int *)pbVar1 != 0) {
    if ((param_1[200] & 1) == 0) {
      return;
    }
    ossl_provider_free_parent(param_1,0);
    return;
  }
  if ((*param_1 & 1) != 0) {
    ossl_provider_teardown();
    if (*(ERR_STRING_DATA **)(param_1 + 0x68) != (ERR_STRING_DATA *)0x0) {
      ERR_unload_strings(*(int *)(param_1 + 0x60),*(ERR_STRING_DATA **)(param_1 + 0x68));
      CRYPTO_free(*(void **)(param_1 + 0x68));
      param_1[0x68] = 0;
      param_1[0x69] = 0;
      param_1[0x6a] = 0;
      param_1[0x6b] = 0;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
    }
    CRYPTO_free(*(void **)(param_1 + 0xa8));
    *param_1 = *param_1 & 0xfe;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
  }
  ossl_init_thread_deregister(param_1);
  DSO_free(*(DSO **)(param_1 + 0x38));
  CRYPTO_free(*(void **)(param_1 + 0x28));
  CRYPTO_free(*(void **)(param_1 + 0x30));
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x48),infopair_free);
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0xb8));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 8));
  CRYPTO_free(param_1);
  return;
}

