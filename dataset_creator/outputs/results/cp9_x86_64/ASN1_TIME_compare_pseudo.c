
int ASN1_TIME_compare(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ASN1_TIME_diff(&local_18,&local_14,param_2,param_1);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    iVar1 = 1;
    if ((local_18 < 1) && (local_14 < 1)) {
      iVar1 = -(uint)(local_18 != 0 || local_14 != 0);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

