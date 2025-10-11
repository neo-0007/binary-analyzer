
int NAME_CONSTRAINTS_check(X509 *x,NAME_CONSTRAINTS *nc)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  X509_NAME *name;
  undefined8 uVar5;
  X509_NAME_ENTRY *ne;
  int iVar6;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  X509_NAME *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  name = X509_get_subject_name(x);
  iVar1 = OPENSSL_sk_num(x[1].ex_kusage);
  iVar2 = X509_NAME_entry_count(name);
  iVar6 = 0;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (iVar6 <= 0x7fffffff - iVar1) {
    iVar3 = OPENSSL_sk_num(nc->excludedSubtrees);
    iVar4 = OPENSSL_sk_num(nc->permittedSubtrees);
    iVar2 = 0;
    if (-1 < iVar4) {
      iVar2 = iVar4;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if ((iVar2 <= 0x7fffffff - iVar3) &&
       ((iVar6 + iVar1 == 0 || (iVar2 + iVar3 <= (int)(0x100000 / (long)(iVar6 + iVar1)))))) {
      iVar1 = X509_NAME_entry_count(name);
      if (iVar1 < 1) {
LAB_0060d395:
        for (iVar6 = 0; iVar1 = OPENSSL_sk_num(x[1].ex_kusage), iVar6 < iVar1; iVar6 = iVar6 + 1) {
          uVar5 = OPENSSL_sk_value(x[1].ex_kusage,iVar6);
          iVar1 = nc_match(uVar5,nc);
          if (iVar1 != 0) goto LAB_0060d3e5;
        }
        iVar1 = 0;
      }
      else {
        local_58[0] = 4;
        local_50 = name;
        iVar1 = nc_match(local_58,nc);
        if (iVar1 == 0) {
          local_58[0] = 1;
          iVar6 = -1;
          do {
            iVar6 = X509_NAME_get_index_by_NID(name,0x30,iVar6);
            if (iVar6 == -1) goto LAB_0060d395;
            ne = X509_NAME_get_entry(name,iVar6);
            local_50 = (X509_NAME *)X509_NAME_ENTRY_get_data(ne);
            if (*(int *)((long)&local_50->entries + 4) != 0x16) {
              iVar1 = 0x35;
              break;
            }
            iVar1 = nc_match(local_58,nc);
          } while (iVar1 == 0);
        }
      }
      goto LAB_0060d3e5;
    }
  }
  iVar1 = 1;
LAB_0060d3e5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

