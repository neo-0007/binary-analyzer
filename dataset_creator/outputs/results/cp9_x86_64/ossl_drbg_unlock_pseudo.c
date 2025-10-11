
void ossl_drbg_unlock(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    CRYPTO_THREAD_unlock();
    return;
  }
  return;
}

