
int init_thread_deregister(long param_1,int param_2)

{
  undefined8 *ptr;
  int iVar1;
  long *ptr_00;
  long *plVar2;
  long *ptr_01;
  long *plVar3;
  int local_44;
  
  iVar1 = CRYPTO_THREAD_run_once(&tevent_register_runonce,create_global_tevent_register_ossl_);
  ptr = glob_tevent_reg;
  if (((iVar1 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) &&
     (glob_tevent_reg != (undefined8 *)0x0)) {
    if (param_2 == 0) {
      iVar1 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      glob_tevent_reg = (undefined8 *)0x0;
    }
    local_44 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(*ptr);
      if (iVar1 <= local_44) {
        if (param_2 != 0) {
          CRYPTO_THREAD_lock_free();
          OPENSSL_sk_free(*ptr);
          CRYPTO_free(ptr);
          return param_2;
        }
        CRYPTO_THREAD_unlock(ptr[1]);
        return 1;
      }
      ptr_00 = (long *)OPENSSL_sk_value(*ptr,local_44);
      if (ptr_00 == (long *)0x0) break;
      plVar2 = (long *)*ptr_00;
      plVar3 = (long *)0x0;
      while (plVar2 != (long *)0x0) {
        while ((ptr_01 = plVar2, plVar2 = (long *)ptr_01[3], param_2 == 0 && (*ptr_01 != param_1)))
        {
          plVar3 = ptr_01;
          if (plVar2 == (long *)0x0) goto LAB_004193bb;
        }
        if (plVar3 == (long *)0x0) {
          *ptr_00 = (long)plVar2;
        }
        else {
          plVar3[3] = (long)plVar2;
        }
        plVar2 = (long *)ptr_01[3];
        CRYPTO_free(ptr_01);
      }
LAB_004193bb:
      if (param_2 != 0) {
        CRYPTO_free(ptr_00);
      }
      local_44 = local_44 + 1;
    }
    if (param_2 == 0) {
      CRYPTO_THREAD_unlock(ptr[1]);
    }
  }
  return 0;
}

