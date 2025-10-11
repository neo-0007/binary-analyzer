
/* WARNING: Removing unreachable block (ram,0x00764b70) */

int __fcntl64_nocancel(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined4 local_60;
  undefined4 local_5c;
  
  if ((int)param_2 == 9) {
    param_2 = 0x10;
    syscall();
    if (local_60 == 2) {
      local_5c = -local_5c;
    }
  }
  else {
    local_5c = 0x48;
    syscall();
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local(param_1,param_2);
  }
  return local_5c;
}

