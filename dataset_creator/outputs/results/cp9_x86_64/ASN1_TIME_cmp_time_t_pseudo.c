
int ASN1_TIME_cmp_time_t(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_b0 [2];
  int local_a0;
  int local_9c;
  undefined1 local_98 [64];
  undefined1 local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0[0] = param_2;
  iVar1 = ASN1_TIME_to_tm(param_1,local_98);
  if (iVar1 != 0) {
    lVar2 = OPENSSL_gmtime(local_b0,local_58);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_gmtime_diff(&local_a0,&local_9c,local_58,local_98);
      if (iVar1 != 0) {
        iVar1 = 1;
        if ((local_a0 < 1) && (local_9c < 1)) {
          iVar1 = -(uint)(local_a0 != 0 || local_9c != 0);
        }
        goto LAB_005a52b6;
      }
    }
  }
  iVar1 = -2;
LAB_005a52b6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

