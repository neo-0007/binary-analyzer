
undefined8 CRYPTO_secure_malloc_done(void)

{
  if (secure_mem_used != 0) {
    return 0;
  }
  sh_done();
  secure_mem_initialized = 0;
  CRYPTO_THREAD_lock_free(sec_malloc_lock);
  sec_malloc_lock = 0;
  return 1;
}

