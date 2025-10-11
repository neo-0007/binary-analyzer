
pthread_rwlock_t * CRYPTO_THREAD_lock_new(void)

{
  int iVar1;
  pthread_rwlock_t *__rwlock;
  pthread_rwlock_t *ppVar2;
  
  __rwlock = (pthread_rwlock_t *)CRYPTO_zalloc(0x38,"../crypto/threads_pthread.c",0x26);
  ppVar2 = __rwlock;
  if (__rwlock != (pthread_rwlock_t *)0x0) {
    iVar1 = pthread_rwlock_init(__rwlock,(pthread_rwlockattr_t *)0x0);
    if (iVar1 != 0) {
      ppVar2 = (pthread_rwlock_t *)0x0;
      CRYPTO_free(__rwlock);
    }
  }
  return ppVar2;
}

