
undefined8 ossl_provider_add_to_store(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 auStack_118 [5];
  undefined8 local_f0;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = auStack_118;
  for (lVar5 = 0x1c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  lVar5 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    uVar3 = 0;
    goto LAB_0041fe0a;
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar5 + 0x20));
  if (iVar1 != 0) {
    local_f0 = *(undefined8 *)(param_1 + 0x28);
    iVar1 = OPENSSL_sk_find(*(undefined8 *)(lVar5 + 8),auStack_118);
    if (iVar1 == -1) {
      iVar2 = OPENSSL_sk_push(*(undefined8 *)(lVar5 + 8),param_1);
      if (iVar2 != 0) {
        *(long *)(param_1 + 0x58) = lVar5;
        iVar2 = create_provider_children(param_1);
        if (iVar2 != 0) {
          if (param_3 == 0) {
            *(byte *)(lVar5 + 0x48) = *(byte *)(lVar5 + 0x48) & 0xfe;
          }
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
          lVar4 = param_1;
          if (param_2 != (long *)0x0) goto LAB_0041fea0;
          goto LAB_0041feb9;
        }
        OPENSSL_sk_delete_ptr(*(undefined8 *)(lVar5 + 8),param_1);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
      if (param_2 == (long *)0x0) goto LAB_0041fe08;
    }
    else {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 8),iVar1);
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
      if (param_2 == (long *)0x0) {
joined_r0x0041fee3:
        if (-1 < iVar1) {
          ossl_provider_deactivate(param_1,0);
          ossl_provider_free(param_1);
        }
LAB_0041feb9:
        uVar3 = 1;
        goto LAB_0041fe0a;
      }
LAB_0041fea0:
      iVar2 = ossl_provider_up_ref(lVar4);
      if (iVar2 != 0) {
        *param_2 = lVar4;
        goto joined_r0x0041fee3;
      }
      ERR_new();
      ERR_set_debug("../crypto/provider_core.c",0x281,"ossl_provider_add_to_store");
      ERR_set_error(0xf,0xc0100,0);
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
    }
    ossl_provider_free(*param_2);
  }
LAB_0041fe08:
  uVar3 = 0;
LAB_0041fe0a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

