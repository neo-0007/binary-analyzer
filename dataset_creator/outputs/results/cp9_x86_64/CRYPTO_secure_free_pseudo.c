
void CRYPTO_secure_free(void *param_1)

{
  int iVar1;
  size_t len;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  iVar1 = CRYPTO_secure_allocated();
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
    if (iVar1 != 0) {
      len = sh_actual_size(param_1);
      OPENSSL_cleanse(param_1,len);
      secure_mem_used = secure_mem_used - len;
      sh_free(param_1);
      CRYPTO_THREAD_unlock(sec_malloc_lock);
      return;
    }
    return;
  }
  CRYPTO_free(param_1);
  return;
}

