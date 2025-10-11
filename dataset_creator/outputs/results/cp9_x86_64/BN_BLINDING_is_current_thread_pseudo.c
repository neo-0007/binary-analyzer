
void BN_BLINDING_is_current_thread(long param_1)

{
  undefined8 uVar1;
  pthread_t pVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  pVar2 = CRYPTO_THREAD_get_current_id();
  CRYPTO_THREAD_compare_id(pVar2,uVar1);
  return;
}

