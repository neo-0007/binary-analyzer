
char def_crl_lookup(long param_1,undefined8 *param_2,ASN1_INTEGER *param_3,X509_NAME *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ASN1_INTEGER *x;
  int *piVar6;
  X509_NAME *pXVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_78;
  uchar *puStack_70;
  long local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar2 = OPENSSL_sk_is_sorted();
    if (iVar2 == 0) {
      iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xe0));
      if (iVar2 == 0) goto LAB_00598c38;
      OPENSSL_sk_sort(*(undefined8 *)(param_1 + 0x30));
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe0));
    }
    local_78._0_4_ = param_3->length;
    local_78._4_4_ = param_3->type;
    puStack_70 = param_3->data;
    local_68 = param_3->flags;
    iVar2 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 0x30),&local_78);
    if ((-1 < iVar2) && (iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x30)), iVar2 < iVar3)) {
      do {
        x = (ASN1_INTEGER *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x30),iVar2);
        iVar4 = ASN1_INTEGER_cmp(x,param_3);
        if (iVar4 != 0) break;
        lVar8 = x[1].flags;
        if (lVar8 == 0) {
          if (param_4 != (X509_NAME *)0x0) {
            pXVar7 = (X509_NAME *)X509_CRL_get_issuer(param_1);
            iVar4 = X509_NAME_cmp(param_4,pXVar7);
            if (iVar4 != 0) goto LAB_00598d70;
          }
LAB_00598d20:
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = x;
          }
          cVar1 = (x[2].length == 8) + '\x01';
          goto LAB_00598c3a;
        }
        iVar4 = 0;
        pXVar7 = param_4;
        if (param_4 == (X509_NAME *)0x0) {
          pXVar7 = (X509_NAME *)X509_CRL_get_issuer(param_1);
          lVar8 = x[1].flags;
        }
        for (; iVar5 = OPENSSL_sk_num(lVar8), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          piVar6 = (int *)OPENSSL_sk_value(x[1].flags,iVar4);
          if ((*piVar6 == 4) &&
             (iVar5 = X509_NAME_cmp(pXVar7,*(X509_NAME **)(piVar6 + 2)), iVar5 == 0))
          goto LAB_00598d20;
          lVar8 = x[1].flags;
        }
LAB_00598d70:
        iVar2 = iVar2 + 1;
      } while (iVar3 != iVar2);
    }
  }
LAB_00598c38:
  cVar1 = '\0';
LAB_00598c3a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return cVar1;
}

