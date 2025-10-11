
ulong __libc_ns_samename(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  char acStack_838 [1040];
  char local_428 [1032];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __libc_ns_makecanon(param_1,acStack_838,0x401);
  if (-1 < iVar1) {
    iVar1 = __libc_ns_makecanon(param_2,local_428,0x401);
    if (-1 < iVar1) {
      iVar1 = strcasecmp(acStack_838,local_428);
      uVar2 = (ulong)(iVar1 == 0);
      goto LAB_007beea5;
    }
  }
  uVar2 = 0xffffffff;
LAB_007beea5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

