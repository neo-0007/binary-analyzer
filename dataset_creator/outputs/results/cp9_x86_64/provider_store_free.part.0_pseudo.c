
void provider_store_free_part_0(void *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(byte *)((long)param_1 + 0x48) = *(byte *)((long)param_1 + 0x48) | 2;
  CRYPTO_free(*(void **)((long)param_1 + 0x28));
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 8),provider_deactivate_free);
  OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x10),ossl_provider_child_cb_free);
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x18));
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x20));
  if (*(long *)((long)param_1 + 0x38) != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1;
      ossl_provider_info_clear(*(long *)((long)param_1 + 0x30) + uVar1 * 0x28);
      uVar1 = uVar2;
    } while (uVar2 < *(ulong *)((long)param_1 + 0x38));
  }
  CRYPTO_free(*(void **)((long)param_1 + 0x30));
  CRYPTO_free(param_1);
  return;
}

