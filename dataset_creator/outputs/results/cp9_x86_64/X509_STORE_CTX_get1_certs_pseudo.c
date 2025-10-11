
undefined8 X509_STORE_CTX_get1_certs(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 != 0) {
    iVar2 = X509_STORE_lock(lVar1);
    if (iVar2 != 0) {
      iVar2 = x509_object_idx_cnt(*(undefined8 *)(lVar1 + 8),1,param_2,&local_44);
      if (-1 < iVar2) {
LAB_0058d314:
        uVar4 = OPENSSL_sk_new_null();
        if (0 < local_44) {
          iVar6 = 0;
          do {
            lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 8),iVar6 + iVar2);
            iVar3 = X509_add_cert(uVar4,*(undefined8 *)(lVar5 + 8),1);
            if (iVar3 == 0) {
              X509_STORE_unlock(lVar1);
              OPENSSL_sk_pop_free(uVar4,X509_free);
              uVar4 = 0;
              goto LAB_0058d3f3;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_44);
        }
        X509_STORE_unlock(lVar1);
        goto LAB_0058d3f3;
      }
      lVar5 = X509_OBJECT_new();
      X509_STORE_unlock(lVar1);
      if (lVar5 != 0) {
        iVar2 = X509_STORE_CTX_get_by_subject(param_1,1,param_2,lVar5);
        if (iVar2 == 0) {
          X509_OBJECT_free(lVar5);
          uVar4 = 0;
          goto LAB_0058d3f3;
        }
        X509_OBJECT_free(lVar5);
        iVar2 = X509_STORE_lock(lVar1);
        if (iVar2 != 0) {
          iVar2 = x509_object_idx_cnt(*(undefined8 *)(lVar1 + 8),1,param_2,&local_44);
          if (-1 < iVar2) goto LAB_0058d314;
          X509_STORE_unlock(lVar1);
        }
      }
    }
  }
  uVar4 = 0;
LAB_0058d3f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

