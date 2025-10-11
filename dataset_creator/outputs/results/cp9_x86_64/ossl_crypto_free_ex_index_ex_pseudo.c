
undefined8 ossl_crypto_free_ex_index_ex(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)ossl_lib_ctx_get_ex_data_global();
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar3 = (undefined8 *)get_and_lock(puVar2,param_2);
  if (puVar3 != (undefined8 *)0x0) {
    if (((param_3 < 0) || (iVar1 = OPENSSL_sk_num(*puVar3), iVar1 <= param_3)) ||
       (lVar4 = OPENSSL_sk_value(*puVar3,param_3), lVar4 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
      *(code **)(lVar4 + 0x18) = dummy_new;
      *(code **)(lVar4 + 0x28) = dummy_dup;
      *(code **)(lVar4 + 0x20) = dummy_free;
    }
    CRYPTO_THREAD_unlock(*puVar2);
    return uVar5;
  }
  return 0;
}

