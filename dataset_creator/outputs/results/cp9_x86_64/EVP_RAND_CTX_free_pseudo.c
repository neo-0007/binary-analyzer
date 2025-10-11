
void EVP_RAND_CTX_free(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  while( true ) {
    LOCK();
    plVar1 = param_1 + 3;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 != 1) && (0 < (int)lVar2 + -1)) break;
    plVar1 = (long *)param_1[2];
    (**(code **)(*param_1 + 0x40))(param_1[1]);
    param_1[1] = 0;
    EVP_RAND_free(*param_1);
    CRYPTO_THREAD_lock_free(param_1[4]);
    CRYPTO_free(param_1);
    param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  return;
}

