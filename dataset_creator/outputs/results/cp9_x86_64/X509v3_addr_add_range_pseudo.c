
undefined4
X509v3_addr_add_range
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  IPAddressOrRange *local_38;
  long local_30;
  
  iVar4 = 4;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = make_prefix_or_range();
  if (param_2 != 1) {
    iVar4 = (uint)(param_2 == 2) << 4;
  }
  if (lVar3 != 0) {
    iVar1 = range_should_be_prefix(param_4,param_5,iVar4);
    if (iVar1 < 0) {
      iVar4 = make_addressRange_part_0(&local_38,param_4,param_5,iVar4);
    }
    else {
      iVar4 = make_addressPrefix(&local_38,param_4,iVar1);
    }
    if (iVar4 != 0) {
      iVar4 = OPENSSL_sk_push(lVar3,local_38);
      if (iVar4 == 0) {
        IPAddressOrRange_free(local_38);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00605842;
    }
  }
  uVar2 = 0;
LAB_00605842:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

