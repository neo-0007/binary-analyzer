
void EC_nistp256_pre_comp_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0xc00);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0xc08));
  CRYPTO_free(param_1);
  return;
}

