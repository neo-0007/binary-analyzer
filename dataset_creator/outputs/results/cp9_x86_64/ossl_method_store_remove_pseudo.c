
undefined8 ossl_method_store_remove(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  void *ptr;
  
  if (((param_3 != 0 && param_1 != 0) && (0 < param_2)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10)), iVar1 != 0)) {
    lVar3 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      lVar4 = OPENSSL_LH_num_items(*(undefined8 *)(lVar3 + 0x10));
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) - lVar4;
      OPENSSL_LH_doall(*(undefined8 *)(lVar3 + 0x10),impl_cache_free);
      OPENSSL_LH_flush(*(undefined8 *)(lVar3 + 0x10));
    }
    iVar1 = 0;
    lVar3 = ossl_sa_get(*(undefined8 *)(param_1 + 8),(long)param_2);
    if (lVar3 != 0) {
      for (; iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar3 + 8)), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        ptr = (void *)OPENSSL_sk_value(*(undefined8 *)(lVar3 + 8),iVar1);
        if (param_3 == *(long *)((long)ptr + 0x10)) {
          (**(code **)((long)ptr + 0x20))(param_3);
          CRYPTO_free(ptr);
          OPENSSL_sk_delete(*(undefined8 *)(lVar3 + 8),iVar1);
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
          return 1;
        }
      }
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  }
  return 0;
}

