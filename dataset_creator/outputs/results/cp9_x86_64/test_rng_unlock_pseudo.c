
void test_rng_unlock(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    CRYPTO_THREAD_unlock();
    return;
  }
  return;
}

