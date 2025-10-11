
undefined8 err_shelve_state(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = OPENSSL_init_crypto(0x40000,0);
  if (iVar2 != 0) {
    iVar2 = CRYPTO_THREAD_run_once(&err_init,err_do_init_ossl_);
    if ((iVar2 != 0) && (err_do_init_ossl_ret_ != 0)) {
      uVar4 = CRYPTO_THREAD_get_local(&err_thread_local);
      *param_1 = uVar4;
      iVar2 = CRYPTO_THREAD_set_local(&err_thread_local,0xffffffffffffffff);
      if (iVar2 != 0) {
        *piVar3 = iVar1;
        return 1;
      }
    }
  }
  return 0;
}

