
void BN_BLINDING_lock(long param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x48));
  return;
}

