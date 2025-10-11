
long X509_STORE_CTX_get1_crls(long *param_1,undefined8 param_2)

{
  X509_CRL *a;
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OPENSSL_sk_new_null();
  lVar4 = X509_OBJECT_new();
  lVar6 = *param_1;
  if (((lVar3 == 0 || lVar4 == 0) || (lVar6 == 0)) ||
     (iVar1 = X509_STORE_CTX_get_by_subject(param_1,2,param_2,lVar4), iVar1 == 0)) {
    X509_OBJECT_free(lVar4);
    lVar6 = 0;
    OPENSSL_sk_free(lVar3);
  }
  else {
    X509_OBJECT_free(lVar4);
    iVar1 = X509_STORE_lock(lVar6);
    if (iVar1 != 0) {
      iVar1 = x509_object_idx_cnt(*(undefined8 *)(lVar6 + 8),2,param_2,&local_44);
      if (-1 < iVar1) {
        iVar5 = 0;
        if (0 < local_44) {
          do {
            lVar4 = OPENSSL_sk_value(*(undefined8 *)(lVar6 + 8),iVar5 + iVar1);
            a = *(X509_CRL **)(lVar4 + 8);
            iVar2 = X509_CRL_up_ref(a);
            if (iVar2 == 0) {
              X509_STORE_unlock(lVar6);
              lVar6 = 0;
              OPENSSL_sk_pop_free(lVar3,X509_CRL_free);
              goto LAB_0058d573;
            }
            iVar2 = OPENSSL_sk_push(lVar3,a);
            if (iVar2 == 0) {
              X509_STORE_unlock(lVar6);
              X509_CRL_free(a);
              lVar6 = 0;
              OPENSSL_sk_pop_free(lVar3,X509_CRL_free);
              goto LAB_0058d573;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < local_44);
        }
        X509_STORE_unlock(lVar6);
        lVar6 = lVar3;
        goto LAB_0058d573;
      }
      X509_STORE_unlock(lVar6);
    }
    lVar6 = 0;
    OPENSSL_sk_free(lVar3);
  }
LAB_0058d573:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar6;
}

