
void init_thread_remove_handlers(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar2 = CRYPTO_THREAD_run_once(&tevent_register_runonce,create_global_tevent_register_ossl_);
  puVar1 = glob_tevent_reg;
  if (((iVar2 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) &&
     (glob_tevent_reg != (undefined8 *)0x0)) {
    iVar4 = 0;
    iVar2 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]);
    if (iVar2 != 0) {
      while( true ) {
        iVar2 = OPENSSL_sk_num(*puVar1);
        if (iVar2 <= iVar4) {
          CRYPTO_THREAD_unlock(puVar1[1]);
          return;
        }
        lVar3 = OPENSSL_sk_value(*puVar1,iVar4);
        if (param_1 == lVar3) break;
        iVar4 = iVar4 + 1;
      }
      OPENSSL_sk_delete(*puVar1,iVar4);
      CRYPTO_THREAD_unlock(puVar1[1]);
      return;
    }
  }
  return;
}

