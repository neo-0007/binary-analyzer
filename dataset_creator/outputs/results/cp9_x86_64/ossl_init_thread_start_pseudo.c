
undefined8 ossl_init_thread_start(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  undefined8 *puVar3;
  
  ptr = (undefined8 *)CRYPTO_THREAD_get_local(&destructor_key);
  if (ptr == (undefined8 *)0x0) {
    ptr = (undefined8 *)CRYPTO_zalloc(8,"../crypto/initthread.c",100);
    if (ptr == (undefined8 *)0x0) {
      return 0;
    }
    iVar2 = CRYPTO_THREAD_set_local(&destructor_key,ptr);
    if (iVar2 == 0) {
      CRYPTO_free(ptr);
      return 0;
    }
    iVar2 = CRYPTO_THREAD_run_once(&tevent_register_runonce,create_global_tevent_register_ossl_);
    puVar3 = glob_tevent_reg;
    if ((((iVar2 != 0) && (create_global_tevent_register_ossl_ret_ != 0)) &&
        (glob_tevent_reg != (undefined8 *)0x0)) &&
       (iVar2 = CRYPTO_THREAD_write_lock(glob_tevent_reg[1]), iVar2 != 0)) {
      iVar2 = OPENSSL_sk_push(*puVar3,ptr);
      CRYPTO_THREAD_unlock(puVar3[1]);
      if (iVar2 != 0) goto LAB_00419619;
    }
    CRYPTO_THREAD_set_local(&destructor_key,0);
    CRYPTO_free(ptr);
  }
  else {
LAB_00419619:
    puVar3 = (undefined8 *)CRYPTO_malloc(0x20,"../crypto/initthread.c",0x18b);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_2;
      *puVar3 = param_1;
      uVar1 = *ptr;
      puVar3[2] = param_3;
      puVar3[3] = uVar1;
      *ptr = puVar3;
      return 1;
    }
  }
  return 0;
}

