
X509_VERIFY_PARAM * X509_VERIFY_PARAM_lookup(char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *pXVar2;
  long in_FS_OFFSET;
  char *local_88 [15];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = name;
  if (param_table != 0) {
    iVar1 = OPENSSL_sk_find(param_table,local_88);
    if (-1 < iVar1) {
      pXVar2 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(param_table,iVar1);
      goto LAB_00596558;
    }
  }
  pXVar2 = (X509_VERIFY_PARAM *)OBJ_bsearch_(local_88,default_table,5,0x70,table_cmp_BSEARCH_CMP_FN)
  ;
LAB_00596558:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pXVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

