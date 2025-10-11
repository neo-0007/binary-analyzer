
void X509_STORE_lock(long param_1)

{
  CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x98));
  return;
}

