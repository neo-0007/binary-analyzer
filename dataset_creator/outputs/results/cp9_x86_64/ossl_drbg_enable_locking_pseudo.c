
undefined4 ossl_drbg_enable_locking(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
    if (((code *)param_1[7] != (code *)0x0) &&
       (iVar1 = (*(code *)param_1[7])(param_1[6]), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x2e9,"ossl_drbg_enable_locking");
      ERR_set_error(0x39,0xb6,0);
      return 0;
    }
    lVar2 = CRYPTO_THREAD_lock_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0x2ee,"ossl_drbg_enable_locking");
      ERR_set_error(0x39,0xb4,0);
      return 0;
    }
  }
  return 1;
}

