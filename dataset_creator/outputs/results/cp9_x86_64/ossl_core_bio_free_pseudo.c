
int ossl_core_bio_free(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  if ((iVar1 != 1) && (0 < iVar1 + -1)) {
    return 1;
  }
  iVar1 = BIO_free(*(BIO **)(param_1 + 4));
  CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 2));
  CRYPTO_free(param_1);
  return iVar1;
}

