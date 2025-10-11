
void create_global_tevent_register_ossl_(void)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)CRYPTO_zalloc(0x10,"../crypto/initthread.c",0x3b);
  uVar2 = 0;
  glob_tevent_reg = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar4 = OPENSSL_sk_new_null();
    *plVar3 = lVar4;
    plVar3 = glob_tevent_reg;
    lVar4 = CRYPTO_THREAD_lock_new();
    plVar1 = glob_tevent_reg;
    plVar3[1] = lVar4;
    if ((*plVar1 == 0) || (uVar2 = 1, plVar1[1] == 0)) {
      OPENSSL_sk_free();
      CRYPTO_THREAD_lock_free(glob_tevent_reg[1]);
      CRYPTO_free(glob_tevent_reg);
      glob_tevent_reg = (long *)0x0;
      create_global_tevent_register_ossl_ret_ = 0;
      return;
    }
  }
  create_global_tevent_register_ossl_ret_ = uVar2;
  return;
}

