
void OSSL_DECODER_free(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free((void *)param_1[2]);
  ossl_property_free(param_1[4]);
  ossl_provider_free(*param_1);
  CRYPTO_THREAD_lock_free(param_1[6]);
  CRYPTO_free(param_1);
  return;
}

