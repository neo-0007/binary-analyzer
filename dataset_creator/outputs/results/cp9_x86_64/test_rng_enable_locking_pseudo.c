
bool test_rng_enable_locking(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) == 0)) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)(param_1 + 0x40) = lVar1;
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/test_rng.c",0xf9,"test_rng_enable_locking");
      ERR_set_error(0x39,0x7e,0);
    }
    return lVar1 != 0;
  }
  return true;
}

