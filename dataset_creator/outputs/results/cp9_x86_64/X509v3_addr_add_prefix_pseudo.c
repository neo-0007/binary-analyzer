
undefined4 X509v3_addr_add_prefix(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 in_RCX;
  undefined4 in_R8D;
  long in_FS_OFFSET;
  IPAddressOrRange *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = make_prefix_or_range();
  if (lVar3 != 0) {
    iVar1 = make_addressPrefix(&local_28,in_RCX,in_R8D);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(lVar3,local_28);
      if (iVar1 == 0) {
        IPAddressOrRange_free(local_28);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00605746;
    }
  }
  uVar2 = 0;
LAB_00605746:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

