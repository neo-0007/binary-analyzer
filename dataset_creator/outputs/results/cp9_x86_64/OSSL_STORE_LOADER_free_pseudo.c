
void OSSL_STORE_LOADER_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) && (*(long *)((long)param_1 + 0x60) != 0)) {
    LOCK();
    piVar1 = (int *)((long)param_1 + 0x80);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 != 1) && (0 < iVar2 + -1)) {
      return;
    }
    ossl_provider_free(*(undefined8 *)((long)param_1 + 0x60));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x88));
  }
  CRYPTO_free(param_1);
  return;
}

