
undefined8 test_rng_lock(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    uVar1 = CRYPTO_THREAD_write_lock();
    return uVar1;
  }
  return 1;
}

