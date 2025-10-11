
uint if_nametoindex(char *__ifname)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char acStack_48 [16];
  uint local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen(__ifname);
  if (0xf < sVar2) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x13;
    local_38 = 0;
    goto LAB_0076a49a;
  }
  strncpy(acStack_48,__ifname,0x10);
  __fd = __opensock();
  if (-1 < __fd) {
    iVar1 = ioctl(__fd,0x8933,acStack_48);
    if (-1 < iVar1) {
      __close_nocancel(__fd);
      goto LAB_0076a49a;
    }
    iVar1 = *(int *)(in_FS_OFFSET + -0x58);
    __close_nocancel(__fd);
    if (iVar1 == 0x16) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x26;
      local_38 = 0;
      goto LAB_0076a49a;
    }
  }
  local_38 = 0;
LAB_0076a49a:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_38;
}

