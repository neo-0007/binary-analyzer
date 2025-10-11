
undefined8
ossl_crypto_alloc_ex_data_intern
          (undefined4 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_ex_data_global(*param_3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)get_and_lock(puVar1,param_1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)OPENSSL_sk_value(*puVar2,param_4);
      CRYPTO_THREAD_unlock(*puVar1);
      if ((code *)puVar2[3] != (code *)0x0) {
        (*(code *)puVar2[3])(param_2,0,param_3,param_4,*puVar2,puVar2[1]);
        return 1;
      }
    }
  }
  return 0;
}

