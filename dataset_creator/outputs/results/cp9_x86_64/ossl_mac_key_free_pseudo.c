
void ossl_mac_key_free(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_secure_clear_free
            (param_1[3],param_1[4],"../providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x62);
  CRYPTO_free((void *)param_1[8]);
  ossl_prov_cipher_reset(param_1 + 5);
  CRYPTO_THREAD_lock_free(*param_1);
  CRYPTO_free(param_1);
  return;
}

