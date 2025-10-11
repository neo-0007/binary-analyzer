
undefined8
OPENSSL_gmtime_diff(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = julian_adj(param_3,0,0,&local_30,&local_38);
  if (iVar1 != 0) {
    iVar1 = julian_adj(param_4,0,0,&local_28,&local_34);
    if (iVar1 != 0) {
      local_28 = local_28 - local_30;
      local_34 = local_34 - local_38;
      if ((local_28 < 1) || (-1 < local_34)) {
        if ((local_28 < 0) && (0 < local_34)) {
          local_28 = local_28 + 1;
          local_34 = local_34 + -0x15180;
        }
      }
      else {
        local_28 = local_28 + -1;
        local_34 = local_34 + 0x15180;
      }
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = (int)local_28;
      }
      uVar2 = 1;
      if (param_2 != (int *)0x0) {
        *param_2 = local_34;
      }
      goto LAB_005f9bbf;
    }
  }
  uVar2 = 0;
LAB_005f9bbf:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

