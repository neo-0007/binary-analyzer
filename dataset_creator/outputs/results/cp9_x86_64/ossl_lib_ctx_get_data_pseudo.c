
void * ossl_lib_ctx_get_data(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)param_2;
  puVar3 = (undefined8 *)ossl_lib_ctx_get_concrete();
  if ((puVar3 != (undefined8 *)0x0) && (iVar1 = CRYPTO_THREAD_read_lock(*puVar3), iVar1 != 0)) {
    iVar1 = *(int *)((long)puVar3 + lVar6 * 4 + 0xb0);
    CRYPTO_THREAD_unlock(*puVar3);
    if (iVar1 == -1) {
      lVar5 = lVar6 + 0x20;
      iVar1 = CRYPTO_THREAD_write_lock(puVar3[lVar5]);
      if (iVar1 != 0) {
        iVar1 = CRYPTO_THREAD_write_lock(*puVar3);
        if (iVar1 == 0) {
          CRYPTO_THREAD_unlock(puVar3[lVar5]);
          return (void *)0x0;
        }
        iVar1 = *(int *)((long)puVar3 + lVar6 * 4 + 0xb0);
        if (iVar1 == -1) {
          lVar5 = ossl_lib_ctx_get_concrete(puVar3);
          if ((lVar5 != 0) &&
             (iVar1 = ossl_crypto_get_ex_new_index_ex
                                (lVar5,0x10,0,param_3,ossl_lib_ctx_generic_new,0), -1 < iVar1)) {
            *(int *)(lVar5 + 0xb0 + lVar6 * 4) = iVar1;
            CRYPTO_THREAD_unlock(*puVar3);
            iVar1 = ossl_crypto_alloc_ex_data_intern
                              (0x10,0,(CRYPTO_EX_DATA *)(puVar3 + 1),
                               *(undefined4 *)((long)puVar3 + lVar6 * 4 + 0xb0));
            if ((iVar1 == 0) || (iVar1 = CRYPTO_THREAD_read_lock(*puVar3), iVar1 == 0)) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(puVar3 + 1),
                                          *(int *)((long)puVar3 + lVar6 * 4 + 0xb0));
              CRYPTO_THREAD_unlock(*puVar3);
            }
            CRYPTO_THREAD_unlock(puVar3[lVar6 + 0x20]);
            return pvVar4;
          }
          CRYPTO_THREAD_unlock(*puVar3);
          CRYPTO_THREAD_unlock(puVar3[lVar6 + 0x20]);
          return (void *)0x0;
        }
        pvVar4 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(puVar3 + 1),iVar1);
        CRYPTO_THREAD_unlock(*puVar3);
        CRYPTO_THREAD_unlock(puVar3[lVar5]);
        return pvVar4;
      }
    }
    else {
      lVar6 = lVar6 + 0x20;
      iVar2 = CRYPTO_THREAD_read_lock(puVar3[lVar6]);
      if (iVar2 != 0) {
        iVar2 = CRYPTO_THREAD_read_lock(*puVar3);
        if (iVar2 != 0) {
          pvVar4 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(puVar3 + 1),iVar1);
          CRYPTO_THREAD_unlock(*puVar3);
          CRYPTO_THREAD_unlock(puVar3[lVar6]);
          return pvVar4;
        }
        CRYPTO_THREAD_unlock(puVar3[lVar6]);
      }
    }
  }
  return (void *)0x0;
}

