
long ossl_provider_find(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  bVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar2 == 0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
  }
  else {
    puVar4 = auStack_118;
    for (lVar3 = 0x1c; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    if ((param_3 == 0) && (iVar1 = ossl_lib_ctx_is_default(param_1), iVar1 != 0)) {
      OPENSSL_init_crypto(0x40,0);
    }
    local_f0 = param_2;
    iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar2 + 0x20));
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_find(*(undefined8 *)(lVar2 + 8),auStack_118);
      if (iVar1 == -1) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
      }
      else {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),iVar1);
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar2 + 0x20));
        if ((lVar3 != 0) && (iVar1 = ossl_provider_up_ref(lVar3), iVar1 != 0)) goto LAB_0041f9b6;
      }
    }
    lVar3 = 0;
  }
LAB_0041f9b6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar3;
}

