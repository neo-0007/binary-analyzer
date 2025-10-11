
void ossl_ecx_key_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 100);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_secure_clear_free
            (*(undefined8 *)((long)param_1 + 0x50),*(undefined8 *)((long)param_1 + 0x58),
             "../crypto/ec/ecx_key.c",0x47);
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x68));
  CRYPTO_free(param_1);
  return;
}

