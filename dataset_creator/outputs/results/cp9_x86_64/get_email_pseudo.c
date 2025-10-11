
undefined8 get_email(X509_NAME *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar3;
  int *piVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  iVar1 = -1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  do {
    iVar1 = X509_NAME_get_index_by_NID(param_1,0x30,iVar1);
    if (iVar1 < 0) {
      iVar1 = 0;
      goto LAB_00589eb3;
    }
    ne = X509_NAME_get_entry(param_1,iVar1);
    pAVar3 = X509_NAME_ENTRY_get_data(ne);
    iVar2 = append_ia5(&local_38,pAVar3);
  } while (iVar2 != 0);
LAB_00589ede:
  uVar5 = 0;
LAB_00589ee0:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
LAB_00589eb3:
  iVar2 = OPENSSL_sk_num(param_2);
  uVar5 = local_38;
  if (iVar2 <= iVar1) goto LAB_00589ee0;
  piVar4 = (int *)OPENSSL_sk_value(param_2,iVar1);
  if ((*piVar4 == 1) && (iVar2 = append_ia5(&local_38,*(undefined8 *)(piVar4 + 2)), iVar2 == 0))
  goto LAB_00589ede;
  iVar1 = iVar1 + 1;
  goto LAB_00589eb3;
}

