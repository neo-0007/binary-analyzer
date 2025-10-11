
void alg_cleanup_by_provider(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *ptr;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 8));
  if (0 < iVar2) {
    iVar2 = iVar2 + -1;
    iVar4 = 0;
    do {
      while( true ) {
        ptr = (long *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 8),iVar2);
        if (*ptr != param_3[1]) break;
        iVar4 = iVar4 + 1;
        (*(code *)ptr[4])(ptr[2]);
        CRYPTO_free(ptr);
        OPENSSL_sk_delete(*(undefined8 *)(param_2 + 8),iVar2);
        bVar5 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar5) goto LAB_0042b868;
      }
      bVar5 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar5);
LAB_0042b868:
    if (iVar4 != 0) {
      lVar1 = *param_3;
      lVar3 = OPENSSL_LH_num_items(*(undefined8 *)(param_2 + 0x10));
      *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) - lVar3;
      OPENSSL_LH_doall(*(undefined8 *)(param_2 + 0x10),impl_cache_free);
      OPENSSL_LH_flush(*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  return;
}

