
/* WARNING: Removing unreachable block (ram,0x00764c00) */

int __fcntl64_nocancel_adjusted(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((int)param_2 == 9) {
    param_2 = 0x10;
    syscall();
    if (local_18 == 2) {
      local_14 = -local_14;
    }
  }
  else {
    local_14 = 0x48;
    syscall();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local(param_1,param_2);
  }
  return local_14;
}

