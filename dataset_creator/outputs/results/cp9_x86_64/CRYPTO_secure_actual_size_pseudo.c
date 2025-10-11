
undefined8 CRYPTO_secure_actual_size(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = CRYPTO_THREAD_write_lock(sec_malloc_lock);
  if (iVar1 != 0) {
    uVar2 = sh_actual_size(param_1);
    CRYPTO_THREAD_unlock(sec_malloc_lock);
  }
  return uVar2;
}

