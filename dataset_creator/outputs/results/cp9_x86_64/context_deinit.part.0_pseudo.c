
void context_deinit_part_0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  ossl_ctx_thread_stop();
  puVar3 = (undefined8 *)param_1[0x37];
  while (puVar3 != (undefined8 *)0x0) {
    (*(code *)*puVar3)(param_1);
    puVar1 = (undefined8 *)puVar3[1];
    CRYPTO_free(puVar3);
    puVar3 = puVar1;
  }
  CRYPTO_free_ex_data(0x10,(void *)0x0,(CRYPTO_EX_DATA *)(param_1 + 1));
  puVar3 = param_1 + 0x20;
  ossl_crypto_cleanup_all_ex_data_int(param_1);
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    CRYPTO_THREAD_lock_free(uVar2);
  } while (puVar3 != param_1 + 0x33);
  CRYPTO_THREAD_lock_free(param_1[0x33]);
  CRYPTO_THREAD_lock_free(*param_1);
  *param_1 = 0;
  return;
}

