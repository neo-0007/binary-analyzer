
stack_st_X509_ATTRIBUTE * ossl_x509at_dup(undefined8 param_1)

{
  int iVar1;
  X509_ATTRIBUTE *attr;
  stack_st_X509_ATTRIBUTE *psVar2;
  int iVar3;
  long in_FS_OFFSET;
  stack_st_X509_ATTRIBUTE *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (stack_st_X509_ATTRIBUTE *)0x0;
  iVar1 = OPENSSL_sk_num();
  psVar2 = local_38;
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      attr = (X509_ATTRIBUTE *)OPENSSL_sk_value(param_1,iVar3);
      psVar2 = X509at_add1_attr(&local_38,attr);
      if (psVar2 == (stack_st_X509_ATTRIBUTE *)0x0) {
        OPENSSL_sk_pop_free(local_38,X509_ATTRIBUTE_free);
        psVar2 = (stack_st_X509_ATTRIBUTE *)0x0;
        break;
      }
      iVar3 = iVar3 + 1;
      psVar2 = local_38;
    } while (iVar1 != iVar3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return psVar2;
}

