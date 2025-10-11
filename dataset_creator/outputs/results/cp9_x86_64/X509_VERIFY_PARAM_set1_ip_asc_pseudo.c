
undefined8 X509_VERIFY_PARAM_set1_ip_asc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_a2i_ipadd(auStack_38);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = X509_VERIFY_PARAM_set1_ip(param_1,auStack_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

