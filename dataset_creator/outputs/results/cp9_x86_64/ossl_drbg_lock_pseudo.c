
undefined8 ossl_drbg_lock(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = CRYPTO_THREAD_write_lock();
    return uVar1;
  }
  return 1;
}

